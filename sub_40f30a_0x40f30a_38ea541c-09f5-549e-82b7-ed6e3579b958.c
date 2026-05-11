// ============================================================
// 函数名称: sub_40f30a
// 虚拟地址: 0x40f30a
// WARP GUID: 38ea541c-09f5-549e-82b7-ed6e3579b958
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40f1d9
// ============================================================

void __convention("regparm")sub_40f30a(void* arg1) __noreturn
{
    // 第一条实际指令: char* eax
    char* eax
    eax.b = (arg1 + 1).b * 2
    *eax ^= eax.b
    trap(0xd)
}
