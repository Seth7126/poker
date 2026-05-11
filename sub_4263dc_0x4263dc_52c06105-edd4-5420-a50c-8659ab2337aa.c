// ============================================================
// 函数名称: sub_4263dc
// 虚拟地址: 0x4263dc
// WARP GUID: 52c06105-edd4-5420-a50c-8659ab2337aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawFocusRect
// [内部子函数调用]: sub_419a7c, sub_4190bc, sub_419a60, sub_4188ec, sub_419bc0, sub_419720
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_4263dc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* edi = *(arg2 + 8)
    void* edi = *(arg2 + 8)
    int32_t ebp
    ebp.w = *(edi + 0x10)
    sub_419bc0(arg1[0x7e], *(edi + 0x18))
    arg1[0x16]
    sub_419a60(arg1[0x7e])
    arg1[0x4c]
    sub_419a7c(arg1[0x7e])
    
    if (*(edi + 8) s>= 0 && (ebp.w & 1) != 0)
        sub_4190bc(*(arg1[0x7e] + 0x14))
        sub_4188ec(*(arg1[0x7e] + 0xc), 0x8000000e)
    
    if (*(edi + 8) s< 0)
        sub_419720(arg1[0x7e], edi + 0x1c)
    else
        *(edi + 8)
        (*(*arg1 + 0xb4))(ebp)
    
    if ((ebp.w & 0x10) != 0)
        DrawFocusRect(*(edi + 0x18), edi + 0x1c)
    
    return sub_419bc0(arg1[0x7e], 0)
}
