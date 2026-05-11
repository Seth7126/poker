// ============================================================
// 函数名称: sub_459290
// 虚拟地址: 0x459290
// WARP GUID: 6c10ba5e-bcf7-5be7-ad24-905ac81ea884
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4590b8
// [被调用的父级函数]: sub_459a70, sub_459b60
// ============================================================

void* __convention("regparm")sub_459290(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x1be)
    void* edx = *(arg1 + 0x1be)
    int32_t var_18
    
    if (*(arg1 + 0x54) != 1)
        var_18 = 0
        *(edx + 0x1c) = 0
    else
        var_18 = 0x1fe
        *(edx + 0x1c) = 1
    
    *(edx + 0x18) = (*(*(arg1 + 4) + 8))(*(arg1 + 0x74))
    int32_t var_1c = *(edx + 0x14)
    int32_t i = 0
    void* var_14 = edx + 0x20
    
    while (i s< *(arg1 + 0x74))
        int32_t eax_6 = *var_14
        var_1c = divs.dp.d(sx.q(var_1c), eax_6)
        
        if (var_18 != 0)
            int32_t eax_10 = *(edx + 0x18)
            *(eax_10 + (i << 2)) += 0xff
        
        int32_t esi_1 = 0
        char* eax_11 = *(*(edx + 0x18) + (i << 2))
        int32_t k = sub_4590b8(0, eax_6 - 1)
        int32_t j = 0
        char* var_10_1 = eax_11
        
        do
            for (; k s< j; k = sub_4590b8(esi_1, eax_6 - 1))
                esi_1 += 1
            
            *var_10_1 = esi_1.b * var_1c.b
            j += 1
            var_10_1 = &var_10_1[1]
        while (j s<= 0xff)
        
        if (var_18 != 0)
            int32_t j_1 = 1
            char* eax_19 = &eax_11[0x100]
            
            do
                char* ecx_13 = &eax_11[neg.d(j_1)]
                j_1 += 1
                char* edx_15
                edx_15.b = *eax_11
                *ecx_13 = edx_15.b
                edx_15.b = eax_11[0xff]
                *eax_19 = edx_15.b
                eax_19 = &eax_19[1]
            while (j_1 s<= 0xff)
        
        i += 1
        var_14 += 4
    
    return arg1
}
