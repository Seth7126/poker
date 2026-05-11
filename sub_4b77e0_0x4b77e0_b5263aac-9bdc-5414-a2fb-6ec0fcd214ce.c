// ============================================================
// 函数名称: sub_4b77e0
// 虚拟地址: 0x4b77e0
// WARP GUID: b5263aac-9bdc-5414-a2fb-6ec0fcd214ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406807, sub_402b4c, sub_403e1c, sub_403010, sub_402d38, sub_4c2ca0, sub_402d20, sub_4c02cc, sub_420b10, sub_420bc8, sub_4cc6dc, sub_408e1c, sub_4b7068, sub_403df8, sub_4c2d18, sub_420ad0, sub_4746a0, sub_4c2be8, sub_4c2de8, sub_4b72e4, sub_420b88
// [被调用的父级函数]: sub_527454, sub_4c62e8, sub_4b8c38
// ============================================================

void** __fastcallsub_4b77e0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_9c = ebx
    int32_t esi
    int32_t var_a0 = esi
    int32_t edi
    int32_t var_a4 = edi
    void* var_98 = nullptr
    void* var_94 = nullptr
    void* var_84 = nullptr
    int32_t* var_a8 = &var_4
    int32_t (* var_ac)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax = sub_4c2de8(0)
    int32_t eax_1 = sub_4c2ca0()
    int32_t eax_4 = *(*data_5301f4 + 0xfff8)
    
    if (add_overflow(eax_4, 0xffffffff))
        sub_403010()
        noreturn
    
    bool o_1 = unimplemented  {imul eax, eax, 0x64}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t eax_8 = sub_402b4c(float.t((eax_4 - 1) * 0x64) / float.t(*data_5300d0))
    bool o_2 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
    
    if (o_2)
        sub_403010()
        noreturn
    
    int32_t eax_10 = *(*data_5301f4 + arg2 * 0x208 + 0x1fea4)
    int32_t edx_4 = *(*data_5301f4 + 0x21100)
    int32_t edx_7 = *(*data_5301f4 + 0x21108)
    bool o_3 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *data_5301f4
    int32_t edx_11 = *(*data_5301f4 + 0x21104)
    int32_t edx_12 = edx_11 - eax_10
    
    if (add_overflow(edx_11, neg.d(eax_10)))
        sub_403010()
        noreturn
    
    if (edx_12 s< 0)
        int32_t var_b4_1 = 0
        sub_408e1c(*(*data_5301f4 + 0x10020), &var_84)
        sub_4746a0(var_84, 0x13, *data_530304, 0x4b8170, 0x4b8170)
    
    data_52fe74 = 0
    int32_t var_b4_2 = 0
    float var_7c
    int32_t ecx_4 = sub_4c02cc(eax, eax_1, arg2, &var_7c)
    float var_38 = fconvert.s(fconvert.t(var_7c) * fconvert.t(100f))
    float var_74
    float var_34 = fconvert.s(fconvert.t(var_74) * fconvert.t(100f))
    
    if (sub_4b72e4(arg2) != 2)
        if (sub_4b72e4(arg2) != 1)
            if (sub_4b72e4(arg2) == 3)
                int32_t var_64_2 = 0xfffffff9
                int32_t eax_43
                eax_43, ecx_4 = sub_4b7068()
                int32_t var_64_3 = var_64_2 + eax_43
                
                if (add_overflow(var_64_2, eax_43))
                    sub_403010()
                    noreturn
                
                int32_t eax_46 = *(*data_5301f4 + 0xfff0)
                int32_t eax_47 = eax_46 s>> 1
                bool c_5 = unimplemented  {sar eax, 0x1}
                
                if (eax_46 s>> 1 s< 0)
                    eax_47 = adc.d(eax_47, 0, c_5)
                
                if (add_overflow(eax_47, 1))
                    sub_403010()
                    noreturn
                
                int32_t eax_49 = eax_47 + 1 + eax_1
                
                if (add_overflow(eax_47 + 1, eax_1))
                    sub_403010()
                    noreturn
                
                int32_t var_64_4
                
                if (eax_49 s< 8)
                    data_5301f4
                    
                    if (eax_49 s< 7)
                        data_5301f4
                        
                        if (eax_49 s< 6)
                            var_64_4 = var_64_3 + 4
                            
                            if (add_overflow(var_64_3, 4))
                                sub_403010()
                                noreturn
                        else
                            var_64_4 = var_64_3 + 2
                            
                            if (add_overflow(var_64_3, 2))
                                sub_403010()
                                noreturn
                    else
                        var_64_4 = var_64_3
                        
                        if (add_overflow(var_64_3, 0))
                            sub_403010()
                            noreturn
                else
                    var_64_4 = var_64_3 - 2
                    
                    if (add_overflow(var_64_3, 0xfffffffe))
                        sub_403010()
                        noreturn
                
                long double x87_r7_22 = fconvert.t(var_38)
                long double temp37_1 = fconvert.t(95f)
                x87_r7_22 - temp37_1
                eax_49.w = (x87_r7_22 < temp37_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_22, temp37_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == temp37_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_49:1.b, 0))
                    int32_t eax_50
                    int32_t edx_29
                    eax_50, edx_29 = sub_402b4c(float.t(var_64_4) + fconvert.t(var_38))
                    int32_t eax_51
                    int32_t edx_30
                    eax_51, edx_30 = sub_420ad0(0x64, 0, eax_50, edx_29)
                    int32_t eax_52
                    int32_t edx_31
                    eax_52, edx_31 = sub_420b88(0, 0, eax_51, edx_30)
                    int32_t var_88_5 = edx_31
                    var_38 = fconvert.s(float.t(eax_52.q))
                    int32_t eax_53
                    int32_t edx_32
                    eax_53, edx_32 = sub_402b4c(float.t(var_64_4) + fconvert.t(var_34))
                    int32_t var_88_6 = edx_32
                    long double st0_4
                    st0_4, ecx_4 =
                        sub_420bc8(0f, fconvert.s(sub_420b10(var_38, fconvert.s(float.t(eax_53.q)))))
                    var_34 = fconvert.s(st0_4)
        else
            long double st0_1 = sub_402d38()
            long double x87_r6_1 = data_4b8178
            x87_r6_1 - st0_1
            int32_t eax_31
            eax_31.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
            int32_t var_64
            
            if (not(test_bit(eax_31:1.b, 6)) && not(test_bit(eax_31:1.b, 0)))
                long double st0_2 = sub_402d38()
                long double temp14_1 = fconvert.t(0.5f)
                st0_2 - temp14_1
                eax_31.w = (st0_2 < temp14_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_2, temp14_1) ? 1 : 0) << 0xa
                    | (st0_2 == temp14_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_31:1.b, 0)))
                    sub_402d20(0x21)
                else
                    sub_402d20(0x21)
                
                int32_t eax_32 = sub_402d20(0x3e)
                
                if (add_overflow(eax_32, 0xffffffe1))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_32 - 0x1f, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_32 - 0x21, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                var_64 = eax_32 - 0x23
            
            long double x87_r7_14 = fconvert.t(var_38)
            long double temp13_1 = fconvert.t(21f)
            x87_r7_14 - temp13_1
            eax_31.w = (x87_r7_14 < temp13_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_14, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp13_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_31:1.b, 0))
                int32_t temp19_1 = var_64
                var_64 += 0xb
                
                if (add_overflow(temp19_1, 0xb))
                    sub_403010()
                    noreturn
            
            long double x87_r7_15 = fconvert.t(var_38)
            long double temp18_1 = fconvert.t(69f)
            x87_r7_15 - temp18_1
            eax_31.w = (x87_r7_15 < temp18_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_15, temp18_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == temp18_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_31:1.b, 6)) && not(test_bit(eax_31:1.b, 0)))
                int32_t temp21_1 = var_64
                var_64 -= 0x10
                
                if (add_overflow(temp21_1, 0xfffffff0))
                    sub_403010()
                    noreturn
            
            int32_t eax_35
            int32_t edx_21
            eax_35, edx_21 = sub_402b4c(float.t(var_64) + fconvert.t(var_38))
            int32_t eax_36
            int32_t edx_22
            eax_36, edx_22 = sub_420ad0(0x64, 0, eax_35, edx_21)
            int32_t eax_37
            int32_t edx_23
            eax_37, edx_23 = sub_420b88(0, 0, eax_36, edx_22)
            int32_t var_88_3 = edx_23
            var_38 = fconvert.s(float.t(eax_37.q))
            int32_t eax_38
            int32_t edx_24
            eax_38, edx_24 = sub_402b4c(float.t(var_64) + fconvert.t(var_34))
            int32_t eax_39
            int32_t edx_25
            eax_39, edx_25 = sub_420ad0(0x64, 0, eax_38, edx_24)
            int32_t eax_40
            int32_t edx_26
            eax_40, ecx_4, edx_26 = sub_420b88(0, 0, eax_39, edx_25)
            int32_t var_88_4 = edx_26
            var_34 = fconvert.s(float.t(eax_40.q))
    else
        int32_t eax_19 = sub_402d20(0x1c)
        
        if (add_overflow(eax_19, 0xfffffff2))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_19 - 0xe, 0xffffffff))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_19 - 0xf, 0xfffffffe))
            sub_403010()
            noreturn
        
        int32_t eax_23
        int32_t edx_15
        eax_23, edx_15 = sub_402b4c(float.t(eax_19 - 0x11) + fconvert.t(var_38))
        int32_t eax_24
        int32_t edx_16
        eax_24, edx_16 = sub_420ad0(0x64, 0, eax_23, edx_15)
        int32_t eax_25
        int32_t edx_17
        eax_25, edx_17 = sub_420b88(0, 0, eax_24, edx_16)
        int32_t var_88_1 = edx_17
        var_38 = fconvert.s(float.t(eax_25.q))
        int32_t eax_26
        int32_t edx_18
        eax_26, edx_18 = sub_402b4c(float.t(eax_19 - 0x11) + fconvert.t(var_34))
        int32_t eax_27
        int32_t edx_19
        eax_27, edx_19 = sub_420ad0(0x64, 0, eax_26, edx_18)
        int32_t eax_28
        int32_t edx_20
        eax_28, ecx_4, edx_20 = sub_420b88(0, 0, eax_27, edx_19)
        int32_t var_88_2 = edx_20
        var_34 = fconvert.s(float.t(eax_28.q))
    
    float var_30 = fconvert.s((fconvert.t(var_38) + fconvert.t(var_34)) * fconvert.t(0.5f))
    int32_t eax_56 = *(*data_5301f4 + 0x21104)
    
    if (add_overflow(eax_56, edx_7))
        sub_403010()
        noreturn
    
    int32_t eax_58
    int32_t edx_33
    edx_33:eax_58 = sx.q(eax_56 + edx_7)
    bool o_21 = add_overflow(eax_1, 0xffffffff)
    
    if (o_21)
        sub_403010()
        noreturn
    
    int32_t eax_61
    int32_t edx_34
    eax_61, edx_34 = sub_402b4c(float.t(eax_1 - 1) * data_4b8194)
    int32_t eax_62
    int32_t edx_35
    eax_62, edx_35 = sub_406807(ecx_4, edx_34, eax_61, eax_58, edx_33)
    
    if (o_21)
        sub_403010()
        noreturn
    
    int32_t var_88_7 = edx_35
    
    if (add_overflow(eax_10, edx_12))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_10 + edx_12, edx_7))
        sub_403010()
        noreturn
    
    data_4b8194
    int32_t var_60 = 0x64
    int32_t eax_67 = sub_4c2d18(0) * 5
    bool o_24 = unimplemented  {imul eax, eax, 0x5}
    
    if (o_24)
        sub_403010()
        noreturn
    
    int32_t ebx_1 = eax_67
    
    if (add_overflow(0, eax_67))
        sub_403010()
        noreturn
    
    int32_t i_2 = *data_5300d0
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t edi_1 = 1
        int32_t i
        
        do
            if (sub_4c2be8(edi_1) != 0 && edi_1 != arg2)
                int32_t eax_71 = edi_1 * 0x41
                bool o_26 = unimplemented  {imul eax, edi, 0x41}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                int32_t edx_37 = *data_5301f4
                *(edx_37 + (eax_71 << 3) + 0x20080)
                int32_t eax_72 = *(edx_37 + (eax_71 << 3) + 0x20080) * 3
                bool o_27 = unimplemented  {imul eax, dword [edx+eax*8+0x20080], 0x3}
                
                if (o_27)
                    sub_403010()
                    noreturn
                
                int32_t temp45_1 = ebx_1
                ebx_1 += eax_72
                
                if (add_overflow(temp45_1, eax_72))
                    sub_403010()
                    noreturn
            
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (ebx_1 s> 0x1e)
        ebx_1 = 0x1e
    
    int32_t var_60_1 = var_60 - ebx_1
    
    if (add_overflow(var_60, neg.d(ebx_1)))
        sub_403010()
        noreturn
    
    int32_t ecx_5 = *(*data_5301f4 + 0x21108)
    int32_t ebx_2 = divs.dp.d(sx.q(*(*data_5301f4 + 0x21100)), ecx_5)
    
    if (ebx_2 s> 0x14)
        ebx_2 = 0x14
    
    int32_t var_60_2 = var_60_1 - ebx_2
    
    if (add_overflow(var_60_1, neg.d(ebx_2)))
        sub_403010()
        noreturn
    
    if (add_overflow(edx_12, neg.d(eax_10)))
        sub_403010()
        noreturn
    
    int32_t eax_80 = (edx_12 - eax_10) * 2
    bool o_32 = unimplemented  {imul eax, eax, 0x2}
    
    if (o_32)
        sub_403010()
        noreturn
    
    int32_t ebx_3 = eax_80
    
    if (add_overflow(0, eax_80))
        sub_403010()
        noreturn
    
    if (ebx_3 s< 0)
        ebx_3 = 0
    
    int32_t eax_84 = divs.dp.d(sx.q(edx_12), ecx_5) * 2
    bool o_34 = unimplemented  {imul eax, eax, 0x2}
    
    if (o_34)
        sub_403010()
        noreturn
    
    int32_t ebx_4 = ebx_3 + eax_84
    
    if (add_overflow(ebx_3, eax_84))
        sub_403010()
        noreturn
    
    if (ebx_4 s> 0x14)
        ebx_4 = 0x14
    
    int32_t var_60_3 = var_60_2 - ebx_4
    
    if (add_overflow(var_60_2, neg.d(ebx_4)))
        sub_403010()
        noreturn
    
    sub_4cc6dc(arg2)
    data_4b81a4
    long double x87_r6_9 = float.t(edx_12)
    int32_t ebx_5 = sub_402b4c(x87_r6_9 / x87_r6_9 * fconvert.t(20f))
    
    if (ebx_5 s> 0x14)
        ebx_5 = 0x14
    
    int32_t var_60_4 = var_60_3 - ebx_5
    
    if (add_overflow(var_60_3, neg.d(ebx_5)))
        sub_403010()
        noreturn
    
    int32_t ebx_6 = sub_402b4c(fconvert.t(10f) - float.t(eax_8) / fconvert.t(10f))
    
    if (ebx_6 s> 0xa)
        ebx_6 = 0xa
    
    int32_t var_60_5 = var_60_4 - ebx_6
    
    if (add_overflow(var_60_4, neg.d(ebx_6)))
        sub_403010()
        noreturn
    
    float var_30_2
    
    if (var_60_5 s<= 0xa)
        var_30_2 = fconvert.s(fconvert.t(var_34) - data_4b81b8)
    else if (var_60_5 s<= 0x14)
        var_30_2 = var_34
    else if (var_60_5 s< 0x50)
        if (add_overflow(var_60_5, 0xffffffec))
            sub_403010()
            noreturn
        
        float var_68_1 = fconvert.s(float.t(var_60_5 - 0x14) / fconvert.t(60f))
        var_30_2 = fconvert.s(fconvert.t(var_38) * fconvert.t(var_68_1)
            + (fconvert.t(1f) - fconvert.t(var_68_1)) * fconvert.t(var_34))
    else
        var_30_2 = var_38
    
    *arg1 = sub_402b4c(fconvert.t(var_30_2) * fconvert.t(255f) / fconvert.t(100f))
    arg1[1] = sub_402b4c(fconvert.t(var_38) * fconvert.t(255f) / fconvert.t(100f))
    arg1[2] = sub_402b4c(fconvert.t(var_34) * fconvert.t(255f) / fconvert.t(100f))
    *(arg1 + 4) = (divs.dp.d(sx.q(edx_4), *(*data_5301f4 + 0x21108))).w
    *(arg1 + 6) = (divs.dp.d(sx.q(eax_10), *(*data_5301f4 + 0x21108))).w
    *(arg1 + 8) = (divs.dp.d(sx.q(edx_12), *(*data_5301f4 + 0x21108))).w
    
    if (*(arg1 + 6) s< 0)
        int32_t var_b4_19 = 0
        sub_408e1c(*(*data_5301f4 + 0x10020), &var_94)
        sub_4746a0(var_94, 0x14, *data_530304, 0x4b8170, 0x4b8170)
    
    if (*(arg1 + 8) s< 0)
        int32_t var_b4_20 = 0
        sub_408e1c(*(*data_5301f4 + 0x10020), &var_98)
        sub_4746a0(var_98, 0x15, *data_530304, 0x4b8170, 0x4b8170)
    
    if (*(arg1 + 4) s> 0xc8)
        *(arg1 + 4) = 0xc8
    
    if (*(arg1 + 6) s> 0xc8)
        *(arg1 + 6) = 0xc8
    
    if (*(arg1 + 8) s> 0xc8)
        *(arg1 + 8) = 0xc8
    
    if (*(*data_5301f4 + 0x20094) == 7)
        arg1[0xa] = 6
    else if (*(*data_5301f4 + 0x20094) == 5)
        arg1[0xa] = 4
    else if (*(*data_5301f4 + 0x20094) != 3)
        arg1[0xa] = 0
    else
        arg1[0xa] = 3
    
    if (edx_12 s>= 0)
        int32_t eax_128
        eax_128.b = arg1[0xa]
        
        if (add_overflow(eax_128, 0xa))
            sub_403010()
            noreturn
        
        arg1[0xa] = eax_128.b + 0xa
    
    int32_t eax_130
    int32_t edx_53
    eax_130, edx_53 = sub_402b4c(float.t(var_60_5) / fconvert.t(100f) * fconvert.t(255f))
    arg1[0xb] = sub_420ad0(eax_130, edx_53, 0xff, 0)
    *(arg1 + 0xc) = sub_402b4c(fconvert.t(fconvert.s(
        fconvert.t(var_30_2) / fconvert.t(100f) * float.t(edx_4)
        - (fconvert.t(1f) - fconvert.t(var_30_2) / fconvert.t(100f)) * float.t(edx_12))))
    int32_t eax_133 = sub_4c2ca0()
    
    if (add_overflow(eax_133, 0xffffffff))
        sub_403010()
        noreturn
    
    long double x87_r7_75 = float.t(*(*data_5301f4 + 0x21108)) * fconvert.t(fconvert.s(
        float.t(eax_133 - 1) * fconvert.t(var_30_2) / fconvert.t(100f) * fconvert.t(0.5f)
        * fconvert.t(1f) - (fconvert.t(1f) - fconvert.t(var_30_2) / fconvert.t(100f)) * fconvert.t(1f)))
    *(arg1 + 0xe) = sub_402b4c(x87_r7_75)
    arg1[0x10] = arg2.b
    bool o_42 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
    
    if (o_42)
        sub_403010()
        noreturn
    
    void* eax_140 = *data_5301f4 + arg2 * 0x208 + 0x1fea0
    *(eax_140 + 0x1fc) = fconvert.s(float.t(*(arg1 + 0xc)))
    int32_t edx_56
    edx_56.b = *arg1
    *(eax_140 + 0x200) = fconvert.s(float.t(edx_56))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_a8_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4b8167
    sub_403e1c(&var_98, 2)
    void** result = &var_84
    sub_403df8(result)
    return result
}
