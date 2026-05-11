// ============================================================
// 函数名称: sub_4cc004
// 虚拟地址: 0x4cc004
// WARP GUID: ef76eec4-2772-5361-82a1-2548c30dea48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c1120, sub_403010
// [被调用的父级函数]: sub_52452c
// ============================================================

void* __convention("regparm")sub_4cc004(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_24 = ebx
    sub_4c1120()
    int32_t i_2 = 0xa
    void* eax = arg1
    int32_t i
    
    do
        ebx.b = 7
        int16_t* edx_1 = eax
        char j
        
        do
            *edx_1 = 0
            edx_1 = &edx_1[1]
            j = ebx.b
            ebx.b -= 1
        while (j != 1)
        eax += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t i_3 = 0xa
    void* result_1 = &data_536440
    void* var_1c = arg1
    void* result
    int32_t i_1
    
    do
        ebx.b = 7
        void* result_2 = result_1
        void* ecx_1 = var_1c
        void* var_20_1 = arg1
        char j_1
        
        do
            int32_t k_2 = *result_2
            
            if (add_overflow(k_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (k_2 - 1 s>= 0)
                int32_t k_1 = k_2
                void* eax_7 = result_2 - 0x34b8
                int32_t k
                
                do
                    if (*eax_7 == 1)
                        int16_t temp4_1 = *ecx_1
                        *ecx_1 += 1
                        
                        if (add_overflow(temp4_1, 1))
                            sub_403010()
                            noreturn
                    else if (*eax_7 == 0)
                        *(eax_7 + 4)
                        bool o_3 = unimplemented  {imul esi, dword [eax+0x4], 0x2}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        int32_t esi_3 = zx.d(*(data_61c0d0 + *(eax_7 + 4) * 0x10 + 0x15)) * 2
                        bool o_4 = unimplemented  {imul esi, dword [ebp-0xc], 0x2}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        int16_t temp9_1 = *(var_20_1 + (esi_3 << 3) - 0x10)
                        *(var_20_1 + (esi_3 << 3) - 0x10) += 1
                        
                        if (add_overflow(temp9_1, 1))
                            sub_403010()
                            noreturn
                    
                    eax_7 += 0x50
                    k = k_1
                    k_1 -= 1
                while (k != 1)
            
            var_20_1 += 2
            ecx_1 += 2
            result_2 += 0x353c
            j_1 = ebx.b
            ebx.b -= 1
        while (j_1 != 1)
        *(var_1c + 0xe) = 0
        *(var_1c + 0xf) = 0
        
        if (*(result_1 + 0x13f68) s> 0)
            void* eax_11
            eax_11.w = *(result_1 + 0x10aa0)
            *(var_1c + 0xe) = eax_11.b
        
        result = result_1
        
        if (*(result + 0x13f68) s> 1)
            result.w = *(result_1 + 0x10af0)
            *(var_1c + 0xf) = result.b
        
        var_1c += 0x10
        result_1 += 0x174e0
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    return result
}
