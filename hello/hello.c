#include <linux/kernel.h>

asmlinkage long hello() {
	printk("Hello\n");
	return 0;
}
