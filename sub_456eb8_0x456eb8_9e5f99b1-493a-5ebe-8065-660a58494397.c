// ============================================================
// 函数名称: sub_456eb8
// 虚拟地址: 0x456eb8
// WARP GUID: 9e5f99b1-493a-5ebe-8065-660a58494397
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_457dbc, sub_457cac, sub_456e4c
// [被调用的父级函数]: sub_456ba8
// ============================================================

int32_t __convention("regparm")sub_456eb8(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x1ae)
    void* eax = *(arg1 + 0x1ae)
    char edx = (*(arg1 + 0x18e)).b
    
    if (*(arg1 + 0x110) != 0 && *(eax + 0x28) == 0 && sub_456e4c(arg1) == 0)
        return 0
    
    void* var_2c_1 = arg1
    int32_t* eax_4 = *(arg1 + 0x14)
    int32_t var_40 = *eax_4
    int32_t ecx_2 = eax_4[1]
    int32_t var_38 = *(arg1 + 0x192)
    int32_t esi_1 = *(eax + 0xc)
    int32_t edi_1 = *(eax + 8)
    void* var_28_1 = eax + 0x10
    void var_24
    __builtin_memcpy(&var_24, eax + 0x14, 0x14)
    int32_t edi_2 = edi_1
    int32_t esi_3 = esi_1
    int32_t i = 0
    void* var_44_1 = arg1 + 0x15a
    int32_t* var_48_1 = arg2
    
    while (*(arg1 + 0x156) s> i)
        int16_t* edx_5 = *var_48_1
        int32_t eax_10 = *var_44_1
        void* eax_12 = *(eax + (*(*(arg1 + (eax_10 << 2) + 0x13e) + 0x14) << 2) + 0x2c)
        int32_t var_4c_1
        int32_t var_34
        int32_t var_30
        
        if (esi_3 s< 8)
            if (sub_457cac(esi_3, edi_2, &var_40, 0) == 0)
                return 0
            
            edi_2 = var_34
            esi_3 = var_30
            
            if (esi_3 s>= 8)
                goto label_456fc8
            
            var_4c_1 = 1
            goto label_45700d
        
    label_456fc8:
        uint32_t eax_17 = zx.d((edi_2 s>> (esi_3.b - 8)).b)
        int32_t edx_10 = *(eax_12 + (eax_17 << 2) + 0xd4)
        uint32_t ebx_1
        
        if (edx_10 == 0)
            var_4c_1 = 9
        label_45700d:
            uint32_t eax_20 = sub_457dbc(esi_3, edi_2, &var_40, var_4c_1, eax_12)
            ebx_1 = eax_20
            
            if (eax_20 s< 0)
                return 0
            
            edi_2 = var_34
            esi_3 = var_30
        else
            esi_3 -= edx_10
            ebx_1.b = *(eax_12 + eax_17 + 0x4d4)
        
        if (ebx_1 != 0)
            if (ebx_1 s> esi_3)
                if (sub_457cac(esi_3, edi_2, &var_40, ebx_1) == 0)
                    return 0
                
                edi_2 = var_34
                esi_3 = var_30
            
            esi_3 -= ebx_1
            uint32_t eax_25 = edi_2 s>> esi_3.b & ((1 << ebx_1.b) - 1)
            uint32_t edx_17
            
            if (eax_25 s>= *((ebx_1 << 2) + &data_52ec04))
                edx_17 = eax_25
            else
                edx_17 = *((ebx_1 << 2) + &data_52ec44) + eax_25
            
            ebx_1 = edx_17
        
        int32_t var_20[0x4]
        int32_t ebx_2 = ebx_1 + var_20[eax_10]
        var_20[eax_10] = ebx_2
        ebx_2.w <<= edx
        *edx_5 = ebx_2.w
        i += 1
        var_44_1 += 4
        var_48_1 = &var_48_1[1]
    
    int32_t* eax_28 = *(arg1 + 0x14)
    *eax_28 = var_40
    eax_28[1] = ecx_2
    *(arg1 + 0x192) = var_38
    *(eax + 8) = edi_2
    *(eax + 0xc) = esi_3
    __builtin_memcpy(eax + 0x14, &var_24, 0x14)
    *(eax + 0x28) -= 1
    return 1
}
