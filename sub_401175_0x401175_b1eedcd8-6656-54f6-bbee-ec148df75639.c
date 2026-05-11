// ============================================================
// 函数名称: sub_401175
// 虚拟地址: 0x401175
// WARP GUID: b1eedcd8-6656-54f6-bbee-ec148df75639
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_401175(char* arg1, uint16_t arg2, int32_t arg3 @ edi) __noreturn
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg3, arg2, eflags)
    *edi = temp0
    *arg1 += arg1.b
    breakpoint
}
