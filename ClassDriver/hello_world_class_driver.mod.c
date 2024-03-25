#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92997ed8, "_printk" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0x853d16c8, "__class_create" },
	{ 0xa4a9ecb6, "device_create" },
	{ 0x3486581a, "class_destroy" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3f74d235, "device_destroy" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AEEDB5449B1AF2DCE874D60");
