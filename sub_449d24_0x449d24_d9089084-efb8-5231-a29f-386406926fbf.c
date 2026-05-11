// ============================================================
// 函数名称: sub_449d24
// 虚拟地址: 0x449d24
// WARP GUID: d9089084-efb8-5231-a29f-386406926fbf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: KillTimer
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449e50, sub_449cec, sub_449ec0
// ============================================================

BOOL __convention("regparm")sub_449d24(BOOL arg1)
{
    // 第一条实际指令: BOOL ebx = arg1
    BOOL ebx = arg1
    arg1.w = *(ebx + 0x7a)
    
    if (arg1.w != 0)
        arg1 = KillTimer(nullptr, zx.d(arg1.w))
        *(ebx + 0x7a) = 0
    
    return arg1
}
