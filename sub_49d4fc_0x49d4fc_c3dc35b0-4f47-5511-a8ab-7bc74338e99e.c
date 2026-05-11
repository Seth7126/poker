// ============================================================
// 函数名称: sub_49d4fc
// 虚拟地址: 0x49d4fc
// WARP GUID: c3dc35b0-4f47-5511-a8ab-7bc74338e99e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409e74, sub_403e4c, sub_403e1c, sub_404280, sub_403010, sub_404308, sub_408b34, sub_403e90, sub_404078, sub_404188, sub_409c9c, sub_49e0e8, sub_408ebc, sub_49d3ec, sub_403df8, sub_49df54, sub_49d474, sub_408b84, sub_49e1e0
// [被调用的父级函数]: sub_49e52c
// ============================================================

void* __convention("regparm")sub_49d4fc(void** arg1, int32_t arg2 @ esi, int32_t arg3 @ edi, long double arg4 @ st0, long double arg5 @ st1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_1 = 9
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_1
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    int32_t var_1c = 0
    int32_t var_18 = 0
    char* var_28
    sub_408b34(*arg1, &var_28)
    sub_403e4c(arg1, var_28)
    
    if (sub_404078(*arg1) != 0)
        *(esp_9 - 4) = &var_4
        *(esp_9 - 8) = j_sub_40353c
        *(esp_9 - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_9 - 0xc
        void* var_2c
        *(esp_9 - 0x10) = &var_2c
        sub_404280(3, 1, *arg1)
        void* esp_14 = esp_9 - 0xc
        char eax_6 = sub_49e0e8(var_2c)
        
        if (eax_6 u> 0)
            void* var_30
            *(esp_14 - 4) = &var_30
            sub_404280(1, 4, *arg1)
            sub_404188(var_30, 0x49d818)
            
            if (eax_6 == 0)
                void* var_34
                *(esp_14 - 4) = &var_34
                sub_404280(1, 5, *arg1)
                sub_404188(var_34, &data_49d824)
                
                if (eax_6 != 0)
                    sub_404308(&data_49d824, arg1, 5)
            
            *(esp_14 - 4) = 1
            void var_38
            *(esp_14 - 8) = &var_38
            int32_t ecx_2
            ecx_2.b = 1
            sub_49df54(ecx_2, &data_49d824, arg1)
            esp_14 = esp_14
            char* var_3c
            sub_408b84(*arg1, &var_3c)
            sub_403e4c(arg1, var_3c)
        
        *arg1
        int32_t eax_15 = data_52fba0()
        int32_t eax_18
        int32_t eax_20
        
        if (eax_15 s> 1)
            *arg1
            eax_18 = data_52fba0()
            *arg1
            eax_20 = data_52fba0()
        
        int32_t var_c
        
        if (eax_15 s<= 1 || eax_18 s>= eax_20)
            sub_403e90(&var_c, &data_49d824)
        else
            sub_403e90(&var_c, &data_49d830)
        
        *(esp_14 + 0x1c) = 1
        void* var_40
        *(esp_14 + 0x18) = &var_40
        sub_49df54(0, var_c, arg1)
        void* esp_27
        void* ebp_3
        
        if (sub_49e1e0(var_40) u<= 0)
            *(esp_14 + 0x1c) = &var_4
            int32_t ebp_4 = sub_49d3ec()
            *(esp_14 + 0x1c)
            *(esp_14 + 0x1c) = ebp_4
            ebp_3 = sub_49d474()
            *(esp_14 + 0x1c)
            esp_27 = esp_14 + 0x20
        else
            *(esp_14 + 0x1c) = &var_4
            int32_t ebp_2 = sub_49d474()
            *(esp_14 + 0x1c)
            *(esp_14 + 0x1c) = ebp_2
            ebp_3 = sub_49d3ec()
            *(esp_14 + 0x1c)
            esp_27 = esp_14 + 0x20
        
        *(esp_27 - 4) = 1
        *(esp_27 - 8) = ebp_3 - 0x20
        int32_t ecx_6
        ecx_6.b = 1
        int32_t ecx_8 = sub_49df54(ecx_6, &data_49d824, arg1)
        *(ebp_3 - 0x20)
        int16_t eax_29
        int32_t ecx_9
        eax_29, ecx_9 = sub_408ebc(ecx_8, 0x76c)
        int16_t ebx_1 = eax_29
        
        if (ebx_1 == 0x76c)
            *arg1
            ebx_1 = sub_408ebc(ecx_9, 0x76c)
            sub_403e4c(arg1, *(ebp_3 - 0x20))
        
        if (ebx_1 u< 0x50)
            int16_t temp3_1 = ebx_1
            ebx_1 += 0x7d0
            
            if (temp3_1 u>= 0xf830)
                sub_403010()
                noreturn
        else if (ebx_1 u< 0x64)
            int16_t temp4_1 = ebx_1
            ebx_1 += 0x76c
            
            if (temp4_1 u>= 0xf894)
                sub_403010()
                noreturn
        
        ecx_9.w = *(ebp_3 - 0xa)
        int32_t* esi_1
        ebp_1, esi_1 = sub_409e74(ebx_1, *(ebp_3 - 0xc), ecx_9.w)
        *(ebp_1 - 0x18) = fconvert.d(arg4)
        *esi_1
        int32_t eax_35
        int32_t ecx_10
        eax_35, ecx_10 = data_52fba0()
        
        if (eax_35 s> 0)
            *(esp_27 - 4) = 1
            *(esp_27 - 8) = &ebp_1[-8]
            ecx_10.b = 1
            sub_49df54(ecx_10, &data_49d824, esi_1)
            *(esp_27 - 4) = 1
            *(esp_27 - 8) = &ebp_1[-0x10]
            int32_t ecx_11
            ecx_11.b = 1
            int32_t ecx_12 = sub_49df54(ecx_11, &data_49d83c, &ebp_1[-8])
            ebp_1[-0x10]
            int32_t eax_41
            int32_t ecx_13
            eax_41, ecx_13 = sub_408ebc(ecx_12, 0)
            *(esp_27 - 4) = 1
            *(esp_27 - 8) = &ebp_1[-0x11]
            ecx_13.b = 1
            int32_t ecx_14 = sub_49df54(ecx_13, &data_49d83c, &ebp_1[-8])
            ebp_1[-0x11]
            int32_t eax_45
            int32_t ecx_15
            eax_45, ecx_15 = sub_408ebc(ecx_14, 0)
            *(esp_27 - 4) = 1
            *(esp_27 - 8) = &ebp_1[-0x12]
            ecx_15.b = 1
            int32_t ecx_16 = sub_49df54(ecx_15, &data_49d824, &ebp_1[-8])
            ebp_1[-0x12]
            int16_t eax_49
            int32_t ecx_17
            eax_49, ecx_17 = sub_408ebc(ecx_16, 0)
            *(ebp_1 - 0x1a) = eax_49
            *(esp_27 - 4) = 0
            ecx_17.w = *(ebp_1 - 0x1a)
            ebp_1, esi_1 = sub_409c9c(eax_41, eax_45, ecx_17)
            *(ebp_1 - 0x18) = fconvert.d(arg5 + fconvert.t(*(ebp_1 - 0x18)))
        
        sub_408b84(*esi_1, &ebp_1[-0x13])
        sub_403e4c(esi_1, ebp_1[-0x13])
        *(esp_27 + 8)
        esp_9 = esp_27 + 0xc
        fsbase->NtTib.ExceptionList = *esp_27
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_49d803
    sub_403e1c(&ebp_1[-0x13], 0xc)
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
