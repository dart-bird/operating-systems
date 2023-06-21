#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>

int module_start(void) {
	struct task_struct *task;
	struct task_struct *child;
	struct list_head *list;

	printk("INSTALL: parent_child");
	for_each_process(task) {
		printk("\n %4d task %s\n children: ", task->pid, task->comm);
		list_for_each(list, &task->children) {
			child = list_entry(list, struct task_struct, sibling);
			printk(" %4d %s", child->pid, child->comm);
		}
	}
	return 0;
}

void module_end(void) {
	printk("REMOVE: parent_child");
}

module_init(module_start);
module_exit(module_end);
