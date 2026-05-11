// ============================================================
// 函数名称: sub_41c2ec
// 虚拟地址: 0x41c2ec
// WARP GUID: a9b507c9-7ec6-5795-a113-0430498af585
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv, GetEnhMetaFileHeader
// [内部子函数调用]: sub_41c3a4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41c2ec(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x20) == 0)
    if (*(arg1 + 0x20) == 0)
        sub_41c3a4(arg1)
    
    void* ebx_1 = *(arg1 + 0x20)
    
    if (*(ebx_1 + 0x18) != 0)
        return MulDiv(*(ebx_1 + 0xc), data_53165c, 0x9ec)
    
    HENHMETAFILE hemf = *(ebx_1 + 8)
    
    if (hemf == 0)
        return *(ebx_1 + 0x1c)
    
    void enhMetaHeader
    GetEnhMetaFileHeader(hemf, 0x64, &enhMetaHeader)
    int32_t nNumerator
    int32_t var_18
    return MulDiv(*(ebx_1 + 0xc), nNumerator, var_18 * 0x64)
}
