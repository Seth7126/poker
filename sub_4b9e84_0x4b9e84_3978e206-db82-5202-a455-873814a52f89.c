// ============================================================
// 函数名称: sub_4b9e84
// 虚拟地址: 0x4b9e84
// WARP GUID: 3978e206-db82-5202-a455-873814a52f89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b9e30, sub_404138, sub_406807, sub_402b4c, sub_403e1c, sub_403010, sub_402d38, sub_4c2ca0, sub_404080, sub_52b2f0, sub_4c2c48, sub_420b80, sub_4cc6dc, sub_408e1c, sub_4c2d18, sub_4c2be8, sub_4c2de8, sub_469a14, sub_4bdac0
// [被调用的父级函数]: sub_4b8c38
// ============================================================

int32_t __convention("regparm")sub_4b9e84(int32_t arg1, long double arg2 @ st0, long double arg3 @ st1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t entry_ebx
    int32_t var_88 = entry_ebx
    int32_t esi
    int32_t var_8c = esi
    int32_t edi
    int32_t var_90 = edi
    int32_t var_7c = 0
    int32_t var_80 = 0
    char* var_84 = nullptr
    int32_t edx
    int32_t var_c = edx
    int32_t* var_94 = &var_4
    int32_t (* var_98)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD* eax = sub_4c2de8(0)
    struct _EXCEPTION_REGISTRATION_RECORD* eax_1 = sub_4c2ca0()
    bool var_45 = *(data_5301b0 + 0x69c24) == 0
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
    
    int32_t eax_9 = *(*data_5301f4 + arg1 * 0x208 + 0x1fea4)
    int32_t edx_5 = *(*data_5301f4 + 0x21108)
    bool o_2 = unimplemented  {imul edx, dword [ebp-0x4], 0x41}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *data_5301f4
    int32_t edx_9 = *(*data_5301f4 + 0x21104)
    int32_t edx_10 = edx_9 - eax_9
    
    if (add_overflow(edx_9, neg.d(eax_9)))
        sub_403010()
        noreturn
    
    sub_4bdac0(arg1, eax_1)
    float var_34 = fconvert.s(arg2 * fconvert.t(100f))
    int32_t ecx_4 = sub_4bdac0(arg1, eax)
    float var_30 = fconvert.s(arg3 * fconvert.t(100f))
    float var_2c = fconvert.s((fconvert.t(var_34) + fconvert.t(var_30)) * fconvert.t(0.5f))
    int32_t eax_14 = *(*data_5301f4 + 0x21104)
    
    if (add_overflow(eax_14, edx_5))
        sub_403010()
        noreturn
    
    int32_t eax_16
    int32_t edx_13
    edx_13:eax_16 = sx.q(eax_14 + edx_5)
    bool o_5 = add_overflow(eax_1, 0xffffffff)
    
    if (o_5)
        sub_403010()
        noreturn
    
    int32_t eax_17
    int32_t edx_14
    eax_17, edx_14 = sub_402b4c(float.t(eax_1 - 1) * data_4baaac)
    int32_t eax_18
    int32_t edx_15
    eax_18, edx_15 = sub_406807(ecx_4, edx_14, eax_17, eax_16, edx_13)
    
    if (o_5)
        sub_403010()
        noreturn
    
    int32_t var_70 = edx_15
    
    if (add_overflow(eax_9, edx_10))
        sub_403010()
        noreturn
    
    if (add_overflow(eax_9 + edx_10, edx_5))
        sub_403010()
        noreturn
    
    data_4baaac
    int32_t esi_3
    
    if (var_45 == 0)
        int32_t var_60_1 = 0x64
        int32_t eax_33 = sub_4c2d18(0) * 5
        bool o_10 = unimplemented  {imul eax, eax, 0x5}
        
        if (o_10)
            sub_403010()
            noreturn
        
        int32_t ebx = entry_ebx + eax_33
        
        if (add_overflow(entry_ebx, eax_33))
            sub_403010()
            noreturn
        
        int32_t i_1 = *data_5300d0
        
        if (i_1 s> 0)
            int32_t esi_4 = 1
            int32_t i
            
            do
                if (sub_4c2be8(esi_4) != 0 && esi_4 != arg1)
                    int32_t eax_36 = esi_4 * 0x41
                    bool o_12 = unimplemented  {imul eax, esi, 0x41}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_19 = *data_5301f4
                    *(edx_19 + (eax_36 << 3) + 0x20080)
                    int32_t eax_37 = *(edx_19 + (eax_36 << 3) + 0x20080) * 3
                    bool o_13 = unimplemented  {imul eax, dword [edx+eax*8+0x20080], 0x3}
                    
                    if (o_13)
                        sub_403010()
                        noreturn
                    
                    int32_t temp42_1 = ebx
                    ebx += eax_37
                    
                    if (add_overflow(temp42_1, eax_37))
                        sub_403010()
                        noreturn
                
                esi_4 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (ebx s> 0x1e)
            ebx = 0x1e
        
        int32_t var_60_2 = var_60_1 - ebx
        
        if (add_overflow(var_60_1, neg.d(ebx)))
            sub_403010()
            noreturn
        
        int32_t ecx_5 = *(*data_5301f4 + 0x21108)
        int32_t ebx_1 = divs.dp.d(sx.q(*(*data_5301f4 + 0x21100)), ecx_5)
        
        if (ebx_1 s> 0x14)
            ebx_1 = 0x14
        
        int32_t var_60_3 = var_60_2 - ebx_1
        
        if (add_overflow(var_60_2, neg.d(ebx_1)))
            sub_403010()
            noreturn
        
        if (add_overflow(edx_10, neg.d(eax_9)))
            sub_403010()
            noreturn
        
        int32_t eax_45 = (edx_10 - eax_9) * 2
        bool o_18 = unimplemented  {imul eax, eax, 0x2}
        
        if (o_18)
            sub_403010()
            noreturn
        
        int32_t ebx_2 = eax_45
        
        if (add_overflow(0, eax_45))
            sub_403010()
            noreturn
        
        if (ebx_2 s< 0)
            ebx_2 = 0
        
        int32_t eax_49 = divs.dp.d(sx.q(edx_10), ecx_5) * 2
        bool o_20 = unimplemented  {imul eax, eax, 0x2}
        
        if (o_20)
            sub_403010()
            noreturn
        
        int32_t ebx_3 = ebx_2 + eax_49
        
        if (add_overflow(ebx_2, eax_49))
            sub_403010()
            noreturn
        
        if (ebx_3 s> 0x14)
            ebx_3 = 0x14
        
        int32_t var_60_4 = var_60_3 - ebx_3
        
        if (add_overflow(var_60_3, neg.d(ebx_3)))
            sub_403010()
            noreturn
        
        sub_4cc6dc(arg1)
        data_4bab04
        long double x87_r0_13 = float.t(edx_10)
        int32_t ebx_4 = sub_402b4c(x87_r0_13 / x87_r0_13 * fconvert.t(20f))
        
        if (ebx_4 s> 0x14)
            ebx_4 = 0x14
        
        int32_t var_60_5 = var_60_4 - ebx_4
        
        if (add_overflow(var_60_4, neg.d(ebx_4)))
            sub_403010()
            noreturn
        
        int32_t ebx_5 = sub_402b4c(fconvert.t(10f) - float.t(eax_7) / fconvert.t(10f))
        
        if (ebx_5 s> 0xa)
            ebx_5 = 0xa
        
        int32_t var_60_6 = var_60_5 - ebx_5
        
        if (add_overflow(var_60_5, neg.d(ebx_5)))
            sub_403010()
            noreturn
        
        if (var_60_6 s<= 0xa)
            var_2c = fconvert.s(fconvert.t(var_30) - data_4bab14)
        else if (var_60_6 s<= 0x14)
            var_2c = var_30
        else if (var_60_6 s< 0x50)
            if (add_overflow(var_60_6, 0xffffffec))
                sub_403010()
                noreturn
            
            float var_64_1 = fconvert.s(float.t(var_60_6 - 0x14) / fconvert.t(60f))
            var_2c = fconvert.s(fconvert.t(var_34) * fconvert.t(var_64_1)
                + (fconvert.t(1f) - fconvert.t(var_64_1)) * fconvert.t(var_30))
        else
            var_2c = var_34
        
        esi_3 = 0
        long double x87_r1_42 = fconvert.t(var_2c)
        long double temp64_1 = fconvert.t(95f)
        x87_r1_42 - temp64_1
        float eax_54
        eax_54.w = (x87_r1_42 < temp64_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_42, temp64_1) ? 1 : 0) << 0xa
            | (x87_r1_42 == temp64_1 ? 1 : 0) << 0xe | 0x1000
        
        if (test_bit(eax_54:1.b, 0))
            long double x87_r1_43 = fconvert.t(var_2c)
            long double temp66_1 = fconvert.t(90f)
            x87_r1_43 - temp66_1
            eax_54.w = (x87_r1_43 < temp66_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_43, temp66_1) ? 1 : 0) << 0xa
                | (x87_r1_43 == temp66_1 ? 1 : 0) << 0xe | 0x1000
            
            if (test_bit(eax_54:1.b, 0))
                long double x87_r1_44 = fconvert.t(var_2c)
                long double temp67_1 = fconvert.t(80f)
                x87_r1_44 - temp67_1
                eax_54.w = (x87_r1_44 < temp67_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_44, temp67_1) ? 1 : 0) << 0xa
                    | (x87_r1_44 == temp67_1 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_54:1.b, 0))
                    long double x87_r1_45 = fconvert.t(var_2c)
                    long double temp68_1 = fconvert.t(72f)
                    x87_r1_45 - temp68_1
                    eax_54.w = (x87_r1_45 < temp68_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_45, temp68_1) ? 1 : 0) << 0xa
                        | (x87_r1_45 == temp68_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if (test_bit(eax_54:1.b, 0))
                        long double x87_r1_46 = fconvert.t(var_2c)
                        long double temp70_1 = fconvert.t(65f)
                        x87_r1_46 - temp70_1
                        eax_54.w = (x87_r1_46 < temp70_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_46, temp70_1) ? 1 : 0) << 0xa
                            | (x87_r1_46 == temp70_1 ? 1 : 0) << 0xe | 0x1000
                        
                        if (test_bit(eax_54:1.b, 0))
                            long double x87_r1_47 = fconvert.t(var_2c)
                            long double temp72_1 = fconvert.t(50f)
                            x87_r1_47 - temp72_1
                            eax_54.w = (x87_r1_47 < temp72_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_47, temp72_1) ? 1 : 0) << 0xa
                                | (x87_r1_47 == temp72_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if (not(test_bit(eax_54:1.b, 0)))
                                esi_3 = 1
                        else
                            esi_3 = 2
                    else
                        esi_3 = 3
                else
                    esi_3 = 4
            else
                esi_3 = 5
        else
            esi_3 = 6
        
        void* eax_56
        
        if (sub_4c2d18(0) == 0)
            long double x87_r1_48 = fconvert.t(var_2c)
            long double temp69_1 = fconvert.t(30f)
            x87_r1_48 - temp69_1
            eax_56.w = (x87_r1_48 < temp69_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_48, temp69_1) ? 1 : 0) << 0xa
                | (x87_r1_48 == temp69_1 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_56:1.b, 0)) && *(*data_5301f4 + 0x21108) s>= edx_10)
                esi_3 = 1
            
            long double x87_r1_49 = fconvert.t(var_2c)
            long double temp71_1 = fconvert.t(40f)
            x87_r1_49 - temp71_1
            eax_56.w = (x87_r1_49 < temp71_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_49, temp71_1) ? 1 : 0) << 0xa
                | (x87_r1_49 == temp71_1 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_56:1.b, 0)))
                void* eax_60 = *data_5301f4
                *(eax_60 + 0x21108)
                bool o_26 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                if (*(eax_60 + 0x21108) * 2 s>= edx_10)
                    esi_3 = 1
        
        if (esi_3 s> 1)
            eax_56.b = *(*data_5301f4 + 0x20094)
            
            if (eax_56.b != 1)
                data_5301f4
                
                if (eax_56.b != 3)
                    data_5301f4
                else
                    long double x87_r1_55 = sub_402d38() * fconvert.t(100f)
                    long double x87_r0_22 = data_4bab30 * fconvert.t(var_2c)
                    x87_r0_22 - x87_r1_55
                    eax_56.w = (x87_r0_22 < x87_r1_55 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r0_22, x87_r1_55) ? 1 : 0) << 0xa
                        | (x87_r0_22 == x87_r1_55 ? 1 : 0) << 0xe | 0x1000
                    
                    if (test_bit(eax_56:1.b, 0))
                        esi_3 = 1
                    
                    long double x87_r1_57 = sub_402d38() * fconvert.t(100f)
                    long double x87_r0_24 = data_4bab3c * fconvert.t(var_2c)
                    x87_r0_24 - x87_r1_57
                    eax_56.w = (x87_r0_24 < x87_r1_57 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r0_24, x87_r1_57) ? 1 : 0) << 0xa
                        | (x87_r0_24 == x87_r1_57 ? 1 : 0) << 0xe | 0x1000
                    
                    if (test_bit(eax_56:1.b, 0))
                        int32_t temp77_1 = esi_3
                        esi_3 -= 1
                        
                        if (add_overflow(temp77_1, 0xffffffff))
                            sub_403010()
                            noreturn
            else
                long double x87_r1_51 = sub_402d38() * fconvert.t(100f)
                long double x87_r0_18 = fconvert.t(var_2c) * fconvert.t(0.5f)
                x87_r0_18 - x87_r1_51
                eax_56.w = (x87_r0_18 < x87_r1_51 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_18, x87_r1_51) ? 1 : 0) << 0xa
                    | (x87_r0_18 == x87_r1_51 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_56:1.b, 0))
                    esi_3 = 1
                
                long double x87_r1_53 = sub_402d38() * fconvert.t(100f)
                long double x87_r0_20 = data_4bab30 * fconvert.t(var_2c)
                x87_r0_20 - x87_r1_53
                eax_56.w = (x87_r0_20 < x87_r1_53 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_20, x87_r1_53) ? 1 : 0) << 0xa
                    | (x87_r0_20 == x87_r1_53 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_56:1.b, 0))
                    int32_t temp75_1 = esi_3
                    esi_3 -= 1
                    
                    if (add_overflow(temp75_1, 0xffffffff))
                        sub_403010()
                        noreturn
            
            if (var_60_6 s>= 0x46)
                long double x87_r1_58 = fconvert.t(var_2c)
                long double temp76_1 = fconvert.t(60f)
                x87_r1_58 - temp76_1
                eax_56.w = (x87_r1_58 < temp76_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_58, temp76_1) ? 1 : 0) << 0xa
                    | (x87_r1_58 == temp76_1 ? 1 : 0) << 0xe | 0x1000
            
            if (var_60_6 s< 0x46 || test_bit(eax_56:1.b, 0))
                if (var_60_6 s>= 0x32)
                    long double x87_r1_62 = fconvert.t(var_2c)
                    long double temp78_1 = fconvert.t(40f)
                    x87_r1_62 - temp78_1
                    eax_56.w = (x87_r1_62 < temp78_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_62, temp78_1) ? 1 : 0) << 0xa
                        | (x87_r1_62 == temp78_1 ? 1 : 0) << 0xe | 0x1000
                
                if (var_60_6 s>= 0x32 && not(test_bit(eax_56:1.b, 0)))
                    long double st0_13 = sub_402d38()
                    long double x87_r0_28 = data_4baaf8
                    x87_r0_28 - st0_13
                    eax_56.w = (x87_r0_28 < st0_13 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r0_28, st0_13) ? 1 : 0) << 0xa
                        | (x87_r0_28 == st0_13 ? 1 : 0) << 0xe | 0x1000
                    
                    if (test_bit(eax_56:1.b, 0))
                        int32_t temp81_1 = esi_3
                        esi_3 += 2
                        
                        if (add_overflow(temp81_1, 2))
                            sub_403010()
                            noreturn
                    
                    long double st0_14 = sub_402d38()
                    long double x87_r0_29 = data_4baaf8
                    x87_r0_29 - st0_14
                    eax_56.w = (x87_r0_29 < st0_14 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r0_29, st0_14) ? 1 : 0) << 0xa
                        | (x87_r0_29 == st0_14 ? 1 : 0) << 0xe | 0x1000
                    
                    if (test_bit(eax_56:1.b, 0))
                        int32_t temp84_1 = esi_3
                        esi_3 += 1
                        
                        if (add_overflow(temp84_1, 1))
                            sub_403010()
                            noreturn
                else if (var_60_6 s>= 0x1e)
                    long double x87_r1_65 = fconvert.t(var_2c)
                    long double temp79_1 = fconvert.t(20f)
                    x87_r1_65 - temp79_1
                    eax_56.w = (x87_r1_65 < temp79_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_65, temp79_1) ? 1 : 0) << 0xa
                        | (x87_r1_65 == temp79_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if (not(test_bit(eax_56:1.b, 0)))
                        long double st0_15 = sub_402d38()
                        long double x87_r0_30 = data_4baaf8
                        x87_r0_30 - st0_15
                        eax_56.w = (x87_r0_30 < st0_15 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r0_30, st0_15) ? 1 : 0) << 0xa
                            | (x87_r0_30 == st0_15 ? 1 : 0) << 0xe | 0x1000
                        
                        if (test_bit(eax_56:1.b, 0))
                            int32_t temp83_1 = esi_3
                            esi_3 += 1
                            
                            if (add_overflow(temp83_1, 1))
                                sub_403010()
                                noreturn
            else
                long double st0_10 = sub_402d38()
                long double x87_r0_25 = data_4baaf8
                x87_r0_25 - st0_10
                eax_56.w = (x87_r0_25 < st0_10 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_25, st0_10) ? 1 : 0) << 0xa
                    | (x87_r0_25 == st0_10 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_56:1.b, 0))
                    int32_t temp80_1 = esi_3
                    esi_3 += 3
                    
                    if (add_overflow(temp80_1, 3))
                        sub_403010()
                        noreturn
                
                long double st0_11 = sub_402d38()
                long double x87_r0_26 = data_4baaf8
                x87_r0_26 - st0_11
                eax_56.w = (x87_r0_26 < st0_11 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_26, st0_11) ? 1 : 0) << 0xa
                    | (x87_r0_26 == st0_11 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_56:1.b, 0))
                    int32_t temp82_1 = esi_3
                    esi_3 += 2
                    
                    if (add_overflow(temp82_1, 2))
                        sub_403010()
                        noreturn
                
                long double st0_12 = sub_402d38()
                long double x87_r0_27 = data_4baaf8
                x87_r0_27 - st0_12
                eax_56.w = (x87_r0_27 < st0_12 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_27, st0_12) ? 1 : 0) << 0xa
                    | (x87_r0_27 == st0_12 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_56:1.b, 0))
                    int32_t temp85_1 = esi_3
                    esi_3 += 1
                    
                    if (add_overflow(temp85_1, 1))
                        sub_403010()
                        noreturn
        
        if (esi_3 s> 1)
            long double st0_16 = sub_402d38()
            long double x87_r0_31 = data_4baaec
            x87_r0_31 - st0_16
            eax_56.w = (x87_r0_31 < st0_16 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_31, st0_16) ? 1 : 0) << 0xa
                | (x87_r0_31 == st0_16 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_56:1.b, 6)) && not(test_bit(eax_56:1.b, 0)))
                int32_t temp74_1 = esi_3
                esi_3 -= 1
                
                if (add_overflow(temp74_1, 0xffffffff))
                    sub_403010()
                    noreturn
        
        long double st0_17 = sub_402d38()
        long double x87_r0_32 = data_4bab48
        x87_r0_32 - st0_17
        eax_56.w = (x87_r0_32 < st0_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_32, st0_17) ? 1 : 0) << 0xa | (x87_r0_32 == st0_17 ? 1 : 0) << 0xe
            | 0x1000
        
        if (not(test_bit(eax_56:1.b, 6)) && not(test_bit(eax_56:1.b, 0)))
            esi_3 = 1
    else
        esi_3 = 0
        void* eax_23
        
        if (*(*data_5301f4 + 0x2110c) s> 0 || *(*data_5301f4 + 0x21114) != 0)
            long double x87_r1_9 = fconvert.t(var_30)
            long double temp15_1 = fconvert.t(48f)
            x87_r1_9 - temp15_1
            eax_23.w = (x87_r1_9 < temp15_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_9, temp15_1) ? 1 : 0) << 0xa
                | (x87_r1_9 == temp15_1 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_23:1.b, 0)))
            label_4ba0b4:
                esi_3 = 1
                
                if (*(*data_5301f4 + 0x21114) != 0 && sub_4cc6dc(arg1) s<= edx_10)
                    long double x87_r1_13 = fconvert.t(var_34)
                    long double temp21_1 = fconvert.t(50f)
                    x87_r1_13 - temp21_1
                    eax_23.w = (x87_r1_13 < temp21_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_13, temp21_1) ? 1 : 0) << 0xa
                        | (x87_r1_13 == temp21_1 ? 1 : 0) << 0xe | 0x1000
                    int32_t eax_31
                    
                    if (not(test_bit(eax_23:1.b, 0)))
                        eax_31 = sub_4c2c48()
                    
                    if (not(test_bit(eax_23:1.b, 0)) && eax_31 == 1)
                        esi_3 = 6
                    else
                        long double x87_r1_14 = fconvert.t(var_34)
                        long double temp26_1 = fconvert.t(60f)
                        x87_r1_14 - temp26_1
                        eax_23.w = (x87_r1_14 < temp26_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_14, temp26_1) ? 1 : 0) << 0xa
                            | (x87_r1_14 == temp26_1 ? 1 : 0) << 0xe | 0x1000
                        
                        if (not(test_bit(eax_23:1.b, 0)))
                            esi_3 = 6
            else
                long double x87_r1_10 = fconvert.t(var_34)
                long double temp16_1 = fconvert.t(50f)
                x87_r1_10 - temp16_1
                eax_23.w = (x87_r1_10 < temp16_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_10, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r1_10 == temp16_1 ? 1 : 0) << 0xe | 0x1000
                
                if (not(test_bit(eax_23:1.b, 0)))
                    goto label_4ba0b4
                
                long double x87_r1_11 = fconvert.t(var_34)
                long double temp17_1 = fconvert.t(45f)
                x87_r1_11 - temp17_1
                eax_23.w = (x87_r1_11 < temp17_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_11, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r1_11 == temp17_1 ? 1 : 0) << 0xe | 0x1000
                
                if (not(test_bit(eax_23:1.b, 0)) && *(*data_5301f4 + 0x21108) s>= edx_10)
                    goto label_4ba0b4
                
                long double x87_r1_12 = fconvert.t(var_34)
                long double temp22_1 = fconvert.t(50f)
                x87_r1_12 - temp22_1
                eax_23.w = (x87_r1_12 < temp22_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_12, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r1_12 == temp22_1 ? 1 : 0) << 0xe | 0x1000
                
                if (not(test_bit(eax_23:1.b, 0)))
                    void* eax_28 = *data_5301f4
                    *(eax_28 + 0x21108)
                    bool o_8 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    if (*(eax_28 + 0x21108) * 2 s>= edx_10)
                        goto label_4ba0b4
        else if (eax_7 s>= 0x46 || eax_1 s<= 2)
            long double x87_r1_15 = fconvert.t(var_2c)
            long double temp18_1 = fconvert.t(22f)
            x87_r1_15 - temp18_1
            eax_23.w = (x87_r1_15 < temp18_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_15, temp18_1) ? 1 : 0) << 0xa
                | (x87_r1_15 == temp18_1 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_23:1.b, 0)))
                esi_3 = 1
        else if (eax_7 s>= 0x32 || eax_1 s<= 3)
            long double x87_r1_16 = fconvert.t(var_34)
            long double temp29_1 = fconvert.t(30f)
            x87_r1_16 - temp29_1
            eax_23.w = (x87_r1_16 < temp29_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_16, temp29_1) ? 1 : 0) << 0xa
                | (x87_r1_16 == temp29_1 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_23:1.b, 0)))
                esi_3 = 1
            else
                bool o_9 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + arg1 * 0x208 + 0x1feac) != 0)
                    long double x87_r1_17 = fconvert.t(var_34)
                    long double temp45_1 = fconvert.t(20f)
                    x87_r1_17 - temp45_1
                    eax_23.w = (x87_r1_17 < temp45_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_17, temp45_1) ? 1 : 0) << 0xa
                        | (x87_r1_17 == temp45_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if (not(test_bit(eax_23:1.b, 0)))
                        esi_3 = 1
        else
            long double x87_r1_18 = fconvert.t(var_2c)
            long double temp34_1 = fconvert.t(30f)
            x87_r1_18 - temp34_1
            eax_23.w = (x87_r1_18 < temp34_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_18, temp34_1) ? 1 : 0) << 0xa
                | (x87_r1_18 == temp34_1 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_23:1.b, 0)))
                esi_3 = 1
            else
                long double x87_r1_19 = fconvert.t(var_34)
                long double temp40_1 = fconvert.t(40f)
                x87_r1_19 - temp40_1
                eax_23.w = (x87_r1_19 < temp40_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_19, temp40_1) ? 1 : 0) << 0xa
                    | (x87_r1_19 == temp40_1 ? 1 : 0) << 0xe | 0x1000
                
                if (not(test_bit(eax_23:1.b, 0)))
                    esi_3 = 1
        
        if (esi_3 s<= 6)
            long double x87_r1_20 = fconvert.t(var_2c)
            long double temp20_1 = fconvert.t(72f)
            x87_r1_20 - temp20_1
            eax_23.w = (x87_r1_20 < temp20_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_20, temp20_1) ? 1 : 0) << 0xa
                | (x87_r1_20 == temp20_1 ? 1 : 0) << 0xe | 0x1000
            
            if (test_bit(eax_23:1.b, 0))
                long double x87_r1_23 = fconvert.t(var_2c)
                long double temp25_1 = fconvert.t(60f)
                x87_r1_23 - temp25_1
                eax_23.w = (x87_r1_23 < temp25_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_23, temp25_1) ? 1 : 0) << 0xa
                    | (x87_r1_23 == temp25_1 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_23:1.b, 0))
                    long double x87_r1_26 = fconvert.t(var_2c)
                    long double temp32_1 = fconvert.t(40f)
                    x87_r1_26 - temp32_1
                    eax_23.w = (x87_r1_26 < temp32_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_26, temp32_1) ? 1 : 0) << 0xa
                        | (x87_r1_26 == temp32_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if (not(test_bit(eax_23:1.b, 0)))
                        long double st0_5 = sub_402d38()
                        long double x87_r0_11 = data_4baae0
                        x87_r0_11 - st0_5
                        eax_23.w = (x87_r0_11 < st0_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r0_11, st0_5) ? 1 : 0) << 0xa
                            | (x87_r0_11 == st0_5 ? 1 : 0) << 0xe | 0x1000
                        
                        if (not(test_bit(eax_23:1.b, 6)) && not(test_bit(eax_23:1.b, 0)))
                            esi_3 = 2
                else
                    long double st0_3 = sub_402d38()
                    long double x87_r0_9 = data_4baaec
                    x87_r0_9 - st0_3
                    eax_23.w = (x87_r0_9 < st0_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r0_9, st0_3) ? 1 : 0) << 0xa
                        | (x87_r0_9 == st0_3 ? 1 : 0) << 0xe | 0x1000
                    
                    if (not(test_bit(eax_23:1.b, 6)) && not(test_bit(eax_23:1.b, 0)))
                        esi_3 = 3
                    
                    long double st0_4 = sub_402d38()
                    long double x87_r0_10 = data_4baaf8
                    x87_r0_10 - st0_4
                    eax_23.w = (x87_r0_10 < st0_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r0_10, st0_4) ? 1 : 0) << 0xa
                        | (x87_r0_10 == st0_4 ? 1 : 0) << 0xe | 0x1000
                    
                    if (not(test_bit(eax_23:1.b, 6)) && not(test_bit(eax_23:1.b, 0)))
                        esi_3 = 2
            else
                long double st0_1 = sub_402d38()
                long double x87_r0_7 = data_4baae0
                x87_r0_7 - st0_1
                eax_23.w = (x87_r0_7 < st0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_7, st0_1) ? 1 : 0) << 0xa
                    | (x87_r0_7 == st0_1 ? 1 : 0) << 0xe | 0x1000
                
                if (not(test_bit(eax_23:1.b, 6)) && not(test_bit(eax_23:1.b, 0)))
                    esi_3 = 3
                
                long double st0_2 = sub_402d38()
                long double x87_r0_8 = data_4baae0
                x87_r0_8 - st0_2
                eax_23.w = (x87_r0_8 < st0_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_8, st0_2) ? 1 : 0) << 0xa
                    | (x87_r0_8 == st0_2 ? 1 : 0) << 0xe | 0x1000
                
                if (not(test_bit(eax_23:1.b, 6)) && not(test_bit(eax_23:1.b, 0)))
                    esi_3 = 2
    
    if (*(*data_5301f4 + 0x20094) == 5)
        esi_3 = 0
        long double x87_r1_69 = fconvert.t(var_2c)
        long double temp24_1 = fconvert.t(90f)
        x87_r1_69 - temp24_1
        void* eax_63
        eax_63.w = (x87_r1_69 < temp24_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_69, temp24_1) ? 1 : 0) << 0xa
            | (x87_r1_69 == temp24_1 ? 1 : 0) << 0xe | 0x1000
        
        if (test_bit(eax_63:1.b, 0))
            long double x87_r1_70 = fconvert.t(var_2c)
            long double temp31_1 = fconvert.t(84f)
            x87_r1_70 - temp31_1
            eax_63.w = (x87_r1_70 < temp31_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_70, temp31_1) ? 1 : 0) << 0xa
                | (x87_r1_70 == temp31_1 ? 1 : 0) << 0xe | 0x1000
            
            if (test_bit(eax_63:1.b, 0))
                long double x87_r1_71 = fconvert.t(var_2c)
                long double temp39_1 = fconvert.t(75f)
                x87_r1_71 - temp39_1
                eax_63.w = (x87_r1_71 < temp39_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_71, temp39_1) ? 1 : 0) << 0xa
                    | (x87_r1_71 == temp39_1 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_63:1.b, 0))
                    long double x87_r1_72 = fconvert.t(var_2c)
                    long double temp44_1 = fconvert.t(68f)
                    x87_r1_72 - temp44_1
                    eax_63.w = (x87_r1_72 < temp44_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_72, temp44_1) ? 1 : 0) << 0xa
                        | (x87_r1_72 == temp44_1 ? 1 : 0) << 0xe | 0x1000
                    
                    if (test_bit(eax_63:1.b, 0))
                        long double x87_r1_73 = fconvert.t(var_2c)
                        long double temp47_1 = fconvert.t(60f)
                        x87_r1_73 - temp47_1
                        eax_63.w = (x87_r1_73 < temp47_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_73, temp47_1) ? 1 : 0) << 0xa
                            | (x87_r1_73 == temp47_1 ? 1 : 0) << 0xe | 0x1000
                        
                        if (test_bit(eax_63:1.b, 0))
                            long double x87_r1_74 = fconvert.t(var_2c)
                            long double temp50_1 = fconvert.t(50f)
                            x87_r1_74 - temp50_1
                            eax_63.w = (x87_r1_74 < temp50_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_74, temp50_1) ? 1 : 0) << 0xa
                                | (x87_r1_74 == temp50_1 ? 1 : 0) << 0xe | 0x1000
                            
                            if (not(test_bit(eax_63:1.b, 0)))
                                esi_3 = 1
                        else
                            esi_3 = 2
                    else
                        esi_3 = 3
                else
                    esi_3 = 4
            else
                esi_3 = 5
        else
            esi_3 = 6
        
        if (esi_3 s<= 1)
            long double st0_21 = sub_402d38()
            long double x87_r0_36 = data_4baaec
            x87_r0_36 - st0_21
            eax_63.w = (x87_r0_36 < st0_21 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_36, st0_21) ? 1 : 0) << 0xa
                | (x87_r0_36 == st0_21 ? 1 : 0) << 0xe | 0x1000
            
            if (test_bit(eax_63:1.b, 0))
                int32_t temp48_1 = esi_3
                esi_3 += 1
                
                if (add_overflow(temp48_1, 1))
                    sub_403010()
                    noreturn
        else
            long double st0_18 = sub_402d38()
            long double x87_r0_33 = data_4bab60
            x87_r0_33 - st0_18
            eax_63.w = (x87_r0_33 < st0_18 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_33, st0_18) ? 1 : 0) << 0xa
                | (x87_r0_33 == st0_18 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_63:1.b, 6)) && not(test_bit(eax_63:1.b, 0)))
                int32_t temp49_1 = esi_3
                esi_3 -= 1
                
                if (add_overflow(temp49_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            long double st0_19 = sub_402d38()
            long double x87_r0_34 = data_4baaec
            x87_r0_34 - st0_19
            eax_63.w = (x87_r0_34 < st0_19 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_34, st0_19) ? 1 : 0) << 0xa
                | (x87_r0_34 == st0_19 ? 1 : 0) << 0xe | 0x1000
            
            if (not(test_bit(eax_63:1.b, 0)))
                long double st0_20 = sub_402d38()
                long double x87_r0_35 = data_4baaf8
                x87_r0_35 - st0_20
                eax_63.w = (x87_r0_35 < st0_20 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_35, st0_20) ? 1 : 0) << 0xa
                    | (x87_r0_35 == st0_20 ? 1 : 0) << 0xe | 0x1000
                
                if (test_bit(eax_63:1.b, 0))
                    int32_t temp54_1 = esi_3
                    esi_3 += 1
                    
                    if (add_overflow(temp54_1, 1))
                        sub_403010()
                        noreturn
            else
                int32_t temp51_1 = esi_3
                esi_3 += 2
                
                if (add_overflow(temp51_1, 2))
                    sub_403010()
                    noreturn
    
    if (esi_3 s> 6)
        esi_3 = 6
    
    sub_404080(data_5300b4, "\n\r")
    int32_t var_a0_1 = *data_5300b4
    void* const var_a4_1 = &data_4bab80
    sub_408e1c(arg1, &var_7c)
    int32_t var_a8 = var_7c
    void* const var_ac = " - G:"
    sub_408e1c(esi_3, &var_80)
    int32_t var_b0 = var_80
    void* const var_b4 = ", Win:"
    char ebx_7
    void* ebp_1
    ebx_7, ebp_1 = sub_52b2f0(sub_402b4c(fconvert.t(var_2c) * fconvert.t(10f)), 0x3e8, 2, &var_84)
    int32_t var_c_1 = *(ebp_1 - 0x80)
    char* ecx_6 = sub_404138(data_5300b4, 7)
    void* ebp_2
    int32_t esi_5
    ebp_2, esi_5 = sub_469a14(*data_530304, *data_5300b4, ecx_6)
    
    if (esi_5 s>= 6)
        **(ebp_2 - 8) = 4
        ebx_7 = 1
    
    int32_t eax_75 = *(*data_5301f4 + 0x210f8)
    
    if (add_overflow(eax_75, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t temp0_3 = divs.dp.d(sx.q(eax_75 - 1), *(*data_5301f4 + 0x21108))
    
    if (add_overflow(temp0_3, 1))
        sub_403010()
        noreturn
    
    *(ebp_2 - 0x64) = temp0_3 + 1
    int32_t eax_81 = sub_420b80(*(ebp_2 - 0x64), 0xa)
    
    if (ebx_7 == 0 && esi_5 s>= 5)
        void* var_c_2 = ebp_2
        bool o_42 = unimplemented  {imul edi}
        
        if (o_42)
            sub_403010()
            noreturn
        
        if (sub_4b9e30(*(*data_5301f4 + 0x21108) * eax_81, 0xa) != 0)
            **(ebp_2 - 8) = 0
            *(*(ebp_2 - 8) + 1) = 1
            *(*(ebp_2 - 8) + 4) = eax_81
            ebx_7 = 1
    
    int32_t eax_91 = sub_420b80(*(ebp_2 - 0x64), 4)
    
    if (ebx_7 == 0 && esi_5 s>= 4)
        void* var_c_3 = ebp_2
        bool o_43 = unimplemented  {imul edi}
        
        if (o_43)
            sub_403010()
            noreturn
        
        if (sub_4b9e30(*(*data_5301f4 + 0x21108) * eax_91, 4) != 0)
            **(ebp_2 - 8) = 0
            *(*(ebp_2 - 8) + 1) = 1
            *(*(ebp_2 - 8) + 4) = eax_91
            ebx_7 = 1
    
    int32_t eax_101 = sub_420b80(*(ebp_2 - 0x64), 2)
    
    if (ebx_7 == 0 && esi_5 s>= 3)
        void* var_c_4 = ebp_2
        bool o_44 = unimplemented  {imul edi}
        
        if (o_44)
            sub_403010()
            noreturn
        
        if (sub_4b9e30(*(*data_5301f4 + 0x21108) * eax_101, 2) != 0)
            **(ebp_2 - 8) = 0
            *(*(ebp_2 - 8) + 1) = 1
            *(*(ebp_2 - 8) + 4) = eax_101
            ebx_7 = 1
    
    void* edx_36 = 1
    int32_t eax_111 = sub_420b80(*(ebp_2 - 0x64), 1)
    
    if (ebx_7 == 0 && esi_5 s>= 2)
        void* var_c_5 = ebp_2
        bool o_45 = unimplemented  {imul edi}
        
        if (o_45)
            sub_403010()
            noreturn
        
        char eax_116
        eax_116, edx_36 = sub_4b9e30(*(*data_5301f4 + 0x21108) * eax_111, 1)
        
        if (eax_116 != 0)
            **(ebp_2 - 8) = 0
            *(*(ebp_2 - 8) + 1) = 1
            *(*(ebp_2 - 8) + 4) = eax_111
            ebx_7 = 1
    
    if (ebx_7 == 0 && esi_5 s>= 1)
        void* var_c_6 = ebp_2
        
        if (sub_4b9e30(0, edx_36) != 0)
            **(ebp_2 - 8) = 1
            ebx_7 = 1
    
    if (ebx_7 == 0)
        *(ebp_2 - 4)
        bool o_46 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
        
        if (o_46)
            sub_403010()
            noreturn
        
        if (*(*data_5301f4 + *(ebp_2 - 4) * 0x208 + 0x1fea4) == *(*data_5301f4 + 0x21104))
            **(ebp_2 - 8) = 1
            ebx_7 = 1
    
    if (ebx_7 == 0)
        **(ebp_2 - 8) = 3
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4baa9b
    return sub_403e1c(ebp_2 - 0x80, 3)
}
