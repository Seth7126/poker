// ============================================================
// 函数名称: sub_462d80
// 虚拟地址: 0x462d80
// WARP GUID: 4586b837-313b-53a2-9a90-7f6ff4c5d31d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_462ca0, sub_4533f4
// [被调用的父级函数]: sub_462cec
// ============================================================

int32_t __convention("regparm")sub_462d80(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x14d)
    void* esi = *(arg1 + 0x14d)
    int32_t edx_1 = *(arg1 + 0xfd) - 1
    int32_t eax_3 = *(arg1 + 0xe5) - 1
    
    for (int32_t i = *(esi + 0x10); *(esi + 0x14) s> i; i += 1)
        for (int32_t j = *(esi + 0xc); j u<= edx_1; j += 1)
            int32_t var_34_1 = 0
            int32_t k = 0
            int32_t* var_10_1 = arg2
            void* var_18_1 = arg1 + 0xed
            int32_t var_2c
            int32_t var_24
            int32_t var_20
            int32_t var_1c
            int32_t* var_14
            
            while (*(arg1 + 0xe9) s> k)
                void* ebx_1 = *var_18_1
                int32_t edx_5
                
                if (j u>= edx_1)
                    edx_5 = *(ebx_1 + 0x44)
                else
                    edx_5 = *(ebx_1 + 0x34)
                
                var_24 = edx_5
                var_1c = j * *(ebx_1 + 0x40)
                var_20 = i << 3
                var_2c = 0
                var_14 = var_10_1
                
                for (; var_2c s< *(ebx_1 + 0x38); var_2c += 1)
                    if (*(esi + 8) u< eax_3 || i + var_2c s< *(ebx_1 + 0x48))
                        *var_14
                        (*(*(arg1 + 0x15d) + 4))(var_24, var_1c, var_20, 
                            *(esi + (var_34_1 << 2) + 0x18))
                        int32_t eax_14 = *(ebx_1 + 0x34)
                        
                        if (eax_14 s> var_24)
                            sub_4533f4(*(esi + ((var_34_1 + var_24) << 2) + 0x18), 0, 
                                (eax_14 - var_24) << 7)
                            int32_t eax_17 = var_24
                            
                            while (eax_17 s< *(ebx_1 + 0x34))
                                int32_t edx_15 = var_34_1 + eax_17
                                eax_17 += 1
                                int16_t* ecx_10
                                ecx_10.w = **(esi + (edx_15 << 2) + 0x14)
                                **(esi + (edx_15 << 2) + 0x18) = ecx_10.w
                    else
                        sub_4533f4(*(esi + (var_34_1 << 2) + 0x18), 0, *(ebx_1 + 0x34) << 7)
                        int32_t eax_21 = 0
                        
                        while (eax_21 s< *(ebx_1 + 0x34))
                            int32_t ecx_12 = var_34_1 + eax_21
                            eax_21 += 1
                            int16_t* edi_2
                            edi_2.w = **(esi + (var_34_1 << 2) + 0x14)
                            **(esi + (ecx_12 << 2) + 0x18) = edi_2.w
                    
                    var_34_1 += *(ebx_1 + 0x34)
                    var_20 += 8
                
                k += 1
                var_10_1 = &var_10_1[1]
                var_18_1 += 4
            
            if ((*(*(arg1 + 0x161) + 4))(arg1, arg2, j, edx_1, eax_3, var_34_1, k, var_2c, i, var_24, 
                    var_20, var_1c, var_18_1, var_14, var_10_1) == 0)
                *(esi + 0x10) = i
                *(esi + 0xc) = j
                return 0
        
        *(esi + 0xc) = 0
    
    *(esi + 8) += 1
    sub_462ca0(arg1)
    return 1
}
