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

struct birthday* createBirthday(int day, int month, int year)
{
    struct birthday* birthday_node;
    birthday_node = kmalloc(sizeof(struct birthday), GFP_KERNEL);
    birthday_node->day = day;
    birthday_node->month = month;
    birthday_node->year = year;
    return birthday_node;
}

int simple_init(void)
{
    printk("INSTALL MODULE: bdlist\n");
    struct birthday* b_n;

    b_n = createBirthday(23, 2, 1995);
    list_add_tail(&b_n->list, &birthday_list);
    b_n = createBirthday(19, 4, 1967);
    list_add_tail(&b_n->list, &birthday_list);
    b_n = createBirthday(7, 2, 1964);
    list_add_tail(&b_n->list, &birthday_list);

    struct birthday* birthday_cursor;
    list_for_each_entry(birthday_cursor, &birthday_list, list)
    {
        printk("OS Module : DAY %d, %d, %d\n", birthday_cursor->day, birthday_cursor->month, birthday_cursor->year);
    }

    return 0;
}

void simple_exit(void)
{
    if (list_empty(&birthday_list)) {
        printk("List is Empty\n");
        return;
    }

    printk("REMOVE MODULE: bdlist\n");
    struct birthday* cur_node;
    struct list_head *cursor, *next;
    list_for_each_safe(cursor, next, &birthday_list)
    {
        cur_node = list_entry(cursor, struct birthday, list);
        printk("OS Module : Removing %d, %d, %d\n", cur_node->day, cur_node->month, cur_node->year);
        list_del(cursor);
        kfree(cur_node);
    }
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("make a list of birthdays and print");
MODULE_AUTHOR("YOOJINWOONG_2019057383");
