#include <linux/init.h>
#include <linux/module.h>

int simple_init(void)
{
	printk(KERNL_ALERT "Inside the %s function\n",__FUNCTION__);
	return 0;
}
void simple_exit(void)
{
        printk(KERNL_ALERT "Out the %s function\n",__FUNCTION__);
}
int simple_init(void);
oid simple_exit(void);
