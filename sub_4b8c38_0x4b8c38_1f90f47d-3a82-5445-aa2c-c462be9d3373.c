// ============================================================
// 函数名称: sub_4b8c38
// 虚拟地址: 0x4b8c38
// WARP GUID: 1f90f47d-3a82-5445-aa2c-c462be9d3373
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_402b4c, sub_403e1c, sub_403010, sub_4babf8, sub_402d38, sub_402d20, sub_404080, sub_52b2f0, sub_4c2b98, sub_420b80, sub_4b86d0, sub_4cc6dc, sub_4b9e84, sub_408e1c, sub_4c2d18, sub_4b77e0, sub_4b8be4, sub_4b72e4
// [被调用的父级函数]: sub_4bdf6c
// ============================================================

int32_t __convention("regparm")sub_4b8c38(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_78 = ebx
    int32_t esi
    int32_t var_7c = esi
    int32_t edi
    int32_t var_80 = edi
    int32_t var_48 = 0
    int32_t var_4c = 0
    int32_t var_50 = 0
    char* ebx_1 = arg2
    void* esi_1 = data_5301f4
    int32_t* var_84 = &var_4
    int32_t (* var_88)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_36
    char var_35
    int16_t var_2a
    void* ebp_1
    int32_t* esi_2
    
    if (*(*esi_1 + 0x20094) != 1)
        data_532f3c
        void* ebp_2 = sub_4b77e0(&var_36, arg1)
        sub_404080(data_5300b4, "\n\r")
        int32_t var_90_2 = *data_5300b4
        void* const var_94 = &data_4b9ce8
        sub_408e1c(*(ebp_2 - 4), ebp_2 - 0x44)
        int32_t var_98_1 = *(ebp_2 - 0x44)
        void* const var_9c_1 = " - E:"
        void* ebp_3 = sub_52b2f0(sub_402b4c(float.t(var_2a)), 0x3e8, 2, ebp_2 - 0x48)
        int32_t var_98_2 = *(ebp_3 - 0x48)
        void* const var_9c_2 = ", Win:"
        int32_t eax_18
        eax_18.b = var_36
        bool o_2 = unimplemented  {imul eax, eax, 0xa}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(ebp_3 - 0x38) = eax_18 * 0xa
        ebx_1, ebp_1, esi_2 = sub_52b2f0(sub_402b4c(float.t(*(ebp_3 - 0x38))), 0x3e8, 2, ebp_3 - 0x4c)
        int32_t var_98_3 = *(ebp_1 - 0x4c)
        sub_404138(data_5300b4, 7)
        esp = &var_94
        *(ebp_1 - 6) = sub_4b86d0(data_532f3c, &var_36)
        
        if (*(ebp_1 - 6) s> 1 && sub_4b72e4(*(ebp_1 - 4)) == 1)
            long double st0_1 = sub_402d38()
            long double x87_r6_4 = data_4b9d0c
            x87_r6_4 - st0_1
            int16_t eax_26 = (x87_r6_4 < st0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, st0_1) ? 1 : 0) << 0xa | (x87_r6_4 == st0_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_26:1.b, 6)) && not(test_bit(eax_26:1.b, 0)))
                if (*(ebp_1 - 6) != 0x64)
                    *(ebp_1 - 6) = sub_402b4c(float.t(*(ebp_1 - 6)) * fconvert.t(0.5f))
                else
                    int32_t eax_27 = sub_402d20(8)
                    
                    if (add_overflow(eax_27, 4))
                        sub_403010()
                        noreturn
                    
                    *(ebp_1 - 6) = eax_27.w + 4
        
        *(ebp_1 - 7) = 0
        int32_t eax_31
        long double x87_r0
        long double x87_r1
        
        if (*(ebp_1 - 6) != 0xfff6)
            *(ebp_1 - 0x1c) = 0
            int32_t edx_9 = *(*esi_2 + 0x21108)
            
            if (neg.d(edx_9) == 0x80000000)
                sub_403010()
                noreturn
            
            int32_t eax_32 = sx.d(var_2a)
            
            if (neg.d(edx_9) s<= eax_32)
                void* edx_11
                edx_11.b = *(*esi_2 + 0x20094)
                
                if (edx_11.b != 1)
                    if (edx_11.b == 3)
                        *(ebp_1 - 0x1c) = 0x3f19999a
                    else if (edx_11.b != 5)
                        *(ebp_1 - 0x1c) = 0x3f800000
                    else
                        *(ebp_1 - 0x1c) = 0x3f400000
            
            int32_t edx_13 = *(*esi_2 + 0x21108)
            
            if (neg.d(edx_13) == 0x80000000)
                sub_403010()
                noreturn
            
            if (eax_32 s> neg.d(edx_13))
                int32_t edx_16 = *(*esi_2 + 0x21108)
                int32_t edx_17 = neg.d(edx_16)
                
                if (neg.d(edx_16) == 0x80000000)
                    sub_403010()
                    noreturn
                
                int32_t edx_18 = edx_17 s>> 1
                bool c_5 = unimplemented  {sar edx, 0x1}
                
                if (edx_17 s>> 1 s< 0)
                    edx_18 = adc.d(edx_18, 0, c_5)
                
                if (eax_32 s<= edx_18)
                    *(ebp_1 - 0x1c) = fconvert.s(fconvert.t(*(ebp_1 - 0x1c)) * fconvert.t(0.5f))
                else if (var_2a s< 0)
                    *(ebp_1 - 0x1c) = fconvert.s(data_4b9d28 * fconvert.t(*(ebp_1 - 0x1c)))
                else if (eax_32 s>= *(*esi_2 + 0x21108))
                    *(ebp_1 - 0x1c) = fconvert.s(data_4b9d34 * fconvert.t(*(ebp_1 - 0x1c)))
            else
                *(ebp_1 - 0x1c) = fconvert.s(data_4b9d1c * fconvert.t(*(ebp_1 - 0x1c)))
            
            int32_t edx_21 = *(*esi_2 + 0x21108)
            int32_t edx_22 = edx_21 s>> 1
            bool c_6 = unimplemented  {sar edx, 0x1}
            
            if (edx_21 s>> 1 s< 0)
                edx_22 = adc.d(edx_22, 0, c_6)
            
            if (eax_32 s< edx_22)
                *(ebp_1 - 0x1c) = 0x3f59999a
            else
                *(ebp_1 - 0x1c) = fconvert.s(fconvert.t(*(ebp_1 - 0x1c)) * fconvert.t(1f))
            
            if (*(*esi_2 + 0x2007d) == 0)
                int32_t eax_35 = *(*esi_2 + 0x2110c)
                
                if (eax_35 s>= 7)
                    *(ebp_1 - 0x1c) = fconvert.s(fconvert.t(*(ebp_1 - 0x1c)) - data_4b9d44)
                else if (eax_35 s>= 6)
                    *(ebp_1 - 0x1c) = fconvert.s(fconvert.t(*(ebp_1 - 0x1c)) - data_4b9d50)
                else if (eax_35 s>= 5)
                    *(ebp_1 - 0x1c) = fconvert.s(fconvert.t(*(ebp_1 - 0x1c)) - data_4b9d5c)
                else if (eax_35 s>= 4)
                    *(ebp_1 - 0x1c) = fconvert.s(fconvert.t(*(ebp_1 - 0x1c)) - data_4b9d68)
                else if (eax_35 s>= 3)
                    *(ebp_1 - 0x1c) = fconvert.s(fconvert.t(*(ebp_1 - 0x1c)) - data_4b9d74)
            
            int32_t eax_36
            eax_36.b = var_36
            *(ebp_1 - 0x38) = eax_36
            long double x87_r7_33 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
            long double temp58_1 = fconvert.t(68f)
            x87_r7_33 - temp58_1
            eax_36.w = (x87_r7_33 < temp58_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_33, temp58_1) ? 1 : 0) << 0xa
                | (x87_r7_33 == temp58_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_36:1.b, 0)))
            label_4b9038:
                long double st0_2 = sub_402d38()
                long double x87_r6_9 = data_4b9d8c * fconvert.t(*(ebp_1 - 0x1c))
                x87_r6_9 - st0_2
                eax_36.w = (x87_r6_9 < st0_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_9, st0_2) ? 1 : 0) << 0xa
                    | (x87_r6_9 == st0_2 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_36:1.b, 6)) && not(test_bit(eax_36:1.b, 0)))
                    int32_t eax_38 = sub_402d20(0x15)
                    int32_t edx_23 = sx.d(*(ebp_1 - 6))
                    
                    if (add_overflow(edx_23, 8))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_38, edx_23 + 8))
                        sub_403010()
                        noreturn
                    
                    *(ebp_1 - 6) = eax_38.w + (edx_23 + 8).w
            else
                int32_t eax_37
                eax_37.b = var_36
                *(ebp_1 - 0x3c) = eax_37
                long double x87_r7_35 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                long double temp61_1 = fconvert.t(62f)
                x87_r7_35 - temp61_1
                eax_37.w = (x87_r7_35 < temp61_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_35, temp61_1) ? 1 : 0) << 0xa
                    | (x87_r7_35 == temp61_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_37:1.b, 0)))
                    eax_36.b = var_35
                    *(ebp_1 - 0x40) = eax_36
                    long double x87_r7_37 = float.t(*(ebp_1 - 0x40)) / data_4b9cbc
                    long double temp68_1 = fconvert.t(76f)
                    x87_r7_37 - temp68_1
                    eax_36.w = (x87_r7_37 < temp68_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_37, temp68_1) ? 1 : 0) << 0xa
                        | (x87_r7_37 == temp68_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_37:1.b, 0)) && not(test_bit(eax_36:1.b, 0)))
                    goto label_4b9038
                
                int32_t eax_40
                eax_40.b = var_36
                *(ebp_1 - 0x38) = eax_40
                long double x87_r7_40 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
                long double temp67_1 = fconvert.t(63f)
                x87_r7_40 - temp67_1
                eax_40.w = (x87_r7_40 < temp67_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_40, temp67_1) ? 1 : 0) << 0xa
                    | (x87_r7_40 == temp67_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_40:1.b, 0)))
                label_4b90d3:
                    long double st0_3 = sub_402d38()
                    long double x87_r6_14 = data_4b9d28 * fconvert.t(*(ebp_1 - 0x1c))
                    x87_r6_14 - st0_3
                    eax_40.w = (x87_r6_14 < st0_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_14, st0_3) ? 1 : 0) << 0xa
                        | (x87_r6_14 == st0_3 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_40:1.b, 6)) && not(test_bit(eax_40:1.b, 0)))
                        int32_t eax_42 = sub_402d20(0x15)
                        int32_t edx_25 = sx.d(*(ebp_1 - 6))
                        
                        if (add_overflow(edx_25, 4))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_42, edx_25 + 4))
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 6) = eax_42.w + (edx_25 + 4).w
                else
                    int32_t eax_41
                    eax_41.b = var_36
                    *(ebp_1 - 0x3c) = eax_41
                    long double x87_r7_42 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                    long double temp76_1 = fconvert.t(56f)
                    x87_r7_42 - temp76_1
                    eax_41.w = (x87_r7_42 < temp76_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_42, temp76_1) ? 1 : 0) << 0xa
                        | (x87_r7_42 == temp76_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_41:1.b, 0)))
                        eax_40.b = var_35
                        *(ebp_1 - 0x40) = eax_40
                        long double x87_r7_44 = float.t(*(ebp_1 - 0x40)) / data_4b9cbc
                        long double temp83_1 = fconvert.t(72f)
                        x87_r7_44 - temp83_1
                        eax_40.w = (x87_r7_44 < temp83_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_44, temp83_1) ? 1 : 0) << 0xa
                            | (x87_r7_44 == temp83_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_41:1.b, 0)) && not(test_bit(eax_40:1.b, 0)))
                        goto label_4b90d3
                    
                    int32_t eax_44
                    eax_44.b = var_36
                    *(ebp_1 - 0x38) = eax_44
                    long double x87_r7_47 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
                    long double temp82_1 = fconvert.t(58f)
                    x87_r7_47 - temp82_1
                    eax_44.w = (x87_r7_47 < temp82_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_47, temp82_1) ? 1 : 0) << 0xa
                        | (x87_r7_47 == temp82_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_44:1.b, 0)))
                    label_4b916e:
                        long double st0_4 = sub_402d38()
                        long double x87_r6_19 = data_4b9db0 * fconvert.t(*(ebp_1 - 0x1c))
                        x87_r6_19 - st0_4
                        eax_44.w = (x87_r6_19 < st0_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_19, st0_4) ? 1 : 0) << 0xa
                            | (x87_r6_19 == st0_4 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_44:1.b, 6)) && not(test_bit(eax_44:1.b, 0)))
                            int32_t eax_46 = sub_402d20(0x15)
                            int32_t edx_27 = sx.d(*(ebp_1 - 6))
                            
                            if (add_overflow(edx_27, 2))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_46, edx_27 + 2))
                                sub_403010()
                                noreturn
                            
                            *(ebp_1 - 6) = eax_46.w + (edx_27 + 2).w
                    else
                        int32_t eax_45
                        eax_45.b = var_36
                        *(ebp_1 - 0x3c) = eax_45
                        long double x87_r7_49 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                        long double temp87_1 = fconvert.t(50f)
                        x87_r7_49 - temp87_1
                        eax_45.w = (x87_r7_49 < temp87_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_49, temp87_1) ? 1 : 0) << 0xa
                            | (x87_r7_49 == temp87_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_45:1.b, 0)))
                            eax_44.b = var_35
                            *(ebp_1 - 0x40) = eax_44
                            long double x87_r7_51 = float.t(*(ebp_1 - 0x40)) / data_4b9cbc
                            long double temp92_1 = fconvert.t(65f)
                            x87_r7_51 - temp92_1
                            eax_44.w = (x87_r7_51 < temp92_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_51, temp92_1) ? 1 : 0) << 0xa
                                | (x87_r7_51 == temp92_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_45:1.b, 0)) && not(test_bit(eax_44:1.b, 0)))
                            goto label_4b916e
                        
                        int32_t eax_48
                        eax_48.b = var_36
                        *(ebp_1 - 0x38) = eax_48
                        long double x87_r7_54 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
                        long double temp91_1 = fconvert.t(40f)
                        x87_r7_54 - temp91_1
                        eax_48.w = (x87_r7_54 < temp91_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_54, temp91_1) ? 1 : 0) << 0xa
                            | (x87_r7_54 == temp91_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_48:1.b, 0)))
                        label_4b9209:
                            long double st0_5 = sub_402d38()
                            long double x87_r6_24 = data_4b9dc4 * fconvert.t(*(ebp_1 - 0x1c))
                            x87_r6_24 - st0_5
                            eax_48.w = (x87_r6_24 < st0_5 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_24, st0_5) ? 1 : 0) << 0xa
                                | (x87_r6_24 == st0_5 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_48:1.b, 6)) && not(test_bit(eax_48:1.b, 0)))
                                int32_t eax_50 = sub_402d20(0xd)
                                int32_t edx_29 = sx.d(*(ebp_1 - 6))
                                
                                if (add_overflow(edx_29, 1))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_50, edx_29 + 1))
                                    sub_403010()
                                    noreturn
                                
                                *(ebp_1 - 6) = eax_50.w + (edx_29 + 1).w
                        else
                            int32_t eax_49
                            eax_49.b = var_36
                            *(ebp_1 - 0x3c) = eax_49
                            long double x87_r7_56 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                            long double temp95_1 = fconvert.t(32f)
                            x87_r7_56 - temp95_1
                            eax_49.w = (x87_r7_56 < temp95_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_56, temp95_1) ? 1 : 0) << 0xa
                                | (x87_r7_56 == temp95_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_49:1.b, 0)))
                                eax_48.b = var_35
                                *(ebp_1 - 0x40) = eax_48
                                long double x87_r7_58 = float.t(*(ebp_1 - 0x40)) / data_4b9cbc
                                long double temp99_1 = fconvert.t(58f)
                                x87_r7_58 - temp99_1
                                eax_48.w = (x87_r7_58 < temp99_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_58, temp99_1) ? 1 : 0) << 0xa
                                    | (x87_r7_58 == temp99_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_49:1.b, 0)) && not(test_bit(eax_48:1.b, 0)))
                                goto label_4b9209
                            
                            int32_t eax_52
                            eax_52.b = var_36
                            *(ebp_1 - 0x38) = eax_52
                            long double x87_r7_61 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
                            long double temp98_1 = fconvert.t(28f)
                            x87_r7_61 - temp98_1
                            eax_52.w = (x87_r7_61 < temp98_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_61, temp98_1) ? 1 : 0) << 0xa
                                | (x87_r7_61 == temp98_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_52:1.b, 0)))
                            label_4b92a4:
                                long double st0_6 = sub_402d38()
                                long double x87_r6_29 = data_4b9dd4 * fconvert.t(*(ebp_1 - 0x1c))
                                x87_r6_29 - st0_6
                                eax_52.w = (x87_r6_29 < st0_6 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_29, st0_6) ? 1 : 0) << 0xa
                                    | (x87_r6_29 == st0_6 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_52:1.b, 6)) && not(test_bit(eax_52:1.b, 0)))
                                    int32_t eax_54 = sub_402d20(9)
                                    int32_t edx_31 = sx.d(*(ebp_1 - 6))
                                    
                                    if (add_overflow(edx_31, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_54, edx_31 + 1))
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebp_1 - 6) = eax_54.w + (edx_31 + 1).w
                            else
                                int32_t eax_53
                                eax_53.b = var_36
                                *(ebp_1 - 0x3c) = eax_53
                                long double x87_r7_63 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                                long double temp103_1 = fconvert.t(22f)
                                x87_r7_63 - temp103_1
                                eax_53.w = (x87_r7_63 < temp103_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_63, temp103_1) ? 1 : 0) << 0xa
                                    | (x87_r7_63 == temp103_1 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_53:1.b, 0)))
                                    eax_52.b = var_35
                                    *(ebp_1 - 0x40) = eax_52
                                    long double x87_r7_65 = float.t(*(ebp_1 - 0x40)) / data_4b9cbc
                                    long double temp107_1 = fconvert.t(50f)
                                    x87_r7_65 - temp107_1
                                    eax_52.w = (x87_r7_65 < temp107_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_65, temp107_1) ? 1 : 0) << 0xa
                                        | (x87_r7_65 == temp107_1 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_52:1.b, 0)))
                                        goto label_4b92a4
            
            *(ebp_1 - 0x18) = 0x3f800000
            void* eax_56
            eax_56.b = *(*esi_2 + 0x20094)
            
            if (eax_56.b == 3)
                *(ebp_1 - 0x18) = fconvert.s(fconvert.t(*(ebp_1 - 0x18)) * fconvert.t(0.75f))
            
            if (eax_56.b == 7)
                *(ebp_1 - 0x18) = fconvert.s(fconvert.t(*(ebp_1 - 0x18)) * fconvert.t(1.25f))
            
            if (var_36 u>= 0x2b && var_35 u>= 0x35 && *(ebp_1 - 6) s>= 1)
                void* eax_57
                
                if (*(*esi_2 + 0x21108) s> 0xc8)
                    long double st0_10 = sub_402d38()
                    long double x87_r6_37 = data_4b9d5c * fconvert.t(*(ebp_1 - 0x18))
                    x87_r6_37 - st0_10
                    eax_57.w = (x87_r6_37 < st0_10 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_37, st0_10) ? 1 : 0) << 0xa
                        | (x87_r6_37 == st0_10 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_57:1.b, 6) || test_bit(eax_57:1.b, 0))
                        long double st0_11 = sub_402d38()
                        long double x87_r6_39 = data_4b9d5c * fconvert.t(*(ebp_1 - 0x18))
                        x87_r6_39 - st0_11
                        eax_57.w = (x87_r6_39 < st0_11 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_39, st0_11) ? 1 : 0) << 0xa
                            | (x87_r6_39 == st0_11 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_57:1.b, 6) || test_bit(eax_57:1.b, 0))
                            long double st0_12 = sub_402d38()
                            long double x87_r6_41 = data_4b9d5c * fconvert.t(*(ebp_1 - 0x18))
                            x87_r6_41 - st0_12
                            eax_57.w = (x87_r6_41 < st0_12 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_41, st0_12) ? 1 : 0) << 0xa
                                | (x87_r6_41 == st0_12 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_57:1.b, 6)) && not(test_bit(eax_57:1.b, 0)))
                                int32_t eax_68 = sub_402d20(5)
                                int32_t edx_38 = sx.d(*(ebp_1 - 6))
                                
                                if (add_overflow(eax_68, edx_38))
                                    sub_403010()
                                    noreturn
                                
                                *(ebp_1 - 6) = eax_68.w + edx_38.w
                        else
                            int32_t eax_66 = sub_402d20(6)
                            int32_t edx_36 = sx.d(*(ebp_1 - 6))
                            
                            if (add_overflow(edx_36, 1))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_66, edx_36 + 1))
                                sub_403010()
                                noreturn
                            
                            *(ebp_1 - 6) = eax_66.w + (edx_36 + 1).w
                    else
                        bool o_21 = unimplemented  {imul eax, eax, 0x2}
                        
                        if (o_21)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 6) *= 2
                else
                    long double st0_7 = sub_402d38()
                    long double x87_r6_31 = data_4b9de8 * fconvert.t(*(ebp_1 - 0x18))
                    x87_r6_31 - st0_7
                    eax_57.w = (x87_r6_31 < st0_7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_31, st0_7) ? 1 : 0) << 0xa
                        | (x87_r6_31 == st0_7 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_57:1.b, 6) || test_bit(eax_57:1.b, 0))
                        long double st0_8 = sub_402d38()
                        long double x87_r6_33 = data_4b9de8 * fconvert.t(*(ebp_1 - 0x18))
                        x87_r6_33 - st0_8
                        eax_57.w = (x87_r6_33 < st0_8 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_33, st0_8) ? 1 : 0) << 0xa
                            | (x87_r6_33 == st0_8 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_57:1.b, 6) || test_bit(eax_57:1.b, 0))
                            long double st0_9 = sub_402d38()
                            long double x87_r6_35 = data_4b9de8 * fconvert.t(*(ebp_1 - 0x18))
                            x87_r6_35 - st0_9
                            eax_57.w = (x87_r6_35 < st0_9 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_35, st0_9) ? 1 : 0) << 0xa
                                | (x87_r6_35 == st0_9 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_57:1.b, 6)) && not(test_bit(eax_57:1.b, 0)))
                                int32_t eax_62 = sub_402d20(5)
                                int32_t edx_35 = sx.d(*(ebp_1 - 6))
                                
                                if (add_overflow(eax_62, edx_35))
                                    sub_403010()
                                    noreturn
                                
                                *(ebp_1 - 6) = eax_62.w + edx_35.w
                        else
                            int32_t eax_60 = sub_402d20(6)
                            int32_t edx_33 = sx.d(*(ebp_1 - 6))
                            
                            if (add_overflow(edx_33, 1))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_60, edx_33 + 1))
                                sub_403010()
                                noreturn
                            
                            *(ebp_1 - 6) = eax_60.w + (edx_33 + 1).w
                    else
                        bool o_17 = unimplemented  {imul eax, eax, 0x2}
                        
                        if (o_17)
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 6) *= 2
            
            int32_t eax_71 = *(*esi_2 + 0x210f8)
            
            if (add_overflow(eax_71, 0xffffffff))
                sub_403010()
                noreturn
            
            int32_t ecx_4 = *(*esi_2 + 0x21108)
            int32_t eax_73
            int32_t edx_40
            edx_40:eax_73 = sx.q(eax_71 - 1)
            int32_t temp0_1 = divs.dp.d(edx_40:eax_73, ecx_4)
            
            if (add_overflow(temp0_1, 1))
                sub_403010()
                noreturn
            
            *(ebp_1 - 0x10) = temp0_1 + 1
            void* var_98_4 = ebp_1
            esp = &var_94
            
            if (sub_4b8be4(0, mods.dp.d(edx_40:eax_73, ecx_4)) == 0
                    && (*(ebp_1 - 6) s>= 0xffff || var_2a s>= 0))
                *(ebp_1 - 6) = 0x64
            
            int16_t eax_79
            
            if (sub_4b72e4(*(ebp_1 - 4)) == 1 && *(ebp_1 - 6) s>= 1)
                long double st0_13 = sub_402d38()
                long double x87_r6_42 = data_4b9df4
                x87_r6_42 - st0_13
                eax_79 = (x87_r6_42 < st0_13 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_42, st0_13) ? 1 : 0) << 0xa
                    | (x87_r6_42 == st0_13 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_79:1.b, 6)) && not(test_bit(eax_79:1.b, 0)))
                    *(ebp_1 - 6) = 0xffff
            
            eax_79 = *(ebp_1 - 6)
            
            if (eax_79 == 0x64)
                *ebx_1 = 4
                *(ebp_1 - 7) = 1
            
            int32_t edx_42 = sx.d(eax_79)
            *(ebp_1 - 0xc) = sub_420b80(*(ebp_1 - 0x10), edx_42)
            
            if (*(ebp_1 - 7) == 0 && *(ebp_1 - 6) s>= 0)
                void* var_98_5 = ebp_1
                *(ebp_1 - 0xc)
                bool o_27 = unimplemented  {imul dword [ebp-0xc]}
                
                if (o_27)
                    sub_403010()
                    noreturn
                
                eax_31, edx_42 = sub_4b8be4(*(*esi_2 + 0x21108) * *(ebp_1 - 0xc), edx_42)
                esp = &var_94
                
                if (eax_31.b != 0)
                    int32_t eax_84
                    int32_t edx_43
                    eax_84, edx_43 = sub_402b4c(float.t(*(ebp_1 - 0xc)) * data_4b9d34)
                    int32_t edx_44 = adc.d(edx_43, 0, eax_84 u>= 0xffffffff)
                    bool o_28 = unimplemented  {adc edx, 0x0}
                    
                    if (o_28)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_87
                    int32_t edx_45
                    edx_45:eax_87 = sx.q(*(ebp_1 - 0x10))
                    
                    if (edx_45 != edx_44)
                        edx_42 = eax_84 + 1
                        esp = &var_94
                        
                        if (edx_45 s<= edx_44)
                        label_4b956c:
                            *ebx_1 = 0
                            ebx_1[1] = 1
                            *(ebx_1 + 4) = *(ebp_1 - 0xc)
                            *(ebp_1 - 7) = 1
                    else
                        edx_42 = eax_84 + 1
                        esp = &var_94
                        
                        if (eax_87 u<= eax_84 + 1)
                            goto label_4b956c
            
            if (*(ebp_1 - 7) == 0 && *(ebp_1 - 6) == 0xffff)
                void* var_98_7 = ebp_1
                esp = &var_94
                
                if (sub_4b8be4(0, edx_42).b != 0)
                    *ebx_1 = 1
                    *(ebp_1 - 7) = 1
            
            if (*(ebp_1 - 7) == 0)
                *(ebp_1 - 4)
                bool o_29 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                
                if (o_29)
                    sub_403010()
                    noreturn
                
                if (*(*esi_2 + *(ebp_1 - 4) * 0x208 + 0x1fea4) == *(*esi_2 + 0x21104))
                    *ebx_1 = 1
                    *(ebp_1 - 7) = 1
            
            if (*(ebp_1 - 7) == 0)
                *ebx_1 = 3
        else
            sub_4b9e84(*(ebp_1 - 4), x87_r0, x87_r1)
        eax_31.b = *ebx_1
        char temp10_1 = eax_31.b
        eax_31.b -= 2
        char temp15_1
        
        if (temp10_1 u>= 2)
            temp15_1 = eax_31.b
            eax_31.b -= 1
        
        if (temp10_1 u< 2 || temp15_1 == 1)
            *(ebp_1 - 0x14) = sub_4cc6dc(*(ebp_1 - 4))
            int32_t eax_90
            eax_90.b = *ebx_1
            
            if (eax_90.b == 1)
                void* eax_91 = *esi_2
                int32_t edx_48 = *(ebp_1 - 0x14)
                int32_t edx_49 = edx_48 - *(eax_91 + 0x21104)
                
                if (add_overflow(edx_48, neg.d(*(eax_91 + 0x21104))))
                    sub_403010()
                    noreturn
                
                *(ebp_1 - 4)
                int32_t eax_92 = *(ebp_1 - 4) * 0x41
                bool o_31 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                
                if (o_31)
                    sub_403010()
                    noreturn
                
                int32_t ecx_8 = *esi_2
                
                if (add_overflow(edx_49, *(ecx_8 + (eax_92 << 3) + 0x1fea4)))
                    sub_403010()
                    noreturn
                
                *(ebp_1 - 0x14) = edx_49 + *(ecx_8 + (eax_92 << 3) + 0x1fea4)
            else if (eax_90.b == 0)
                void* eax_93 = *esi_2
                int32_t edx_51 = *(ebp_1 - 0x14)
                int32_t edx_52 = edx_51 - *(eax_93 + 0x21104)
                
                if (add_overflow(edx_51, neg.d(*(eax_93 + 0x21104))))
                    sub_403010()
                    noreturn
                
                *(ebp_1 - 4)
                int32_t eax_94 = *(ebp_1 - 4) * 0x41
                bool o_34 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                
                if (o_34)
                    sub_403010()
                    noreturn
                
                int32_t ecx_9 = *esi_2
                
                if (add_overflow(edx_52, *(ecx_9 + (eax_94 << 3) + 0x1fea4)))
                    sub_403010()
                    noreturn
                
                *(ebp_1 - 0x14) = edx_52 + *(ecx_9 + (eax_94 << 3) + 0x1fea4)
                *(ebp_1 - 0xc)
                int32_t eax_97 = *(*esi_2 + 0x21108) * *(ebp_1 - 0xc)
                bool o_36 = unimplemented  {imul dword [ebp-0xc]}
                
                if (o_36)
                    sub_403010()
                    noreturn
                
                int32_t temp55_1 = *(ebp_1 - 0x14)
                *(ebp_1 - 0x14) -= eax_97
                
                if (add_overflow(temp55_1, neg.d(eax_97)))
                    sub_403010()
                    noreturn
            
            if (*(*esi_2 + 0x21108) s> *(ebp_1 - 0x14))
                *(ebp_1 - 6) = 0x64
                *ebx_1 = 4
    else
        sub_4babf8(*(*esi_1 + 0x10020), ebx_1)
        data_532f3c
        void* edx_2
        edx_2, ebp_1, esi_2 = sub_4b77e0(&var_36, arg1)
        
        if (*(*esi_2 + 0x2110c) s> 0)
            if (var_2a s< 1)
            label_4b8ccc:
                edx_2 = *esi_2
                
                if (sx.d(var_2a) s>= *(edx_2 + 0x21108))
                    int32_t eax_7
                    eax_7.b = var_36
                    *(ebp_1 - 0x3c) = eax_7
                    long double x87_r7_4 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                    long double temp9_1 = fconvert.t(38f)
                    x87_r7_4 - temp9_1
                    eax_7.w = (x87_r7_4 < temp9_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_4, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp9_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_7:1.b, 0)))
                        goto label_4b8d30
                    
                    goto label_4b8cf7
                
            label_4b8cf7:
                void* edx_3 = *esi_2
                *(edx_3 + 0x21108)
                edx_2 = *(edx_3 + 0x21108) * 2
                bool o_1 = unimplemented  {imul edx, dword [edx+0x21108], 0x2}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (sx.d(var_2a) s>= edx_2)
                    int32_t eax_9
                    eax_9.b = var_36
                    *(ebp_1 - 0x40) = eax_9
                    long double x87_r7_6 = float.t(*(ebp_1 - 0x40)) / data_4b9cbc
                    long double temp20_1 = fconvert.t(28f)
                    x87_r7_6 - temp20_1
                    eax_9.w = (x87_r7_6 < temp20_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_6, temp20_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp20_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_9:1.b, 0)))
                        goto label_4b8d30
            else
                int32_t eax_5
                eax_5.b = var_36
                *(ebp_1 - 0x38) = eax_5
                long double x87_r7_2 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
                long double temp4_1 = fconvert.t(48f)
                x87_r7_2 - temp4_1
                eax_5.w = (x87_r7_2 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp4_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_5:1.b, 0))
                    goto label_4b8ccc
                
            label_4b8d30:
                
                if (*ebx_1 == 3)
                    void* var_90_1 = ebp_1
                    esp = &ExceptionList
                    
                    if (sub_4b8be4(0, edx_2) != 0)
                        *ebx_1 = 1
    
    char eax_101
    int32_t edx_54
    eax_101, edx_54 = sub_4c2b98(*(ebp_1 - 4))
    
    if (eax_101 != 0 && *ebx_1 == 0)
        *ebx_1 = 1
    
    if (*(*esi_2 + 0x20094) != 1)
        int32_t eax_105 = sub_4c2d18(*(ebp_1 - 4)) * 3
        bool o_38 = unimplemented  {imul eax, eax, 0x3}
        
        if (o_38)
            sub_403010()
            noreturn
        
        if (add_overflow(eax_105, 0xfffffffc))
            sub_403010()
            noreturn
        
        edx_54 = *esi_2
        
        if (add_overflow(eax_105 - 4, *(edx_54 + 0x2110c)))
            sub_403010()
            noreturn
        
        *(ebp_1 - 0x38) = eax_105 - 4 + *(edx_54 + 0x2110c)
        *(ebp_1 - 0x20) = fconvert.s(float.t(*(ebp_1 - 0x38)))
        long double x87_r7_82 = fconvert.t(44f) + fconvert.t(*(ebp_1 - 0x20))
        int32_t eax_108
        eax_108.b = var_36
        *(ebp_1 - 0x38) = eax_108
        long double x87_r6_45 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
        x87_r6_45 - x87_r7_82
        eax_108.w = (x87_r6_45 < x87_r7_82 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_45, x87_r7_82) ? 1 : 0) << 0xa
            | (x87_r6_45 == x87_r7_82 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_108:1.b, 0)))
        label_4b9948:
            void* eax_124
            eax_124.b = *(*esi_2 + 0x20094)
            char temp29_1 = eax_124.b
            eax_124.b -= 3
            
            if (temp29_1 == 3)
            label_4b995a:
                
                if (*ebx_1 == 3)
                    *(esp - 4) = ebp_1
                    char eax_125
                    eax_125, edx_54 = sub_4b8be4(0, edx_54)
                    *(esp - 4)
                    
                    if (eax_125 != 0)
                        *ebx_1 = 1
            else
                char temp41_1 = eax_124.b
                eax_124.b -= 2
                
                if (temp41_1 == 2)
                    goto label_4b995a
                
                char temp48_1 = eax_124.b
                eax_124.b -= 2
                
                if (temp48_1 == 2)
                    goto label_4b995a
        else
            long double x87_r7_84 = fconvert.t(36f) + fconvert.t(*(ebp_1 - 0x20))
            int32_t eax_109
            eax_109.b = var_36
            *(ebp_1 - 0x3c) = eax_109
            long double x87_r6_47 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
            x87_r6_47 - x87_r7_84
            eax_109.w = (x87_r6_47 < x87_r7_84 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_47, x87_r7_84) ? 1 : 0) << 0xa
                | (x87_r6_47 == x87_r7_84 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_109:1.b, 0)) && var_35 u>= 0x31)
                goto label_4b9948
            
            int32_t edx_56 = *(*esi_2 + 0x21108)
            
            if (neg.d(edx_56) == 0x80000000)
                sub_403010()
                noreturn
            
            edx_54 = neg.d(edx_56) * 0xa
            bool o_42 = unimplemented  {imul edx, edx, 0xa}
            
            if (o_42)
                sub_403010()
                noreturn
            
            if (sx.d(var_2a) s>= edx_54)
                long double x87_r7_86 = fconvert.t(40f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_111
                eax_111.b = var_36
                *(ebp_1 - 0x40) = eax_111
                long double x87_r6_49 = float.t(*(ebp_1 - 0x40)) / data_4b9cbc
                x87_r6_49 - x87_r7_86
                eax_111.w = (x87_r6_49 < x87_r7_86 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_49, x87_r7_86) ? 1 : 0) << 0xa
                    | (x87_r6_49 == x87_r7_86 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_111:1.b, 0)))
                    goto label_4b9948
                
                long double x87_r7_88 = fconvert.t(32f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_112
                eax_112.b = var_36
                *(ebp_1 - 0x50) = eax_112
                long double x87_r6_51 = float.t(*(ebp_1 - 0x50)) / data_4b9cbc
                x87_r6_51 - x87_r7_88
                eax_112.w = (x87_r6_51 < x87_r7_88 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_51, x87_r7_88) ? 1 : 0) << 0xa
                    | (x87_r6_51 == x87_r7_88 ? 1 : 0) << 0xe
                
                if (test_bit(eax_112:1.b, 0) || var_35 u< 0x2e)
                    goto label_4b97ae
                
                goto label_4b9948
            
        label_4b97ae:
            int32_t edx_59 = *(*esi_2 + 0x21108)
            
            if (neg.d(edx_59) == 0x80000000)
                sub_403010()
                noreturn
            
            edx_54 = neg.d(edx_59) * 4
            bool o_44 = unimplemented  {imul edx, edx, 0x4}
            
            if (o_44)
                sub_403010()
                noreturn
            
            if (sx.d(var_2a) s>= edx_54)
                long double x87_r7_90 = fconvert.t(36f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_114
                eax_114.b = var_36
                *(ebp_1 - 0x54) = eax_114
                long double x87_r6_53 = float.t(*(ebp_1 - 0x54)) / data_4b9cbc
                x87_r6_53 - x87_r7_90
                eax_114.w = (x87_r6_53 < x87_r7_90 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_53, x87_r7_90) ? 1 : 0) << 0xa
                    | (x87_r6_53 == x87_r7_90 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_114:1.b, 0)))
                    goto label_4b9948
                
                long double x87_r7_92 = fconvert.t(30f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_115
                eax_115.b = var_36
                *(ebp_1 - 0x58) = eax_115
                long double x87_r6_55 = float.t(*(ebp_1 - 0x58)) / data_4b9cbc
                x87_r6_55 - x87_r7_92
                eax_115.w = (x87_r6_55 < x87_r7_92 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_55, x87_r7_92) ? 1 : 0) << 0xa
                    | (x87_r6_55 == x87_r7_92 ? 1 : 0) << 0xe
                
                if (test_bit(eax_115:1.b, 0) || var_35 u< 0x2b)
                    goto label_4b9823
                
                goto label_4b9948
            
        label_4b9823:
            int32_t edx_62 = *(*esi_2 + 0x21108)
            
            if (neg.d(edx_62) == 0x80000000)
                sub_403010()
                noreturn
            
            edx_54 = neg.d(edx_62) * 2
            bool o_46 = unimplemented  {imul edx, edx, 0x2}
            
            if (o_46)
                sub_403010()
                noreturn
            
            if (sx.d(var_2a) s>= edx_54)
                long double x87_r7_94 = fconvert.t(22f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_117
                eax_117.b = var_36
                *(ebp_1 - 0x5c) = eax_117
                long double x87_r6_57 = float.t(*(ebp_1 - 0x5c)) / data_4b9cbc
                x87_r6_57 - x87_r7_94
                eax_117.w = (x87_r6_57 < x87_r7_94 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_57, x87_r7_94) ? 1 : 0) << 0xa
                    | (x87_r6_57 == x87_r7_94 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_117:1.b, 0)))
                    goto label_4b9948
                
                long double x87_r7_96 = fconvert.t(18f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_118
                eax_118.b = var_36
                *(ebp_1 - 0x60) = eax_118
                long double x87_r6_59 = float.t(*(ebp_1 - 0x60)) / data_4b9cbc
                x87_r6_59 - x87_r7_96
                eax_118.w = (x87_r6_59 < x87_r7_96 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_59, x87_r7_96) ? 1 : 0) << 0xa
                    | (x87_r6_59 == x87_r7_96 ? 1 : 0) << 0xe
                
                if (test_bit(eax_118:1.b, 0) || var_35 u< 0x24)
                    goto label_4b9898
                
                goto label_4b9948
            
        label_4b9898:
            int32_t edx_65 = *(*esi_2 + 0x21108)
            edx_54 = neg.d(edx_65)
            
            if (neg.d(edx_65) == 0x80000000)
                sub_403010()
                noreturn
            
            if (sx.d(var_2a) s>= edx_54)
                long double x87_r7_98 = fconvert.t(18f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_120
                eax_120.b = var_36
                *(ebp_1 - 0x64) = eax_120
                long double x87_r6_61 = float.t(*(ebp_1 - 0x64)) / data_4b9cbc
                x87_r6_61 - x87_r7_98
                eax_120.w = (x87_r6_61 < x87_r7_98 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_61, x87_r7_98) ? 1 : 0) << 0xa
                    | (x87_r6_61 == x87_r7_98 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_120:1.b, 0)))
                    goto label_4b9948
                
                long double x87_r7_100 = fconvert.t(15f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_121
                eax_121.b = var_36
                *(ebp_1 - 0x68) = eax_121
                long double x87_r6_63 = float.t(*(ebp_1 - 0x68)) / data_4b9cbc
                x87_r6_63 - x87_r7_100
                eax_121.w = (x87_r6_63 < x87_r7_100 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_63, x87_r7_100) ? 1 : 0) << 0xa
                    | (x87_r6_63 == x87_r7_100 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0) || var_35 u< 0x1c)
                    goto label_4b98f5
                
                goto label_4b9948
            
        label_4b98f5:
            
            if (var_2a s>= 0)
                long double x87_r7_102 = fconvert.t(11f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_122
                eax_122.b = var_36
                *(ebp_1 - 0x6c) = eax_122
                long double x87_r6_65 = float.t(*(ebp_1 - 0x6c)) / data_4b9cbc
                x87_r6_65 - x87_r7_102
                eax_122.w = (x87_r6_65 < x87_r7_102 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_65, x87_r7_102) ? 1 : 0) << 0xa
                    | (x87_r6_65 == x87_r7_102 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_122:1.b, 0)))
                    goto label_4b9948
                
                long double x87_r7_104 = fconvert.t(8f) + fconvert.t(*(ebp_1 - 0x20))
                int32_t eax_123
                eax_123.b = var_36
                *(ebp_1 - 0x70) = eax_123
                long double x87_r6_67 = float.t(*(ebp_1 - 0x70)) / data_4b9cbc
                x87_r6_67 - x87_r7_104
                eax_123.w = (x87_r6_67 < x87_r7_104 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_67, x87_r7_104) ? 1 : 0) << 0xa
                    | (x87_r6_67 == x87_r7_104 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_123:1.b, 0)) && var_35 u>= 0x19)
                    goto label_4b9948
    
    int32_t eax_126
    eax_126.b = var_36
    *(ebp_1 - 0x38) = eax_126
    long double x87_r7_107 = float.t(*(ebp_1 - 0x38)) / fconvert.t(255f) * fconvert.t(100f)
    long double temp6 = fconvert.t(70f)
    x87_r7_107 - temp6
    eax_126.w = (x87_r7_107 < temp6 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_107, temp6) ? 1 : 0) << 0xa
        | (x87_r7_107 == temp6 ? 1 : 0) << 0xe
    void* eax_127
    
    if (test_bit(eax_126:1.b, 0))
        char var_34
        eax_127.b = var_34
        *(ebp_1 - 0x3c) = eax_127
        long double x87_r7_110 = float.t(*(ebp_1 - 0x3c)) / fconvert.t(255f) * fconvert.t(100f)
        long double temp12_1 = fconvert.t(60f)
        x87_r7_110 - temp12_1
        eax_127.w = (x87_r7_110 < temp12_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_110, temp12_1) ? 1 : 0) << 0xa
            | (x87_r7_110 == temp12_1 ? 1 : 0) << 0xe
    
    if (not(test_bit(eax_126:1.b, 0)) || not(test_bit(eax_127:1.b, 0)))
        eax_127.b = *(*esi_2 + 0x20094)
        char temp11_1 = eax_127.b
        eax_127.b -= 3
        
        if (temp11_1 == 3)
        label_4b99c6:
            
            if (*ebx_1 == 3)
                *(esp - 4) = ebp_1
                eax_127 = sub_4b8be4(0, edx_54)
                *(esp - 4)
                
                if (eax_127.b != 0)
                    *ebx_1 = 1
        else
            char temp17_1 = eax_127.b
            eax_127.b -= 2
            
            if (temp17_1 == 2)
                goto label_4b99c6
            
            char temp23_1 = eax_127.b
            eax_127.b -= 2
            
            if (temp23_1 == 2)
                goto label_4b99c6
    
    eax_127.b = *ebx_1
    char edx_66 = eax_127.b
    char temp24_1
    
    if (edx_66 != 0)
        temp24_1 = edx_66
    
    if (edx_66 == 0 || temp24_1 == 4)
        if (eax_127.b == 0 && ebx_1[1] == 1)
            void* edx_67 = *esi_2
            *(edx_67 + 0x21108)
            bool o_48 = unimplemented  {imul dword [edx+0x21108]}
            
            if (o_48)
                sub_403010()
                noreturn
            
            *(ebx_1 + 4) *= *(edx_67 + 0x21108)
            ebx_1[1] = 3
        
        if (*ebx_1 == 4)
            *(ebp_1 - 4)
            int32_t eax_130 = *(ebp_1 - 4) * 0x41
            bool o_49 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
            
            if (o_49)
                sub_403010()
                noreturn
            
            if (*(*esi_2 + (eax_130 << 3) + 0x2007e) == 0)
                if (*(*esi_2 + (eax_130 << 3) + 0x2007c) == 0)
                    *ebx_1 = 1
                else
                    *ebx_1 = 0
                    ebx_1[1] = 3
                    *(ebx_1 + 4) = *(*esi_2 + 0x210ec)
        
        int32_t eax_134 = *(*esi_2 + 0x210ec)
        
        if (eax_134 s<= *(ebx_1 + 4))
            *(ebx_1 + 4) = eax_134
        
        if (*(*esi_2 + 0x2007d) != 0)
            *(ebp_1 - 4)
            bool o_50 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
            
            if (o_50)
                sub_403010()
                noreturn
            
            if (*(*esi_2 + *(ebp_1 - 4) * 0x208 + 0x2007c) == 0 && *ebx_1 == 0)
                *ebx_1 = 1
    
    *(ebp_1 - 0x1c) = 0x3f800000
    
    if (*(*esi_2 + 0x21108) s>= sx.d(var_2a))
        void* edx_72 = *esi_2
        *(edx_72 + 0x21108)
        int16_t var_2e
        int32_t eax_140 = sx.d(var_2e) * *(edx_72 + 0x21108)
        bool o_51 = unimplemented  {imul dword [edx+0x21108]}
        
        if (o_51)
            sub_403010()
            noreturn
        
        *(ebp_1 - 4)
        int32_t edx_73 = *(ebp_1 - 4) * 0x41
        bool o_52 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
        
        if (o_52)
            sub_403010()
            noreturn
        
        int32_t ecx_12 = *esi_2
        
        if (add_overflow(eax_140, *(ecx_12 + (edx_73 << 3) + 0x1fea4)))
            sub_403010()
            noreturn
        
        *(ebp_1 - 0x38) = eax_140 + *(ecx_12 + (edx_73 << 3) + 0x1fea4)
        long double x87_r7_111 = float.t(*(ebp_1 - 0x38))
        long double x87_r6_69 = float.t(*(*esi_2 + 0x20070)) / fconvert.t(4f)
        x87_r6_69 - x87_r7_111
        void* eax_142
        eax_142.w = (x87_r6_69 < x87_r7_111 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_69, x87_r7_111) ? 1 : 0) << 0xa
            | (x87_r6_69 == x87_r7_111 ? 1 : 0) << 0xe
        
        if ((test_bit(eax_142:1.b, 6) || test_bit(eax_142:1.b, 0)) && var_2e s>= 3)
            void* eax_143
            eax_143.b = *(*esi_2 + 0x20094)
            char temp65_1 = eax_143.b
            eax_143.b -= 3
            
            if (temp65_1 == 3)
            label_4b9b0f:
                eax_143.b = *ebx_1
                char temp72_1 = eax_143.b
                eax_143.b -= 2
                
                if (temp72_1 u< 2)
                    long double x87_r7_113 = fconvert.t(48f) * fconvert.t(*(ebp_1 - 0x1c))
                    int32_t eax_144
                    eax_144.b = var_36
                    *(ebp_1 - 0x38) = eax_144
                    long double x87_r6_71 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
                    x87_r6_71 - x87_r7_113
                    eax_144.w = (x87_r6_71 < x87_r7_113 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_71, x87_r7_113) ? 1 : 0) << 0xa
                        | (x87_r6_71 == x87_r7_113 ? 1 : 0) << 0xe
                    int32_t eax_145
                    
                    if (not(test_bit(eax_144:1.b, 6)) && not(test_bit(eax_144:1.b, 0)))
                        long double x87_r7_115 = fconvert.t(68f) * fconvert.t(*(ebp_1 - 0x1c))
                        eax_145.b = var_35
                        *(ebp_1 - 0x3c) = eax_145
                        long double x87_r6_73 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                        x87_r6_73 - x87_r7_115
                        eax_145.w = (x87_r6_73 < x87_r7_115 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_73, x87_r7_115) ? 1 : 0) << 0xa
                            | (x87_r6_73 == x87_r7_115 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_144:1.b, 6) || test_bit(eax_144:1.b, 0) || test_bit(eax_145:1.b, 6)
                            || test_bit(eax_145:1.b, 0))
                        *ebx_1 = 3
            else
                char temp73_1 = eax_143.b
                eax_143.b -= 2
                
                if (temp73_1 == 2)
                    goto label_4b9b0f
                
                char temp79_1 = eax_143.b
                eax_143.b -= 2
                
                if (temp79_1 == 2)
                    goto label_4b9b0f
                
                eax_143.b = *ebx_1
                char temp84_1 = eax_143.b
                eax_143.b -= 2
                
                if (temp84_1 u< 2)
                    long double x87_r7_117 = fconvert.t(48f) * fconvert.t(*(ebp_1 - 0x1c))
                    int32_t eax_146
                    eax_146.b = var_36
                    *(ebp_1 - 0x38) = eax_146
                    long double x87_r6_75 = float.t(*(ebp_1 - 0x38)) / data_4b9cbc
                    x87_r6_75 - x87_r7_117
                    eax_146.w = (x87_r6_75 < x87_r7_117 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_75, x87_r7_117) ? 1 : 0) << 0xa
                        | (x87_r6_75 == x87_r7_117 ? 1 : 0) << 0xe
                    int32_t eax_147
                    
                    if (not(test_bit(eax_146:1.b, 6)) && not(test_bit(eax_146:1.b, 0)))
                        long double x87_r7_119 = fconvert.t(68f) * fconvert.t(*(ebp_1 - 0x1c))
                        eax_147.b = var_35
                        *(ebp_1 - 0x3c) = eax_147
                        long double x87_r6_77 = float.t(*(ebp_1 - 0x3c)) / data_4b9cbc
                        x87_r6_77 - x87_r7_119
                        eax_147.w = (x87_r6_77 < x87_r7_119 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_77, x87_r7_119) ? 1 : 0) << 0xa
                            | (x87_r6_77 == x87_r7_119 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_146:1.b, 6) || test_bit(eax_146:1.b, 0) || test_bit(eax_147:1.b, 6)
                            || test_bit(eax_147:1.b, 0))
                        *ebx_1 = 3
    
    *(ebp_1 - 4)
    int32_t eax_148 = *(ebp_1 - 4) * 0x41
    bool o_54 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
    
    if (o_54)
        sub_403010()
        noreturn
    
    int32_t edx_74 = *esi_2
    int32_t edi_1 = *(*esi_2 + 0x21104)
    int32_t edi_2 = edi_1 - *(edx_74 + (eax_148 << 3) + 0x1fea4)
    
    if (add_overflow(edi_1, neg.d(*(edx_74 + (eax_148 << 3) + 0x1fea4))))
        sub_403010()
        noreturn
    
    int32_t ecx_14 = sub_4cc6dc(*(ebp_1 - 4))
    int32_t eax_150
    eax_150.b = *ebx_1
    
    if (eax_150.b == 1)
        int32_t temp56_1 = ecx_14
        ecx_14 -= edi_2
        
        if (add_overflow(temp56_1, neg.d(edi_2)))
            sub_403010()
            noreturn
    else if (eax_150.b == 0)
        if (ebx_1[1] != 1)
            int32_t ecx_16 = ecx_14 - edi_2
            
            if (add_overflow(ecx_14, neg.d(edi_2)))
                sub_403010()
                noreturn
            
            ecx_14 = ecx_16 - *(ebx_1 + 4)
            
            if (add_overflow(ecx_16, neg.d(*(ebx_1 + 4))))
                sub_403010()
                noreturn
        else
            void* edx_75 = *esi_2
            *(edx_75 + 0x21108)
            int32_t eax_152 = *(ebx_1 + 4) * *(edx_75 + 0x21108)
            bool o_57 = unimplemented  {imul dword [edx+0x21108]}
            
            if (o_57)
                sub_403010()
                noreturn
            
            int32_t ecx_15 = ecx_14 - edi_2
            
            if (add_overflow(ecx_14, neg.d(edi_2)))
                sub_403010()
                noreturn
            
            ecx_14 = ecx_15 - eax_152
            
            if (add_overflow(ecx_15, neg.d(eax_152)))
                sub_403010()
                noreturn
    
    *(ebp_1 - 4)
    bool o_62 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
    
    if (o_62)
        sub_403010()
        noreturn
    
    if (*(*esi_2 + *(ebp_1 - 4) * 0x208 + 0x2007e) != 0)
        if (ecx_14 s>= *(*esi_2 + 0x21108) || ecx_14 s<= 0)
            void* eax_155 = *esi_2
            *(eax_155 + 0x21108)
            bool o_63 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
            
            if (o_63)
                sub_403010()
                noreturn
            
            if (ecx_14 s< *(eax_155 + 0x21108) * 2 && ecx_14 s> 0)
                int32_t eax_158 = *(*esi_2 + 0x4584)
                
                if (add_overflow(eax_158, 1))
                    sub_403010()
                    noreturn
                
                if (mods.dp.d(sx.q(eax_158 + 1), *(*esi_2 + 0x20078)) == 0)
                    *ebx_1 = 4
        else
            *ebx_1 = 4
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b9cb5
    return sub_403e1c(ebp_1 - 0x4c, 3)
}
