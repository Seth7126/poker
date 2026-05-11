// ============================================================
// 函数名称: sub_45f0f4
// 虚拟地址: 0x45f0f4
// WARP GUID: a2865e19-aaf5-51c3-bd9c-cf99d44a4ec5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4601e8
// ============================================================

int32_t __convention("regparm")sub_45f0f4(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1[5]
    int32_t* edi = arg1[5]
    char* ebx = *edi
    int32_t esi = edi[1]
    
    if (esi == 0)
        if (edi[3]() == 0)
            return 0
        
        ebx = *edi
        esi = edi[1]
    
    int32_t esi_1 = esi - 1
    int32_t eax_3
    eax_3.b = *ebx
    void* ebx_1 = &ebx[1]
    int32_t eax_4 = eax_3 << 8
    
    if (esi_1 == 0)
        if (edi[3](eax_4) == 0)
            return 0
        
        ebx_1 = *edi
        esi_1 = edi[1]
    
    int32_t esi_2 = esi_1 - 1
    int32_t eax_7
    eax_7.b = *ebx_1
    void* ebx_2 = ebx_1 + 1
    int32_t var_38_3 = eax_4 + eax_7 - 2
    int32_t i
    int32_t var_30
    int32_t var_2c
    int32_t var_28
    int32_t var_24
    char* var_20
    
    if (var_38_3 s< 0xc)
        void* eax_22 = *arg1
        *(eax_22 + 0x14) = 0x4d
        *(eax_22 + 0x18) = var_38_3
        (*(*arg1 + 4))(var_38_3)
    else
        i = 0
        char var_1c
        var_20 = &var_1c
        
        do
            if (esi_2 == 0)
                if (edi[3](var_38_3, i) == 0)
                    return 0
                
                ebx_2 = *edi
                esi_2 = edi[1]
            
            esi_2 -= 1
            *var_20 = *ebx_2
            ebx_2 += 1
            i += 1
            var_20 = &var_20[1]
        while (i s< 0xc)
        
        var_38_3 -= 0xc
        char var_1b
        char var_1a
        char var_19
        char var_18
        
        if (var_1c != 0x41 || var_1b != 0x64 || var_1a != 0x6f || var_19 != 0x62 || var_18 != 0x65)
            void* eax_20 = *arg1
            *(eax_20 + 0x14) = 0x4d
            *(eax_20 + 0x18) = var_38_3 + 0xc
            (*(*arg1 + 4))(var_38_3, i)
        else
            char var_17
            int32_t ecx_1
            ecx_1.b = var_17
            char var_16
            int32_t eax_11
            eax_11.b = var_16
            var_30 = (ecx_1 << 8) + eax_11
            char var_15
            int32_t edx_2
            edx_2.b = var_15
            char var_14
            int32_t ecx_4
            ecx_4.b = var_14
            var_2c = (edx_2 << 8) + ecx_4
            char var_13
            int32_t eax_12
            eax_12.b = var_13
            char var_12
            int32_t edx_5
            edx_5.b = var_12
            var_28 = (eax_12 << 8) + edx_5
            char var_11
            int32_t ecx_5
            ecx_5.b = var_11
            var_24 = ecx_5
            int32_t* eax_16 = *arg1 + 0x18
            *eax_16 = var_30
            eax_16[1] = var_2c
            eax_16[2] = var_28
            eax_16[3] = var_24
            *(*arg1 + 0x14) = 0x4b
            (*(*arg1 + 4))(var_38_3, i, var_30, var_2c, var_28, var_24, var_20)
            *(arg1 + 0x11d) = 1
            *(arg1 + 0x121) = var_24.b
    
    *edi = ebx_2
    edi[1] = esi_2
    
    if (var_38_3 s> 0)
        (*(arg1[5] + 0x10))(var_38_3, i, var_30, var_2c, var_28, var_24, var_20)
    
    return 1
}
