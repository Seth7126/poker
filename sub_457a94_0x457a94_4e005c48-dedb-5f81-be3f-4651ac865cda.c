// ============================================================
// 函数名称: sub_457a94
// 虚拟地址: 0x457a94
// WARP GUID: 4e005c48-dedb-5f81-be3f-4651ac865cda
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4533f4
// [被调用的父级函数]: sub_456ba8, sub_457974
// ============================================================

void* __convention("regparm")sub_457a94(void* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* var_534 = arg2
    void* var_534 = arg2
    
    if (*arg3 == 0)
        *arg3 = (**(arg1 + 4))()
    
    int32_t eax_2 = *arg3
    int32_t i = 1
    *(eax_2 + 0xd0) = var_534
    int32_t var_52c = 0
    char* ecx_2 = var_534 + 1
    char var_514[0x100]
    
    do
        int32_t var_528_1 = 1
        void* eax_4 = &var_514[var_52c]
        
        while (true)
            int32_t ebx_2
            ebx_2.b = *ecx_2
            
            if (ebx_2 s< var_528_1)
                break
            
            *eax_4 = i.b
            var_52c += 1
            eax_4 += 1
            var_528_1 += 1
        
        i += 1
        ecx_2 = &ecx_2[1]
    while (i s<= 0x10)
    
    int32_t ecx_3 = 0
    var_514[var_52c] = 0
    int32_t i_1 = sx.d(var_514[0])
    int32_t var_52c_1 = 0
    
    while (var_514[var_52c_1] != 0)
        void* eax_7 = &var_514[var_52c_1]
        void* edx_5 = &(&var_534)[var_52c_1 + 0x49]
        
        while (i_1 == sx.d(*eax_7))
            *edx_5 = ecx_3
            edx_5 += 4
            var_52c_1 += 1
            eax_7 += 1
            ecx_3 += 1
        
        ecx_3 *= 2
        i_1 += 1
    
    int32_t i_2 = 1
    int32_t var_52c_2 = 0
    int32_t* eax_10 = eax_2 + 0x90
    char* edx_7 = var_534 + 1
    
    do
        if (*edx_7 == 0)
            eax_10[-0x12] = 0xffffffff
        else
            *eax_10 = var_52c_2
            int32_t var_410[0x101]
            eax_10[-0x23] = var_410[var_52c_2]
            int32_t ecx_7
            ecx_7.b = *edx_7
            var_52c_2 += ecx_7
            void var_414
            eax_10[-0x12] = *(&var_414 + (var_52c_2 << 2))
        
        i_2 += 1
        eax_10 = &eax_10[1]
        edx_7 = &edx_7[1]
    while (i_2 s<= 0x10)
    
    *(eax_2 + 0x88) = 0xfffff
    sub_4533f4(eax_2 + 0xd4, 0, 0x400)
    int32_t var_52c_3 = 0
    int32_t i_3 = 1
    void* result_1 = var_534 + 1
    void* result
    
    do
        int32_t var_528_2 = 1
        void* var_51c_1 = var_534 + var_52c_3 + 0x11
        void* var_520_1 = &(&var_534)[var_52c_3 + 0x49]
        
        while (true)
            result = result_1
            int32_t edx_17
            edx_17.b = *result
            
            if (edx_17 s< var_528_2)
                break
            
            int32_t eax_17 = *var_520_1 << (8 - i_3.b)
            int32_t j = 1 << (8 - i_3.b)
            char* edx_16 = eax_2 + eax_17 + 0x4d4
            int32_t* eax_18 = eax_2 + (eax_17 << 2) + 0xd4
            
            while (j s> 0)
                *eax_18 = i_3
                eax_18 = &eax_18[1]
                int32_t ebx_4
                ebx_4.b = *var_51c_1
                j -= 1
                *edx_16 = ebx_4.b
                edx_16 = &edx_16[1]
            
            var_528_2 += 1
            var_520_1 += 4
            var_51c_1 += 1
            var_52c_3 += 1
        
        i_3 += 1
        result_1 += 1
    while (i_3 s<= 8)
    
    return result
}
