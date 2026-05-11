// ============================================================
// 函数名称: sub_45b66c
// 虚拟地址: 0x45b66c
// WARP GUID: 7a10de09-f057-5604-845c-2ac47ec01889
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45b5d4, sub_4533f4
// [被调用的父级函数]: sub_45c55c
// ============================================================

int32_t __convention("regparm")sub_45b66c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x19e)
    void* edx = *(arg1 + 0x19e)
    int32_t eax_2 = *(arg1 + 0x14e) - 1
    int32_t ecx_2 = *(arg1 + 0x132) - 1
    int32_t j
    int32_t var_34
    int32_t k
    int32_t var_2c
    int32_t i
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    void* var_14
    int32_t* var_10
    
    for (i = *(edx + 0x18); *(edx + 0x1c) s> i; i += 1)
        for (j = *(edx + 0x14); j u<= eax_2; j += 1)
            sub_4533f4(*(edx + 0x20), 0, *(arg1 + 0x156) << 7)
            
            if ((*(*(arg1 + 0x1ae) + 4))(arg1, arg2, edx, j, eax_2, ecx_2, var_34, k, var_2c, i, 
                    var_24, var_20, var_1c, var_18, var_14, var_10) == 0)
                *(edx + 0x18) = i
                *(edx + 0x14) = j
                return 0
            
            var_34 = 0
            k = 0
            var_10 = arg2
            var_14 = arg1 + 0x13e
            
            while (*(arg1 + 0x13a) s> k)
                void* ebx_1 = *var_14
                
                if (*(ebx_1 + 0x30) != 0)
                    var_18 = *(*(arg1 + 0x1b2) + (*(ebx_1 + 4) << 2) + 4)
                    int32_t eax_16
                    
                    if (j u>= eax_2)
                        eax_16 = *(ebx_1 + 0x44)
                    else
                        eax_16 = *(ebx_1 + 0x34)
                    
                    var_24 = eax_16
                    var_20 = *var_10 + ((i * *(ebx_1 + 0x24)) << 2)
                    var_1c = j * *(ebx_1 + 0x40)
                    
                    for (var_2c = 0; var_2c s< *(ebx_1 + 0x38); var_2c += 1)
                        if (*(arg1 + 0x90) u< ecx_2 || i + var_2c s< *(ebx_1 + 0x48))
                            int32_t edi_1 = var_1c
                            int32_t esi_1 = 0
                            
                            if (0 s< var_24)
                                do
                                    *(edx + ((var_34 + esi_1) << 2) + 0x20)
                                    var_18(edi_1, var_20)
                                    edi_1 += *(ebx_1 + 0x24)
                                    esi_1 += 1
                                while (esi_1 s< var_24)
                        
                        var_34 += *(ebx_1 + 0x34)
                        var_20 += *(ebx_1 + 0x24) << 2
                else
                    var_34 += *(ebx_1 + 0x3c)
                
                k += 1
                var_10 = &var_10[1]
                var_14 += 4
        
        *(edx + 0x14) = 0
    
    *(arg1 + 0x98) += 1
    *(arg1 + 0x90) += 1
    
    if (*(arg1 + 0x90) u>= *(arg1 + 0x132))
        (*(*(arg1 + 0x1a6) + 0xc))(arg1, arg2, edx, j, eax_2, ecx_2, var_34, k, var_2c, i, var_24, 
            var_20, var_1c, var_18, var_14, var_10)
        return 4
    
    sub_45b5d4(arg1)
    return 3
}
