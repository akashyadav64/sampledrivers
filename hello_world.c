
/*  
 *  	hello-1.c - The simplest kernel module.
 *	To learn more on how to compile modules which are not part of the official kernel (such as all the examples you'll find i *	 n this guide), see file linux/Documentation/kbuild/modules.txt.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

int start(void)
{
	printk(KERN_INFO "Hello world...\n");

	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

void cleanup(void)
{
	printk(KERN_INFO "Goodbye world...\n");
}

module_init(start);
module_exit(cleanup);
