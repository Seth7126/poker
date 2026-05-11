// ============================================================
// 函数名称: sub_529818
// 虚拟地址: 0x529818
// WARP GUID: 6b9fa4b7-8045-54f5-8f6f-0d376ad5fc8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4748fc, sub_4c9168, sub_52a998, sub_404138, sub_40401c, sub_4cda5c, sub_402b4c, sub_403e1c, sub_403010, sub_402d38, sub_4c2ca0, sub_404080, sub_40496c, sub_47ab08, sub_4cc6dc, sub_528734, sub_4f1e48, sub_5285a8, sub_5295d8, sub_4c2d7c, sub_403df8, sub_4c2ec4, sub_46910c
// [被调用的父级函数]: sub_52acfc, sub_528320
// ============================================================

int32_t* __convention("regparm")sub_529818(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_60 = ebx
    int32_t esi
    int32_t var_64 = esi
    int32_t edi
    int32_t var_68 = edi
    int32_t var_5c = 0
    int32_t var_58 = 0
    int32_t var_50 = 0
    int32_t var_54 = 0
    int32_t var_34 = 0
    void* ebx_1 = arg1
    int32_t* var_6c = &var_4
    int32_t (* var_70)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0)
        *(*data_5301f4 + 0x111fb) = 0
        
        if (*(ebx_1 + 0xbefc) s> 0)
            ebp_1 = sub_5285a8(ebx_1, 0)
            
            if (sub_4c2ec4() s<= 2 && sub_528734(ebx_1) s> 1)
                if (sub_4c2ca0() s> 1)
                    *(*data_5301f4 + 0x111fb) = 1
                
                ebp_1 = sub_5285a8(ebx_1, 1)
                int32_t eax_13 = *data_5300d0
                
                if (eax_13 s> 0)
                    ebp_1[-0xd] = eax_13
                    int32_t edi_1 = 1
                    ebp_1[-0x12] = data_5301b0 + 0x8978
                    void* esi_1 = data_5302e4
                    int32_t i
                    
                    do
                        if (sub_4c2d7c(edi_1) != 0)
                            if (sub_4cc6dc(edi_1) s>= *(*data_5301f4 + 0x21108))
                                bool o_1 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_1)
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + edi_1 * 0x208 + 0x20086) = 0
                            
                            bool o_2 = unimplemented  {imul eax, edi, 0x41}
                            
                            if (o_2)
                                sub_403010()
                                noreturn
                            
                            if (*(*data_5301f4 + edi_1 * 0x208 + 0x20086) != 0)
                                bool o_3 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_3)
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + edi_1 * 0x208 + 0x1fea0) = 0
                                bool o_4 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_4)
                                    sub_403010()
                                    noreturn
                                
                                int32_t ecx_3 = *(*data_5301f4 + 0x4584)
                                *(*data_5301f4 + edi_1 * 0x208 + 0x200a4) = ecx_3
                                bool o_5 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_5)
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + edi_1 * 0x208 + 0x1feae) = 0
                                bool o_6 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_6)
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + edi_1 * 0x208 + 0x1ff45) = 0
                                bool o_7 = unimplemented  {imul eax, edi, 0x41}
                                
                                if (o_7)
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + edi_1 * 0x208 + 0x1ffdc) = 0
                                *ebp_1[-0x12] = 0
                                ebp_1[-0xe] = ebp_1[-0x12] - 0x8978
                                sub_4f1e48(ecx_3, 0, ebp_1[-0x12] - 0x8978, 
                                    fconvert.s(float.t(*(ebp_1[-0xe] + 0x8978))))
                                esp_1 = &ExceptionList
                                sub_40496c(esi_1, ebp_1[-0x12] - 0x8978, 0x48ec68)
                        
                        edi_1 += 1
                        esi_1 += 0x8d14
                        ebp_1[-0x12] += 0x8d14
                        i = ebp_1[-0xd]
                        ebp_1[-0xd] -= 1
                    while (i != 1)
                
                int32_t eax_34 = sub_4c2ec4()
                int32_t edx_20 = *data_5300d0
                
                if (add_overflow(edx_20, neg.d(eax_34)))
                    sub_403010()
                    noreturn
                
                ebp_1[-2] = edx_20 - eax_34
                ebp_1[-0xb] = 0
                int32_t eax_35 = *(ebx_1 + 0xbefc)
                
                if (eax_35 s> 0)
                    ebp_1[-0xd] = eax_35
                    int32_t edi_2 = 1
                    int32_t i_1
                    
                    do
                        bool o_9 = unimplemented  {imul eax, edi, 0x112}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        if (*(ebx_1 + edi_2 * 0x890 + 0x13b4) != 0)
                            if (ebp_1[-0xb] == 0)
                                ebp_1[-0xb] = edi_2
                            else
                                bool o_10 = unimplemented  {imul eax, edi, 0x112}
                                
                                if (o_10)
                                    sub_403010()
                                    noreturn
                                
                                ebp_1[-0xb]
                                bool o_11 = unimplemented  {imul edx, dword [ebp-0x2c], 0x112}
                                
                                if (o_11)
                                    sub_403010()
                                    noreturn
                                
                                if (*(ebx_1 + edi_2 * 0x890 + 0x13b0)
                                        s< *(ebx_1 + ebp_1[-0xb] * 0x890 + 0x13b0))
                                    ebp_1[-0xb] = edi_2
                        
                        edi_2 += 1
                        i_1 = ebp_1[-0xd]
                        ebp_1[-0xd] -= 1
                    while (i_1 != 1)
                
                ebp_1[-0xb]
                bool o_12 = unimplemented  {imul eax, dword [ebp-0x2c], 0x112}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                int32_t eax_40 = *(ebx_1 + ebp_1[-0xb] * 0x890 + 0x13b0)
                
                if (add_overflow(eax_40, neg.d(ebp_1[-2])))
                    sub_403010()
                    noreturn
                
                ebp_1[-9] = eax_40 - ebp_1[-2]
                int32_t esi_2 = 1
                int32_t eax_42 = ebp_1[-9]
                
                if (eax_42 s> 0)
                    ebp_1[-0xd] = eax_42
                    int32_t i_2
                    
                    do
                        ebp_1[-0xb]
                        bool o_14 = unimplemented  {imul eax, dword [ebp-0x2c], 0x112}
                        
                        if (o_14)
                            sub_403010()
                            noreturn
                        
                        void* eax_44 = ebx_1 + ebp_1[-0xb] * 0x890 + 0xb2c
                        bool o_17
                        
                        while (true)
                            bool o_16 = unimplemented  {imul edx, esi, 0x22}
                            
                            if (o_16)
                                sub_403010()
                                noreturn
                            
                            if (*(eax_44 + esi_2 * 0x110 - 4) != 0)
                                o_17 = unimplemented  {imul edx, esi, 0x22}
                                break
                            
                            int32_t temp34_1 = esi_2
                            esi_2 += 1
                            
                            if (add_overflow(temp34_1, 1))
                                sub_403010()
                                noreturn
                        
                        if (o_17)
                            sub_403010()
                            noreturn
                        
                        *(eax_44 + esi_2 * 0x110 - 0x110) = 0
                        bool o_18 = unimplemented  {imul edx, esi, 0x22}
                        
                        if (o_18)
                            sub_403010()
                            noreturn
                        
                        *(eax_44 + esi_2 * 0x110 - 4) = 0
                        int32_t temp37_1 = *(eax_44 + 0x884)
                        *(eax_44 + 0x884) -= 1
                        
                        if (add_overflow(temp37_1, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        i_2 = ebp_1[-0xd]
                        ebp_1[-0xd] -= 1
                    while (i_2 != 1)
    
    int32_t eax_45 = *(ebx_1 + 0xbefc)
    
    if (eax_45 s> 0)
        ebp_1[-0xd] = eax_45
        int32_t edi_3 = 1
        int32_t i_3
        
        do
            int32_t eax_46 = edi_3 * 0x112
            bool o_20 = unimplemented  {imul eax, edi, 0x112}
            
            if (o_20)
                sub_403010()
                noreturn
            
            if (*(ebx_1 + (eax_46 << 3) + 0x13b4) != 0)
                ebp_1[-0xf] = ebx_1 + (eax_46 << 3) + 0xb2c
                
                if (*(ebp_1[-0xf] + 0x889) == 0)
                    void* eax_48
                    
                    if (*(ebp_1 - 1) == 0)
                        long double st0_1 = sub_402d38()
                        long double x87_r6_1 = data_52a7ac
                        x87_r6_1 - st0_1
                        eax_48.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
                    
                    if (*(ebp_1 - 1) != 0
                            || (not(test_bit(eax_48:1.b, 6)) && not(test_bit(eax_48:1.b, 0))))
                        *(ebp_1[-0xf] + 0x889) = 1
                        ebp_1[-7] = 0
                        ebp_1[-8] = 0
                        *(ebp_1[-0xf] + 0x888) = 1
                        int32_t eax_52 = *(ebp_1[-0xf] + 0x880)
                        
                        if (eax_52 s> 0)
                            ebp_1[-0x10] = eax_52
                            int32_t esi_3 = 1
                            int32_t j
                            
                            do
                                bool o_21 = unimplemented  {imul eax, esi, 0x22}
                                
                                if (o_21)
                                    sub_403010()
                                    noreturn
                                
                                if (*(ebp_1[-0xf] + esi_3 * 0x110 - 4) != 0)
                                    ebp_1[-6] = sub_52a998(ebx_1)
                                    bool o_22 = unimplemented  {imul eax, esi, 0x22}
                                    
                                    if (o_22)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_57 = *(ebp_1[-0xf] + esi_3 * 0x110 - 0x110)
                                    
                                    if (add_overflow(eax_57, ebp_1[-6]))
                                        sub_403010()
                                        noreturn
                                    
                                    if (eax_57 + ebp_1[-6] s< 0)
                                        bool o_24 = unimplemented  {imul eax, esi, 0x22}
                                        
                                        if (o_24)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_60 = *(ebp_1[-0xf] + esi_3 * 0x110 - 0x110)
                                        
                                        if (neg.d(eax_60) == 0x80000000)
                                            sub_403010()
                                            noreturn
                                        
                                        ebp_1[-6] = neg.d(eax_60)
                                    
                                    int32_t eax_62 = ebp_1[-6]
                                    int32_t temp28_1 = ebp_1[-7]
                                    ebp_1[-7] += eax_62
                                    
                                    if (add_overflow(temp28_1, eax_62))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_63 = esi_3 * 0x22
                                    bool o_27 = unimplemented  {imul eax, esi, 0x22}
                                    
                                    if (o_27)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t edx_29 = ebp_1[-0xf]
                                    int32_t ecx_4 = ebp_1[-6]
                                    int32_t temp33_1 = *(edx_29 + (eax_63 << 3) - 0x110)
                                    *(edx_29 + (eax_63 << 3) - 0x110) += ecx_4
                                    
                                    if (add_overflow(temp33_1, ecx_4))
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_29 = unimplemented  {imul eax, esi, 0x22}
                                    
                                    if (o_29)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(ebp_1[-0xf] + esi_3 * 0x110 - 0x110)
                                            s< *(*data_5301f4 + 0x21108))
                                        bool o_30 = unimplemented  {imul eax, esi, 0x22}
                                        
                                        if (o_30)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebp_1[-0xf] + esi_3 * 0x110 - 0x110) = 0
                                        bool o_31 = unimplemented  {imul eax, esi, 0x22}
                                        
                                        if (o_31)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebp_1[-0xf] + esi_3 * 0x110 - 4) = 0
                                        void* eax_68 = ebp_1[-0xf]
                                        int32_t temp41_1 = *(eax_68 + 0x884)
                                        *(eax_68 + 0x884) -= 1
                                        
                                        if (add_overflow(temp41_1, 0xffffffff))
                                            sub_403010()
                                            noreturn
                                    
                                    int32_t temp38_1 = ebp_1[-8]
                                    ebp_1[-8] += 1
                                    
                                    if (add_overflow(temp38_1, 1))
                                        sub_403010()
                                        noreturn
                                
                                esi_3 += 1
                                j = ebp_1[-0x10]
                                ebp_1[-0x10] -= 1
                            while (j != 1)
                        
                        if (ebp_1[-8] s<= 0)
                            ebp_1[-7] = 0
                        else
                            int32_t eax_69
                            int32_t edx_35
                            eax_69, edx_35 = sub_402b4c(float.t(ebp_1[-7]) / float.t(ebp_1[-8]))
                            
                            if (neg.d(adc.d(edx_35, 0, eax_69 != 0)) == 0x80000000)
                                sub_403010()
                                noreturn
                            
                            ebp_1[-7] = neg.d(eax_69)
                        
                        int32_t eax_72 = *(ebp_1[-0xf] + 0x880)
                        
                        if (eax_72 s> 0)
                            ebp_1[-0x10] = eax_72
                            int32_t esi_4 = 1
                            int32_t j_1
                            
                            do
                                bool o_35 = unimplemented  {imul eax, esi, 0x22}
                                
                                if (o_35)
                                    sub_403010()
                                    noreturn
                                
                                if (*(ebp_1[-0xf] + esi_4 * 0x110 - 4) != 0)
                                    int32_t eax_74 = esi_4 * 0x22
                                    bool o_36 = unimplemented  {imul eax, esi, 0x22}
                                    
                                    if (o_36)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t edx_39 = ebp_1[-0xf]
                                    int32_t ecx_5 = ebp_1[-7]
                                    int32_t temp31_1 = *(edx_39 + (eax_74 << 3) - 0x110)
                                    *(edx_39 + (eax_74 << 3) - 0x110) += ecx_5
                                    
                                    if (add_overflow(temp31_1, ecx_5))
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_38 = unimplemented  {imul eax, esi, 0x22}
                                    
                                    if (o_38)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(ebp_1[-0xf] + esi_4 * 0x110 - 0x110)
                                            s< *(*data_5301f4 + 0x21108))
                                        bool o_39 = unimplemented  {imul eax, esi, 0x22}
                                        
                                        if (o_39)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebp_1[-0xf] + esi_4 * 0x110 - 0x110) = 0
                                        bool o_40 = unimplemented  {imul eax, esi, 0x22}
                                        
                                        if (o_40)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebp_1[-0xf] + esi_4 * 0x110 - 4) = 0
                                        void* eax_79 = ebp_1[-0xf]
                                        int32_t temp40_1 = *(eax_79 + 0x884)
                                        *(eax_79 + 0x884) -= 1
                                        
                                        if (add_overflow(temp40_1, 0xffffffff))
                                            sub_403010()
                                            noreturn
                                
                                esi_4 += 1
                                j_1 = ebp_1[-0x10]
                                ebp_1[-0x10] -= 1
                            while (j_1 != 1)
                
                if (*(ebp_1 - 1) != 0)
                    *(ebp_1[-0xf] + 0x889) = 0
            
            edi_3 += 1
            i_3 = ebp_1[-0xd]
            ebp_1[-0xd] -= 1
        while (i_3 != 1)
    
    if (*(ebp_1 - 1) != 0)
        int32_t edi_4 = 0
        sub_403df8(&ebp_1[-0xc])
        void* eax_81
        
        if (*(ebx_1 + 0xc38) != 0)
            int32_t esi_5 = 1
            
            if (add_overflow(0, 1))
                sub_403010()
                noreturn
            
            int32_t eax_82 = *(ebx_1 + 0xbefc)
            
            if (eax_82 s>= 1)
                ebp_1[-0xd] = eax_82
                int32_t i_4
                
                do
                    bool o_43 = unimplemented  {imul eax, edi, 0x112}
                    
                    if (o_43)
                        sub_403010()
                        noreturn
                    
                    if (*(ebx_1 + edi_4 * 0x890 + 0x13b4) != 0)
                        bool o_44 = unimplemented  {imul eax, esi, 0x112}
                        
                        if (o_44)
                            sub_403010()
                            noreturn
                        
                        if (*(ebx_1 + esi_5 * 0x890 + 0x13b4) != 0)
                            bool o_45 = unimplemented  {imul eax, edi, 0x112}
                            
                            if (o_45)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_85 = *(ebx_1 + edi_4 * 0x890 + 0x13b0)
                            int32_t edx_45 = esi_5 * 0x112
                            bool o_46 = unimplemented  {imul edx, esi, 0x112}
                            
                            if (o_46)
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_85, *(ebx_1 + (edx_45 << 3) + 0x13b0)))
                                sub_403010()
                                noreturn
                            
                            if (eax_85 + *(ebx_1 + (edx_45 << 3) + 0x13b0) s<= *(ebx_1 + 0xbf00))
                                bool o_48 = unimplemented  {imul eax, esi, 0x112}
                                
                                if (o_48)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_87 = *(ebx_1 + esi_5 * 0x890 + 0x13b8)
                                int32_t edx_46 = edi_4 * 0x112
                                bool o_49 = unimplemented  {imul edx, edi, 0x112}
                                
                                if (o_49)
                                    sub_403010()
                                    noreturn
                                
                                int32_t temp35_1 = *(ebx_1 + (edx_46 << 3) + 0x13b8)
                                *(ebx_1 + (edx_46 << 3) + 0x13b8) += eax_87
                                
                                if (add_overflow(temp35_1, eax_87))
                                    sub_403010()
                                    noreturn
                                
                                bool o_51 = unimplemented  {imul eax, esi, 0x112}
                                
                                if (o_51)
                                    sub_403010()
                                    noreturn
                                
                                ebp_1[-0xa] = *(ebx_1 + esi_5 * 0x890 + 0x13b8)
                                bool o_52 = unimplemented  {imul eax, esi, 0x112}
                                
                                if (o_52)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_91 = *(ebx_1 + esi_5 * 0x890 + 0x13ac)
                                
                                if (eax_91 s> 0)
                                    ebp_1[-0x10] = eax_91
                                    ebp_1[-3] = 1
                                    int32_t j_2
                                    
                                    do
                                        ebp_1[-3]
                                        bool o_53 = unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                        
                                        if (o_53)
                                            sub_403010()
                                            noreturn
                                        
                                        bool o_54 = unimplemented  {imul edx, esi, 0x112}
                                        
                                        if (o_54)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(ebx_1 + esi_5 * 0x890 + ebp_1[-3] * 0x110 + 0xb28) != 0)
                                            ebp_1[-3]
                                            bool o_55 = unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                            
                                            if (o_55)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_56 = unimplemented  {imul edx, esi, 0x112}
                                            
                                            if (o_56)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t eax_94 =
                                                *(ebx_1 + esi_5 * 0x890 + ebp_1[-3] * 0x110 + 0xa1c)
                                            int32_t temp53_1 = ebp_1[-0xa]
                                            ebp_1[-0xa] -= eax_94
                                            
                                            if (add_overflow(temp53_1, neg.d(eax_94)))
                                                sub_403010()
                                                noreturn
                                        
                                        ebp_1[-3] += 1
                                        j_2 = ebp_1[-0x10]
                                        ebp_1[-0x10] -= 1
                                    while (j_2 != 1)
                                
                                if (ebp_1[-0xa] s<= 0)
                                    bool o_64 = unimplemented  {imul eax, esi, 0x112}
                                    
                                    if (o_64)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_100 = *(ebx_1 + esi_5 * 0x890 + 0x13ac)
                                    
                                    if (eax_100 s> 0)
                                        ebp_1[-0x10] = eax_100
                                        ebp_1[-3] = 1
                                        int32_t j_3
                                        
                                        do
                                            ebp_1[-3]
                                            bool o_65 = unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                            
                                            if (o_65)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_66 = unimplemented  {imul edx, esi, 0x112}
                                            
                                            if (o_66)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(ebx_1 + esi_5 * 0x890 + ebp_1[-3] * 0x110 + 0xb28)
                                                    != 0)
                                                ebp_1[-3]
                                                bool o_67 =
                                                    unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                                
                                                if (o_67)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_68 = unimplemented  {imul edx, esi, 0x112}
                                                
                                                if (o_68)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t edx_59 = ebp_1[-0xa]
                                                int32_t edx_60 = neg.d(edx_59)
                                                
                                                if (neg.d(edx_59) == 0x80000000)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* ecx_8 = *data_5301f4
                                                *(ecx_8 + 0x21108)
                                                int32_t ecx_9 = *(ecx_8 + 0x21108) * 4
                                                bool o_70 =
                                                    unimplemented  {imul ecx, dword [ecx+0x21108], 0x4}
                                                
                                                if (o_70)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (add_overflow(edx_60, ecx_9))
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(ebx_1 + esi_5 * 0x890 + ebp_1[-3] * 0x110 + 0xa1c)
                                                        s> edx_60 + ecx_9)
                                                    ebp_1[-3]
                                                    int32_t eax_104 = ebp_1[-3] * 0x22
                                                    bool o_72 =
                                                        unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                                    
                                                    if (o_72)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_73 = unimplemented  {imul edx, esi, 0x112}
                                                    
                                                    if (o_73)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* edx_63 = ebx_1 + esi_5 * 0x890
                                                    int32_t ecx_10 = ebp_1[-0xa]
                                                    int32_t temp84_1 =
                                                        *(edx_63 + (eax_104 << 3) + 0xa1c)
                                                    *(edx_63 + (eax_104 << 3) + 0xa1c) += ecx_10
                                                    
                                                    if (not(add_overflow(temp84_1, ecx_10)))
                                                        break
                                                    
                                                    sub_403010()
                                                    noreturn
                                            
                                            ebp_1[-3] += 1
                                            j_3 = ebp_1[-0x10]
                                            ebp_1[-0x10] -= 1
                                        while (j_3 != 1)
                                else
                                    bool o_58 = unimplemented  {imul eax, esi, 0x112}
                                    
                                    if (o_58)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_96 = *(ebx_1 + esi_5 * 0x890 + 0x13ac)
                                    
                                    if (eax_96 s> 0)
                                        ebp_1[-0x10] = eax_96
                                        ebp_1[-3] = 1
                                        int32_t j_4
                                        
                                        do
                                            ebp_1[-3]
                                            bool o_59 = unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                            
                                            if (o_59)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_60 = unimplemented  {imul edx, esi, 0x112}
                                            
                                            if (o_60)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(ebx_1 + esi_5 * 0x890 + ebp_1[-3] * 0x110 + 0xb28)
                                                    != 0)
                                                ebp_1[-3]
                                                int32_t eax_98 = ebp_1[-3] * 0x22
                                                bool o_61 =
                                                    unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                                
                                                if (o_61)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_62 = unimplemented  {imul edx, esi, 0x112}
                                                
                                                if (o_62)
                                                    sub_403010()
                                                    noreturn
                                                
                                                void* edx_54 = ebx_1 + esi_5 * 0x890
                                                int32_t ecx_6 = ebp_1[-0xa]
                                                int32_t temp67_1 = *(edx_54 + (eax_98 << 3) + 0xa1c)
                                                *(edx_54 + (eax_98 << 3) + 0xa1c) += ecx_6
                                                
                                                if (not(add_overflow(temp67_1, ecx_6)))
                                                    break
                                                
                                                sub_403010()
                                                noreturn
                                            
                                            ebp_1[-3] += 1
                                            j_4 = ebp_1[-0x10]
                                            ebp_1[-0x10] -= 1
                                        while (j_4 != 1)
                                
                                ebp_1[-5] = 1
                                bool o_75 = unimplemented  {imul eax, esi, 0x112}
                                
                                if (o_75)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_106 = *(ebx_1 + esi_5 * 0x890 + 0x13ac)
                                
                                if (eax_106 s> 0)
                                    ebp_1[-0x10] = eax_106
                                    ebp_1[-4] = 1
                                    int32_t j_5
                                    
                                    do
                                        ebp_1[-4]
                                        bool o_76 = unimplemented  {imul eax, dword [ebp-0x10], 0x22}
                                        
                                        if (o_76)
                                            sub_403010()
                                            noreturn
                                        
                                        bool o_77 = unimplemented  {imul edx, esi, 0x112}
                                        
                                        if (o_77)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(ebx_1 + esi_5 * 0x890 + ebp_1[-4] * 0x110 + 0xb28) != 0)
                                            while (true)
                                                ebp_1[-5]
                                                bool o_79 =
                                                    unimplemented  {imul eax, dword [ebp-0x14], 0x22}
                                                
                                                if (o_79)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_80 = unimplemented  {imul edx, edi, 0x112}
                                                
                                                if (o_80)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(ebx_1 + edi_4 * 0x890 + ebp_1[-5] * 0x110 + 0xb28)
                                                        == 0)
                                                    break
                                                
                                                int32_t temp77_1 = ebp_1[-5]
                                                ebp_1[-5] += 1
                                                
                                                if (add_overflow(temp77_1, 1))
                                                    sub_403010()
                                                    noreturn
                                            
                                            ebp_1[-4]
                                            bool o_81 =
                                                unimplemented  {imul eax, dword [ebp-0x10], 0x22}
                                            
                                            if (o_81)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_82 = unimplemented  {imul edx, esi, 0x112}
                                            
                                            if (o_82)
                                                sub_403010()
                                                noreturn
                                            
                                            *(esp_1 - 4) =
                                                ebx_1 + esi_5 * 0x890 + ebp_1[-4] * 0x110 + 0xa1c
                                            ebp_1[-5]
                                            int32_t eax_111 = ebp_1[-5] * 0x22
                                            bool o_83 =
                                                unimplemented  {imul eax, dword [ebp-0x14], 0x22}
                                            
                                            if (o_83)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_84 = unimplemented  {imul edx, edi, 0x112}
                                            
                                            if (o_84)
                                                sub_403010()
                                                noreturn
                                            
                                            int32_t ecx_11 = *(esp_1 - 4)
                                            *(esp_1 - 4) = esi_5
                                            *(esp_1 - 8) = edi_4
                                            __builtin_memcpy(
                                                ebx_1 + edi_4 * 0x890 + (eax_111 << 3) + 0xa1c, ecx_11, 
                                                0x110)
                                            *(esp_1 - 8)
                                            esi_5 = *(esp_1 - 4)
                                            *(esp_1 - 4) = ebp_1[-0xc]
                                            ebp_1[-4]
                                            bool o_85 =
                                                unimplemented  {imul edx, dword [ebp-0x10], 0x22}
                                            
                                            if (o_85)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_86 = unimplemented  {imul ecx, esi, 0x112}
                                            
                                            if (o_86)
                                                sub_403010()
                                                noreturn
                                            
                                            void* ecx_13 = ebx_1 + esi_5 * 0x890
                                            sub_40401c(ecx_13, ecx_13 + ebp_1[-4] * 0x110 + 0xa20)
                                            *(esp_1 - 8) = ebp_1[-0x13]
                                            *(esp_1 - 0xc) = &data_52a7c0
                                            ebp_1[-4]
                                            bool o_87 =
                                                unimplemented  {imul eax, dword [ebp-0x10], 0x22}
                                            
                                            if (o_87)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_88 = unimplemented  {imul edx, esi, 0x112}
                                            
                                            if (o_88)
                                                sub_403010()
                                                noreturn
                                            
                                            void* ebp_2
                                            ebp_2, edi_4 = sub_4cda5c(
                                                *(ebx_1 + esi_5 * 0x890 + ebp_1[-4] * 0x110 + 0xa1c), 
                                                0, &ebp_1[-0x14])
                                            *(esp_1 - 0x10) = *(ebp_2 - 0x50)
                                            *(esp_1 - 0x14) = &data_52a7cc
                                            sub_404138(ebp_2 - 0x30, 5)
                                            sub_404080(ebp_2 - 0x30, "\n\r")
                                            *(esp_1 - 4) = *(ebp_2 - 0x10)
                                            esp_1 -= 4
                                            ebp_1 = sub_5295d8(ebx_1, *(ebp_2 - 0x14), esi_5)
                                        
                                        ebp_1[-4] += 1
                                        j_5 = ebp_1[-0x10]
                                        ebp_1[-0x10] -= 1
                                    while (j_5 != 1)
                                
                                bool o_89 = unimplemented  {imul eax, esi, 0x112}
                                
                                if (o_89)
                                    sub_403010()
                                    noreturn
                                
                                *(ebx_1 + esi_5 * 0x890 + 0x13b4) = 0
                                bool o_90 = unimplemented  {imul eax, esi, 0x112}
                                
                                if (o_90)
                                    sub_403010()
                                    noreturn
                                
                                eax_81 = *(ebx_1 + esi_5 * 0x890 + 0x13b0)
                                int32_t edx_77 = edi_4 * 0x112
                                bool o_91 = unimplemented  {imul edx, edi, 0x112}
                                
                                if (o_91)
                                    sub_403010()
                                    noreturn
                                
                                int32_t temp64_1 = *(ebx_1 + (edx_77 << 3) + 0x13b0)
                                *(ebx_1 + (edx_77 << 3) + 0x13b0) += eax_81
                                
                                if (add_overflow(temp64_1, eax_81))
                                    sub_403010()
                                    noreturn
                    
                    esi_5 += 1
                    i_4 = ebp_1[-0xd]
                    ebp_1[-0xd] -= 1
                while (i_4 != 1)
        
        if (ebp_1[-0xc] != 0)
            eax_81.b = 5
            void* esi_8 = data_5304fc + 0xbdbd0
            char i_5
            
            do
                if (*esi_8 s> 0x42)
                    *esi_8 = 0x38
                
                esi_8 += 0x353c
                i_5 = eax_81.b
                eax_81.b -= 1
            while (i_5 != 1)
            int32_t eax_122 = *data_5300d0
            
            if (eax_122 s> 0)
                ebp_1[-0xd] = eax_122
                int32_t edi_7 = 1
                void* esi_10 = data_52fed4 + 4
                int32_t i_6
                
                do
                    if (sub_4c2d7c(edi_7) != 0)
                        bool o_93 = unimplemented  {imul eax, edi, 0x41}
                        
                        if (o_93)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + edi_7 * 0x208 + 0x1fea0) != 2)
                            *(esp_1 - 4) = 0
                            int80_t x87_r0
                            ebx_1 = sub_47ab08(*data_530304, *data_530a74, *esi_10, x87_r0)
                    
                    edi_7 += 1
                    esi_10 += 4
                    i_6 = ebp_1[-0xd]
                    ebp_1[-0xd] -= 1
                while (i_6 != 1)
            
            ebp_1 = sub_46910c(*data_530304, "f_neueamtisch", &ebp_1[-0x15])
            *(esp_1 - 4) = ebp_1[-0x15]
            *(esp_1 - 8) = &data_52a7d8
            *(esp_1 - 0xc) = &data_52a7d8
            *(esp_1 - 0x10) = ebp_1[-0xc]
            sub_404138(&ebp_1[-0xc], 4)
            esp_1 = &esp_1[1]
            *data_52ffb8 = 1
            
            if (*(*data_530304 + 0xcf8) == 0 && *(*data_530304 + 0xcf9) == 0)
                *(esp_1 - 4) = 0
                *(esp_1 - 8) = 0
                *(esp_1 - 0xc) = 0
                *(esp_1 - 0x10) = 0
                esp_1 -= 0x10
                ebp_1 = sub_46910c(*data_530304, "f_turnier", &ebp_1[-0x16])
                sub_4748fc(*data_530304, ebp_1[-0xc], ebp_1[-0x16])
            
            *data_52ffb8 = 0
        
        int32_t eax_141 = *(ebx_1 + 0xbefc)
        
        if (eax_141 s> 0)
            ebp_1[-0xd] = eax_141
            int32_t edi_8 = 1
            int32_t i_7
            
            do
                int32_t esi_12 = edi_8 + 1
                
                if (add_overflow(edi_8, 1))
                    sub_403010()
                    noreturn
                
                int32_t eax_142 = *(ebx_1 + 0xbefc)
                
                if (eax_142 s>= esi_12)
                    ebp_1[-0x10] = eax_142 - esi_12 + 1
                    int32_t j_6
                    
                    do
                        int32_t eax_145 = edi_8 * 0x112
                        bool o_95 = unimplemented  {imul eax, edi, 0x112}
                        
                        if (o_95)
                            sub_403010()
                            noreturn
                        
                        if (*(ebx_1 + (eax_145 << 3) + 0x13b4) != 0)
                            bool o_96 = unimplemented  {imul edx, esi, 0x112}
                            
                            if (o_96)
                                sub_403010()
                                noreturn
                            
                            if (*(ebx_1 + esi_12 * 0x890 + 0x13b4) != 0)
                                int32_t edx_84 = *(ebx_1 + (eax_145 << 3) + 0x13b0)
                                int32_t ecx_20 = esi_12 * 0x112
                                bool o_97 = unimplemented  {imul ecx, esi, 0x112}
                                
                                if (o_97)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(edx_84, *(ebx_1 + (ecx_20 << 3) + 0x13b0)))
                                    sub_403010()
                                    noreturn
                                
                                if (edx_84 + *(ebx_1 + (ecx_20 << 3) + 0x13b0) s<= *(ebx_1 + 0xbf00))
                                    bool o_99 = unimplemented  {imul edx, esi, 0x112}
                                    
                                    if (o_99)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t edx_87 = *(ebx_1 + esi_12 * 0x890 + 0x13b8)
                                    int32_t temp36_1 = *(ebx_1 + (eax_145 << 3) + 0x13b8)
                                    *(ebx_1 + (eax_145 << 3) + 0x13b8) += edx_87
                                    
                                    if (add_overflow(temp36_1, edx_87))
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_101 = unimplemented  {imul eax, esi, 0x112}
                                    
                                    if (o_101)
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1[-0xa] = *(ebx_1 + esi_12 * 0x890 + 0x13b8)
                                    bool o_102 = unimplemented  {imul eax, esi, 0x112}
                                    
                                    if (o_102)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_149 = *(ebx_1 + esi_12 * 0x890 + 0x13ac)
                                    
                                    if (eax_149 s> 0)
                                        ebp_1[-0x11] = eax_149
                                        ebp_1[-3] = 1
                                        int32_t k
                                        
                                        do
                                            ebp_1[-3]
                                            int32_t eax_150 = ebp_1[-3] * 0x22
                                            bool o_103 =
                                                unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                            
                                            if (o_103)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_104 = unimplemented  {imul edx, esi, 0x112}
                                            
                                            if (o_104)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(ebx_1 + esi_12 * 0x890 + (eax_150 << 3) + 0xb28) != 0)
                                                bool o_105 = unimplemented  {imul edx, esi, 0x112}
                                                
                                                if (o_105)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t eax_151 =
                                                    *(ebx_1 + esi_12 * 0x890 + (eax_150 << 3) + 0xa1c)
                                                int32_t temp51_1 = ebp_1[-0xa]
                                                ebp_1[-0xa] -= eax_151
                                                
                                                if (add_overflow(temp51_1, neg.d(eax_151)))
                                                    sub_403010()
                                                    noreturn
                                            
                                            ebp_1[-3] += 1
                                            k = ebp_1[-0x11]
                                            ebp_1[-0x11] -= 1
                                        while (k != 1)
                                    
                                    if (ebp_1[-0xa] s<= 0)
                                        bool o_113 = unimplemented  {imul eax, esi, 0x112}
                                        
                                        if (o_113)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_157 = *(ebx_1 + esi_12 * 0x890 + 0x13ac)
                                        
                                        if (eax_157 s> 0)
                                            ebp_1[-0x11] = eax_157
                                            ebp_1[-3] = 1
                                            int32_t k_1
                                            
                                            do
                                                ebp_1[-3]
                                                bool o_114 =
                                                    unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                                
                                                if (o_114)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_115 = unimplemented  {imul edx, esi, 0x112}
                                                
                                                if (o_115)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(ebx_1 + esi_12 * 0x890 + ebp_1[-3] * 0x110
                                                        + 0xb28) != 0)
                                                    ebp_1[-3]
                                                    bool o_116 =
                                                        unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                                    
                                                    if (o_116)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_117 = unimplemented  {imul edx, esi, 0x112}
                                                    
                                                    if (o_117)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    int32_t edx_100 = ebp_1[-0xa]
                                                    int32_t edx_101 = neg.d(edx_100)
                                                    
                                                    if (neg.d(edx_100) == 0x80000000)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* ecx_23 = *data_5301f4
                                                    *(ecx_23 + 0x21108)
                                                    int32_t ecx_24 = *(ecx_23 + 0x21108) * 4
                                                    bool o_119 = unimplemented  {imul ecx, dword [ecx
                                                        +0x21108], 0x4}
                                                    
                                                    if (o_119)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (add_overflow(edx_101, ecx_24))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (*(ebx_1 + esi_12 * 0x890 + ebp_1[-3] * 0x110
                                                            + 0xa1c) s> edx_101 + ecx_24)
                                                        ebp_1[-3]
                                                        int32_t eax_161 = ebp_1[-3] * 0x22
                                                        bool o_121 = unimplemented  {imul eax, dword [
                                                            ebp-0xc], 0x22}
                                                        
                                                        if (o_121)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        bool o_122 =
                                                            unimplemented  {imul edx, esi, 0x112}
                                                        
                                                        if (o_122)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        void* edx_104 = ebx_1 + esi_12 * 0x890
                                                        int32_t ecx_25 = ebp_1[-0xa]
                                                        int32_t temp86_1 =
                                                            *(edx_104 + (eax_161 << 3) + 0xa1c)
                                                        *(edx_104 + (eax_161 << 3) + 0xa1c) += ecx_25
                                                        
                                                        if (not(add_overflow(temp86_1, ecx_25)))
                                                            break
                                                        
                                                        sub_403010()
                                                        noreturn
                                                
                                                ebp_1[-3] += 1
                                                k_1 = ebp_1[-0x11]
                                                ebp_1[-0x11] -= 1
                                            while (k_1 != 1)
                                    else
                                        bool o_107 = unimplemented  {imul eax, esi, 0x112}
                                        
                                        if (o_107)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_153 = *(ebx_1 + esi_12 * 0x890 + 0x13ac)
                                        
                                        if (eax_153 s> 0)
                                            ebp_1[-0x11] = eax_153
                                            ebp_1[-3] = 1
                                            int32_t k_2
                                            
                                            do
                                                ebp_1[-3]
                                                bool o_108 =
                                                    unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                                
                                                if (o_108)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_109 = unimplemented  {imul edx, esi, 0x112}
                                                
                                                if (o_109)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(ebx_1 + esi_12 * 0x890 + ebp_1[-3] * 0x110
                                                        + 0xb28) != 0)
                                                    ebp_1[-3]
                                                    int32_t eax_155 = ebp_1[-3] * 0x22
                                                    bool o_110 =
                                                        unimplemented  {imul eax, dword [ebp-0xc], 0x22}
                                                    
                                                    if (o_110)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_111 = unimplemented  {imul edx, esi, 0x112}
                                                    
                                                    if (o_111)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    void* edx_95 = ebx_1 + esi_12 * 0x890
                                                    int32_t ecx_21 = ebp_1[-0xa]
                                                    int32_t temp70_1 =
                                                        *(edx_95 + (eax_155 << 3) + 0xa1c)
                                                    *(edx_95 + (eax_155 << 3) + 0xa1c) += ecx_21
                                                    
                                                    if (not(add_overflow(temp70_1, ecx_21)))
                                                        break
                                                    
                                                    sub_403010()
                                                    noreturn
                                                
                                                ebp_1[-3] += 1
                                                k_2 = ebp_1[-0x11]
                                                ebp_1[-0x11] -= 1
                                            while (k_2 != 1)
                                    
                                    ebp_1[-5] = 1
                                    bool o_124 = unimplemented  {imul eax, esi, 0x112}
                                    
                                    if (o_124)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_163 = *(ebx_1 + esi_12 * 0x890 + 0x13ac)
                                    
                                    if (eax_163 s> 0)
                                        ebp_1[-0x11] = eax_163
                                        ebp_1[-4] = 1
                                        int32_t k_3
                                        
                                        do
                                            ebp_1[-4]
                                            bool o_125 =
                                                unimplemented  {imul eax, dword [ebp-0x10], 0x22}
                                            
                                            if (o_125)
                                                sub_403010()
                                                noreturn
                                            
                                            bool o_126 = unimplemented  {imul edx, esi, 0x112}
                                            
                                            if (o_126)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(ebx_1 + esi_12 * 0x890 + ebp_1[-4] * 0x110 + 0xb28)
                                                    != 0)
                                                while (true)
                                                    ebp_1[-5]
                                                    bool o_128 = unimplemented  {imul eax, dword [ebp
                                                        -0x14], 0x22}
                                                    
                                                    if (o_128)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    bool o_129 = unimplemented  {imul edx, edi, 0x112}
                                                    
                                                    if (o_129)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (*(ebx_1 + edi_8 * 0x890 + ebp_1[-5] * 0x110
                                                            + 0xb28) == 0)
                                                        break
                                                    
                                                    int32_t temp80_1 = ebp_1[-5]
                                                    ebp_1[-5] += 1
                                                    
                                                    if (add_overflow(temp80_1, 1))
                                                        sub_403010()
                                                        noreturn
                                                
                                                ebp_1[-4]
                                                bool o_130 =
                                                    unimplemented  {imul eax, dword [ebp-0x10], 0x22}
                                                
                                                if (o_130)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_131 = unimplemented  {imul edx, esi, 0x112}
                                                
                                                if (o_131)
                                                    sub_403010()
                                                    noreturn
                                                
                                                *(esp_1 - 4) =
                                                    ebx_1 + esi_12 * 0x890 + ebp_1[-4] * 0x110 + 0xa1c
                                                ebp_1[-5]
                                                int32_t eax_168 = ebp_1[-5] * 0x22
                                                bool o_132 =
                                                    unimplemented  {imul eax, dword [ebp-0x14], 0x22}
                                                
                                                if (o_132)
                                                    sub_403010()
                                                    noreturn
                                                
                                                bool o_133 = unimplemented  {imul edx, edi, 0x112}
                                                
                                                if (o_133)
                                                    sub_403010()
                                                    noreturn
                                                
                                                int32_t ecx_26 = *(esp_1 - 4)
                                                *(esp_1 - 4) = esi_12
                                                *(esp_1 - 8) = edi_8
                                                __builtin_memcpy(
                                                    ebx_1 + edi_8 * 0x890 + (eax_168 << 3) + 0xa1c, 
                                                    ecx_26, 0x110)
                                                edi_8 = *(esp_1 - 8)
                                                esi_12 = *(esp_1 - 4)
                                            
                                            ebp_1[-4] += 1
                                            k_3 = ebp_1[-0x11]
                                            ebp_1[-0x11] -= 1
                                        while (k_3 != 1)
                                    
                                    int32_t eax_169 = esi_12 * 0x112
                                    bool o_134 = unimplemented  {imul eax, esi, 0x112}
                                    
                                    if (o_134)
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + (eax_169 << 3) + 0x13b4) = 0
                                    int32_t eax_170 = *(ebx_1 + (eax_169 << 3) + 0x13b0)
                                    int32_t edx_113 = edi_8 * 0x112
                                    bool o_135 = unimplemented  {imul edx, edi, 0x112}
                                    
                                    if (o_135)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t temp59_1 = *(ebx_1 + (edx_113 << 3) + 0x13b0)
                                    *(ebx_1 + (edx_113 << 3) + 0x13b0) += eax_170
                                    
                                    if (add_overflow(temp59_1, eax_170))
                                        sub_403010()
                                        noreturn
                        
                        esi_12 += 1
                        j_6 = ebp_1[-0x10]
                        ebp_1[-0x10] -= 1
                    while (j_6 != 1)
                
                edi_8 += 1
                i_7 = ebp_1[-0xd]
                ebp_1[-0xd] -= 1
            while (i_7 != 1)
    
    void* ebp_3 = sub_4c9168()
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_52a7a1
    sub_403e1c(ebp_3 - 0x58, 4)
    sub_403df8(ebp_3 - 0x30)
    return ebp_3 - 0x30
}
