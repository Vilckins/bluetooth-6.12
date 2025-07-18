#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btrtl_set_driver_name, "_gpl", "");
KSYMTAB_FUNC(btrtl_free, "_gpl", "");
KSYMTAB_FUNC(btrtl_initialize, "_gpl", "");
KSYMTAB_FUNC(btrtl_download_firmware, "_gpl", "");
KSYMTAB_FUNC(btrtl_set_quirks, "_gpl", "");
KSYMTAB_FUNC(btrtl_setup_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_shutdown_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_get_uart_settings, "_gpl", "");

SYMBOL_CRC(btrtl_set_driver_name, 0xf2358a9c, "_gpl");
SYMBOL_CRC(btrtl_free, 0xaf78f260, "_gpl");
SYMBOL_CRC(btrtl_initialize, 0xc9f39258, "_gpl");
SYMBOL_CRC(btrtl_download_firmware, 0x749e25d7, "_gpl");
SYMBOL_CRC(btrtl_set_quirks, 0x41f8b49f, "_gpl");
SYMBOL_CRC(btrtl_setup_realtek, 0x6dee1735, "_gpl");
SYMBOL_CRC(btrtl_shutdown_realtek, 0x08c13ab1, "_gpl");
SYMBOL_CRC(btrtl_get_uart_settings, 0x8c531281, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc939728, "__hci_cmd_sync" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x663fd8a8, "sk_skb_reason_drop" },
	{ 0x718b8b7, "bt_info" },
	{ 0xd8b373f2, "request_firmware" },
	{ 0xf88ecec4, "kvmemdup" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xec80bce9, "kmalloc_caches" },
	{ 0xaf6d1abc, "__kmalloc_cache_noprof" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x84527e47, "__hci_cmd_send" },
	{ 0x214e4265, "bt_warn" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0xbd52c8b8, "hci_devcd_register" },
	{ 0x31f2a14c, "__kvmalloc_node_noprof" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc82c9a07, "skb_pull_data" },
	{ 0x53ad7960, "__alloc_skb" },
	{ 0x20c87fea, "skb_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe730af4a, "hci_set_hw_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xbf1981cb, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "BC6784D473FDFBDBE11BACB");
