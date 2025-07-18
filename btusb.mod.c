#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x656e4a6e, "snprintf" },
	{ 0xd8b373f2, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xaa6f2206, "skb_clone" },
	{ 0xe2856306, "consume_skb" },
	{ 0x113b9929, "hci_recv_frame" },
	{ 0xdcf2e462, "hci_unregister_dev" },
	{ 0x1b192f03, "gpiod_put" },
	{ 0x31d0caec, "hci_free_dev" },
	{ 0xe8b932be, "device_wakeup_disable" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x53ad7960, "__alloc_skb" },
	{ 0x20c87fea, "skb_put" },
	{ 0x36d69ed1, "alloc_mtk_intr_urb" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd50f60e8, "skb_queue_purge_reason" },
	{ 0xfad6f727, "btmtk_usb_subsys_reset" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xe3c3870b, "usb_get_from_anchor" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4b0ab091, "skb_queue_tail" },
	{ 0x17503489, "hci_recv_diag" },
	{ 0xbf6704d7, "usb_set_interface" },
	{ 0xa916b694, "strnlen" },
	{ 0x75ca79b5, "__fortify_panic" },
	{ 0x73a1b198, "btmtk_usb_setup" },
	{ 0x70e21f0a, "usb_ifnum_to_if" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3fb6d105, "usb_driver_claim_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3bfab2e4, "devm_kmalloc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf5b478db, "hci_alloc_dev_priv" },
	{ 0x86c4f91d, "gpiod_get_optional" },
	{ 0xf76a6f4, "btmtk_reset_sync" },
	{ 0xb31ace95, "btmtk_set_bdaddr" },
	{ 0x97fe459, "btmtk_usb_recv_acl" },
	{ 0xcc1d84a5, "btmtk_usb_suspend" },
	{ 0x75ef8a9a, "btmtk_usb_resume" },
	{ 0x346808e2, "hci_register_dev" },
	{ 0xf3096478, "debugfs_create_file" },
	{ 0x6dff3d05, "usb_match_id" },
	{ 0xb4505183, "btintel_recv_event" },
	{ 0xd5324d10, "btintel_configure_setup" },
	{ 0x334f8c72, "btbcm_setup_patchram" },
	{ 0x3dbf97be, "btbcm_set_bdaddr" },
	{ 0xae6e89c2, "btbcm_setup_apple" },
	{ 0xf2358a9c, "btrtl_set_driver_name" },
	{ 0x8c13ab1, "btrtl_shutdown_realtek" },
	{ 0xbd52c8b8, "hci_devcd_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x23b73017, "param_ops_bool" },
	{ 0x51155c20, "default_llseek" },
	{ 0xfe851db2, "simple_open" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2e59bccc, "usb_register_driver" },
	{ 0xe10679fb, "usb_alloc_urb" },
	{ 0x4bb8e265, "usb_anchor_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf572d363, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xf370e7f0, "usb_unanchor_urb" },
	{ 0xec80bce9, "kmalloc_caches" },
	{ 0xaf6d1abc, "__kmalloc_cache_noprof" },
	{ 0x1a31a30e, "usb_free_urb" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7f5a01bc, "hci_cmd_sync_cancel" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x663fd8a8, "sk_skb_reason_drop" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xbc939728, "__hci_cmd_sync" },
	{ 0xc82c9a07, "skb_pull_data" },
	{ 0x718b8b7, "bt_info" },
	{ 0x214e4265, "bt_warn" },
	{ 0xbabfd1ea, "pm_runtime_allow" },
	{ 0xe0a77070, "__pm_runtime_suspend" },
	{ 0x8c5f64a6, "pm_runtime_forbid" },
	{ 0x2a9eff06, "device_set_wakeup_capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c540ffe, "usb_enable_autosuspend" },
	{ 0x6dee1735, "btrtl_setup_realtek" },
	{ 0xe7feddab, "__hci_cmd_sync_ev" },
	{ 0x84527e47, "__hci_cmd_send" },
	{ 0xa9a86f6d, "skb_pull" },
	{ 0xeab292cb, "hci_devcd_init" },
	{ 0x26c2a95a, "usb_disable_autosuspend" },
	{ 0x60f0fb8c, "hci_devcd_append" },
	{ 0x9bcb4fc5, "hci_devcd_complete" },
	{ 0x2435b5e2, "hci_devcd_append_pattern" },
	{ 0xd56b4fcb, "usb_control_msg" },
	{ 0xb8fbce71, "usb_bulk_msg" },
	{ 0xc4a5f721, "_dev_err" },
	{ 0x66574226, "dev_kfree_skb_irq_reason" },
	{ 0xb1390d3, "usb_driver_release_interface" },
	{ 0x64e08fe, "btmtk_usb_shutdown" },
	{ 0xda25d6c1, "skb_dequeue" },
	{ 0xf0130c1e, "usb_deregister" },
	{ 0xd2a5b63f, "usb_autopm_get_interface" },
	{ 0x51b616af, "usb_queue_reset_device" },
	{ 0xc68f73f8, "gpiod_set_value_cansleep" },
	{ 0xd0fae0b2, "usb_autopm_put_interface" },
	{ 0xbf1981cb, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btmtk,usbcore,btintel,btbcm,btrtl");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F9B988FBC80BF6D80BE9559");
