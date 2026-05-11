// ============================================================
// 函数名称: sub_440b50
// 虚拟地址: 0x440b50
// WARP GUID: 077015d8-f9f2-55a1-a8a9-72ee58465895
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_447620, sub_447634, sub_408988, sub_447224, sub_447210
// [被调用的父级函数]: sub_44a58c
// ============================================================

void* const __convention("regparm")sub_440b50(void* arg1)
{
    // 第一条实际指令: int32_t esi_1 = sub_447224(data_5317dc) - 1
    int32_t esi_1 = sub_447224(data_5317dc) - 1
    void* const result
    
    if (esi_1 s>= 0)
        int32_t i_1 = esi_1 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            result = sub_447210(data_5317dc, edi_1)
            
            if ((*(result + 0x21) & 2) == 0 && sub_408988(arg1, *(result + 8)) == 0)
                return result
            
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t esi_3 = sub_447634(data_5317dc) - 1
    
    if (esi_3 s< 0)
        return nullptr
    
    int32_t esi_4 = esi_3 + 1
    int32_t edi_2 = 0
    
    while (true)
        result = sub_447620(data_5317dc, edi_2)
        
        if (sub_408988(arg1, *(result + 8)) == 0)
            return result
        
        edi_2 += 1
        int32_t temp1_1 = esi_4
        esi_4 -= 1
        
        if (temp1_1 == 1)
            return nullptr
}
