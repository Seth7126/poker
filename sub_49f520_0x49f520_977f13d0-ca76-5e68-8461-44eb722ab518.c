// ============================================================
// 函数名称: sub_49f520
// 虚拟地址: 0x49f520
// WARP GUID: 977f13d0-ca76-5e68-8461-44eb722ab518
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49f684, sub_49f548
// [被调用的父级函数]: sub_4a0cb0, sub_4a22af, sub_4a0c80, sub_4a0e13, sub_4a2310, sub_4afaf8, sub_4a1b34, sub_4a2b90
// ============================================================

int32_t __convention("regparm")sub_49f520(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_1
    void* eax_1
    struct _EXCEPTION_REGISTRATION_RECORD* edi_1
    eax_1, edi_1 = sub_49f684(arg1, arg2)
    return sub_49f548(arg1, eax_1, edi_1)
}
