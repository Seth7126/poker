// ============================================================
// 函数名称: sub_4476f4
// 虚拟地址: 0x4476f4
// WARP GUID: 1dc0fd69-7ae6-51c6-b982-f5166fcae708
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFontIndirectA, GetStockObject, SystemParametersInfoA
// [内部子函数调用]: sub_418b8c, sub_418aa8
// [被调用的父级函数]: sub_446fc8, sub_448590
// ============================================================

int32_t __convention("regparm")sub_4476f4(void* arg1)
{
    // 第一条实际指令: LOGFONTA var_194
    LOGFONTA var_194
    
    if (SystemParametersInfoA(SPI_GETICONTITLELOGFONT, 0x3c, &var_194, 0) == 0)
        HGDIOBJ eax_3 = GetStockObject(SYSTEM_FONT)
        sub_418aa8(*(arg1 + 0x78), eax_3)
    else
        HFONT eax_1 = CreateFontIndirectA(&var_194)
        sub_418aa8(*(arg1 + 0x78), eax_1)
    
    int32_t pvParam = 0x154
    
    if (SystemParametersInfoA(SPI_GETNONCLIENTMETRICS, 0, &pvParam, 0) == 0)
        sub_418b8c(*(arg1 + 0x74), 8)
        HGDIOBJ eax_12 = GetStockObject(SYSTEM_FONT)
        return sub_418aa8(*(arg1 + 0x7c), eax_12)
    
    LOGFONTA lplf_1[0x2]
    HFONT eax_6 = CreateFontIndirectA(&lplf_1)
    sub_418aa8(*(arg1 + 0x74), eax_6)
    LOGFONTA lplf
    HFONT eax_8 = CreateFontIndirectA(&lplf)
    return sub_418aa8(*(arg1 + 0x7c), eax_8)
}
