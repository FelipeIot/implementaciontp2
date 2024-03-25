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
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x3b4466fb, "cdev_init" },
	{ 0x8277b3bb, "cdev_add" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x293e8fe4, "cdev_del" },
	{ 0xe28e8a80, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "11F3B514CEB90545C56AB24");
