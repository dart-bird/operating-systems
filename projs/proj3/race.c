#include <stdio.h>

#define N 16

int main(void)
{
    int x;

    x = 0;
#pragma omp parallel num_threads(N)
    {
        for (int i = 0; i < 20; ++i)
            x = x + 5;
    }
    printf("x = %d -- ", x);
    if (x == N * 100)
        printf("YES!\n");
    else
        printf("NO!\n");

    return 0;
}
