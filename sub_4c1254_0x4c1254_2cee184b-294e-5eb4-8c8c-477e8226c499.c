// ============================================================
// 函数名称: sub_4c1254
// 虚拟地址: 0x4c1254
// WARP GUID: 2cee184b-294e-5eb4-8c8c-477e8226c499
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d38, sub_4c2ca0, sub_4cc6dc, sub_4c1b10, sub_4c2be8, sub_420ac8, sub_4cd498, sub_4c4ab8, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_tsub_4c1254()
{
    // 第一条实际指令: char var_5 = 0
    char var_5 = 0
    int32_t var_c = 0
    int32_t edi = 0
    int32_t var_10 = 0
    int32_t i_2 = *data_5300d0
    int32_t var_14
    int32_t result
    
    if (i_2 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            result = sub_4c2be8(ebx_1)
            
            if (result.b != 0)
                result = ebx_1 * 0x41
                bool o_1 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + (result << 3) + 0x2008c) s> 0
                        && *(*data_5301f4 + (result << 3) + 0x20088) == 1)
                    int32_t temp6_1 = var_c
                    var_c += 1
                    
                    if (add_overflow(temp6_1, 1))
                        sub_403010()
                        noreturn
                    
                    if (edi == 0)
                    label_4c1305:
                        edi = ebx_1
                        bool o_5 = unimplemented  {imul eax, edi, 0x41}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        var_14 = *(*data_5301f4 + edi * 0x208 + 0x2008c)
                    else
                        bool o_3 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        bool o_4 = unimplemented  {imul edx, edi, 0x41}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + ebx_1 * 0x208 + 0x2008c)
                                s>= *(*data_5301f4 + edi * 0x208 + 0x2008c))
                            goto label_4c1305
            
            ebx_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *data_5300d0
    int32_t var_18
    
    if (i_3 s> 0)
        int32_t ebx_2 = 1
        int32_t i_1
        
        do
            result = sub_4c2be8(ebx_2)
            
            if (result.b != 0)
                bool o_6 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + ebx_2 * 0x208 + 0x2008c) == 0)
                    if (edi == 0)
                    label_4c139f:
                        var_10 = ebx_2
                        bool o_9 = unimplemented  {imul eax, dword [ebp-0xc], 0x41}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        var_18 = *(*data_5301f4 + var_10 * 0x208 + 0x1fea4)
                    else
                        bool o_7 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        bool o_8 = unimplemented  {imul edx, edi, 0x41}
                        
                        if (o_8)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + ebx_2 * 0x208 + 0x1fea4)
                                s>= *(*data_5301f4 + edi * 0x208 + 0x1fea4))
                            goto label_4c139f
            
            ebx_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (var_c == 1 && edi s> 0)
        void* eax_7 = *data_5301f4
        *(eax_7 + 0x21108)
        bool o_10 = unimplemented  {imul eax, dword [eax+0x21108], 0x3}
        
        if (o_10)
            sub_403010()
            noreturn
        
        if (*(eax_7 + 0x21108) * 3 s<= var_14)
            int32_t eax_8 = sub_4c2ca0()
            
            if (eax_8 s<= 1)
                long double st0_1 = sub_402d38()
                long double temp8_1 = fconvert.t(0.5f)
                st0_1 - temp8_1
                result.w = (st0_1 < temp8_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_1, temp8_1) ? 1 : 0) << 0xa
                    | (st0_1 == temp8_1 ? 1 : 0) << 0xe
            
            if (eax_8 s> 1 || (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0))))
                int32_t ebx_3 = 0
                int32_t esi_2 = edi * 0x41
                bool o_11 = unimplemented  {imul esi, edi, 0x41}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                long double x87_r7_3 =
                    fconvert.t(*(*data_5301f4 + (esi_2 << 3) + 0x200a0)) / data_4c1ae0
                long double temp11_1 = fconvert.t(40f)
                x87_r7_3 - temp11_1
                int32_t eax_10
                eax_10.w = (x87_r7_3 < temp11_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_3, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp11_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_10:1.b, 6)) && not(test_bit(eax_10:1.b, 0)))
                    bool o_12 = unimplemented  {imul eax, edi, 0x41}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_5 =
                        fconvert.t(*(*data_5301f4 + edi * 0x208 + 0x200a0)) / data_4c1ae0
                    long double temp14_1 = fconvert.t(50f)
                    x87_r7_5 - temp14_1
                    int32_t eax_11
                    eax_11.w = (x87_r7_5 < temp14_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_5, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp14_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_11:1.b, 6)) && not(test_bit(eax_11:1.b, 0)))
                        bool o_13 = unimplemented  {imul eax, edi, 0x41}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        long double x87_r7_7 =
                            fconvert.t(*(*data_5301f4 + edi * 0x208 + 0x200a0)) / data_4c1ae0
                        long double temp22_1 = fconvert.t(62f)
                        x87_r7_7 - temp22_1
                        int32_t eax_12
                        eax_12.w = (x87_r7_7 < temp22_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_7, temp22_1) ? 1 : 0) << 0xa
                            | (x87_r7_7 == temp22_1 ? 1 : 0) << 0xe
                        
                        if (not(test_bit(eax_12:1.b, 6)) && not(test_bit(eax_12:1.b, 0)))
                            bool o_14 = unimplemented  {imul eax, edi, 0x41}
                            
                            if (o_14)
                                sub_403010()
                                noreturn
                            
                            long double x87_r7_9 =
                                fconvert.t(*(*data_5301f4 + edi * 0x208 + 0x200a0)) / data_4c1ae0
                            long double temp26_1 = fconvert.t(75f)
                            x87_r7_9 - temp26_1
                            int32_t eax_13
                            eax_13.w = (x87_r7_9 < temp26_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_9, temp26_1) ? 1 : 0) << 0xa
                                | (x87_r7_9 == temp26_1 ? 1 : 0) << 0xe
                            
                            if (not(test_bit(eax_13:1.b, 6)) && not(test_bit(eax_13:1.b, 0)))
                                bool o_15 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_15)
                                    sub_403010()
                                    noreturn
                                
                                long double x87_r7_11 =
                                    fconvert.t(*(*data_5301f4 + edi * 0x208 + 0x200a0)) / data_4c1ae0
                                long double temp32_1 = fconvert.t(100f)
                                x87_r7_11 - temp32_1
                                int32_t eax_14
                                eax_14.w = (x87_r7_11 < temp32_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_11, temp32_1) ? 1 : 0) << 0xa
                                    | (x87_r7_11 == temp32_1 ? 1 : 0) << 0xe
                                
                                if (test_bit(eax_14:1.b, 6) || test_bit(eax_14:1.b, 0))
                                    ebx_3 = 0xfffffffa
                            else
                                ebx_3 = 0xfffffffd
                        else
                            ebx_3 = 0
                    else
                        ebx_3 = 5
                else
                    ebx_3 = 0xa
                
                if (sub_4c2ca0() == 1)
                    ebx_3 = 0xffffffec
                
                int32_t eax_18 = sub_4cc6dc(edi)
                int32_t edx_26 = *data_5301f4
                int32_t eax_19 = eax_18 + *(edx_26 + (esi_2 << 3) + 0x1fea4)
                
                if (add_overflow(eax_18, *(edx_26 + (esi_2 << 3) + 0x1fea4)))
                    sub_403010()
                    noreturn
                
                void var_24c
                sub_4c4ab8(edi, &var_24c)
                char var_148
                sub_4cd498(&var_24c, 0, &var_148)
                
                if (*(*data_5301f4 + 0x2028d) != 0 || *(*data_5301f4 + 0x200a8) != 1
                    || *(*data_5301f4 + 0x20288) s< 1)
                label_4c1623:
                    
                    if (*(*data_5301f4 + 0x2028d) != 0 || *(*data_5301f4 + 0x200a8) != 1)
                    label_4c16b9:
                        bool o_21 = unimplemented  {imul eax, esi, 0x3}
                        
                        if (o_21)
                            sub_403010()
                            noreturn
                        
                        if (eax_19 * 3 s<= var_14)
                        label_4c1701:
                            
                            if (add_overflow(ebx_3, 0x5c))
                                sub_403010()
                                noreturn
                            
                            if (sub_4c1b10(3, edi, sub_420ac8(0x64, ebx_3 + 0x5c)).b != 0)
                                var_5 = 1
                        else
                            void* eax_49 = *data_5301f4
                            *(eax_49 + 0x20070)
                            bool o_22 = unimplemented  {imul eax, dword [eax+0x20070], 0x2}
                            
                            if (o_22)
                                sub_403010()
                                noreturn
                            
                            if (*(eax_49 + 0x20070) * 2 s<= var_14)
                                goto label_4c1701
                            
                            void* eax_52 = *data_5301f4
                            *(eax_52 + 0x21108)
                            bool o_23 = unimplemented  {imul eax, dword [eax+0x21108], 0x1e}
                            
                            if (o_23)
                                sub_403010()
                                noreturn
                            
                            if (*(eax_52 + 0x21108) * 0x1e s<= var_14)
                                goto label_4c1701
                            
                            bool o_25 = unimplemented  {imul eax, esi, 0x2}
                            
                            if (o_25)
                                sub_403010()
                                noreturn
                            
                            if (eax_19 * 2 s<= var_14)
                            label_4c1779:
                                
                                if (add_overflow(ebx_3, 0x58))
                                    sub_403010()
                                    noreturn
                                
                                if (sub_4c1b10(2, edi, sub_420ac8(0x64, ebx_3 + 0x58)).b != 0)
                                    var_5 = 1
                            else
                                void* eax_57 = *data_5301f4
                                *(eax_57 + 0x20070)
                                bool o_26 = unimplemented  {imul eax, dword [eax+0x20070], 0x1}
                                
                                if (o_26)
                                    sub_403010()
                                    noreturn
                                
                                if (*(eax_57 + 0x20070) s<= var_14)
                                    goto label_4c1779
                                
                                void* eax_60 = *data_5301f4
                                *(eax_60 + 0x21108)
                                bool o_27 = unimplemented  {imul eax, dword [eax+0x21108], 0x1e}
                                
                                if (o_27)
                                    sub_403010()
                                    noreturn
                                
                                if (*(eax_60 + 0x21108) * 0x1e s<= var_14)
                                    goto label_4c1779
                                
                                bool o_29 = unimplemented  {imul eax, esi, 0x1}
                                
                                if (o_29)
                                    sub_403010()
                                    noreturn
                                
                                if (eax_19 s<= var_14)
                                label_4c17eb:
                                    
                                    if (add_overflow(ebx_3, 0x55))
                                        sub_403010()
                                        noreturn
                                    
                                    if (sub_4c1b10(1, edi, sub_420ac8(0x64, ebx_3 + 0x55)).b != 0)
                                        var_5 = 1
                                else
                                    bool o_30 = unimplemented  {imul eax, dword [ebp-0x10], 0x2}
                                    
                                    if (o_30)
                                        sub_403010()
                                        noreturn
                                    
                                    if (var_14 * 2 s>= *(*data_5301f4 + 0x20070))
                                        goto label_4c17eb
                                    
                                    void* eax_66 = *data_5301f4
                                    *(eax_66 + 0x21108)
                                    bool o_31 = unimplemented  {imul eax, dword [eax+0x21108], 0xa}
                                    
                                    if (o_31)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(eax_66 + 0x21108) * 0xa s<= var_14)
                                        goto label_4c17eb
                    else
                        void* edx_33 = *data_5301f4
                        *(edx_33 + 0x21108)
                        bool o_19 = unimplemented  {imul edx, dword [edx+0x21108], 0x4}
                        
                        if (o_19)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + 0x200ac) s< *(edx_33 + 0x21108) * 4 || *data_52ffa4 == 0)
                            goto label_4c16b9
                        
                        *(*data_5301f4 + 0x2111c) = 0
                        
                        if (add_overflow(5, 0x5c))
                            sub_403010()
                            noreturn
                        
                        if (sub_4c1b10(0x27, edi, sub_420ac8(0x64, 0x61)).b != 0)
                            var_5 = 1
                else
                    void* edx_29 = *data_5301f4
                    *(edx_29 + 0x21108)
                    bool o_17 = unimplemented  {imul edx, dword [edx+0x21108], 0x4}
                    
                    if (o_17)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + 0x200ac) s< *(edx_29 + 0x21108) * 4 || *data_5305f4 == 0)
                        goto label_4c1623
                    
                    void* eax_31
                    eax_31.b = var_148
                    eax_31.b -= 4
                    char temp40_1 = eax_31.b
                    eax_31.b -= 3
                    
                    if (temp40_1 u>= 3 && eax_31.b - 1 u>= 3)
                        goto label_4c1623
                    
                    *(*data_5301f4 + 0x2111c) = 0
                    
                    if (add_overflow(5, 0x5c))
                        sub_403010()
                        noreturn
                    
                    if (sub_4c1b10(0x28, edi, sub_420ac8(0x64, 0x61)).b != 0)
                        var_5 = 1
    
    if (var_10 s> 0)
        void* eax_69 = *data_5301f4
        *(eax_69 + 0x21108)
        bool o_33 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
        
        if (o_33)
            sub_403010()
            noreturn
        
        if (*(eax_69 + 0x21108) * 2 s<= var_18)
            void* eax_71 = *data_5301f4
            *(eax_71 + 0x21108)
            bool o_34 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
            
            if (o_34)
                sub_403010()
                noreturn
            
            long double x87_r7_12 = float.t(*(eax_71 + 0x21108) * 2)
            bool o_35 = unimplemented  {imul eax, dword [ebp-0xc], 0x41}
            
            if (o_35)
                sub_403010()
                noreturn
            
            long double temp10_1 = fconvert.t(*(*data_5301f4 + var_10 * 0x208 + 0x2009c))
            x87_r7_12 - temp10_1
            result.w = (x87_r7_12 < temp10_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_12, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == temp10_1 ? 1 : 0) << 0xe
            
            if (test_bit(result:1.b, 6) || test_bit(result:1.b, 0))
                int32_t ebx_4 = 0
                int32_t esi_4 = var_10 * 0x41
                bool o_36 = unimplemented  {imul esi, dword [ebp-0xc], 0x41}
                
                if (o_36)
                    sub_403010()
                    noreturn
                
                long double x87_r7_14 =
                    fconvert.t(*(*data_5301f4 + (esi_4 << 3) + 0x200a0)) / data_4c1ae0
                long double temp13_1 = fconvert.t(75f)
                x87_r7_14 - temp13_1
                int32_t eax_74
                eax_74.w = (x87_r7_14 < temp13_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_14, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp13_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_74:1.b, 0))
                    bool o_37 = unimplemented  {imul eax, dword [ebp-0xc], 0x41}
                    
                    if (o_37)
                        sub_403010()
                        noreturn
                    
                    long double x87_r7_16 =
                        fconvert.t(*(*data_5301f4 + var_10 * 0x208 + 0x200a0)) / data_4c1ae0
                    long double temp19_1 = fconvert.t(60f)
                    x87_r7_16 - temp19_1
                    int32_t eax_75
                    eax_75.w = (x87_r7_16 < temp19_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_16, temp19_1) ? 1 : 0) << 0xa
                        | (x87_r7_16 == temp19_1 ? 1 : 0) << 0xe
                    
                    if (test_bit(eax_75:1.b, 0))
                        bool o_38 = unimplemented  {imul eax, dword [ebp-0xc], 0x41}
                        
                        if (o_38)
                            sub_403010()
                            noreturn
                        
                        long double x87_r7_18 =
                            fconvert.t(*(*data_5301f4 + var_10 * 0x208 + 0x200a0)) / data_4c1ae0
                        long double temp24_1 = fconvert.t(45f)
                        x87_r7_18 - temp24_1
                        int32_t eax_76
                        eax_76.w = (x87_r7_18 < temp24_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_18, temp24_1) ? 1 : 0) << 0xa
                            | (x87_r7_18 == temp24_1 ? 1 : 0) << 0xe
                        
                        if (test_bit(eax_76:1.b, 0))
                            bool o_39 = unimplemented  {imul eax, dword [ebp-0xc], 0x41}
                            
                            if (o_39)
                                sub_403010()
                                noreturn
                            
                            long double x87_r7_20 =
                                fconvert.t(*(*data_5301f4 + var_10 * 0x208 + 0x200a0)) / data_4c1ae0
                            long double temp31_1 = fconvert.t(30f)
                            x87_r7_20 - temp31_1
                            int32_t eax_77
                            eax_77.w = (x87_r7_20 < temp31_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_20, temp31_1) ? 1 : 0) << 0xa
                                | (x87_r7_20 == temp31_1 ? 1 : 0) << 0xe
                            
                            if (test_bit(eax_77:1.b, 0))
                                bool o_40 = unimplemented  {imul eax, dword [ebp-0xc], 0x41}
                                
                                if (o_40)
                                    sub_403010()
                                    noreturn
                                
                                long double x87_r7_22 =
                                    fconvert.t(*(*data_5301f4 + var_10 * 0x208 + 0x200a0)) / data_4c1ae0
                                long double temp37_1 = fconvert.t(-100f)
                                x87_r7_22 - temp37_1
                                int32_t eax_78
                                eax_78.w = (x87_r7_22 < temp37_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_22, temp37_1) ? 1 : 0) << 0xa
                                    | (x87_r7_22 == temp37_1 ? 1 : 0) << 0xe
                                
                                if (not(test_bit(eax_78:1.b, 0)))
                                    ebx_4 = 0xfffffff8
                            else
                                ebx_4 = 0xfffffffc
                        else
                            ebx_4 = 0
                    else
                        ebx_4 = 5
                else
                    ebx_4 = 0xa
                
                int32_t eax_80 = sub_4cc6dc(var_10)
                int32_t edx_58 = *data_5301f4
                int32_t eax_81 = eax_80 + *(edx_58 + (esi_4 << 3) + 0x1fea4)
                
                if (add_overflow(eax_80, *(edx_58 + (esi_4 << 3) + 0x1fea4)))
                    sub_403010()
                    noreturn
                
                if (eax_81 s<= var_18 || *(*data_5301f4 + 0x20070) s<= var_18)
                label_4c19d0:
                    
                    if (add_overflow(ebx_4, 0x5f))
                        sub_403010()
                        noreturn
                    
                    if (sub_4c1b10(0xd, var_10, sub_420ac8(0x64, ebx_4 + 0x5f)).b != 0)
                        var_5 = 1
                else
                    void* eax_86 = *data_5301f4
                    *(eax_86 + 0x21108)
                    bool o_42 = unimplemented  {imul eax, dword [eax+0x21108], 0x14}
                    
                    if (o_42)
                        sub_403010()
                        noreturn
                    
                    if (*(eax_86 + 0x21108) * 0x14 s<= var_18)
                        goto label_4c19d0
                    
                    int32_t eax_89 = var_18 * 2
                    bool o_44 = unimplemented  {imul eax, dword [ebp-0x14], 0x2}
                    
                    if (o_44)
                        sub_403010()
                        noreturn
                    
                    if (eax_81 s<= eax_89 || eax_89 s>= *(*data_5301f4 + 0x20070))
                    label_4c1a3f:
                        
                        if (add_overflow(ebx_4, 0x5c))
                            sub_403010()
                            noreturn
                        
                        if (sub_4c1b10(0xc, var_10, sub_420ac8(0x64, ebx_4 + 0x5c)).b != 0)
                            var_5 = 1
                    else
                        void* eax_91 = *data_5301f4
                        *(eax_91 + 0x21108)
                        bool o_45 = unimplemented  {imul eax, dword [eax+0x21108], 0xc}
                        
                        if (o_45)
                            sub_403010()
                            noreturn
                        
                        if (*(eax_91 + 0x21108) * 0xc s<= var_18)
                            goto label_4c1a3f
                        
                        int32_t eax_94 = var_18 * 4
                        bool o_47 = unimplemented  {imul eax, dword [ebp-0x14], 0x4}
                        
                        if (o_47)
                            sub_403010()
                            noreturn
                        
                        if (eax_81 s<= eax_94 || eax_94 s>= *(*data_5301f4 + 0x20070))
                        label_4c1aa7:
                            
                            if (add_overflow(ebx_4, 0x58))
                                sub_403010()
                                noreturn
                            
                            if (sub_4c1b10(0xb, var_10, sub_420ac8(0x64, ebx_4 + 0x58)).b != 0)
                                var_5 = 1
                        else
                            void* eax_96 = *data_5301f4
                            *(eax_96 + 0x21108)
                            bool o_48 = unimplemented  {imul eax, dword [eax+0x21108], 0x6}
                            
                            if (o_48)
                                sub_403010()
                                noreturn
                            
                            if (*(eax_96 + 0x21108) * 6 s<= var_18)
                                goto label_4c1aa7
    
    result.b = var_5
    return result
}
