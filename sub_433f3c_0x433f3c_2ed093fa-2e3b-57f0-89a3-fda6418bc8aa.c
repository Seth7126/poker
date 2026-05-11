// ============================================================
// 函数名称: sub_433f3c
// 虚拟地址: 0x433f3c
// WARP GUID: 2ed093fa-2e3b-57f0-89a3-fda6418bc8aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433f3c, sub_433480, sub_433414
// [被调用的父级函数]: sub_433f3c, sub_4341d8
// ============================================================

void* __convention("regparm")sub_433f3c(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_2
    int32_t eax_2
    int32_t edx_1
    
    if (*(*(arg1 + 0x14) + 0x10) == 1)
        eax_2 = *(*(arg2 - 4) + 4)
        edx_1 = *(arg1 + 0x20)
    
    if (*(*(arg1 + 0x14) + 0x10) != 1 || eax_2 s> edx_1 || eax_2 s< edx_1 - *(*(arg2 - 8) + 0xc))
        int32_t eax_8
        int32_t edx_3
        
        if (*(*(arg1 + 0x14) + 0x10) == 2)
            eax_8 = **(arg2 - 4)
            edx_3 = *(arg1 + 0x20)
        
        if (*(*(arg1 + 0x14) + 0x10) == 2 && eax_8 s<= edx_3 && eax_8 s>= edx_3 - *(*(arg2 - 8) + 0xc))
            **(arg2 - 0xc) = 0x12
            *(arg2 - 0x10) = arg1
        else if (*(arg1 + 4) != 0)
            int32_t eax_13 = sub_433414(arg1, 1)
            int32_t eax_15 = sub_433414(arg1, 2)
            
            if (*(*(arg2 - 8) + 0x1c) == 0)
                if (eax_15 s<= **(arg2 - 4) && **(arg2 - 4) s<= eax_15 + *(*(arg2 - 8) + 0x18)
                        && eax_13 s<= *(*(arg2 - 4) + 4)
                        && eax_13 + sub_433480(arg1, 1) s>= *(*(arg2 - 4) + 4))
                    *(arg2 - 0x10) = arg1
                    
                    if (*(*(arg2 - 4) + 4) s>= *(*(arg1 + 4) + 0x34) + 0xf)
                        **(arg2 - 0xc) = 2
                    else
                        **(arg2 - 0xc) = 0x14
            else if (eax_13 s<= *(*(arg2 - 4) + 4)
                    && *(*(arg2 - 4) + 4) s<= eax_13 + *(*(arg2 - 8) + 0x18) && eax_15 s<= **(arg2 - 4)
                    && eax_15 + sub_433480(arg1, 2) s>= **(arg2 - 4))
                *(arg2 - 0x10) = arg1
                void* eax_30 = *(arg1 + 4)
                
                if (*(eax_30 + 0x30) + *(eax_30 + 0x38) - 0xf s>= **(arg2 - 4))
                    **(arg2 - 0xc) = 2
                else
                    **(arg2 - 0xc) = 0x14
    else
        **(arg2 - 0xc) = 0x12
        *(arg2 - 0x10) = arg1
    
    if (*(arg2 - 0x10) == 0 && *(arg1 + 0xc) != 0)
        *(arg1 + 0xc)
        sub_433f3c(arg2)
    
    void* result = arg2
    
    if (*(result - 0x10) == 0 && *(arg1 + 8) != 0)
        *(arg1 + 8)
        result = sub_433f3c(arg2)
    
    return result
}
