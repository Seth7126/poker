// ============================================================
// 函数名称: sub_5289d0
// 虚拟地址: 0x5289d0
// WARP GUID: 03aae331-623a-5f23-a3e5-9a6a848fbdc3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5285a8, sub_403010
// [被调用的父级函数]: sub_528e43, sub_528b98, sub_528538, sub_528e4c
// ============================================================

int32_t __convention("regparm")sub_5289d0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t edx
    int32_t var_8 = edx
    int32_t var_c = 0
    int32_t* ebp_1 = sub_5285a8(arg1, 0)
    int32_t eax_1 = *(arg1 + 0xbefc)
    
    if (eax_1 s>= 0)
        ebp_1[-3] = eax_1 + 1
        int32_t edx_1 = 0
        int32_t i
        
        do
            int32_t eax_3 = edx_1 * 0x112
            bool o_1 = unimplemented  {imul eax, edx, 0x112}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + (eax_3 << 3) + 0x13b4) != 0)
                int32_t eax_4 = *(arg1 + (eax_3 << 3) + 0x13ac)
                
                if (eax_4 s> 0)
                    ebp_1[-4] = eax_4
                    int32_t eax_5 = 1
                    int32_t j
                    
                    do
                        bool o_2 = unimplemented  {imul esi, eax, 0x22}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 + (eax_3 << 3) + 0xb2c + eax_5 * 0x110 - 4) != 0)
                            ebp_1[ebp_1[-2] - 0xcd] = edx_1
                            ebp_1[ebp_1[-2] - 0x196] = eax_5
                            int32_t temp7_1 = ebp_1[-2]
                            ebp_1[-2] += 1
                            
                            if (add_overflow(temp7_1, 1))
                                sub_403010()
                                noreturn
                        
                        eax_5 += 1
                        j = ebp_1[-4]
                        ebp_1[-4] -= 1
                    while (j != 1)
            
            edx_1 += 1
            i = ebp_1[-3]
            ebp_1[-3] -= 1
        while (i != 1)
    
    int32_t eax_6 = ebp_1[-2]
    
    if (add_overflow(eax_6, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_6 - 1 s>= 0)
        ebp_1[-3] = eax_6
        int32_t i_1
        
        do
            int32_t eax_9 = ebp_1[-2]
            
            if (add_overflow(eax_9, 0xfffffffe))
                sub_403010()
                noreturn
            
            if (eax_9 - 2 s>= 0)
                ebp_1[-4] = eax_9 - 1
                void* eax_12 = &ebp_1[-0xcd]
                void* edx_2 = &ebp_1[-0x196]
                int32_t j_1
                
                do
                    *eax_12
                    bool o_6 = unimplemented  {imul ecx, dword [eax], 0x112}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    *edx_2
                    bool o_7 = unimplemented  {imul esi, dword [edx], 0x22}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    *(eax_12 + 4)
                    bool o_8 = unimplemented  {imul esi, dword [eax+0x4], 0x112}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    *(edx_2 + 4)
                    bool o_9 = unimplemented  {imul edi, dword [edx+0x4], 0x22}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + *eax_12 * 0x890 + *edx_2 * 0x110 + 0xa1c)
                        s< *(arg1 + *(eax_12 + 4) * 0x890 + *(edx_2 + 4) * 0x110 + 0xa1c))
                    label_528b3c:
                        int32_t ecx_9 = *(eax_12 + 4)
                        int32_t esi_10 = *(edx_2 + 4)
                        *(eax_12 + 4) = *eax_12
                        *(edx_2 + 4) = *edx_2
                        *eax_12 = ecx_9
                        *edx_2 = esi_10
                    else
                        *eax_12
                        bool o_10 = unimplemented  {imul ecx, dword [eax], 0x112}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        *edx_2
                        bool o_11 = unimplemented  {imul esi, dword [edx], 0x22}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        *(eax_12 + 4)
                        bool o_12 = unimplemented  {imul esi, dword [eax+0x4], 0x112}
                        
                        if (o_12)
                            sub_403010()
                            noreturn
                        
                        *(edx_2 + 4)
                        bool o_13 = unimplemented  {imul edi, dword [edx+0x4], 0x22}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        if (*(arg1 + *eax_12 * 0x890 + *edx_2 * 0x110 + 0xa1c)
                                == *(arg1 + *(eax_12 + 4) * 0x890 + *(edx_2 + 4) * 0x110 + 0xa1c)
                                && *(eax_12 + 4) s> *eax_12)
                            goto label_528b3c
                    
                    edx_2 += 4
                    eax_12 += 4
                    j_1 = ebp_1[-4]
                    ebp_1[-4] -= 1
                while (j_1 != 1)
            
            i_1 = ebp_1[-3]
            ebp_1[-3] -= 1
        while (i_1 != 1)
    
    __builtin_memcpy(ebp_1[-1], &ebp_1[-0xcd], 0x324)
    int32_t result = ebp_1[-1]
    __builtin_memcpy(result + 0x324, &ebp_1[-0x196], 0x324)
    *ebp_1
    return result
}
