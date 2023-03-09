# 모듈(Moudle) 프로그래밍
1. 모듈 프로그래밍
2. 연결 리스트 (Linked List)
3. 생일 목록을 불러오는 모듈 프로그래밍

## 1. 모듈 프로그래밍
- 커널을 변경할 시 커널 전체를 다시 컴파일 해야함 ex) system call 등록
- 모듈 프로그램으로 개발하면, **해당 모듈만 컴파일 후**  
**필요할 때만 동적으로 연결**하여 커널의 일부로 사용가능!
- 자주 사용하지 않는 커널 기능을 메모리에 상주시키지 않아도 됨
- 확장성과 재상용성을 높일 수 있음
- 사건 구동형 (**event-driven program**) 방식으로 작성
- 내부에 main() 함수가 존재하지 않음
- 커널에 적재/제거하기 위한 규칙과 유틸리티가 필요
- 커널에 적재된 모듈 프로그램은 시스템 내부에서 **모든 특권**을 가지게 되므로, 신중하게 작성할 것

### 1-1. 모듈 프로그램 코드 작성
```c
// mymodule.c
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

// 초기화 루틴
int simple_init(void) {
    printk(KERN_INFO "Loading My Module...\n");
    return 0;
}

// 종료 루틴
void simple_exit(void) {
    printk(KERN_INFO "Removing My Module...\n");
}
```
### 1-2. 모듈 Makefile 코드 작성
```makefile
# makefile
KDIR= /lib/modules/$(shell uname -r)/build
PWD= $(shell pwd)

obj-m := mymodule.o

default:
    $(MAKE) -C $(KDIR) KBUILD_EXTMOD=$(PWD) modules

clean:
    rm -rf *~
```
### 1-3. 모듈 컴파일
```shell
$ sudo make
```
### 1-4. 모듈 설치
```shell
$ sudo insmod mymodule.ko
$ dmesg
```
### 1-5. 설치된 모듈 확인
```shell
$ lsmod
```
### 1-5-1. 결과
```shell
Module    Size Used by
mymodule 16384 0
```
### 1-6. 모듈 제거
```shell
$ sudo rmmod mymodule
$ dmesg
```
## 2. 연결 리스트 (Linked List)
- 연결 리스트 : 각 데이터들을 포인터로 연결하여 관리하는 자료구조
- 노드 : 데이터를 저장하는 데이터 영역과 다음 노드를 가리키는 포인터 영역으로 구성

- **이점**
  - 동적 자료구조
  - 쉬운 생성과 삭제
  - 자유로운 노드의 생성/삭제 -> 적은 메모리 낭비
  - 다른 자료구조들을 쉽게 구현 가능

- **단점**
  - 데이터 하나를 표현하기 위해 `포인터` (추가 메모리) 사용
  - 데이터 탐색의 시간 복잡도가 높음 ( O(n) )

## 2-1. 단순 연결 리스트 (Single Linked List)
- 다음 노드만을 가리키는 단방향 연결 구조
```c
// s_list.c

//노드 구조
struct Node {
    int data;
    struct Node *next;
}

//노드 생성 함수
node createNode() {
    node new_node;
    new_node = (Node)malloc(sizeof(struct Node));
    new_node -> next = NULL;
    return new_node;
}
```
## 2-2. 이중 연결 리스트 (Double Linked List)
- 이전과 다음 노드를 가리키는 양방향 연결 구조
```c
// d_list.c

//노드 구조
struct Node {
    int data;
    struct Node *prev, *next;
}

//노드 생성 함수
node createNode() {
    node new_node;
    new_node = (Node)malloc(sizeof(struct Node));
    new_node -> prev = NULL;
    new_node -> next = NULL;
    return new_node;
}
```
## 2-3. 이중 원형 연결 리스트 (Double Circular Linked List)
- 처음과 마지막 노드가 연결되어 원형을 이루는 구조

## 2-4. 커널에 구현된 연결 리스트
- 커널 속 연결 리스트
```shell
$ vi /usr/src/linux-$(uname -r)/include/linux/types.h
```
```c
// types.h
struct list_head {
    struct list_head *prev, *next;
}
```
- 이중 연결 리스트라는 것을 알 수 있다.

## 2-5. Linux의 연결 리스트
- 사용자의 데이터에 리스트 노드(list_head 구조체)를 끼워넣기

## 2-6. 데이터 영역 구현
- Linux는 이중 원형 연결 리스트로 구현되어 있음
  - 임의의 구조체(struct my_struct)를 선언
  - 구조체에 list_head 구조체를 지정 -> 노드 생성
  - 리스트의 head 노드 지정 (LIST_HEAD)
  - 그 외 연산에는 list.h에서 제공하는 함수 사용

## 2-7. list_head 인터페이스 사용 방법
- 데이터 영역을 가지는 임의의 구조체를 만들고, list_head를 가리키게 함
```c
struct my_struct {
    void data;
    struct list_head list;
}
```
## 2-8. list.h
- 연결 리스트의 구조체, 함수가 구현되어 있는 헤더파일 확인해보기
```shell
$ vi /usr/src/linux-$(uname -r)/include/linux/list.h
```
- 함수 기능들

```c
LIST_HEAD(ptr)
```  
Ptr란 이름의 list_head를 정의 후 리스트 자료구조를 초기화  
```c
list_add(structlist_head *new, structlist_head *head);  
```
이전에 만든 리스트에 새로운 entry(list_head)를 맨앞에추가 
```c
list_add_tail(structlist_head *new, structlist_head *head);  
```
list_add와 동일하나 맨 뒤에 추가  
```c
list_del(structlist_head *entry);  
```
원하는 entry(list_head)를 삭제  
```c
list_empty(structlist_head *head);  
```
비어있는지체크(비면true)  
```c
list_for_each_entry(pos, head, member);  
```

리스트 노드들을 한바퀴 순환하면서, 각 노드들을 참조하는 포인터를 시작주소 지점(entry)으로 옮기는 것  

```c
list_for_each_safe(pos, n, head);  
```
entry 의 복사본을 사용함으로써 수행 시 해당자료가 삭제되더라도 오류가 나지 않게 하는 것

## 2-9. 데이터 생성
- kmalloc을 통해 메모리 공간 할당
  - kmalloc: 커널 내부에 페이지보다 작은 크기의 메모리 공간 할당에 사용
  - GFP_KERNEL: 보통 커널 RAM 메모리 할당

```c
struct my_struct *struct1;
struct1 = kmalloc(sizeof(struct my_struct), GFP_KERNEL);
```

## 2-10. 데이터를 리스트에 삽입
- list_add_tail

```c
static inline void list_add_tail(struct list_head *new, struct list_head *head){
    __list_add(new, head->prev, head);
}
```

## 2-11. inline 함수
- 실행 과정이 일반 함수와 크게 다르지 않음
- 컴파일러가 함수가 사용되는 부분에 함수의 코드를 복제해 넣음

```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1;
    num1 = add(10, 20);
    printf("%d\n", num1);
}
```

```c
#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

// 우리가 실행하는 코드
int main() {
    int num1;
    num1 = add(10, 20);
    printf("%d\n", num1);
}

// 실제로 수행되는 코드
int main() {
    int num1;
    num1  = inline int add(10, 20) {
        return 10 + 20;
    }
    printf("%d\n", num1);
}
```

## 2-12. 데이터 출력
- list_for_each_entry 매크로 함수를 사용
  - 반복적으로 탐색하며 노드를 확인

```c
#define list_for_each_entry(pos, head, member) \
    for (pos = list_first_entry(head, typeof(*pos), member); \
        &pos->member != (head); \
        pos = list_next_entry(pos, member))

```

## 2-13. 데이터 삭제
- list_for_each_safe 매크로 함수를 사용
  - 반복적으로 탐색하며 노드마다 함수 수행

```c
#define list_for_each_safe(pos, n, head) \
    for (pos = (head)->next, n = post->next; post != (head); \
        pos = n, n = pos->next)
```

- 본 매크로 함수를 사용한 데이터 삭제 과정
  - printk(출력할 구조체의 내용) → 노드 데이터 출력
  - list_del(삭제할 구조체의 list_head 주소값) → 리스트에서 제거
  - kfree(삭제할 구조체 메모리의 포인터) → 노드에 할당한 메모리 해제

## 2-14. 매크로 함수
- 매크로 사용 예제
```c
#define ADD(a,b) a+b
```
- 사용
```c
int result = ADD(2,3);
```
- 연산을 수행하기 직전 컴파일러가 코드를 그대로 치환
```c
int result = 2 + 3;
```

## 실습: 생일 목록을 불러오는 모듈 프로그래밍
- TODO
  - 생일 데이터를 가지는 구조체를 만든다.
  - 생일 데이터들끼리 하나의 커널 연결 리스트로 연결한다.
  - 연결된 데이터들을 전부 출력한다.

## 실습 결과: bdlist 모듈
- 모듈 생성 및 제거 후 dmesg 로 출력
```shell
[ XXXX.XXXXXX] INSTALL MODULE: bdlist
[ XXXX.XXXXXX] INSTALL MODULE: bdlist
[ XXXX.XXXXXX] OS Module : DAY 23, 2, 1995
[ XXXX.XXXXXX] OS Module : DAY 19, 4, 1967
[ XXXX.XXXXXX] OS Module : DAY 7, 2, 1964
[ XXXX.XXXXXX] OS Module : Removing DAY 23, 2, 1995
[ XXXX.XXXXXX] OS Module : Removing DAY 19, 4, 1967
[ XXXX.XXXXXX] OS Module : Removing DAY 7, 2, 1964
[ XXXX.XXXXXX] REMOVE MODULE: bdlist
```