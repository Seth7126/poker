// ============================================================
// 函数名称: sub_45f460
// 虚拟地址: 0x45f460
// WARP GUID: 298b3cd7-ee7a-5b75-83e6-57b51972faae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45340c, sub_46032c
// [被调用的父级函数]: sub_45fd34
// ============================================================

int32_t __convention("regparm")sub_45f460(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[5]
    int32_t* eax = arg1[5]
    int32_t esi = eax[1]
    char* ebx = *eax
    
    if (esi == 0)
        if (eax[3]() == 0)
            return 0
        
        esi = eax[1]
        ebx = *eax
    
    int32_t esi_1 = esi - 1
    int32_t eax_6
    eax_6.b = *ebx
    void* ebx_1 = &ebx[1]
    int32_t eax_7 = eax_6 << 8
    
    if (esi_1 == 0)
        if (eax[3](eax_7) == 0)
            return 0
        
        esi_1 = eax[1]
        ebx_1 = *eax
    
    int32_t esi_2 = esi_1 - 1
    int32_t eax_11
    eax_11.b = *ebx_1
    void* ebx_2 = ebx_1 + 1
    int32_t i = eax_7 + eax_11 - 2
    
    while (i s> 0)
        int32_t var_138
        int32_t var_134
        char* var_12c
        char* var_128
        
        if (esi_2 == 0)
            if (eax[3](i, var_138, var_134, eax, var_12c, var_128) == 0)
                return 0
            
            esi_2 = eax[1]
            ebx_2 = *eax
        
        esi_2 -= 1
        int32_t eax_15
        eax_15.b = *ebx_2
        ebx_2 += 1
        var_138 = eax_15
        void* eax_16 = *arg1
        *(eax_16 + 0x14) = 0x4f
        *(eax_16 + 0x18) = var_138
        (*(*arg1 + 4))(i, var_138, var_134, eax, var_12c, var_128)
        char var_124 = 0
        int32_t j = 1
        var_134 = 0
        char var_123
        var_12c = &var_123
        
        do
            if (esi_2 == 0)
                if (eax[3]() == 0)
                    return 0
                
                esi_2 = *(eax + 4)
                ebx_2 = *eax
            
            char* eax_18
            eax_18.b = *ebx_2
            ebx_2 += 1
            int32_t ecx_2
            ecx_2.b = eax_18.b
            *var_12c = eax_18.b
            var_134 += ecx_2
            var_12c = &var_12c[1]
            esi_2 -= 1
            j += 1
        while (j s<= 0x10)
        
        int32_t* eax_22 = *arg1 + 0x18
        int32_t edx_12
        edx_12.b = var_123
        *eax_22 = edx_12
        char var_122
        int32_t ecx_3
        ecx_3.b = var_122
        eax_22[1] = ecx_3
        char var_121
        int32_t edx_13
        edx_13.b = var_121
        eax_22[2] = edx_13
        char var_120
        int32_t ecx_4
        ecx_4.b = var_120
        eax_22[3] = ecx_4
        char var_11f
        int32_t edx_14
        edx_14.b = var_11f
        eax_22[4] = edx_14
        char var_11e
        int32_t ecx_5
        ecx_5.b = var_11e
        eax_22[5] = ecx_5
        char var_11d
        int32_t edx_15
        edx_15.b = var_11d
        eax_22[6] = edx_15
        char var_11c
        int32_t ecx_6
        ecx_6.b = var_11c
        eax_22[7] = ecx_6
        *(*arg1 + 0x14) = 0x55
        (*(*arg1 + 4))(i - 0x11)
        int32_t* eax_26 = *arg1 + 0x18
        char var_11b
        int32_t edx_17
        edx_17.b = var_11b
        *eax_26 = edx_17
        char var_11a
        int32_t ecx_8
        ecx_8.b = var_11a
        eax_26[1] = ecx_8
        char var_119
        int32_t edx_18
        edx_18.b = var_119
        eax_26[2] = edx_18
        char var_118
        int32_t ecx_9
        ecx_9.b = var_118
        eax_26[3] = ecx_9
        char var_117
        int32_t edx_19
        edx_19.b = var_117
        eax_26[4] = edx_19
        char var_116
        int32_t ecx_10
        ecx_10.b = var_116
        eax_26[5] = ecx_10
        char var_115
        int32_t edx_20
        edx_20.b = var_115
        eax_26[6] = edx_20
        char var_114
        int32_t ecx_11
        ecx_11.b = var_114
        eax_26[7] = ecx_11
        *(*arg1 + 0x14) = 0x55
        (*(*arg1 + 4))()
        
        if (var_134 s> 0x100 || var_134 s> i - 0x11)
            *(*arg1 + 0x14) = 0x1c
            (**arg1)()
        
        int32_t ebp_1 = 0
        void var_110
        var_128 = &var_110
        
        if (0 s< var_134)
            do
                if (esi_2 == 0)
                    if (eax[3]() == 0)
                        return 0
                    
                    esi_2 = eax[1]
                    ebx_2 = *eax
                
                esi_2 -= 1
                int32_t* edx_22
                edx_22.b = *ebx_2
                *var_128 = edx_22.b
                ebx_2 += 1
                ebp_1 += 1
                var_128 = &var_128[1]
            while (ebp_1 s< var_134)
        
        i = i - 0x11 - var_134
        void** ebp_5
        
        if ((var_138.b & 0x10) == 0)
            ebp_5 = &arg1[var_138 + 0x2c]
        else
            var_138 -= 0x10
            ebp_5 = &arg1[var_138 + 0x30]
        
        if (var_138 s< 0 || var_138 s>= 4)
            void* eax_35 = *arg1
            *(eax_35 + 0x14) = 0x1d
            *(eax_35 + 0x18) = var_138
            (**arg1)(i, var_138, var_134)
        
        if (*ebp_5 == 0)
            *ebp_5 = sub_46032c(arg1)
        
        sub_45340c(*ebp_5, &var_124, 0x11)
        sub_45340c(*ebp_5 + 0x11, &var_110, 0x100)
    
    *eax = ebx_2
    eax[1] = esi_2
    return 1
}
