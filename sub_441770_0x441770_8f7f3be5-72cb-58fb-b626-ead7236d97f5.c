// ============================================================
// 函数名称: sub_441770
// 虚拟地址: 0x441770
// WARP GUID: 8f7f3be5-72cb-58fb-b626-ead7236d97f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4314c8, sub_4318d0, sub_440ee0
// [被调用的父级函数]: sub_441400, sub_441068, sub_441018, sub_441c2c, sub_4419f4, sub_442028, sub_441ed4
// ============================================================

void* __convention("regparm")sub_441770(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 4)
    void* result = *(arg1 + 4)
    
    if ((*(result + 0x20) & 2) == 0)
        int32_t eax = *(arg1 + 0x14)
        
        if (arg2 s> eax)
            arg2 = eax
        else if (arg2 s< 0)
            arg2 = 0
        
        int32_t esi
        
        if (*(arg1 + 0x18) != 0)
            esi.w = 1
        else
            esi = 0
        
        int32_t eax_1 = *(arg1 + 0xc)
        
        if (arg2 != eax_1)
            *(arg1 + 0xc) = arg2
            
            if (*(arg1 + 0x18) != 0)
                sub_4314c8(*(arg1 + 4), 0, eax_1 - arg2)
            else
                sub_4314c8(*(arg1 + 4), eax_1 - arg2, 0)
            
            int32_t* eax_5 = *(arg1 + 4)
            
            if ((eax_5[8].b & 0x10) != 0)
                int32_t* eax_6 = sub_440ee0(eax_5)
                
                if (eax_6 != 0 && eax_6[0x8e] != 0)
                    (*(*eax_6[0x8e] + 0xc))()
        
        uint32_t edi_1 = zx.d(esi.w)
        result = (*data_5303d8)(sub_4318d0(*(arg1 + 4)), edi_1)
        
        if (result != *(arg1 + 0xc))
            return (*data_5309ec)(sub_4318d0(*(arg1 + 4)), edi_1, *(arg1 + 0xc), 0xffffffff)
    else
        *(arg1 + 0xc) = arg2
    
    return result
}
