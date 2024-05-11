#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>


static int __init hello_init(void){
	printk(KERN_ALERT "Hello World\n");
	return 0;
}

static int __exit hello_exit(void){
	printk(KERN_ALERT "Bye bye\n");
	return 0;
}

module_init(hello_init);
module_exit(hello_exit);

//Module metadata

MODULE_LICENCE ('GPL');
MODULE_AUTHORE ('Author');
MODULE_DISCRIPTION ('Discription');
MODULE_VERSION ('1.0');
