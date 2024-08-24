#include <linux/init.h>	  //__init and __exit
#include <linux/module.h> //module_init and module_exit
#include <linux/kernel.h> //printk(KERN_INFO ...)

// Function to be called when the module is loaded
static int __init hello_init(void)
{
	printk(KERN_INFO "Hello, world!\n");
	return 0;
}

// Function to be called when the module is unloaded
static void __exit hello_exit(void)
{
	printk(KERN_INFO "Goodbye, world!\n");
}

// Macros to define the initialization and exit functions
module_init(hello_init);
module_exit(hello_exit);

// Module metadata
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple hello world kernel module");
MODULE_VERSION("1.0");
