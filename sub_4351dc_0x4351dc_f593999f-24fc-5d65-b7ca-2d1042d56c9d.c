// ============================================================
// 函数名称: sub_4351dc
// 虚拟地址: 0x4351dc
// WARP GUID: f593999f-24fc-5d65-b7ca-2d1042d56c9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject, PatBlt
// [内部子函数调用]: sub_4190f0, sub_433480, sub_433414
// [被调用的父级函数]: sub_43512c, sub_43550c, sub_4350cc
// ============================================================

void __convention("regparm")sub_4351dc(HGDIOBJ arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x60)
    void* esi = *(arg1 + 0x60)
    
    if (esi == 0)
        return 
    
    int32_t x
    int32_t y
    int32_t var_10_1
    int32_t var_c_1
    
    if (*(*(esi + 0x14) + 0x10) != 1)
        int32_t eax_10 = *(arg1 + 0xc)
        int32_t eax_11 = eax_10 s>> 1
        bool c_2 = unimplemented  {sar eax, 0x1}
        
        if (eax_10 s>> 1 s< 0)
            eax_11 = adc.d(eax_11, 0, c_2)
        
        x = *(arg1 + 0x50) - eax_11
        y = sub_433414(esi, 1)
        var_10_1 = x + *(arg1 + 0xc)
        var_c_1 = sub_433480(*(arg1 + 0x60), 1) + y
    else
        x = sub_433414(esi, 2)
        int32_t eax_3 = *(arg1 + 0xc)
        int32_t eax_4 = eax_3 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_3 s>> 1 s< 0)
            eax_4 = adc.d(eax_4, 0, c_1)
        
        y = *(arg1 + 0x54) - eax_4
        var_10_1 = sub_433480(*(arg1 + 0x60), 2) + x
        var_c_1 = y + *(arg1 + 0xc)
    
    HGDIOBJ h = sub_4190f0(*(arg1 + 0x10))
    HGDIOBJ h_1 = SelectObject(*(arg1 + 0x58), h)
    PatBlt(*(arg1 + 0x58), x, y, var_10_1 - x, var_c_1 - y, PATINVERT)
    SelectObject(*(arg1 + 0x58), h_1)
}
