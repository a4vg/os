#include <linux/kernel.h>
asmlinkage long newsyscall (struct prinfo *p) {
	printk ("Sistemas operativos !!!!\n");
	return 0;
}
