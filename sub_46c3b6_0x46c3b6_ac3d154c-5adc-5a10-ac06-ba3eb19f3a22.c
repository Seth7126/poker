// ============================================================
// 函数名称: sub_46c3b6
// 虚拟地址: 0x46c3b6
// WARP GUID: ac3d154c-5adc-5a10-ac06-ba3eb19f3a22
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_46c3b6(char* arg1) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t eflags
    __out_immb_al(0xff, arg1.b, eflags)
    int32_t eflags_1
    char temp0
    char temp1
    temp0, temp1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags)
    arg1.b = temp0
    arg1:1.b = temp1
    *arg1 += arg1.b
    trap(0xcc)
}
