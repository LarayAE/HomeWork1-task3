#include <linux/module.h>
#include <linux/ktime.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex L.");

static int __init hello_init(void)
{
    u64 time_s = ktime_get_real_ns() / 1000000000;

    printk(KERN_ALERT "'task3' module started\n");

    printk(KERN_ALERT "'task3' Time, seconds: %lld\n", time_s);
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_ALERT "'task3' module exited\n");
    return;
}

module_init(hello_init);
module_exit(hello_exit);

