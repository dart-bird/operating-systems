#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/slab.h>

struct birthday {
  int day;
  int month;
  int year;
  struct list_head list;
};

static LIST_HEAD(birthday_list);

struct birthday *createBirthday(int day, int month, int year) {
  struct birthday *birthday_node;
  birthday_node = kmalloc(sizeof(struct birthday), GFP_KERNEL);
  birthday_node -> day = day;
  birthday_node -> month = month;
  birthday_node -> year = year;
  /* TODO: 생일을 위한 메모리를 할당하고, 인자들을 채워 생일을 완성하세요. */
  return birthday_node;
}

int simple_init(void) {
  printk("INSTALL MODULE: bdlist\n");
  struct birthday *b_n;

  b_n = createBirthday(23, 2, 1995);
  list_add_tail(&b_n->list, &birthday_list);
  b_n = createBirthday(19, 4, 1967);
  list_add_tail(&b_n->list, &birthday_list);
  b_n = createBirthday(7, 2, 1964);
  list_add_tail(&b_n->list, &birthday_list);

  struct birthday *birthday_cursor;
  list_for_each_entry(birthday_cursor, &birthday_list, list){		// loop를 사용하지 않았는데도 반복적으로 노드들을 방문한다. 왜 그런지 이해해보자.
    printk("OS Module : DAY %d, %d, %d\n", birthday_cursor->day, birthday_cursor->month, birthday_cursor->year);
  }
  
  /* TODO: 생일 목록을 하나씩 생성하는대로 연결리스트에 연결시키세요(노드 삽입). */
  /* TODO: 완성된 연결리스트를 탐색하는 커널 함수를 사용하여 출력하세요. */

  return 0;
}

void simple_exit(void) {
  /* 모듈을 제거할 때는 생성한 연결 리스트도 하나씩 제거하며 끝내도록 하세요. */
  /* 제거를 하기 전에 리스트가 "비어있을 경우""에 대한 예외처리를 하는게 좋겠죠? */
  if(list_empty(&birthday_list)) {
    printk("List is Empty\n");
    return;
  } 


  /* TODO: 이제 본격적으로 연결리스트를 탐색하면서 하나씩 제거하도록 하시면 됩니다. */
  printk("REMOVE MODULE: bdlist\n");
  struct birthday *cur_node;
  struct list_head *cursor, *next;
  list_for_each_safe(cursor, next, &birthday_list) {		
    cur_node = list_entry(cursor, struct birthday, list);
    printk("OS Module : Removing %d, %d, %d\n", cur_node->day, cur_node->month, cur_node->year);		// 노드 데이터 출력
    list_del(cursor);
    kfree(cur_node);
  }
  
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("make a list of birthdays and print");
MODULE_AUTHOR("DARTBIRD");
