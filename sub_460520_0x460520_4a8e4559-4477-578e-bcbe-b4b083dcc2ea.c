// ============================================================
// 函数名称: sub_460520
// 虚拟地址: 0x460520
// WARP GUID: 4a8e4559-4477-578e-bcbe-b4b083dcc2ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_460554
// ============================================================

int32_t __convention("regparm")sub_460520(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t ecx = arg1
    int32_t ecx = arg1
    
    if (ecx s<= 0)
        ecx = 1
    
    if (ecx s> 0x64)
        ecx = 0x64
    
    if (ecx s>= 0x32)
        return 0xc8 - ecx * 2
    
    return divs.dp.d(0x1388, ecx)
}
