// ============================================================
// 函数名称: sub_4c329c
// 虚拟地址: 0x4c329c
// WARP GUID: 4fa7191e-5f04-50ac-aee2-b362ab4879f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4746a0, sub_408e1c, sub_403df8, sub_50a53c, sub_4c4904, sub_409bbc, sub_402b4c, sub_403e1c, sub_50a4e0, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_t* __convention("regparm")sub_4c329c(char arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_354 = ebx
    int32_t esi
    int32_t var_358 = esi
    int32_t edi
    int32_t var_35c = edi
    int32_t var_334
    __builtin_memset(&var_334, 0, 0x18)
    int32_t var_118 = 0
    void* var_21c = nullptr
    int32_t* var_360 = &var_4
    int32_t (* var_364)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = 0
    int32_t var_5c = 0
    int32_t eax_2 = *(*data_5301f4 + 0x21100)
    int32_t i_8 = *data_5300d0
    void var_f8
    void var_d8
    int32_t var_b8[0x8]
    int32_t var_98[0x9]
    int32_t var_54
    int32_t var_4c
    char var_39[0x9]
    
    if (i_8 s> 0)
        int32_t edi_1 = 1
        int32_t i
        
        do
            int32_t eax_4 = sub_50a4e0(edi_1)
            int32_t eax_5 = eax_4 * 0x41
            bool o_1 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t edx_2
            edx_2.b = *(*data_5301f4 + (eax_5 << 3) + 0x1fea0) == 1
            *(&var_54:3 + eax_4) = edx_2.b
            *(&var_d8 + (eax_4 << 2)) = fconvert.s(float.t(*(*data_5301f4 + (eax_5 << 3) + 0x1fea4)))
            bool o_2 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t eax_6
            eax_6.b = *(*data_5301f4 + eax_4 * 0x208 + 0x1fea0)
            char temp1_1 = eax_6.b
            eax_6.b -= 1
            char temp3_1
            
            if (temp1_1 != 1)
                temp3_1 = eax_6.b
                eax_6.b -= 2
            
            if (temp1_1 == 1 || temp3_1 == 2)
                long double x87_r7_2 = fconvert.t(*(&var_d8 + (eax_4 << 2)))
                long double temp2_1 = fconvert.t(0f)
                x87_r7_2 - temp2_1
                eax_6.w = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe
            
            if ((temp1_1 == 1 || temp3_1 == 2) && not(test_bit(eax_6:1.b, 6))
                    && not(test_bit(eax_6:1.b, 0)))
                eax_6.b = 1
            else
                eax_6 = 0
            
            *(&var_4c:3 + eax_4) = eax_6.b
            var_98[eax_4] = 0
            *(&var_f8 + (eax_4 << 2)) = 0
            var_b8[eax_4] = 0
            var_39[eax_4] = 0
            edi_1 += 1
            i = i_8
            i_8 -= 1
        while (i != 1)
    
    int32_t var_28 = 0
    long double var_374
    int32_t ecx_1
    
    while (true)
        int32_t temp0_1 = var_1c
        var_1c += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
        
        int32_t var_50
        
        if (var_5c == 0)
            sub_4c4904(&var_50)
        else if (var_5c == 1)
            if (arg1 == 0)
                int32_t var_58
                var_50 = var_58
                var_4c = var_54
            
            sub_4c4904(&var_50)
        float var_2c_1 = 9999999f
        int32_t var_60_1 = 0
        int32_t i_9 = *data_5300d0
        
        if (i_9 s> 0)
            int32_t edi_2 = 1
            int32_t i_1
            
            do
                int32_t eax_12 = sub_50a4e0(edi_2)
                bool o_4 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                int32_t eax_13
                eax_13.b = *(*data_5301f4 + eax_12 * 0x208 + 0x20085)
                *(&var_5c:3 + eax_12) = eax_13.b
                
                if (eax_13.b != 0)
                    int32_t temp8_1 = var_60_1
                    var_60_1 += 1
                    
                    if (add_overflow(temp8_1, 1))
                        sub_403010()
                        noreturn
                    
                    if (var_b8[eax_12] == 0)
                        var_b8[eax_12] = var_1c
                
                edi_2 += 1
                i_1 = i_9
                i_9 -= 1
            while (i_1 != 1)
        
        int32_t i_10 = *data_5300d0
        
        if (i_10 s> 0)
            int32_t edi_3 = 1
            int32_t i_2
            
            do
                int32_t ebx_3 = sub_50a4e0(edi_3)
                
                if (*(&var_5c:3 + ebx_3) != 0)
                    long double x87_r7_3 = fconvert.t(*(&var_d8 + (ebx_3 << 2)))
                    long double temp6_1 = fconvert.t(var_2c_1)
                    x87_r7_3 - temp6_1
                    int32_t eax_16
                    eax_16.w = (x87_r7_3 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_3, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp6_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_16:1.b, 0))
                        var_2c_1 = *(&var_d8 + (ebx_3 << 2))
                
                edi_3 += 1
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
        
        void var_114
        void var_d4
        __builtin_memcpy(&var_114, &var_d4, 0x20)
        int32_t i_11 = *data_5300d0
        
        if (i_11 s> 0)
            int32_t edi_4 = 1
            int32_t i_3
            
            do
                int32_t eax_19 = sub_50a4e0(edi_4)
                
                if (*(&var_4c:3 + eax_19) != 0)
                    int32_t j_2 = *data_5300d0
                    
                    if (j_2 s> 0)
                        int32_t j_1 = j_2
                        int32_t var_14_1 = 1
                        int32_t j
                        
                        do
                            int32_t edx_9 = sub_50a53c(var_14_1)
                            
                            if (*(&var_5c:3 + edx_9) != 0)
                                float var_6c_1 = fconvert.s(fconvert.t(var_2c_1) / float.t(var_60_1))
                                long double x87_r7_6 = fconvert.t(var_2c_1)
                                long double temp16_1 = fconvert.t((&var_118)[eax_19])
                                x87_r7_6 - temp16_1
                                int32_t eax_22
                                eax_22.w = (x87_r7_6 < temp16_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_6, temp16_1) ? 1 : 0) << 0xa
                                    | (x87_r7_6 == temp16_1 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_22:1.b, 6)) && not(test_bit(eax_22:1.b, 0)))
                                    var_6c_1 =
                                        fconvert.s(fconvert.t((&var_118)[eax_19]) / float.t(var_60_1))
                                
                                *(&var_d8 + (eax_19 << 2)) = fconvert.s(
                                    fconvert.t(*(&var_d8 + (eax_19 << 2))) - fconvert.t(var_6c_1))
                                *(&var_f8 + (edx_9 << 2)) = fconvert.s(
                                    fconvert.t(*(&var_f8 + (edx_9 << 2))) + fconvert.t(var_6c_1))
                                var_39[edx_9] = 1
                            
                            var_14_1 += 1
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                
                edi_4 += 1
                i_3 = i_11
                i_11 -= 1
            while (i_3 != 1)
        
        var_5c = 0
        int32_t i_12 = *data_5300d0
        
        if (i_12 s> 0)
            int32_t edi_5 = 1
            int32_t i_4
            
            do
                int32_t ebx_5 = sub_50a4e0(edi_5)
                
                if (*(&var_5c:3 + ebx_5) != 0)
                    long double x87_r7_13 = fconvert.t(*(&var_d8 + (ebx_5 << 2)))
                    long double temp14_1 = fconvert.t(0f)
                    x87_r7_13 - temp14_1
                    int32_t eax_24
                    eax_24.w = (x87_r7_13 < temp14_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_13, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == temp14_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_24:1.b, 6) || test_bit(eax_24:1.b, 0))
                        *(&var_5c:3 + ebx_5) = 0
                    else
                        var_5c = 1
                
                edi_5 += 1
                i_4 = i_12
                i_12 -= 1
            while (i_4 != 1)
        
        float var_c_1 = 0f
        float var_10_1 = 0f
        int32_t i_13 = *data_5300d0
        int32_t eax_25
        
        if (i_13 s> 0)
            int32_t edi_6 = 1
            int32_t i_5
            
            do
                int32_t ebx_6 = sub_50a4e0(edi_6)
                long double x87_r7_14 = fconvert.t(*(&var_d8 + (ebx_6 << 2)))
                long double temp12_1 = fconvert.t(0f)
                x87_r7_14 - temp12_1
                eax_25.w = (x87_r7_14 < temp12_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_14, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp12_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_25:1.b, 6)) && not(test_bit(eax_25:1.b, 0)))
                    var_c_1 = fconvert.s(fconvert.t(var_c_1) + fconvert.t(*(&var_d8 + (ebx_6 << 2))))
                else
                    *(&var_4c:3 + ebx_6) = 0
                    *(&var_54:3 + ebx_6) = 0
                
                if (var_39[ebx_6] != 0)
                    var_10_1 = fconvert.s(fconvert.t(var_10_1) + fconvert.t(*(&var_f8 + (ebx_6 << 2))))
                
                edi_6 += 1
                i_5 = i_13
                i_13 -= 1
            while (i_5 != 1)
        
        float var_70_1 = 0.00999999978f
        long double x87_r7_22 = (float.t(eax_2) - (fconvert.t(var_c_1) + fconvert.t(var_10_1)))
            * (float.t(eax_2) - (fconvert.t(var_c_1) + fconvert.t(var_10_1)))
        long double temp9_1 = fconvert.t(0.00999999978f)
        x87_r7_22 - temp9_1
        eax_25.w = (x87_r7_22 < temp9_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_22, temp9_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp9_1 ? 1 : 0) << 0xe
        char var_31c[0x100]
        char var_218[0xe4]
        
        if (not(test_bit(eax_25:1.b, 6)) && not(test_bit(eax_25:1.b, 0)))
            var_374 = fconvert.t(var_c_1)
            sub_409bbc(&var_118)
            var_374:8.d = var_118
            long double var_378_1 = fconvert.t(var_10_1)
            sub_409bbc(&var_21c)
            sub_404054(&var_218, var_21c, 0xff)
            var_374:4.d = &var_218
            void* var_320
            sub_408e1c(var_1c, &var_320)
            sub_404054(&var_31c, var_320, 0xff)
            var_374.d = &var_31c
            int32_t var_324
            sub_408e1c(eax_2, &var_324)
            eax_25, ecx_1 = sub_4746a0(var_324, 0xd, *data_530304)
        
        int32_t temp11_1 = var_28
        var_28 += 1
        
        if (add_overflow(temp11_1, 1))
            sub_403010()
            noreturn
        
        if (var_28 == 0x1f4)
            var_374 = fconvert.t(var_c_1)
            char* var_328
            sub_409bbc(&var_328)
            var_374:8.d = var_328
            long double var_378_2 = fconvert.t(var_10_1)
            char* var_32c
            sub_409bbc(&var_32c)
            sub_404054(&var_218, var_32c, 0xff)
            var_374:4.d = &var_218
            void* var_330
            sub_408e1c(var_1c, &var_330)
            sub_404054(&var_31c, var_330, 0xff)
            var_374.d = &var_31c
            sub_408e1c(eax_2, &var_334)
            eax_25, ecx_1 = sub_4746a0(var_334, 0xe, *data_530304)
        
        if (var_28 s> 0x3e8)
            break
        
        long double x87_r7_28 = fconvert.t(var_c_1) * fconvert.t(var_c_1)
        long double temp17_1 = fconvert.t(var_70_1)
        x87_r7_28 - temp17_1
        eax_25.w = (x87_r7_28 < temp17_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_28, temp17_1) ? 1 : 0) << 0xa
            | (x87_r7_28 == temp17_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_25:1.b, 0))
            long double x87_r7_31 =
                (fconvert.t(var_10_1) - float.t(eax_2)) * (fconvert.t(var_10_1) - float.t(eax_2))
            long double temp19_1 = fconvert.t(var_70_1)
            x87_r7_31 - temp19_1
            eax_25.w = (x87_r7_31 < temp19_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_31, temp19_1) ? 1 : 0) << 0xa
                | (x87_r7_31 == temp19_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_25:1.b, 0))
                break
    
    if (var_28 s<= 0x3e8)
        char var_6_1 = 1
        float var_70_2 = 0f
        int32_t i_14 = *data_5300d0
        int32_t var_20
        
        if (i_14 s> 0)
            int32_t edi_7 = 1
            int32_t i_6
            
            do
                int32_t eax_46 = sub_50a4e0(edi_7)
                
                if (var_39[eax_46] != 0)
                    var_20 = eax_46
                    var_98[eax_46] = sub_402b4c(fconvert.t(*(&var_f8 + (eax_46 << 2))) - data_4c39b0)
                    var_70_2 = fconvert.s(fconvert.t(var_70_2) + fconvert.t(*(&var_f8 + (eax_46 << 2)))
                        - float.t(var_98[eax_46]))
                
                edi_7 += 1
                i_6 = i_14
                i_14 -= 1
            while (i_6 != 1)
        
        int32_t eax_48
        int32_t edx_20
        eax_48, edx_20 = sub_402b4c(fconvert.t(var_70_2))
        var_374:8.d = edx_20
        var_374:4.d = eax_48
        int32_t eax_51
        int32_t edx_21
        edx_21:eax_51 = sx.q(var_98[var_20])
        bool o_7 = unimplemented  {adc edx, dword [esp+0x4]}
        
        if (o_7)
            sub_403010()
            noreturn
        
        var_98[var_20] = eax_51 + var_374:4.d
        int32_t eax_53
        int32_t edx_24
        eax_53, edx_24 = sub_402b4c(fconvert.t(var_70_2))
        int32_t var_338_1 = edx_24
        int32_t eax_54
        int32_t edx_25
        eax_54, edx_25 = sub_402b4c(fconvert.t(var_70_2))
        int32_t var_34c_1 = edx_25
        long double x87_r7_44 =
            (fconvert.t(var_70_2) - float.t(eax_54.q)) * (fconvert.t(var_70_2) - float.t(eax_53.q))
        long double x87_r6_9 = data_4c39bc
        x87_r6_9 - x87_r7_44
        eax_54.w = (x87_r6_9 < x87_r7_44 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_9, x87_r7_44) ? 1 : 0) << 0xa
            | (x87_r6_9 == x87_r7_44 ? 1 : 0) << 0xe
        
        if (test_bit(eax_54:1.b, 0))
            var_374:8.d = 0
            var_374:4.d = &data_4c39ac
            var_374.d = &data_4c39ac
            sub_4746a0(0, 0xf, *data_530304)
        
        int32_t i_15 = *data_5300d0
        
        if (i_15 s> 0)
            int32_t edi_8 = 1
            int32_t i_7
            
            do
                int32_t eax_58 = sub_50a4e0(edi_8)
                int32_t eax_59 = eax_58 * 0x41
                bool o_8 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                ecx_1.b = var_39[eax_58]
                *(*data_5301f4 + (eax_59 << 3) + 0x20085) = ecx_1.b
                *(*data_5301f4 + (eax_59 << 3) + 0x20088) = var_b8[eax_58]
                
                if (var_39[eax_58] == 0)
                    *(*data_5301f4 + (eax_59 << 3) + 0x2008c) = 0
                else
                    *(*data_5301f4 + (eax_59 << 3) + 0x2008c) = var_98[eax_58]
                
                edi_8 += 1
                i_7 = i_15
                i_15 -= 1
            while (i_7 != 1)
    else
        char var_6 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_360_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4c39a1
    sub_403e1c(&var_334, 6)
    sub_403df8(&var_21c)
    int32_t* result = &var_118
    sub_403df8(result)
    return result
}
