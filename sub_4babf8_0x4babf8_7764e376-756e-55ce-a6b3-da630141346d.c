// ============================================================
// 函数名称: sub_4babf8
// 虚拟地址: 0x4babf8
// WARP GUID: 7764e376-756e-55ce-a6b3-da630141346d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b4c, sub_403010, sub_402d38, sub_4c2ca0, sub_402d20, sub_4baba4, sub_4c02cc, sub_4c2c48, sub_420b10, sub_420bc8, sub_420b80, sub_4cc6dc, sub_4b7068, sub_4c2d18, sub_420ad0, sub_4c2be8, sub_4c2de8, sub_4b72e4, sub_420b88
// [被调用的父级函数]: sub_4b8c38
// ============================================================

char* __convention("regparm")sub_4babf8(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_a8 = entry_ebx
    int32_t eax = sub_4c2de8(0)
    int32_t eax_1 = sub_4c2ca0()
    bool var_4e = *(data_5301b0 + 0x69c24) == 0
    void* eax_4 = *data_5301f4
    *(eax_4 + 0xfff8)
    bool o = unimplemented  {imul eax, dword [eax+0xfff8], 0x64}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t eax_7 = sub_402b4c(float.t(*(eax_4 + 0xfff8) * 0x64) / float.t(*data_5300d0))
    bool o_1 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t eax_10 = *(*data_5301f4 + arg1 * 0x208 + 0x1fea4)
    int32_t edx_4 = *(*data_5301f4 + 0x21100)
    int32_t var_30 = *(*data_5301f4 + 0x210f8)
    bool o_2 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *data_5301f4
    int32_t edi = *(*data_5301f4 + 0x21104)
    int32_t edi_1 = edi - eax_10
    
    if (add_overflow(edi, neg.d(eax_10)))
        sub_403010()
        noreturn
    
    data_52fe74 = 0
    int32_t var_b4 = 0
    float var_94
    sub_4c02cc(eax, eax_1, arg1, &var_94)
    float var_3c = fconvert.s(fconvert.t(var_94) * fconvert.t(100f))
    float var_8c
    float var_38 = fconvert.s(fconvert.t(var_8c) * fconvert.t(100f))
    
    if (sub_4b72e4(arg1) != 2)
        if (sub_4b72e4(arg1) != 1)
            if (sub_4b72e4(arg1) == 3)
                int32_t var_70_2 = 0xfffffffa
                int32_t eax_36 = sub_4b7068()
                
                if (add_overflow(var_70_2, eax_36))
                    sub_403010()
                    noreturn
                
                int32_t eax_37
                int32_t edx_24
                eax_37, edx_24 = sub_402b4c(float.t(var_70_2 + eax_36) + fconvert.t(var_3c))
                int32_t eax_38
                int32_t edx_25
                eax_38, edx_25 = sub_420ad0(0x64, 0, eax_37, edx_24)
                int32_t eax_39
                int32_t edx_26
                eax_39, edx_26 = sub_420b88(0, 0, eax_38, edx_25)
                int32_t var_9c_5 = edx_26
                var_3c = fconvert.s(float.t(eax_39.q))
                int32_t var_70_4 = 0xfffffff8
                int32_t eax_40 = sub_4b7068()
                
                if (add_overflow(var_70_4, eax_40))
                    sub_403010()
                    noreturn
                
                int32_t eax_41
                int32_t edx_27
                eax_41, edx_27 = sub_402b4c(float.t(var_70_4 + eax_40) + fconvert.t(var_38))
                int32_t var_9c_6 = edx_27
                var_38 = fconvert.s(sub_420bc8(0f, 
                    fconvert.s(sub_420b10(var_3c, fconvert.s(float.t(eax_41.q))))))
        else
            long double st0_1 = sub_402d38()
            long double x87_r6_1 = data_4bc324
            x87_r6_1 - st0_1
            int32_t eax_25
            eax_25.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
            int32_t var_70
            
            if (not(test_bit(eax_25:1.b, 6)) && not(test_bit(eax_25:1.b, 0)))
                long double st0_2 = sub_402d38()
                long double temp12_1 = fconvert.t(0.5f)
                st0_2 - temp12_1
                eax_25.w = (st0_2 < temp12_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_2, temp12_1) ? 1 : 0) << 0xa
                    | (st0_2 == temp12_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_25:1.b, 0)))
                    sub_402d20(0x1a)
                else
                    sub_402d20(0x1a)
                
                int32_t eax_26 = sub_402d20(0x38)
                
                if (add_overflow(eax_26, 0xffffffe4))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_26 - 0x1c, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                var_70 = eax_26 - 0x1e
            
            long double x87_r7_14 = fconvert.t(var_3c)
            long double temp11_1 = fconvert.t(20f)
            x87_r7_14 - temp11_1
            eax_25.w = (x87_r7_14 < temp11_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_14, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp11_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_25:1.b, 0))
                int32_t temp16_1 = var_70
                var_70 += 9
                
                if (add_overflow(temp16_1, 9))
                    sub_403010()
                    noreturn
            
            long double x87_r7_15 = fconvert.t(var_3c)
            long double temp15_1 = fconvert.t(70f)
            x87_r7_15 - temp15_1
            eax_25.w = (x87_r7_15 < temp15_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_15, temp15_1) ? 1 : 0) << 0xa
                | (x87_r7_15 == temp15_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_25:1.b, 6)) && not(test_bit(eax_25:1.b, 0)))
                int32_t temp17_1 = var_70
                var_70 -= 0xe
                
                if (add_overflow(temp17_1, 0xfffffff2))
                    sub_403010()
                    noreturn
            
            int32_t eax_28
            int32_t edx_18
            eax_28, edx_18 = sub_402b4c(float.t(var_70) + fconvert.t(var_3c))
            int32_t eax_29
            int32_t edx_19
            eax_29, edx_19 = sub_420ad0(0x64, 0, eax_28, edx_18)
            int32_t eax_30
            int32_t edx_20
            eax_30, edx_20 = sub_420b88(0, 0, eax_29, edx_19)
            int32_t var_9c_3 = edx_20
            var_3c = fconvert.s(float.t(eax_30.q))
            int32_t eax_31
            int32_t edx_21
            eax_31, edx_21 = sub_402b4c(float.t(var_70) + fconvert.t(var_38))
            int32_t eax_32
            int32_t edx_22
            eax_32, edx_22 = sub_420ad0(0x64, 0, eax_31, edx_21)
            int32_t eax_33
            int32_t edx_23
            eax_33, edx_23 = sub_420b88(0, 0, eax_32, edx_22)
            int32_t var_9c_4 = edx_23
            var_38 = fconvert.s(float.t(eax_33.q))
    else
        int32_t eax_14 = sub_402d20(0x12)
        
        if (add_overflow(eax_14, 0xfffffff7))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_14 - 9, 0xffffffff))
            sub_403010()
            noreturn
        
        int32_t eax_17
        int32_t edx_12
        eax_17, edx_12 = sub_402b4c(float.t(eax_14 - 0xa) + fconvert.t(var_3c))
        int32_t eax_18
        int32_t edx_13
        eax_18, edx_13 = sub_420ad0(0x64, 0, eax_17, edx_12)
        int32_t eax_19
        int32_t edx_14
        eax_19, edx_14 = sub_420b88(0, 0, eax_18, edx_13)
        int32_t var_9c_1 = edx_14
        var_3c = fconvert.s(float.t(eax_19.q))
        int32_t eax_20
        int32_t edx_15
        eax_20, edx_15 = sub_402b4c(float.t(eax_14 - 0xa) + fconvert.t(var_38))
        int32_t eax_21
        int32_t edx_16
        eax_21, edx_16 = sub_420ad0(0x64, 0, eax_20, edx_15)
        int32_t eax_22
        int32_t edx_17
        eax_22, edx_17 = sub_420b88(0, 0, eax_21, edx_16)
        int32_t var_9c_2 = edx_17
        var_38 = fconvert.s(float.t(eax_22.q))
    
    float var_34 = fconvert.s((fconvert.t(var_3c) + fconvert.t(var_38)) * fconvert.t(0.5f))
    
    if (neg.d(eax_10) == 0x80000000)
        sub_403010()
        noreturn
    
    float var_40 = fconvert.s(float.t(neg.d(eax_10)))
    float var_44 = fconvert.s(fconvert.t(var_34) / fconvert.t(100f) * float.t(edx_4)
        - (fconvert.t(1f) - fconvert.t(var_34) / fconvert.t(100f)) * float.t(edi_1))
    int32_t eax_44 = sub_4c2ca0()
    
    if (add_overflow(eax_44, 0xffffffff))
        sub_403010()
        noreturn
    
    float var_48 = fconvert.s(
        float.t(eax_44 - 1) * fconvert.t(var_34) / fconvert.t(100f) * fconvert.t(0.5f) * fconvert.t(1f)
        - (fconvert.t(1f) - fconvert.t(var_34) / fconvert.t(100f)) * fconvert.t(1f))
    int32_t ebx
    
    if (var_4e == 0)
        int32_t var_68_1 = 0x64
        int32_t eax_87 = sub_4c2d18(0) * 5
        bool o_20 = unimplemented  {imul eax, eax, 0x5}
        
        if (o_20)
            sub_403010()
            noreturn
        
        int32_t ebx_1 = entry_ebx + eax_87
        
        if (add_overflow(entry_ebx, eax_87))
            sub_403010()
            noreturn
        
        int32_t i_2 = *data_5300d0
        
        if (i_2 s> 0)
            int32_t i_1 = i_2
            int32_t esi_1 = 1
            int32_t i
            
            do
                if (sub_4c2be8(esi_1) != 0 && esi_1 != arg1)
                    int32_t eax_91 = esi_1 * 0x41
                    bool o_22 = unimplemented  {imul eax, esi, 0x41}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_31 = *data_5301f4
                    *(edx_31 + (eax_91 << 3) + 0x20080)
                    int32_t eax_92 = *(edx_31 + (eax_91 << 3) + 0x20080) * 3
                    bool o_23 = unimplemented  {imul eax, dword [edx+eax*8+0x20080], 0x3}
                    
                    if (o_23)
                        sub_403010()
                        noreturn
                    
                    int32_t temp36_1 = ebx_1
                    ebx_1 += eax_92
                    
                    if (add_overflow(temp36_1, eax_92))
                        sub_403010()
                        noreturn
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (ebx_1 s> 0x1e)
            ebx_1 = 0x1e
        
        int32_t var_68_2 = var_68_1 - ebx_1
        
        if (add_overflow(var_68_1, neg.d(ebx_1)))
            sub_403010()
            noreturn
        
        int32_t ecx_3 = *(*data_5301f4 + 0x21108)
        int32_t ebx_2 = divs.dp.d(sx.q(*(*data_5301f4 + 0x21100)), ecx_3)
        
        if (ebx_2 s> 0x14)
            ebx_2 = 0x14
        
        int32_t var_68_3 = var_68_2 - ebx_2
        
        if (add_overflow(var_68_2, neg.d(ebx_2)))
            sub_403010()
            noreturn
        
        if (add_overflow(edi_1, neg.d(eax_10)))
            sub_403010()
            noreturn
        
        int32_t eax_100 = (edi_1 - eax_10) * 2
        bool o_28 = unimplemented  {imul eax, eax, 0x2}
        
        if (o_28)
            sub_403010()
            noreturn
        
        int32_t ebx_3 = eax_100
        
        if (add_overflow(0, eax_100))
            sub_403010()
            noreturn
        
        if (ebx_3 s< 0)
            ebx_3 = 0
        
        int32_t eax_104 = divs.dp.d(sx.q(edi_1), ecx_3) * 2
        bool o_30 = unimplemented  {imul eax, eax, 0x2}
        
        if (o_30)
            sub_403010()
            noreturn
        
        int32_t ebx_4 = ebx_3 + eax_104
        
        if (add_overflow(ebx_3, eax_104))
            sub_403010()
            noreturn
        
        if (ebx_4 s> 0x14)
            ebx_4 = 0x14
        
        int32_t var_68_4 = var_68_3 - ebx_4
        
        if (add_overflow(var_68_3, neg.d(ebx_4)))
            sub_403010()
            noreturn
        
        sub_4cc6dc(arg1)
        data_4bc410
        long double x87_r6_80 = float.t(edi_1)
        int32_t ebx_5 = sub_402b4c(x87_r6_80 / x87_r6_80 * fconvert.t(20f))
        
        if (ebx_5 s> 0x14)
            ebx_5 = 0x14
        
        int32_t var_68_5 = var_68_4 - ebx_5
        
        if (add_overflow(var_68_4, neg.d(ebx_5)))
            sub_403010()
            noreturn
        
        int32_t ebx_6 = sub_402b4c(fconvert.t(10f) - float.t(eax_7) / fconvert.t(10f))
        
        if (ebx_6 s> 0xa)
            ebx_6 = 0xa
        
        int32_t var_68_6 = var_68_5 - ebx_6
        
        if (add_overflow(var_68_5, neg.d(ebx_6)))
            sub_403010()
            noreturn
        
        if (var_68_6 s<= 0xa)
            var_34 = fconvert.s(fconvert.t(var_38) - data_4bc3ac)
        else if (var_68_6 s<= 0x14)
            var_34 = var_38
        else if (var_68_6 s< 0x50)
            if (add_overflow(var_68_6, 0xffffffec))
                sub_403010()
                noreturn
            
            float var_6c_1 = fconvert.s(float.t(var_68_6 - 0x14) / fconvert.t(60f))
            var_34 = fconvert.s(fconvert.t(var_3c) * fconvert.t(var_6c_1)
                + (fconvert.t(1f) - fconvert.t(var_6c_1)) * fconvert.t(var_38))
        else
            var_34 = var_3c
        
        var_44 = fconvert.s(fconvert.t(var_34) / fconvert.t(100f) * float.t(edx_4)
            - (fconvert.t(1f) - fconvert.t(var_34) / fconvert.t(100f)) * float.t(edi_1))
        int32_t eax_114 = sub_4c2ca0()
        
        if (add_overflow(eax_114, 0xffffffff))
            sub_403010()
            noreturn
        
        var_48 = fconvert.s(float.t(eax_114 - 1) * fconvert.t(var_34) / fconvert.t(100f)
            * fconvert.t(0.5f) * fconvert.t(1f)
            - (fconvert.t(1f) - fconvert.t(var_34) / fconvert.t(100f)) * fconvert.t(1f))
        ebx = 0
        long double x87_r7_186 = fconvert.t(var_34)
        long double temp114_1 = fconvert.t(95f)
        x87_r7_186 - temp114_1
        int32_t eax_115
        eax_115.w = (x87_r7_186 < temp114_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_186, temp114_1) ? 1 : 0) << 0xa
            | (x87_r7_186 == temp114_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_115:1.b, 0))
        label_4bbc38:
            long double x87_r7_188 = fconvert.t(var_34)
            long double temp115_1 = fconvert.t(90f)
            x87_r7_188 - temp115_1
            eax_115.w = (x87_r7_188 < temp115_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_188, temp115_1) ? 1 : 0) << 0xa
                | (x87_r7_188 == temp115_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_115:1.b, 0))
            label_4bbc5e:
                long double x87_r7_190 = fconvert.t(var_34)
                long double temp117_1 = fconvert.t(80f)
                x87_r7_190 - temp117_1
                eax_115.w = (x87_r7_190 < temp117_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_190, temp117_1) ? 1 : 0) << 0xa
                    | (x87_r7_190 == temp117_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_115:1.b, 0))
                label_4bbc84:
                    long double x87_r7_192 = fconvert.t(var_34)
                    long double temp119_1 = fconvert.t(72f)
                    x87_r7_192 - temp119_1
                    eax_115.w = (x87_r7_192 < temp119_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_192, temp119_1) ? 1 : 0) << 0xa
                        | (x87_r7_192 == temp119_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_115:1.b, 0))
                    label_4bbca7:
                        long double x87_r7_194 = fconvert.t(var_34)
                        long double temp121_1 = fconvert.t(65f)
                        x87_r7_194 - temp121_1
                        eax_115.w = (x87_r7_194 < temp121_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_194, temp121_1) ? 1 : 0) << 0xa
                            | (x87_r7_194 == temp121_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_115:1.b, 0))
                        label_4bbcca:
                            long double x87_r7_196 = fconvert.t(var_34)
                            long double temp124_1 = fconvert.t(50f)
                            x87_r7_196 - temp124_1
                            eax_115.w = (x87_r7_196 < temp124_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_196, temp124_1) ? 1 : 0) << 0xa
                                | (x87_r7_196 == temp124_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_115:1.b, 0)))
                                int32_t eax_118 = *(*data_5301f4 + 0x21108)
                                
                                if (neg.d(eax_118) == 0x80000000)
                                    sub_403010()
                                    noreturn
                                
                                bool o_38 = unimplemented  {imul eax, eax, 0x2}
                                
                                if (o_38)
                                    sub_403010()
                                    noreturn
                                
                                long double x87_r7_197 = float.t(neg.d(eax_118) * 2)
                                long double temp131_1 = fconvert.t(var_44)
                                x87_r7_197 - temp131_1
                                int32_t eax_120
                                eax_120.w = (x87_r7_197 < temp131_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_197, temp131_1) ? 1 : 0) << 0xa
                                    | (x87_r7_197 == temp131_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_120:1.b, 6) || test_bit(eax_120:1.b, 0))
                                    ebx = 1
                        else
                            long double x87_r7_195 = data_4bc42c
                            long double temp125_1 = fconvert.t(var_48)
                            x87_r7_195 - temp125_1
                            eax_115.w = (x87_r7_195 < temp125_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_195, temp125_1) ? 1 : 0) << 0xa
                                | (x87_r7_195 == temp125_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_115:1.b, 6)) && not(test_bit(eax_115:1.b, 0)))
                                goto label_4bbcca
                            
                            ebx = 2
                    else
                        long double x87_r7_193 = data_4bc3e4
                        long double temp122_1 = fconvert.t(var_48)
                        x87_r7_193 - temp122_1
                        eax_115.w = (x87_r7_193 < temp122_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_193, temp122_1) ? 1 : 0) << 0xa
                            | (x87_r7_193 == temp122_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_115:1.b, 6)) && not(test_bit(eax_115:1.b, 0)))
                            goto label_4bbca7
                        
                        ebx = 3
                else
                    long double x87_r7_191 = data_4bc3b8
                    long double temp120_1 = fconvert.t(var_48)
                    x87_r7_191 - temp120_1
                    eax_115.w = (x87_r7_191 < temp120_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_191, temp120_1) ? 1 : 0) << 0xa
                        | (x87_r7_191 == temp120_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_115:1.b, 6)) && not(test_bit(eax_115:1.b, 0)))
                        goto label_4bbc84
                    
                    ebx = 4
            else
                long double x87_r7_189 = data_4bc324
                long double temp118_1 = fconvert.t(var_48)
                x87_r7_189 - temp118_1
                eax_115.w = (x87_r7_189 < temp118_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_189, temp118_1) ? 1 : 0) << 0xa
                    | (x87_r7_189 == temp118_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_115:1.b, 6)) && not(test_bit(eax_115:1.b, 0)))
                    goto label_4bbc5e
                
                ebx = 5
        else
            long double x87_r7_187 = data_4bc3b8
            long double temp116_1 = fconvert.t(var_48)
            x87_r7_187 - temp116_1
            eax_115.w = (x87_r7_187 < temp116_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_187, temp116_1) ? 1 : 0) << 0xa
                | (x87_r7_187 == temp116_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_115:1.b, 6)) && not(test_bit(eax_115:1.b, 0)))
                goto label_4bbc38
            
            ebx = 6
        
        void* eax_121 = sub_4c2d18(0)
        
        if (eax_121 == 0)
            long double x87_r7_198 = fconvert.t(var_34)
            long double temp123_1 = fconvert.t(30f)
            x87_r7_198 - temp123_1
            eax_121.w = (x87_r7_198 < temp123_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_198, temp123_1) ? 1 : 0) << 0xa
                | (x87_r7_198 == temp123_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_121:1.b, 0)) && edi_1 s<= *(*data_5301f4 + 0x21108))
                ebx = 1
            
            long double x87_r7_199 = fconvert.t(var_34)
            long double temp126_1 = fconvert.t(40f)
            x87_r7_199 - temp126_1
            eax_121.w = (x87_r7_199 < temp126_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_199, temp126_1) ? 1 : 0) << 0xa
                | (x87_r7_199 == temp126_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_121:1.b, 0)))
                void* eax_124 = *data_5301f4
                *(eax_124 + 0x21108)
                bool o_39 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                
                if (o_39)
                    sub_403010()
                    noreturn
                
                if (edi_1 s<= *(eax_124 + 0x21108) * 2)
                    ebx = 1
        
        if (ebx s> 1)
            if (*(*data_5301f4 + 0x20094) == 1)
                long double x87_r7_201 = sub_402d38() * fconvert.t(100f)
                long double x87_r6_97 = fconvert.t(var_34) * fconvert.t(0.5f)
                x87_r6_97 - x87_r7_201
                eax_121.w = (x87_r6_97 < x87_r7_201 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_97, x87_r7_201) ? 1 : 0) << 0xa
                    | (x87_r6_97 == x87_r7_201 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0))
                    ebx = 1
                
                long double x87_r7_203 = sub_402d38() * fconvert.t(100f)
                long double x87_r6_99 = data_4bc324 * fconvert.t(var_34)
                x87_r6_99 - x87_r7_203
                eax_121.w = (x87_r6_99 < x87_r7_203 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_99, x87_r7_203) ? 1 : 0) << 0xa
                    | (x87_r6_99 == x87_r7_203 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0))
                    int32_t temp132_1 = ebx
                    ebx -= 1
                    
                    if (add_overflow(temp132_1, 0xffffffff))
                        sub_403010()
                        noreturn
            else if (*(*data_5301f4 + 0x20094) != 3)
                *(*data_5301f4 + 0x20094)
            else
                long double x87_r7_205 = sub_402d38() * fconvert.t(100f)
                long double x87_r6_101 = data_4bc324 * fconvert.t(var_34)
                x87_r6_101 - x87_r7_205
                eax_121.w = (x87_r6_101 < x87_r7_205 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_101, x87_r7_205) ? 1 : 0) << 0xa
                    | (x87_r6_101 == x87_r7_205 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0))
                    ebx = 1
                
                long double x87_r7_207 = sub_402d38() * fconvert.t(100f)
                long double x87_r6_103 = data_4bc364 * fconvert.t(var_34)
                x87_r6_103 - x87_r7_207
                eax_121.w = (x87_r6_103 < x87_r7_207 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_103, x87_r7_207) ? 1 : 0) << 0xa
                    | (x87_r6_103 == x87_r7_207 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0))
                    int32_t temp134_1 = ebx
                    ebx -= 1
                    
                    if (add_overflow(temp134_1, 0xffffffff))
                        sub_403010()
                        noreturn
            
            if (var_68_6 s>= 0x46)
                long double x87_r7_208 = fconvert.t(var_34)
                long double temp133_1 = fconvert.t(60f)
                x87_r7_208 - temp133_1
                eax_121.w = (x87_r7_208 < temp133_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_208, temp133_1) ? 1 : 0) << 0xa
                    | (x87_r7_208 == temp133_1 ? 1 : 0) << 0xe
            
            if (var_68_6 s< 0x46 || test_bit(eax_121:1.b, 0))
                if (var_68_6 s>= 0x32)
                    long double x87_r7_212 = fconvert.t(var_34)
                    long double temp135_1 = fconvert.t(40f)
                    x87_r7_212 - temp135_1
                    eax_121.w = (x87_r7_212 < temp135_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_212, temp135_1) ? 1 : 0) << 0xa
                        | (x87_r7_212 == temp135_1 ? 1 : 0) << 0xe
                
                if (var_68_6 s>= 0x32 && not(test_bit(eax_121:1.b, 0)))
                    long double st0_45 = sub_402d38()
                    long double x87_r6_107 = data_4bc3b8
                    x87_r6_107 - st0_45
                    eax_121.w = (x87_r6_107 < st0_45 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_107, st0_45) ? 1 : 0) << 0xa
                        | (x87_r6_107 == st0_45 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_121:1.b, 0))
                        int32_t temp138_1 = ebx
                        ebx += 2
                        
                        if (add_overflow(temp138_1, 2))
                            sub_403010()
                            noreturn
                    
                    long double st0_46 = sub_402d38()
                    long double x87_r6_108 = data_4bc3b8
                    x87_r6_108 - st0_46
                    eax_121.w = (x87_r6_108 < st0_46 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_108, st0_46) ? 1 : 0) << 0xa
                        | (x87_r6_108 == st0_46 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_121:1.b, 0))
                        int32_t temp141_1 = ebx
                        ebx += 1
                        
                        if (add_overflow(temp141_1, 1))
                            sub_403010()
                            noreturn
                else if (var_68_6 s>= 0x1e)
                    long double x87_r7_215 = fconvert.t(var_34)
                    long double temp136_1 = fconvert.t(20f)
                    x87_r7_215 - temp136_1
                    eax_121.w = (x87_r7_215 < temp136_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_215, temp136_1) ? 1 : 0) << 0xa
                        | (x87_r7_215 == temp136_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_121:1.b, 0)))
                        long double st0_47 = sub_402d38()
                        long double x87_r6_109 = data_4bc3b8
                        x87_r6_109 - st0_47
                        eax_121.w = (x87_r6_109 < st0_47 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_109, st0_47) ? 1 : 0) << 0xa
                            | (x87_r6_109 == st0_47 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_121:1.b, 0))
                            int32_t temp140_1 = ebx
                            ebx += 1
                            
                            if (add_overflow(temp140_1, 1))
                                sub_403010()
                                noreturn
            else
                long double st0_42 = sub_402d38()
                long double x87_r6_104 = data_4bc3b8
                x87_r6_104 - st0_42
                eax_121.w = (x87_r6_104 < st0_42 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_104, st0_42) ? 1 : 0) << 0xa
                    | (x87_r6_104 == st0_42 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0))
                    int32_t temp137_1 = ebx
                    ebx += 3
                    
                    if (add_overflow(temp137_1, 3))
                        sub_403010()
                        noreturn
                
                long double st0_43 = sub_402d38()
                long double x87_r6_105 = data_4bc3b8
                x87_r6_105 - st0_43
                eax_121.w = (x87_r6_105 < st0_43 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_105, st0_43) ? 1 : 0) << 0xa
                    | (x87_r6_105 == st0_43 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0))
                    int32_t temp139_1 = ebx
                    ebx += 2
                    
                    if (add_overflow(temp139_1, 2))
                        sub_403010()
                        noreturn
                
                long double st0_44 = sub_402d38()
                long double x87_r6_106 = data_4bc3b8
                x87_r6_106 - st0_44
                eax_121.w = (x87_r6_106 < st0_44 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_106, st0_44) ? 1 : 0) << 0xa
                    | (x87_r6_106 == st0_44 ? 1 : 0) << 0xe
                
                if (test_bit(eax_121:1.b, 0))
                    int32_t temp142_1 = ebx
                    ebx += 1
                    
                    if (add_overflow(temp142_1, 1))
                        sub_403010()
                        noreturn
        
        if (ebx s> 1)
            long double st0_48 = sub_402d38()
            long double x87_r6_110 = data_4bc3e4
            x87_r6_110 - st0_48
            eax_121.w = (x87_r6_110 < st0_48 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_110, st0_48) ? 1 : 0) << 0xa
                | (x87_r6_110 == st0_48 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_121:1.b, 6)) && not(test_bit(eax_121:1.b, 0)))
                int32_t temp130_1 = ebx
                ebx -= 1
                
                if (add_overflow(temp130_1, 0xffffffff))
                    sub_403010()
                    noreturn
        
        long double st0_49 = sub_402d38()
        long double x87_r6_111 = data_4bc3c4
        x87_r6_111 - st0_49
        eax_121.w = (x87_r6_111 < st0_49 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_111, st0_49) ? 1 : 0) << 0xa
            | (x87_r6_111 == st0_49 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_121:1.b, 6)) && not(test_bit(eax_121:1.b, 0)))
            ebx = 1
    else
        float var_78_1 = 0f
        float var_74_1 = 1.10000002f
        float var_80_1 = 1f
        
        if (sub_4b72e4(arg1) == 3)
            var_74_1 = 1.10000002f
            var_78_1 = 0.0799999982f
        
        if (sub_4b72e4(arg1) == 3)
            var_74_1 = 1.10000002f
        
        if (sub_4b72e4(arg1) == 1)
            var_74_1 = 0.449999988f
            var_78_1 = -0.0799999982f
        
        ebx = 0
        void* eax_54
        
        if (*(*data_5301f4 + 0x2110c) s> 0 || *(*data_5301f4 + 0x21114) != 0)
            long double x87_r7_43 = fconvert.t(48f) * fconvert.t(var_80_1)
            long double temp24_1 = fconvert.t(var_38)
            x87_r7_43 - temp24_1
            eax_54.w = (x87_r7_43 < temp24_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_43, temp24_1) ? 1 : 0) << 0xa
                | (x87_r7_43 == temp24_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
            label_4bb119:
                ebx = 1
                
                if (*(*data_5301f4 + 0x21114) != 0 && edi_1 s>= sub_4cc6dc(arg1))
                    long double x87_r7_51 = fconvert.t(50f) * fconvert.t(var_80_1)
                    long double temp33_1 = fconvert.t(var_3c)
                    x87_r7_51 - temp33_1
                    int32_t eax_63
                    eax_63.w = (x87_r7_51 < temp33_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_51, temp33_1) ? 1 : 0) << 0xa
                        | (x87_r7_51 == temp33_1 ? 1 : 0) << 0xe
                    int32_t eax_64
                    
                    if (test_bit(eax_63:1.b, 6) || test_bit(eax_63:1.b, 0))
                        eax_64 = sub_4c2c48()
                    
                    if ((test_bit(eax_63:1.b, 6) || test_bit(eax_63:1.b, 0)) && eax_64 == 1)
                        ebx = 6
                    else
                        long double x87_r7_53 = fconvert.t(60f) * fconvert.t(var_80_1)
                        long double temp39_1 = fconvert.t(var_3c)
                        x87_r7_53 - temp39_1
                        eax_63.w = (x87_r7_53 < temp39_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_53, temp39_1) ? 1 : 0) << 0xa
                            | (x87_r7_53 == temp39_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_63:1.b, 6) || test_bit(eax_63:1.b, 0))
                            ebx = 6
            else
                long double x87_r7_45 = fconvert.t(50f) * fconvert.t(var_80_1)
                long double temp26_1 = fconvert.t(var_3c)
                x87_r7_45 - temp26_1
                eax_54.w = (x87_r7_45 < temp26_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_45, temp26_1) ? 1 : 0) << 0xa
                    | (x87_r7_45 == temp26_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
                    goto label_4bb119
                
                long double x87_r7_47 = fconvert.t(45f) * fconvert.t(var_80_1)
                long double temp28_1 = fconvert.t(var_3c)
                x87_r7_47 - temp28_1
                eax_54.w = (x87_r7_47 < temp28_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_47, temp28_1) ? 1 : 0) << 0xa
                    | (x87_r7_47 == temp28_1 ? 1 : 0) << 0xe
                
                if ((test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
                        && edi_1 s<= *(*data_5301f4 + 0x21108))
                    goto label_4bb119
                
                long double x87_r7_49 = fconvert.t(50f) * fconvert.t(var_80_1)
                long double temp34_1 = fconvert.t(var_3c)
                x87_r7_49 - temp34_1
                eax_54.w = (x87_r7_49 < temp34_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_49, temp34_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == temp34_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
                    void* eax_58 = *data_5301f4
                    *(eax_58 + 0x21108)
                    bool o_14 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                    
                    if (o_14)
                        sub_403010()
                        noreturn
                    
                    if (edi_1 s<= *(eax_58 + 0x21108) * 2)
                        goto label_4bb119
        else if (eax_7 s>= 0x46 || eax_1 s<= 2)
            long double x87_r7_56 = fconvert.t(var_78_1) * fconvert.t(22f) + fconvert.t(22f)
            long double temp29_1 = fconvert.t(var_34)
            x87_r7_56 - temp29_1
            eax_54.w = (x87_r7_56 < temp29_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_56, temp29_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == temp29_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
                ebx = 1
        else if (eax_7 s>= 0x32 || eax_1 s<= 3)
            long double x87_r7_59 = fconvert.t(var_78_1) * fconvert.t(29f) + fconvert.t(29f)
            long double temp42_1 = fconvert.t(var_3c)
            x87_r7_59 - temp42_1
            eax_54.w = (x87_r7_59 < temp42_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_59, temp42_1) ? 1 : 0) << 0xa
                | (x87_r7_59 == temp42_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
                ebx = 1
            else
                bool o_15 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + arg1 * 0x208 + 0x1feac) != 0)
                    long double x87_r7_62 = fconvert.t(var_78_1) * fconvert.t(19f) + fconvert.t(19f)
                    long double temp62_1 = fconvert.t(var_3c)
                    x87_r7_62 - temp62_1
                    int32_t eax_65
                    eax_65.w = (x87_r7_62 < temp62_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_62, temp62_1) ? 1 : 0) << 0xa
                        | (x87_r7_62 == temp62_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_65:1.b, 6) || test_bit(eax_65:1.b, 0))
                        ebx = 1
        else
            long double x87_r7_65 = fconvert.t(var_78_1) * fconvert.t(32f) + fconvert.t(32f)
            long double temp50_1 = fconvert.t(var_34)
            x87_r7_65 - temp50_1
            eax_54.w = (x87_r7_65 < temp50_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_65, temp50_1) ? 1 : 0) << 0xa
                | (x87_r7_65 == temp50_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
                ebx = 1
            else
                long double x87_r7_68 = fconvert.t(var_78_1) * fconvert.t(42f) + fconvert.t(42f)
                long double temp55_1 = fconvert.t(var_3c)
                x87_r7_68 - temp55_1
                eax_54.w = (x87_r7_68 < temp55_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_68, temp55_1) ? 1 : 0) << 0xa
                    | (x87_r7_68 == temp55_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_54:1.b, 6) || test_bit(eax_54:1.b, 0))
                    ebx = 1
        
        if (ebx s<= 6)
            void* eax_67
            
            if (*(*data_5301f4 + 0x2110c) != 0)
                long double st0_5 = sub_402d38()
                long double x87_r6_14 = data_4bc364
                x87_r6_14 - st0_5
                eax_67.w = (x87_r6_14 < st0_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_14, st0_5) ? 1 : 0) << 0xa
                    | (x87_r6_14 == st0_5 ? 1 : 0) << 0xe
            
            if (*(*data_5301f4 + 0x2110c) != 0 && not(test_bit(eax_67:1.b, 0)))
                int32_t eax_84 = sub_4c2d18(arg1) * 3
                bool o_18 = unimplemented  {imul eax, eax, 0x3}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_84, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                float var_7c_2 = fconvert.s(float.t(eax_84 - 2))
                long double x87_r7_119 = fconvert.t(75f) + fconvert.t(var_7c_2)
                long double temp61_1 = fconvert.t(var_34)
                x87_r7_119 - temp61_1
                int32_t eax_85
                eax_85.w = (x87_r7_119 < temp61_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_119, temp61_1) ? 1 : 0) << 0xa
                    | (x87_r7_119 == temp61_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                label_4bb6b7:
                    long double st0_22 = sub_402d38()
                    long double x87_r6_48 = data_4bc378 * fconvert.t(var_74_1)
                    x87_r6_48 - st0_22
                    eax_85.w = (x87_r6_48 < st0_22 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_48, st0_22) ? 1 : 0) << 0xa
                        | (x87_r6_48 == st0_22 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                        long double st0_23 = sub_402d38()
                        long double x87_r6_50 = data_4bc384 * fconvert.t(var_74_1)
                        x87_r6_50 - st0_23
                        eax_85.w = (x87_r6_50 < st0_23 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_50, st0_23) ? 1 : 0) << 0xa
                            | (x87_r6_50 == st0_23 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                            long double st0_24 = sub_402d38()
                            long double x87_r6_52 = data_4bc390 * fconvert.t(var_74_1)
                            x87_r6_52 - st0_24
                            eax_85.w = (x87_r6_52 < st0_24 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_52, st0_24) ? 1 : 0) << 0xa
                                | (x87_r6_52 == st0_24 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                long double st0_25 = sub_402d38()
                                long double x87_r6_54 = data_4bc39c * fconvert.t(var_74_1)
                                x87_r6_54 - st0_25
                                eax_85.w = (x87_r6_54 < st0_25 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_54, st0_25) ? 1 : 0) << 0xa
                                    | (x87_r6_54 == st0_25 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_85:1.b, 6)) && not(test_bit(eax_85:1.b, 0)))
                                    ebx = 2
                            else
                                ebx = 3
                        else
                            ebx = 4
                    else
                        ebx = 6
                else
                    long double x87_r7_121 = fconvert.t(70f) + fconvert.t(var_7c_2)
                    long double temp69_1 = fconvert.t(var_34)
                    x87_r7_121 - temp69_1
                    eax_85.w = (x87_r7_121 < temp69_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_121, temp69_1) ? 1 : 0) << 0xa
                        | (x87_r7_121 == temp69_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                        long double x87_r7_123 = fconvert.t(80f) + fconvert.t(var_7c_2)
                        long double temp76_1 = fconvert.t(var_3c)
                        x87_r7_123 - temp76_1
                        eax_85.w = (x87_r7_123 < temp76_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_123, temp76_1) ? 1 : 0) << 0xa
                            | (x87_r7_123 == temp76_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                            goto label_4bb6b7
                    
                    long double x87_r7_129 = fconvert.t(70f) + fconvert.t(var_7c_2)
                    long double temp75_1 = fconvert.t(var_34)
                    x87_r7_129 - temp75_1
                    eax_85.w = (x87_r7_129 < temp75_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_129, temp75_1) ? 1 : 0) << 0xa
                        | (x87_r7_129 == temp75_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                    label_4bb772:
                        long double st0_26 = sub_402d38()
                        long double x87_r6_56 = data_4bc3ac * fconvert.t(var_74_1)
                        x87_r6_56 - st0_26
                        eax_85.w = (x87_r6_56 < st0_26 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_56, st0_26) ? 1 : 0) << 0xa
                            | (x87_r6_56 == st0_26 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                            long double st0_27 = sub_402d38()
                            long double x87_r6_58 = data_4bc3b8 * fconvert.t(var_74_1)
                            x87_r6_58 - st0_27
                            eax_85.w = (x87_r6_58 < st0_27 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_58, st0_27) ? 1 : 0) << 0xa
                                | (x87_r6_58 == st0_27 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                long double st0_28 = sub_402d38()
                                long double x87_r6_60 = data_4bc3c4 * fconvert.t(var_74_1)
                                x87_r6_60 - st0_28
                                eax_85.w = (x87_r6_60 < st0_28 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_60, st0_28) ? 1 : 0) << 0xa
                                    | (x87_r6_60 == st0_28 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                    long double st0_29 = sub_402d38()
                                    long double x87_r6_62 = data_4bc3d0 * fconvert.t(var_74_1)
                                    x87_r6_62 - st0_29
                                    eax_85.w = (x87_r6_62 < st0_29 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_62, st0_29) ? 1 : 0) << 0xa
                                        | (x87_r6_62 == st0_29 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_85:1.b, 6)) && not(test_bit(eax_85:1.b, 0)))
                                        ebx = 2
                                else
                                    ebx = 3
                            else
                                ebx = 4
                        else
                            ebx = 6
                    else
                        long double x87_r7_131 = fconvert.t(64f) + fconvert.t(var_7c_2)
                        long double temp82_1 = fconvert.t(var_34)
                        x87_r7_131 - temp82_1
                        eax_85.w = (x87_r7_131 < temp82_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_131, temp82_1) ? 1 : 0) << 0xa
                            | (x87_r7_131 == temp82_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                            long double x87_r7_133 = fconvert.t(75f) + fconvert.t(var_7c_2)
                            long double temp87_1 = fconvert.t(var_3c)
                            x87_r7_133 - temp87_1
                            eax_85.w = (x87_r7_133 < temp87_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_133, temp87_1) ? 1 : 0) << 0xa
                                | (x87_r7_133 == temp87_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                goto label_4bb772
                        
                        long double x87_r7_139 = fconvert.t(60f) + fconvert.t(var_7c_2)
                        long double temp86_1 = fconvert.t(var_34)
                        x87_r7_139 - temp86_1
                        eax_85.w = (x87_r7_139 < temp86_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_139, temp86_1) ? 1 : 0) << 0xa
                            | (x87_r7_139 == temp86_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                        label_4bb825:
                            long double st0_30 = sub_402d38()
                            long double x87_r6_64 = data_4bc3e4 * fconvert.t(var_74_1)
                            x87_r6_64 - st0_30
                            eax_85.w = (x87_r6_64 < st0_30 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_64, st0_30) ? 1 : 0) << 0xa
                                | (x87_r6_64 == st0_30 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                long double st0_31 = sub_402d38()
                                long double x87_r6_66 = data_4bc3b8 * fconvert.t(var_74_1)
                                x87_r6_66 - st0_31
                                eax_85.w = (x87_r6_66 < st0_31 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_66, st0_31) ? 1 : 0) << 0xa
                                    | (x87_r6_66 == st0_31 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                    long double st0_32 = sub_402d38()
                                    long double x87_r6_68 = data_4bc3c4 * fconvert.t(var_74_1)
                                    x87_r6_68 - st0_32
                                    eax_85.w = (x87_r6_68 < st0_32 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_68, st0_32) ? 1 : 0) << 0xa
                                        | (x87_r6_68 == st0_32 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_85:1.b, 6)) && not(test_bit(eax_85:1.b, 0)))
                                        ebx = 2
                                else
                                    ebx = 3
                            else
                                ebx = 4
                        else
                            long double x87_r7_141 = fconvert.t(53f) + fconvert.t(var_7c_2)
                            long double temp93_1 = fconvert.t(var_34)
                            x87_r7_141 - temp93_1
                            eax_85.w = (x87_r7_141 < temp93_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_141, temp93_1) ? 1 : 0) << 0xa
                                | (x87_r7_141 == temp93_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                long double x87_r7_143 = fconvert.t(65f) + fconvert.t(var_7c_2)
                                long double temp97_1 = fconvert.t(var_3c)
                                x87_r7_143 - temp97_1
                                eax_85.w = (x87_r7_143 < temp97_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_143, temp97_1) ? 1 : 0) << 0xa
                                    | (x87_r7_143 == temp97_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                    goto label_4bb825
                            
                            long double x87_r7_148 = fconvert.t(48f) + fconvert.t(var_7c_2)
                            long double temp96_1 = fconvert.t(var_34)
                            x87_r7_148 - temp96_1
                            eax_85.w = (x87_r7_148 < temp96_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_148, temp96_1) ? 1 : 0) << 0xa
                                | (x87_r7_148 == temp96_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                            label_4bb8b9:
                                long double st0_33 = sub_402d38()
                                long double x87_r6_70 = data_4bc3e4 * fconvert.t(var_74_1)
                                x87_r6_70 - st0_33
                                eax_85.w = (x87_r6_70 < st0_33 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_70, st0_33) ? 1 : 0) << 0xa
                                    | (x87_r6_70 == st0_33 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                    long double st0_34 = sub_402d38()
                                    long double x87_r6_72 = data_4bc378 * fconvert.t(var_74_1)
                                    x87_r6_72 - st0_34
                                    eax_85.w = (x87_r6_72 < st0_34 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_72, st0_34) ? 1 : 0) << 0xa
                                        | (x87_r6_72 == st0_34 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                        long double st0_35 = sub_402d38()
                                        long double x87_r6_74 = data_4bc3c4 * fconvert.t(var_74_1)
                                        x87_r6_74 - st0_35
                                        eax_85.w = (x87_r6_74 < st0_35 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_74, st0_35) ? 1 : 0) << 0xa
                                            | (x87_r6_74 == st0_35 ? 1 : 0) << 0xe
                                        
                                        if (not(test_bit(eax_85:1.b, 6))
                                                && not(test_bit(eax_85:1.b, 0)))
                                            ebx = 2
                                    else
                                        ebx = 3
                                else
                                    ebx = 4
                            else
                                long double x87_r7_150 = fconvert.t(43f) + fconvert.t(var_7c_2)
                                long double temp103_1 = fconvert.t(var_34)
                                x87_r7_150 - temp103_1
                                eax_85.w = (x87_r7_150 < temp103_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_150, temp103_1) ? 1 : 0) << 0xa
                                    | (x87_r7_150 == temp103_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                    long double x87_r7_152 = fconvert.t(56f) + fconvert.t(var_7c_2)
                                    long double temp108_1 = fconvert.t(var_3c)
                                    x87_r7_152 - temp108_1
                                    eax_85.w = (x87_r7_152 < temp108_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_152, temp108_1) ? 1 : 0) << 0xa
                                        | (x87_r7_152 == temp108_1 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                        goto label_4bb8b9
                                
                                long double x87_r7_157 = fconvert.t(40f) + fconvert.t(var_7c_2)
                                long double temp107_1 = fconvert.t(var_34)
                                x87_r7_157 - temp107_1
                                eax_85.w = (x87_r7_157 < temp107_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_157, temp107_1) ? 1 : 0) << 0xa
                                    | (x87_r7_157 == temp107_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                label_4bb955:
                                    long double st0_36 = sub_402d38()
                                    long double x87_r6_76 = data_4bc3e4 * fconvert.t(var_74_1)
                                    x87_r6_76 - st0_36
                                    eax_85.w = (x87_r6_76 < st0_36 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_76, st0_36) ? 1 : 0) << 0xa
                                        | (x87_r6_76 == st0_36 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                        long double st0_37 = sub_402d38()
                                        long double x87_r6_78 = data_4bc3b8 * fconvert.t(var_74_1)
                                        x87_r6_78 - st0_37
                                        eax_85.w = (x87_r6_78 < st0_37 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_78, st0_37) ? 1 : 0) << 0xa
                                            | (x87_r6_78 == st0_37 ? 1 : 0) << 0xe
                                        
                                        if (not(test_bit(eax_85:1.b, 6))
                                                && not(test_bit(eax_85:1.b, 0)))
                                            ebx = 2
                                    else
                                        ebx = 3
                                else
                                    long double x87_r7_159 = fconvert.t(35f) + fconvert.t(var_7c_2)
                                    long double temp110_1 = fconvert.t(var_34)
                                    x87_r7_159 - temp110_1
                                    eax_85.w = (x87_r7_159 < temp110_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_159, temp110_1) ? 1 : 0) << 0xa
                                        | (x87_r7_159 == temp110_1 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                        long double x87_r7_161 = fconvert.t(52f) + fconvert.t(var_7c_2)
                                        long double temp112_1 = fconvert.t(var_3c)
                                        x87_r7_161 - temp112_1
                                        eax_85.w = (x87_r7_161 < temp112_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_161, temp112_1) ? 1 : 0) << 0xa
                                            | (x87_r7_161 == temp112_1 ? 1 : 0) << 0xe
                                        
                                        if (test_bit(eax_85:1.b, 6) || test_bit(eax_85:1.b, 0))
                                            goto label_4bb955
            else
                int32_t eax_70 = sub_4c2d18(arg1) * 3
                bool o_16 = unimplemented  {imul eax, eax, 0x3}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_70, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                float var_7c_1 = fconvert.s(float.t(eax_70 - 2))
                long double x87_r7_72 = fconvert.t(75f) + fconvert.t(var_7c_1)
                long double temp53_1 = fconvert.t(var_34)
                x87_r7_72 - temp53_1
                int32_t eax_71
                eax_71.w = (x87_r7_72 < temp53_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_72, temp53_1) ? 1 : 0) << 0xa
                    | (x87_r7_72 == temp53_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                label_4bb2d2:
                    long double st0_6 = sub_402d38()
                    long double x87_r6_16 = data_4bc378 * fconvert.t(var_74_1)
                    x87_r6_16 - st0_6
                    eax_71.w = (x87_r6_16 < st0_6 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_16, st0_6) ? 1 : 0) << 0xa
                        | (x87_r6_16 == st0_6 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                        long double st0_7 = sub_402d38()
                        long double x87_r6_18 = data_4bc384 * fconvert.t(var_74_1)
                        x87_r6_18 - st0_7
                        eax_71.w = (x87_r6_18 < st0_7 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_18, st0_7) ? 1 : 0) << 0xa
                            | (x87_r6_18 == st0_7 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                            long double st0_8 = sub_402d38()
                            long double x87_r6_20 = data_4bc390 * fconvert.t(var_74_1)
                            x87_r6_20 - st0_8
                            eax_71.w = (x87_r6_20 < st0_8 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_20, st0_8) ? 1 : 0) << 0xa
                                | (x87_r6_20 == st0_8 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                long double st0_9 = sub_402d38()
                                long double x87_r6_22 = data_4bc39c * fconvert.t(var_74_1)
                                x87_r6_22 - st0_9
                                eax_71.w = (x87_r6_22 < st0_9 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_22, st0_9) ? 1 : 0) << 0xa
                                    | (x87_r6_22 == st0_9 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_71:1.b, 6)) && not(test_bit(eax_71:1.b, 0)))
                                    ebx = 1
                            else
                                ebx = 2
                        else
                            ebx = 2
                    else
                        ebx = 4
                else
                    long double x87_r7_74 = fconvert.t(70f) + fconvert.t(var_7c_1)
                    long double temp60_1 = fconvert.t(var_34)
                    x87_r7_74 - temp60_1
                    eax_71.w = (x87_r7_74 < temp60_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_74, temp60_1) ? 1 : 0) << 0xa
                        | (x87_r7_74 == temp60_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                        long double x87_r7_76 = fconvert.t(80f) + fconvert.t(var_7c_1)
                        long double temp68_1 = fconvert.t(var_3c)
                        x87_r7_76 - temp68_1
                        eax_71.w = (x87_r7_76 < temp68_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_76, temp68_1) ? 1 : 0) << 0xa
                            | (x87_r7_76 == temp68_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                            goto label_4bb2d2
                    
                    long double x87_r7_82 = fconvert.t(70f) + fconvert.t(var_7c_1)
                    long double temp67_1 = fconvert.t(var_34)
                    x87_r7_82 - temp67_1
                    eax_71.w = (x87_r7_82 < temp67_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_82, temp67_1) ? 1 : 0) << 0xa
                        | (x87_r7_82 == temp67_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                    label_4bb38d:
                        long double st0_10 = sub_402d38()
                        long double x87_r6_24 = data_4bc3ac * fconvert.t(var_74_1)
                        x87_r6_24 - st0_10
                        eax_71.w = (x87_r6_24 < st0_10 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_24, st0_10) ? 1 : 0) << 0xa
                            | (x87_r6_24 == st0_10 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                            long double st0_11 = sub_402d38()
                            long double x87_r6_26 = data_4bc3b8 * fconvert.t(var_74_1)
                            x87_r6_26 - st0_11
                            eax_71.w = (x87_r6_26 < st0_11 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_26, st0_11) ? 1 : 0) << 0xa
                                | (x87_r6_26 == st0_11 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                long double st0_12 = sub_402d38()
                                long double x87_r6_28 = data_4bc3c4 * fconvert.t(var_74_1)
                                x87_r6_28 - st0_12
                                eax_71.w = (x87_r6_28 < st0_12 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_28, st0_12) ? 1 : 0) << 0xa
                                    | (x87_r6_28 == st0_12 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                    long double st0_13 = sub_402d38()
                                    long double x87_r6_30 = data_4bc3d0 * fconvert.t(var_74_1)
                                    x87_r6_30 - st0_13
                                    eax_71.w = (x87_r6_30 < st0_13 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_30, st0_13) ? 1 : 0) << 0xa
                                        | (x87_r6_30 == st0_13 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_71:1.b, 6)) && not(test_bit(eax_71:1.b, 0)))
                                        ebx = 1
                                else
                                    ebx = 2
                            else
                                ebx = 3
                        else
                            ebx = 4
                    else
                        long double x87_r7_84 = fconvert.t(64f) + fconvert.t(var_7c_1)
                        long double temp74_1 = fconvert.t(var_34)
                        x87_r7_84 - temp74_1
                        eax_71.w = (x87_r7_84 < temp74_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_84, temp74_1) ? 1 : 0) << 0xa
                            | (x87_r7_84 == temp74_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                            long double x87_r7_86 = fconvert.t(75f) + fconvert.t(var_7c_1)
                            long double temp81_1 = fconvert.t(var_3c)
                            x87_r7_86 - temp81_1
                            eax_71.w = (x87_r7_86 < temp81_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_86, temp81_1) ? 1 : 0) << 0xa
                                | (x87_r7_86 == temp81_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                goto label_4bb38d
                        
                        long double x87_r7_92 = fconvert.t(60f) + fconvert.t(var_7c_1)
                        long double temp80_1 = fconvert.t(var_34)
                        x87_r7_92 - temp80_1
                        eax_71.w = (x87_r7_92 < temp80_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_92, temp80_1) ? 1 : 0) << 0xa
                            | (x87_r7_92 == temp80_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                        label_4bb456:
                            
                            if (*(*data_5301f4 + 0x2110c) s> 1)
                                var_74_1 = 0.200000003f
                            else if (*(*data_5301f4 + 0x2110c) == 1)
                                var_74_1 = 0.5f
                            
                            long double st0_14 = sub_402d38()
                            long double x87_r6_32 = data_4bc3e4 * fconvert.t(var_74_1)
                            x87_r6_32 - st0_14
                            void* eax_73
                            eax_73.w = (x87_r6_32 < st0_14 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_32, st0_14) ? 1 : 0) << 0xa
                                | (x87_r6_32 == st0_14 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_73:1.b, 6) || test_bit(eax_73:1.b, 0))
                                long double st0_15 = sub_402d38()
                                long double x87_r6_34 = data_4bc3b8 * fconvert.t(var_74_1)
                                x87_r6_34 - st0_15
                                eax_73.w = (x87_r6_34 < st0_15 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_34, st0_15) ? 1 : 0) << 0xa
                                    | (x87_r6_34 == st0_15 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_73:1.b, 6) || test_bit(eax_73:1.b, 0))
                                    long double st0_16 = sub_402d38()
                                    long double x87_r6_36 = data_4bc3c4 * fconvert.t(var_74_1)
                                    x87_r6_36 - st0_16
                                    eax_73.w = (x87_r6_36 < st0_16 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_36, st0_16) ? 1 : 0) << 0xa
                                        | (x87_r6_36 == st0_16 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_73:1.b, 6)) && not(test_bit(eax_73:1.b, 0)))
                                        ebx = 3
                                else
                                    ebx = 4
                            else
                                ebx = 5
                        else
                            long double x87_r7_94 = fconvert.t(53f) + fconvert.t(var_7c_1)
                            long double temp85_1 = fconvert.t(var_34)
                            x87_r7_94 - temp85_1
                            eax_71.w = (x87_r7_94 < temp85_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_94, temp85_1) ? 1 : 0) << 0xa
                                | (x87_r7_94 == temp85_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                long double x87_r7_96 = fconvert.t(65f) + fconvert.t(var_7c_1)
                                long double temp92_1 = fconvert.t(var_3c)
                                x87_r7_96 - temp92_1
                                eax_71.w = (x87_r7_96 < temp92_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_96, temp92_1) ? 1 : 0) << 0xa
                                    | (x87_r7_96 == temp92_1 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_71:1.b, 6)) && not(test_bit(eax_71:1.b, 0)))
                                    goto label_4bb4df
                                
                                goto label_4bb456
                            
                        label_4bb4df:
                            long double x87_r7_101 = fconvert.t(48f) + fconvert.t(var_7c_1)
                            long double temp91_1 = fconvert.t(var_34)
                            x87_r7_101 - temp91_1
                            eax_71.w = (x87_r7_101 < temp91_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_101, temp91_1) ? 1 : 0) << 0xa
                                | (x87_r7_101 == temp91_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                            label_4bb522:
                                
                                if (*(*data_5301f4 + 0x2110c) s> 1)
                                    var_74_1 = 0.100000001f
                                else if (*(*data_5301f4 + 0x2110c) == 1)
                                    var_74_1 = 0.300000012f
                                
                                long double st0_17 = sub_402d38()
                                long double x87_r6_38 = data_4bc3f8 * fconvert.t(var_74_1)
                                x87_r6_38 - st0_17
                                void* eax_76
                                eax_76.w = (x87_r6_38 < st0_17 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_38, st0_17) ? 1 : 0) << 0xa
                                    | (x87_r6_38 == st0_17 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_76:1.b, 6) || test_bit(eax_76:1.b, 0))
                                    long double st0_18 = sub_402d38()
                                    long double x87_r6_40 = data_4bc3b8 * fconvert.t(var_74_1)
                                    x87_r6_40 - st0_18
                                    eax_76.w = (x87_r6_40 < st0_18 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_40, st0_18) ? 1 : 0) << 0xa
                                        | (x87_r6_40 == st0_18 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_76:1.b, 6) || test_bit(eax_76:1.b, 0))
                                        long double st0_19 = sub_402d38()
                                        long double x87_r6_42 = data_4bc3c4 * fconvert.t(var_74_1)
                                        x87_r6_42 - st0_19
                                        eax_76.w = (x87_r6_42 < st0_19 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_42, st0_19) ? 1 : 0) << 0xa
                                            | (x87_r6_42 == st0_19 ? 1 : 0) << 0xe
                                        
                                        if (not(test_bit(eax_76:1.b, 6))
                                                && not(test_bit(eax_76:1.b, 0)))
                                            ebx = 4
                                    else
                                        ebx = 5
                                else
                                    ebx = 6
                            else
                                long double x87_r7_103 = fconvert.t(43f) + fconvert.t(var_7c_1)
                                long double temp95_1 = fconvert.t(var_34)
                                x87_r7_103 - temp95_1
                                eax_71.w = (x87_r7_103 < temp95_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_103, temp95_1) ? 1 : 0) << 0xa
                                    | (x87_r7_103 == temp95_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                    long double x87_r7_105 = fconvert.t(56f) + fconvert.t(var_7c_1)
                                    long double temp102_1 = fconvert.t(var_3c)
                                    x87_r7_105 - temp102_1
                                    eax_71.w = (x87_r7_105 < temp102_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_105, temp102_1) ? 1 : 0) << 0xa
                                        | (x87_r7_105 == temp102_1 ? 1 : 0) << 0xe
                                    
                                    if (not(test_bit(eax_71:1.b, 6)) && not(test_bit(eax_71:1.b, 0)))
                                        goto label_4bb5ab
                                    
                                    goto label_4bb522
                                
                            label_4bb5ab:
                                long double x87_r7_110 = fconvert.t(40f) + fconvert.t(var_7c_1)
                                long double temp101_1 = fconvert.t(var_34)
                                x87_r7_110 - temp101_1
                                eax_71.w = (x87_r7_110 < temp101_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_110, temp101_1) ? 1 : 0) << 0xa
                                    | (x87_r7_110 == temp101_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                label_4bb5ee:
                                    
                                    if (*(*data_5301f4 + 0x2110c) s> 1)
                                        var_74_1 = 0f
                                    else if (*(*data_5301f4 + 0x2110c) == 1)
                                        var_74_1 = 0.200000003f
                                    
                                    long double st0_20 = sub_402d38()
                                    long double x87_r6_44 = data_4bc3e4 * fconvert.t(var_74_1)
                                    x87_r6_44 - st0_20
                                    void* eax_80
                                    eax_80.w = (x87_r6_44 < st0_20 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_44, st0_20) ? 1 : 0) << 0xa
                                        | (x87_r6_44 == st0_20 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_80:1.b, 6) || test_bit(eax_80:1.b, 0))
                                        long double st0_21 = sub_402d38()
                                        long double x87_r6_46 = data_4bc3b8 * fconvert.t(var_74_1)
                                        x87_r6_46 - st0_21
                                        eax_80.w = (x87_r6_46 < st0_21 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_46, st0_21) ? 1 : 0) << 0xa
                                            | (x87_r6_46 == st0_21 ? 1 : 0) << 0xe
                                        
                                        if (not(test_bit(eax_80:1.b, 6))
                                                && not(test_bit(eax_80:1.b, 0)))
                                            ebx = 4
                                    else
                                        ebx = 5
                                else
                                    long double x87_r7_112 = fconvert.t(35f) + fconvert.t(var_7c_1)
                                    long double temp106_1 = fconvert.t(var_34)
                                    x87_r7_112 - temp106_1
                                    eax_71.w = (x87_r7_112 < temp106_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_112, temp106_1) ? 1 : 0) << 0xa
                                        | (x87_r7_112 == temp106_1 ? 1 : 0) << 0xe
                                    
                                    if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                        long double x87_r7_114 = fconvert.t(52f) + fconvert.t(var_7c_1)
                                        long double temp109_1 = fconvert.t(var_3c)
                                        x87_r7_114 - temp109_1
                                        eax_71.w = (x87_r7_114 < temp109_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_114, temp109_1) ? 1 : 0) << 0xa
                                            | (x87_r7_114 == temp109_1 ? 1 : 0) << 0xe
                                        
                                        if (test_bit(eax_71:1.b, 6) || test_bit(eax_71:1.b, 0))
                                            goto label_4bb5ee
    
    if (*(*data_5301f4 + 0x20094) == 5)
        ebx = 0
        long double x87_r7_219 = fconvert.t(var_34)
        long double temp37_1 = fconvert.t(90f)
        x87_r7_219 - temp37_1
        int32_t eax_129
        eax_129.w = (x87_r7_219 < temp37_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_219, temp37_1) ? 1 : 0) << 0xa
            | (x87_r7_219 == temp37_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_129:1.b, 0))
        label_4bbf8f:
            long double x87_r7_221 = fconvert.t(var_34)
            long double temp45_1 = fconvert.t(84f)
            x87_r7_221 - temp45_1
            eax_129.w = (x87_r7_221 < temp45_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_221, temp45_1) ? 1 : 0) << 0xa
                | (x87_r7_221 == temp45_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_129:1.b, 0))
            label_4bbfb5:
                long double x87_r7_223 = fconvert.t(var_34)
                long double temp51_1 = fconvert.t(75f)
                x87_r7_223 - temp51_1
                eax_129.w = (x87_r7_223 < temp51_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_223, temp51_1) ? 1 : 0) << 0xa
                    | (x87_r7_223 == temp51_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_129:1.b, 0))
                label_4bbfdb:
                    long double x87_r7_225 = fconvert.t(var_34)
                    long double temp58_1 = fconvert.t(68f)
                    x87_r7_225 - temp58_1
                    eax_129.w = (x87_r7_225 < temp58_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_225, temp58_1) ? 1 : 0) << 0xa
                        | (x87_r7_225 == temp58_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_129:1.b, 0))
                    label_4bbffe:
                        long double x87_r7_227 = fconvert.t(var_34)
                        long double temp65_1 = fconvert.t(60f)
                        x87_r7_227 - temp65_1
                        eax_129.w = (x87_r7_227 < temp65_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_227, temp65_1) ? 1 : 0) << 0xa
                            | (x87_r7_227 == temp65_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_129:1.b, 0))
                        label_4bc021:
                            long double x87_r7_229 = fconvert.t(var_34)
                            long double temp70_1 = fconvert.t(50f)
                            x87_r7_229 - temp70_1
                            eax_129.w = (x87_r7_229 < temp70_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_229, temp70_1) ? 1 : 0) << 0xa
                                | (x87_r7_229 == temp70_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_129:1.b, 0)))
                                int32_t eax_132 = *(*data_5301f4 + 0x21108)
                                
                                if (neg.d(eax_132) == 0x80000000)
                                    sub_403010()
                                    noreturn
                                
                                bool o_50 = unimplemented  {imul eax, eax, 0x2}
                                
                                if (o_50)
                                    sub_403010()
                                    noreturn
                                
                                long double x87_r7_230 = float.t(neg.d(eax_132) * 2)
                                long double temp90_1 = fconvert.t(var_44)
                                x87_r7_230 - temp90_1
                                eax_129.w = (x87_r7_230 < temp90_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_230, temp90_1) ? 1 : 0) << 0xa
                                    | (x87_r7_230 == temp90_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_129:1.b, 6) || test_bit(eax_129:1.b, 0))
                                    ebx = 1
                        else
                            long double x87_r7_228 = data_4bc42c
                            long double temp71_1 = fconvert.t(var_48)
                            x87_r7_228 - temp71_1
                            eax_129.w = (x87_r7_228 < temp71_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_228, temp71_1) ? 1 : 0) << 0xa
                                | (x87_r7_228 == temp71_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_129:1.b, 6)) && not(test_bit(eax_129:1.b, 0)))
                                goto label_4bc021
                            
                            ebx = 2
                    else
                        long double x87_r7_226 = data_4bc3e4
                        long double temp66_1 = fconvert.t(var_48)
                        x87_r7_226 - temp66_1
                        eax_129.w = (x87_r7_226 < temp66_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_226, temp66_1) ? 1 : 0) << 0xa
                            | (x87_r7_226 == temp66_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_129:1.b, 6)) && not(test_bit(eax_129:1.b, 0)))
                            goto label_4bbffe
                        
                        ebx = 3
                else
                    long double x87_r7_224 = data_4bc3c4
                    long double temp59_1 = fconvert.t(var_48)
                    x87_r7_224 - temp59_1
                    eax_129.w = (x87_r7_224 < temp59_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_224, temp59_1) ? 1 : 0) << 0xa
                        | (x87_r7_224 == temp59_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_129:1.b, 6)) && not(test_bit(eax_129:1.b, 0)))
                        goto label_4bbfdb
                    
                    ebx = 4
            else
                long double x87_r7_222 = data_4bc324
                long double temp52_1 = fconvert.t(var_48)
                x87_r7_222 - temp52_1
                eax_129.w = (x87_r7_222 < temp52_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_222, temp52_1) ? 1 : 0) << 0xa
                    | (x87_r7_222 == temp52_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_129:1.b, 6)) && not(test_bit(eax_129:1.b, 0)))
                    goto label_4bbfb5
                
                ebx = 5
        else
            long double x87_r7_220 = data_4bc3b8
            long double temp46_1 = fconvert.t(var_48)
            x87_r7_220 - temp46_1
            eax_129.w = (x87_r7_220 < temp46_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_220, temp46_1) ? 1 : 0) << 0xa
                | (x87_r7_220 == temp46_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_129:1.b, 6)) && not(test_bit(eax_129:1.b, 0)))
                goto label_4bbf8f
            
            ebx = 6
        
        if (ebx s<= 1)
            long double st0_53 = sub_402d38()
            long double x87_r6_115 = data_4bc3e4
            x87_r6_115 - st0_53
            eax_129.w = (x87_r6_115 < st0_53 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_115, st0_53) ? 1 : 0) << 0xa
                | (x87_r6_115 == st0_53 ? 1 : 0) << 0xe
            
            if (test_bit(eax_129:1.b, 0))
                int32_t temp72_1 = ebx
                ebx += 1
                
                if (add_overflow(temp72_1, 1))
                    sub_403010()
                    noreturn
        else
            long double st0_50 = sub_402d38()
            long double x87_r6_112 = data_4bc444
            x87_r6_112 - st0_50
            eax_129.w = (x87_r6_112 < st0_50 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_112, st0_50) ? 1 : 0) << 0xa
                | (x87_r6_112 == st0_50 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_129:1.b, 6)) && not(test_bit(eax_129:1.b, 0)))
                int32_t temp73_1 = ebx
                ebx -= 1
                
                if (add_overflow(temp73_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            long double st0_51 = sub_402d38()
            long double x87_r6_113 = data_4bc3e4
            x87_r6_113 - st0_51
            eax_129.w = (x87_r6_113 < st0_51 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_113, st0_51) ? 1 : 0) << 0xa
                | (x87_r6_113 == st0_51 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_129:1.b, 0)))
                long double st0_52 = sub_402d38()
                long double x87_r6_114 = data_4bc3b8
                x87_r6_114 - st0_52
                eax_129.w = (x87_r6_114 < st0_52 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_114, st0_52) ? 1 : 0) << 0xa
                    | (x87_r6_114 == st0_52 ? 1 : 0) << 0xe
                
                if (test_bit(eax_129:1.b, 0))
                    int32_t temp84_1 = ebx
                    ebx += 1
                    
                    if (add_overflow(temp84_1, 1))
                        sub_403010()
                        noreturn
            else
                int32_t temp79_1 = ebx
                ebx += 2
                
                if (add_overflow(temp79_1, 2))
                    sub_403010()
                    noreturn
    
    if (ebx s> 6)
        ebx = 6
    
    char var_4d = 0
    
    if (sub_4b72e4(arg1) == 1 && ebx s>= 2)
        long double st0_54 = sub_402d38()
        long double x87_r6_116 = data_4bc3c4
        x87_r6_116 - st0_54
        int16_t eax_136 = (x87_r6_116 < st0_54 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_116, st0_54) ? 1 : 0) << 0xa
            | (x87_r6_116 == st0_54 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_136:1.b, 6)) && not(test_bit(eax_136:1.b, 0)))
            ebx = 1
    
    if (ebx s>= 6)
        *arg2 = 4
        var_4d = 1
    
    int32_t eax_140 = *(*data_5301f4 + 0x210f8)
    
    if (add_overflow(eax_140, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t temp0_3 = divs.dp.d(sx.q(eax_140 - 1), *(*data_5301f4 + 0x21108))
    
    if (add_overflow(temp0_3, 1))
        sub_403010()
        noreturn
    
    int32_t eax_145 = sub_420b80(temp0_3 + 1, 0xa)
    int32_t __saved_ebp
    
    if (temp0_3 + 1 s<= 0x14 && var_4d == 0 && ebx s>= 5)
        int32_t* var_b4_13 = &__saved_ebp
        bool o_57 = unimplemented  {imul esi}
        
        if (o_57)
            sub_403010()
            noreturn
        
        if (sub_4baba4(*(*data_5301f4 + 0x21108) * eax_145, 0xa) != 0)
            *arg2 = 0
            arg2[1] = 1
            *(arg2 + 4) = eax_145
            var_4d = 1
    
    int32_t eax_155 = sub_420b80(temp0_3 + 1, 4)
    
    if (temp0_3 + 1 s<= 8 && var_4d == 0 && ebx s>= 4)
        int32_t* var_b4_14 = &__saved_ebp
        bool o_58 = unimplemented  {imul esi}
        
        if (o_58)
            sub_403010()
            noreturn
        
        if (sub_4baba4(*(*data_5301f4 + 0x21108) * eax_155, 4) != 0)
            *arg2 = 0
            arg2[1] = 1
            *(arg2 + 4) = eax_155
            var_4d = 1
    
    int32_t eax_165 = sub_420b80(temp0_3 + 1, 2)
    
    if (temp0_3 + 1 s<= 4 && var_4d == 0 && ebx s>= 3)
        int32_t* var_b4_15 = &__saved_ebp
        bool o_59 = unimplemented  {imul esi}
        
        if (o_59)
            sub_403010()
            noreturn
        
        if (sub_4baba4(*(*data_5301f4 + 0x21108) * eax_165, 2) != 0)
            *arg2 = 0
            arg2[1] = 1
            *(arg2 + 4) = eax_165
            var_4d = 1
    
    void* const edx_42 = 1
    char* result = sub_420b80(temp0_3 + 1, 1)
    char* result_1 = result
    
    if (temp0_3 + 1 s<= 2 && var_4d == 0 && ebx s>= 2)
        int32_t* var_b4_16 = &__saved_ebp
        bool o_60 = unimplemented  {imul esi}
        
        if (o_60)
            sub_403010()
            noreturn
        
        result, edx_42 = sub_4baba4(*(*data_5301f4 + 0x21108) * result_1, 1)
        
        if (result.b != 0)
            *arg2 = 0
            arg2[1] = 1
            result = arg2
            *(result + 4) = result_1
            var_4d = 1
    
    if (var_4d == 0 && ebx s>= 1)
        int32_t* var_b4_17 = &__saved_ebp
        result = sub_4baba4(0, edx_42)
        
        if (result.b != 0)
            result = arg2
            *result = 1
            var_4d = 1
    
    if (var_4d == 0)
        bool o_61 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
        
        if (o_61)
            sub_403010()
            noreturn
        
        result = *(*data_5301f4 + arg1 * 0x208 + 0x1fea4)
        
        if (result == *(*data_5301f4 + 0x21104))
            result = arg2
            *result = 1
            var_4d = 1
    
    if (var_4d == 0)
        result = arg2
        *result = 3
    
    return result
}
