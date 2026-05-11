// ============================================================
// 函数名称: sub_45bab0
// 虚拟地址: 0x45bab0
// WARP GUID: 62052a6a-132a-55b4-899f-5ed181ff98de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b630, sub_45c55c
// ============================================================

int32_t __convention("regparm")sub_45bab0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x19e)
    void* esi = *(arg1 + 0x19e)
    int32_t edx_1 = *(arg1 + 0x132) - 1
    int32_t i
    
    do
        if (*(arg1 + 0x8c) s>= *(arg1 + 0x94)
                && (*(arg1 + 0x8c) != *(arg1 + 0x94) || *(arg1 + 0x90) u> *(arg1 + 0x98)))
            int32_t j = 0
            void* ebx_1 = *(arg1 + 0xd4)
            int32_t* var_14_1 = arg2
            int32_t* var_18_1 = esi + 0x48
            
            while (*(arg1 + 0x20) s> j)
                if (*(ebx_1 + 0x30) != 0)
                    *(arg1 + 0x98)
                    *var_18_1
                    int32_t* eax_11 = (*(*(arg1 + 4) + 0x20))(0, *(ebx_1 + 0xc))
                    uint32_t var_24_1
                    
                    if (*(arg1 + 0x98) u>= edx_1)
                        uint32_t esi_2 = *(ebx_1 + 0xc)
                        var_24_1 = modu.dp.d(0:(*(ebx_1 + 0x20)), esi_2)
                        
                        if (var_24_1 == 0)
                            var_24_1 = esi_2
                    else
                        var_24_1 = *(ebx_1 + 0xc)
                    
                    int32_t eax_18 = *(*(arg1 + 0x1b2) + (j << 2) + 4)
                    int32_t var_20_1 = *var_14_1
                    int32_t var_28_1 = 0
                    int32_t* var_10_1 = eax_11
                    
                    if (0 s< var_24_1)
                        do
                            int32_t edi_1 = 0
                            int32_t esi_3 = *var_10_1
                            
                            for (int32_t k = 0; k u< *(ebx_1 + 0x1c); k += 1)
                                eax_18(edi_1, var_20_1)
                                esi_3 += 0x80
                                edi_1 += *(ebx_1 + 0x24)
                            
                            var_20_1 += *(ebx_1 + 0x24) << 2
                            var_28_1 += 1
                            var_10_1 = &var_10_1[1]
                        while (var_28_1 s< var_24_1)
                
                var_18_1 = &var_18_1[1]
                var_14_1 = &var_14_1[1]
                j += 1
                ebx_1 += 0x54
            
            *(arg1 + 0x98) += 1
            
            if (*(arg1 + 0x98) u>= *(arg1 + 0x132))
                return 4
            
            return 3
        
        i = (**(arg1 + 0x1a6))(arg1, edx_1)
    while (i != 0)
    return 0
}
