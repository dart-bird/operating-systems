#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/slab.h>

struct my_struct {
  int data;
  struct list_head list;
};

LIST_HEAD(my_list);

struct my_struct *createNode(int _data) {
  struct my_struct *n;
  n = kmalloc(sizeof(struct my_struct), GFP_KERNEL); 	 
  n->data = _data;
  return n;
}

int example_init(void) {
  printk("INSTALL MODULE: traverse_safely\n");
  struct my_struct *node_pointer = createNode(1);
  list_add_tail(&node_pointer->list, &my_list);
  node_pointer = createNode(2);
  list_add_tail(&node_pointer->list, &my_list);		
  node_pointer = createNode(3);
  list_add_tail(&node_pointer->list, &my_list);
	
  struct my_struct *cursor;
  list_for_each_entry(cursor, &my_list, list){	
    printk("NODE DATA: %d\n", cursor->data);
  }
  return 0;
}

void example_exit(void) {
  printk("REMOVE MODULE: traverse_safely\n");
  struct my_struct *cur_node;
  struct list_head *cursor, *next;
  list_for_each_safe(cursor, next, &my_list) {		
	  cur_node = list_entry(cursor, struct my_struct, list);
	  printk("DEL NODE DATA: %d\n", cur_node->data);
	  list_del(cursor);
	  kfree(cur_node);
  }
  return;
}

module_init(example_init);
module_exit(example_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("traverse each node and remove them safely");
MODULE_AUTHOR("OS2019");
