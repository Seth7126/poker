// ============================================================
// 函数名称: sub_42d69c
// 虚拟地址: 0x42d69c
// WARP GUID: 903cf194-2439-563c-9d43-31e6f0d29884
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42d6dc
// [被调用的父级函数]: sub_4262a8, sub_423918, sub_44c05c
// ============================================================

int32_t __convention("regparm")sub_42d69c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    int32_t ebx
    ebx.w = 0xffce
    
    if (sub_4032ac(arg1) != 0)
        if ((esi & 2) == 2)
            esi &= 0xfffffffd
        else if ((esi & 1) != 1)
            esi |= 2
    
    return esi | sub_42d6dc(arg1)
}
