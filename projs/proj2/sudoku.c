#include <omp.h>
#include <pthread.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sudoku[9][9] = {
    { 6, 3, 9, 8, 4, 1, 2, 7, 5 },
    { 7, 2, 4, 9, 5, 3, 1, 6, 8 },
    { 1, 8, 5, 7, 2, 6, 3, 9, 4 },
    { 2, 5, 6, 1, 3, 7, 4, 8, 9 },
    { 4, 9, 1, 5, 8, 2, 6, 3, 7 },
    { 8, 7, 3, 4, 6, 9, 5, 2, 1 },
    { 5, 4, 2, 3, 9, 8, 7, 1, 6 },
    { 3, 1, 8, 6, 7, 5, 9, 4, 2 },
    { 9, 6, 7, 2, 1, 4, 8, 5, 3 }
};
typedef struct {
    int k;
} subgrid_args;
bool valid[3][9];

void* check_rows(void* arg)
{
    for (int i = 0; i < 9; i++) {
        int check_row[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        for (int j = 0; j < 9; j++) {
            check_row[sudoku[i][j] - 1] += 1;
        }
        bool is_valid = true;
        for (int i = 0; i < 9; i++) {
            if (check_row[i] > 1) {
                is_valid = false;
                break;
            }
        }
        valid[0][i] = is_valid;
    }
    pthread_exit(NULL);
}

void* check_columns(void* arg)
{
    for (int i = 0; i < 9; i++) {
        int check_col[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        for (int j = 0; j < 9; j++) {
            check_col[sudoku[j][i] - 1] += 1;
        }
        bool is_valid = true;
        for (int i = 0; i < 9; i++) {
            if (check_col[i] > 1) {
                is_valid = false;
                break;
            }
        }
        valid[1][i] = is_valid;
    }
    pthread_exit(NULL);
}

void* check_subgrid(void* arg)
{

    subgrid_args* args = (subgrid_args*)arg;
    int k = args->k;
    int start_i = k / 3 * 3;
    int start_j = k % 3 * 3;
    int check_table[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    bool is_not_valid = false;

    for (int i = start_i; i < start_i + 3; i++) {
        if (is_not_valid == true)
            break;

        for (int j = start_j; j < start_j + 3; j++) {
            check_table[sudoku[i][j] - 1] += 1;
            if (check_table[sudoku[i][j] - 1] > 1) {
                is_not_valid = true;
                break;
            }
        }
    }
    valid[2][k] = !is_not_valid;
    free(args);
    pthread_exit(NULL);
}

void check_sudoku(void)
{
    int i, j;

    for (i = 0; i < 9; ++i) {
        for (j = 0; j < 9; ++j)
            printf("%2d", sudoku[i][j]);
        printf("\n");
    }
    printf("---\n");
    pthread_t rows_tid;
    if (pthread_create(&rows_tid, NULL, check_rows, NULL) != 0) {
        fprintf(stderr, "pthread_create error: check_rows\n");
        return;
    }
    pthread_t columns_tid;
    if (pthread_create(&columns_tid, NULL, check_columns, NULL) != 0) {
        fprintf(stderr, "pthread_create error: check_columns\n");
        return;
    }
    pthread_t subgrid_tid[9];
    for (int k = 0; k < 9; k++) {
        subgrid_args* args = malloc(sizeof(subgrid_args));
        args->k = k;
        if (pthread_create(&subgrid_tid[k], NULL, check_subgrid, (void*)args) != 0) {
            fprintf(stderr, "pthread_create error: check_subgrid\n");
            return;
        }
    }

    pthread_join(rows_tid, NULL);
    pthread_join(columns_tid, NULL);
    for (int k = 0; k < 9; k++) {
        pthread_join(subgrid_tid[k], NULL);
    }

    printf("ROWS: ");
    for (i = 0; i < 9; ++i)
        printf(valid[0][i] ? "(%d,YES)" : "(%d,NO)", i);
    printf("\n");
    printf("COLS: ");
    for (i = 0; i < 9; ++i)
        printf(valid[1][i] ? "(%d,YES)" : "(%d,NO)", i);
    printf("\n");
    printf("GRID: ");
    for (i = 0; i < 9; ++i)
        printf(valid[2][i] ? "(%d,YES)" : "(%d,NO)", i);
    printf("\n---\n");
}
bool alive = true;
void* shuffle_sudoku(void* arg)
{
    int tmp;
    int grid;
    int row1, row2;
    int col1, col2;

    srand(time(NULL));
    while (alive) {
        grid = rand() % 9;
        row1 = row2 = (grid / 3) * 3;
        col1 = col2 = (grid % 3) * 3;
        row1 += rand() % 3;
        col1 += rand() % 3;
        row2 += rand() % 3;
        col2 += rand() % 3;
        tmp = sudoku[row1][col1];
        sudoku[row1][col1] = sudoku[row2][col2];
        sudoku[row2][col2] = tmp;
    }
    pthread_exit(NULL);
}

int main(void)
{
    int i, tmp;
    pthread_t tid;
    struct timespec req;

    printf("********** BASIC TEST **********\n");
    check_sudoku();
    for (i = 0; i < 9; ++i)
        if (valid[0][i] == false || valid[1][i] == false || valid[2][i] == false) {
            printf("ERROR: 스도쿠 검증오류!\n");
            return 1;
        }
    tmp = sudoku[0][0];
    sudoku[0][0] = sudoku[1][1];
    sudoku[1][1] = tmp;
    tmp = sudoku[5][3];
    sudoku[5][3] = sudoku[4][5];
    sudoku[4][5] = tmp;
    tmp = sudoku[7][7];
    sudoku[7][7] = sudoku[8][8];
    sudoku[8][8] = tmp;
    check_sudoku();
    for (i = 0; i < 9; ++i)
        if ((i == 2 || i == 3 || i == 6) && valid[0][i] == false) {
            printf("ERROR: 행 검증오류!\n");
            return 1;
        } else if ((i != 2 && i != 3 && i != 6) && valid[0][i] == true) {
            printf("ERROR: 행 검증오류!\n");
            return 1;
        }
    for (i = 0; i < 9; ++i)
        if ((i == 2 || i == 4 || i == 6) && valid[1][i] == false) {
            printf("ERROR: 열 검증오류!\n");
            return 1;
        } else if ((i != 2 && i != 4 && i != 6) && valid[1][i] == true) {
            printf("ERROR: 열 검증오류!\n");
            return 1;
        }
    for (i = 0; i < 9; ++i)
        if (valid[2][i] == false) {
            printf("ERROR: 부분격자 검증오류!\n");
            return 1;
        }

    printf("********** RANDOM TEST **********\n");
    tmp = sudoku[0][0];
    sudoku[0][0] = sudoku[1][1];
    sudoku[1][1] = tmp;
    tmp = sudoku[5][3];
    sudoku[5][3] = sudoku[4][5];
    sudoku[4][5] = tmp;
    tmp = sudoku[7][7];
    sudoku[7][7] = sudoku[8][8];
    sudoku[8][8] = tmp;
    if (pthread_create(&tid, NULL, shuffle_sudoku, NULL) != 0) {
        fprintf(stderr, "pthread_create error: shuffle_sudoku\n");
        return -1;
    }
    req.tv_sec = 0;
    req.tv_nsec = 1000;
    for (i = 0; i < 5; ++i) {
        check_sudoku();
        nanosleep(&req, NULL);
    }
    alive = 0;
    pthread_join(tid, NULL);
    check_sudoku();
    for (i = 0; i < 9; ++i)
        if (valid[0][i] == true)
            printf("빙고! %d번 행이 맞았습니다.\n", i);
    for (i = 0; i < 9; ++i)
        if (valid[1][i] == true)
            printf("빙고! %d번 열이 맞았습니다.\n", i);
    for (i = 0; i < 9; ++i)
        if (valid[2][i] == false) {
            printf("ERROR: 부분격자 검증오류!\n");
            return 1;
        }

    return 0;
}
