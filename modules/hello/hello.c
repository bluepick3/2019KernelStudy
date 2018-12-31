#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

//initialization routine
int __init init_hello(void)
{
  printk( KERN_ALERT "[ Hello Module :] Hello, World!.\n" );



  return 0;
}
//commit

//exit routine
void __exit exit_hello(void)
{
  printk( KERN_ALERT "[ Hello Module :] Exit.\n");
}



module_init(init_hello);
module_exit(exit_hello);


