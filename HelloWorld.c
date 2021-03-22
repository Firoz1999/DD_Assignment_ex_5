#include <linux/module.h>     /* Needed by all modules */ 
#include <linux/kernel.h>     /* Needed for KERN_INFO */ 
#include <linux/init.h>       /* Needed for the macros */ 
  
///< The license type -- this affects runtime behavior 
MODULE_LICENSE("GPL"); 
  
MODULE_AUTHOR("Firoz Mohammad"); 
  
MODULE_DESCRIPTION("A simple Hello world LKM!"); 

MODULE_VERSION("2.3.0"); 
  
static int __init hello_start(void) 
{ 
    printk(KERN_INFO "Loading Hello World module...\n"); 
    printk(KERN_INFO "My First Hello world Module\n"); 
    return 0; 
} 
  
static void __exit hello_end(void) 
{ 
    printk(KERN_INFO "Goodbye Firoz\n"); 
} 
  
module_init(hello_start); 
module_exit(hello_end); 
