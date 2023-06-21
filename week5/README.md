# 스레드
1. 스레드(Thread)  
2. OpenMP  
3. 소수탐색프로그램(count_primes)  

## 1. 스레드
- 프로세스 안에서 실질적으로 작업을 실행하는 주체
- 두 개 이상의 스레드일 경우는 **multi-thread**  
- 프로세스의 생성느 heavy-weight, 스레이드 생성은 light-weight  
- 프로세스의 자원을 공유
- Context switching에서 더 적은 overhead를 가짐
- 멀티코어 구조를 이용할 수 있음

### 1-1. pthread
- `pthread_create`
  - 스레드의 생성
  - 스레드 식별자, 스레드 특성, 실행할 함수, 실행할 함수의 매개변수
  - 스레드 특성은 주로 `NULL`
  - 실행 시, `main` 스레드 외의 작업 스레드가 생성

- `pthread_join`
  - 스레드의 종료를 대기, 종료하면 포인터를 리턴
  - 스레드의 식별자, 리턴 값(보통 `NULL`)

- `pthread_exit`
  - 스레드의 종료 및 `cleanup`, `destructor` 루틴을 위해 사용
  - value
  - 주로 0

## 2. OpenMP
- Open Muti-Processing
  - 다중코어 환경에서 병렬프로그래밍을 지원하는 API
  - Mac OS의 경우 사전 설치 필요 `brew install libomp`
  - Linux
    ```shell
    $ gcc -fopenmp {filename}.c
    ```
  - MacOS
    ```shell
    $ gcc -Xpreprocessor -fopenmp {filename}.c -lomp
    ```

```c
#include <stdio.h>
#include <omp.h>

#define N 19

int main(void)
{
    int i;
    
    printf("forking...\n");
    #pragma omp parallel for
    for (i = 0; i < N; ++i) {
        int id = omp_get_thread_num();
        printf("[T%d] i = %d\n", id, i);
    }
    printf("...joined\n");

    printf("forking...\n");
    #pragma omp parallel for schedule(dynamic)
    for (i = 0; i < N; ++i) {
        int id = omp_get_thread_num();
        printf("[T%d] i = %d\n", id, i);
    }
    printf("...joined\n");
    
    printf("forking...\n");
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        printf("[T%d] Hello, world!\n", id);
    }
    printf("...joined\n");

    printf("forking...\n");
    #pragma omp parallel num_threads(13)
    {
        int id = omp_get_thread_num();
        printf("[T%d] Hello, world!\n", id);
    }
    printf("...joined\n");
    
    return 0;
}
```

## 결과
 - 주어진 수가 소수인지 판단하는 `isPrime()`
 - `isPrime()`을 이용하여, 어떤 범위 내 존재하는 소수의 수 세기
 - GROUP개의 스레드를 생성하고, 코어에 분산하여 할당
 - OpenMP를 사용하여 코어의 개수만큼 스레드 생성 및 분산, 할당

```plain
1000000000부터 1040000000까지 소수를 찾는다.
순차 계산...
소수 개수: 1928678개
실행 시간: 156.5466초
---
순차 계산...
소수 개수 1928678개
실행 시간: 25.7717초
---
병렬 계산 (OpenMP)...
소수 개수 1928678개
실행 시간: 23.7633초
---
```