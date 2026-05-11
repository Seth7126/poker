// ============================================================
// 函数名称: sub_4a654c
// 虚拟地址: 0x4a654c
// WARP GUID: 05fbd086-ced5-51cf-8335-a97cfeb2528d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_402980, sub_404078, sub_40423c, sub_405ae8, sub_40b4b0, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4a653f, sub_4a6b54
// ============================================================

int32_t __convention("regparm")sub_4a654c(void* arg1, void* arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_2 = arg3
    int32_t* esp_1 = &i_2
    void* i_1 = 0x29
    void* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg4
    *(esp_1 - 0xc) = arg5
    void* i_4 = i_3
    i_2 = arg2
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x18
    char var_112
    
    if (*(arg1 + 0x60) != 0)
        var_112 = 2
    else
        var_112 = 0
    
    char var_11 = var_112
    char var_114 = 5
    char var_113 = 1
    uint32_t eax_1 = 1
    
    if (add_overflow(eax_1, 2))
        sub_403010()
        noreturn
    
    int32_t var_10 = eax_1 + 2
    (*(**(arg1 + 0x78) + 0x58))()
    *(esp_1 - 8) = &var_4
    *(esp_1 - 0xc) = j_sub_403668
    *(esp_1 - 0x10) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x10
    (*(**(arg1 + 0x78) + 0x54))()
    *(esp_1 - 8)
    void* esp_15 = esp_1 - 4
    fsbase->NtTib.ExceptionList = *(esp_1 - 0x10)
    
    if (var_113 == var_11 && var_113 != 0xff)
        if (*(arg1 + 0x60) == 1)
            var_114 = 1
            char eax_8 = sub_404078(*(arg1 + 0x70))
            
            if (sub_404078(*(arg1 + 0x70)) s> 0)
                *(esp_15 - 4) = sub_404078(*(arg1 + 0x70))
                sub_402980(sub_40423c(*(arg1 + 0x70)), &var_112, *(esp_15 - 4))
            
            int32_t eax_16 = sub_404078(*(arg1 + 0x70))
            
            if (add_overflow(2, eax_16))
                sub_403010()
                noreturn
            
            (&var_114)[2 + eax_16] = sub_404078(*(arg1 + 0x68))
            
            if (add_overflow(2 + eax_16, 1))
                sub_403010()
                noreturn
            
            if (sub_404078(*(arg1 + 0x68)) s> 0)
                *(esp_15 - 4) = sub_404078(*(arg1 + 0x68))
                sub_402980(sub_40423c(*(arg1 + 0x68)), &var_4 + eax_16 + 3 - 0x110, *(esp_15 - 4))
            
            if (add_overflow(eax_16 + 3, sub_404078(*(arg1 + 0x68))))
                sub_403010()
                noreturn
            
            (*(**(arg1 + 0x78) + 0x58))()
            *(esp_15 - 4) = &var_4
            *(esp_15 - 8) = j_sub_403668
            *(esp_15 - 0xc) = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = esp_15 - 0xc
            (*(**(arg1 + 0x78) + 0x54))()
            *(esp_15 - 4)
            fsbase->NtTib.ExceptionList = *(esp_15 - 0xc)
            
            if (eax_8 != 0)
                char* var_124
                sub_405ae8(data_53007c, &var_124)
                int32_t edx_7
                edx_7.b = 1
                sub_40b4b0(sub_498fba+0x8e, edx_7, var_124)
                sub_403828()
                noreturn
        
        var_114 = 5
        char var_113_2 = 1
        var_112 = 0
        char var_111 = 3
        char eax_31 = sub_404078(i_2)
        
        if (sub_404078(i_2) s> 0)
            *(esp_15 - 4) = sub_404078(i_2)
            void var_10f
            sub_402980(sub_40423c(i_2), &var_10f, *(esp_15 - 4))
        
        int32_t eax_39 = sub_404078(i_2)
        
        if (add_overflow(5, eax_39))
            sub_403010()
            noreturn
        
        int16_t var_14 = (*(**data_5308e0 + 0x34))()
        sub_402980(&var_14, &var_4 + 5 + eax_39 - 0x110, 2)
        
        if (add_overflow(5 + eax_39, 2))
            sub_403010()
            noreturn
        
        (*(**(arg1 + 0x78) + 0x58))()
        *(esp_15 - 4) = &var_4
        *(esp_15 - 8) = j_sub_40353c
        *(esp_15 - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_15 - 0xc
        (*(**(arg1 + 0x78) + 0x54))()
        *(esp_15 - 4)
        fsbase->NtTib.ExceptionList = *(esp_15 - 0xc)
        int32_t eax_46
        eax_46.b = var_113_2
        
        if (eax_46 u> 8)
            char* var_14c
            sub_405ae8(data_530684, &var_14c)
            int32_t edx_29
            edx_29.b = 1
            sub_40b4b0(sub_498ed0+0x48, edx_29, var_14c)
            sub_403828()
            noreturn
        
        switch (eax_46)
            case 0
                eax_46.b = var_111
                char temp8 = eax_46.b
                eax_46.b -= 1
                
                if (temp8 == 1)
                    var_10 = 6
                else
                    char temp9_1 = eax_46.b
                    eax_46.b -= 2
                    
                    if (temp9_1 == 2)
                        int32_t eax_56
                        eax_56.b = eax_31
                        
                        if (add_overflow(eax_56, 2))
                            sub_403010()
                            noreturn
                        
                        var_10 = eax_56 + 2
                    else
                        char temp12_1 = eax_46.b
                        eax_46.b -= 1
                        
                        if (temp12_1 == 1)
                            var_10 = 0x12
                
                *(esp_15 - 4) = &var_4
                *(esp_15 - 8) = j_sub_40353c
                *(esp_15 - 0xc) = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = esp_15 - 0xc
                
                if (add_overflow(var_10, 0xffffffff))
                    sub_403010()
                    noreturn
                
                (*(**(arg1 + 0x78) + 0x54))()
                *(esp_15 + 8)
                fsbase->NtTib.ExceptionList = *esp_15
                *(esp_15 + 0x14)
                fsbase->NtTib.ExceptionList = *(esp_15 + 0xc)
                *(esp_15 + 0x14) = sub_4a6b4c
                void var_150
                return sub_403e1c(&var_150, 0xf)
            case 1
                char* var_12c
                sub_405ae8(data_5302b8, &var_12c)
                int32_t edx_13
                edx_13.b = 1
                sub_40b4b0(sub_498fba+0xee, edx_13, var_12c)
                sub_403828()
                noreturn
            case 2
                char* var_130
                sub_405ae8(data_52ff88, &var_130)
                int32_t edx_15
                edx_15.b = 1
                sub_40b4b0(sub_498fba+0x156, edx_15, var_130)
                sub_403828()
                noreturn
            case 3
                char* var_134
                sub_405ae8(data_53008c, &var_134)
                int32_t edx_17
                edx_17.b = 1
                sub_40b4b0(sub_498fba+0x1c2, edx_17, var_134)
                sub_403828()
                noreturn
            case 4
                char* var_138
                sub_405ae8(data_5306d8, &var_138)
                int32_t edx_19
                edx_19.b = 1
                sub_40b4b0(sub_498fba+0x232, edx_19, var_138)
                sub_403828()
                noreturn
            case 5
                char* var_13c
                sub_405ae8(data_5302fc, &var_13c)
                int32_t edx_21
                edx_21.b = 1
                sub_40b4b0(sub_498fba+0x2a2, edx_21, var_13c)
                sub_403828()
                noreturn
            case 6
                char* var_140
                sub_405ae8(data_5303ac, &var_140)
                int32_t edx_23
                edx_23.b = 1
                sub_40b4b0(sub_498fba+0x316, edx_23, var_140)
                sub_403828()
                noreturn
            case 7
                char* var_144
                sub_405ae8(data_530178, &var_144)
                int32_t edx_25
                edx_25.b = 1
                sub_40b4b0(sub_498fba+0x382, edx_25, var_144)
                sub_403828()
                noreturn
            case 8
                char* var_148
                sub_405ae8(data_530930, &var_148)
                int32_t edx_27
                edx_27.b = 1
                sub_40b4b0(sub_498fba+0x3ea, edx_27, var_148)
                sub_403828()
                noreturn
    
    char* var_11c
    sub_405ae8(data_52fff0, &var_11c)
    int32_t edx_2
    edx_2.b = 1
    sub_40b4b0(sub_498fba+0x2a, edx_2, var_11c)
    sub_403828()
    noreturn
}
