// ============================================================
// 函数名称: sub_51aa58
// 虚拟地址: 0x51aa58
// WARP GUID: 7bee3e85-c8a6-563a-80b2-2af12f63cb1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_51aaa0
// ============================================================

int32_t __convention("regparm")sub_51aa58(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 s<= 1)
    if (arg1 s<= 1)
        arg2 = 0x32
    
    if (arg1 == 2)
        arg2 = 0x1e
    
    if (arg1 == 3)
        arg2 = 0x14
    
    if (arg1 == 4)
        arg2 = 0xc
    
    if (arg1 == 5)
        arg2 = 6
    
    if (arg1 s>= 6)
        arg2 = 0
    
    bool c = unimplemented  {imul eax, edx, 0x2}
    
    if (not(c))
        return arg2 * 2
    
    sub_403010()
    noreturn
}
