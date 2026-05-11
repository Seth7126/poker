// ============================================================
// 函数名称: sub_4bdf6c
// 虚拟地址: 0x4bdf6c
// WARP GUID: bc443414-14f2-53c0-981b-2a9f24c57adf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4bdf18, sub_402d38, sub_4c2ca0, sub_527230, sub_4b8c38, sub_403010
// [被调用的父级函数]: sub_527454
// ============================================================

void*sub_4bdf6c()
{
    // 第一条实际指令: void* esi = data_5301f4
    void* esi = data_5301f4
    char var_10
    void* ecx = sub_4b8c38(*(*esi + 0x10020), &var_10)
    char ebx = 0
    char var_12 = 0
    char var_11 = 0
    char var_14 = 0
    char var_13 = 0
    int32_t var_18 = 0
    char var_f
    int32_t var_c
    int32_t eax_2
    
    if (var_10 != 0 || var_c s<= 0 || var_f == 0)
        eax_2.b = var_10
        
        if (eax_2.b == 1 || eax_2.b == 0)
            var_14 = 1
        else if (eax_2.b == 2)
            var_12 = 1
        else if (eax_2.b == 3)
            ebx = 1
        else if (eax_2.b == 4)
            var_11 = 1
    else
        var_13 = 1
        eax_2.b = var_f
        
        if (eax_2.b == 3)
            var_18 = var_c
        else if (eax_2.b == 1)
            bool o_1 = unimplemented  {imul dword [ebp-0x8]}
            
            if (o_1)
                sub_403010()
                noreturn
            
            var_18 = *(*esi + 0x21108) * var_c
    
    long double st0 = sub_402d38()
    long double x87_r6 = data_4be3c4
    x87_r6 - st0
    eax_2.w = (x87_r6 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, st0) ? 1 : 0) << 0xa
        | (x87_r6 == st0 ? 1 : 0) << 0xe
    int32_t __saved_ebp
    
    if (not(test_bit(eax_2:1.b, 6)) && not(test_bit(eax_2:1.b, 0)) && sub_4c2ca0() s>= 2)
        int32_t eax_5
        eax_5.b = var_11
        eax_5.b |= var_13
        
        if (eax_5.b != 0)
        label_4be05d:
            void* eax_6 = *esi
            *(eax_6 + 0x21108)
            bool o_2 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(eax_6 + 0x21108) * 2 s<= var_18)
                int32_t var_8_1 = 0
                int32_t eax_9 = *(*esi + 0x21108)
                bool o_3 = unimplemented  {imul edx, eax, 0x1e}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                if (eax_9 * 0x1e s> var_18)
                    bool o_4 = unimplemented  {imul edx, eax, 0x19}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    if (eax_9 * 0x19 s> var_18)
                        bool o_5 = unimplemented  {imul edx, eax, 0x14}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        if (eax_9 * 0x14 s> var_18)
                            bool o_6 = unimplemented  {imul edx, eax, 0xa}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            if (eax_9 * 0xa s> var_18)
                                bool o_7 = unimplemented  {imul edx, eax, 0x8}
                                
                                if (o_7)
                                    sub_403010()
                                    noreturn
                                
                                if (eax_9 * 8 s> var_18)
                                    bool o_8 = unimplemented  {imul edx, eax, 0x6}
                                    
                                    if (o_8)
                                        sub_403010()
                                        noreturn
                                    
                                    if (eax_9 * 6 s> var_18)
                                        bool o_9 = unimplemented  {imul eax, eax, 0x4}
                                        
                                        if (o_9)
                                            sub_403010()
                                            noreturn
                                        
                                        if (eax_9 * 4 s<= var_18)
                                            int32_t var_8_8 = 0xfffffff6
                                    else
                                        int32_t var_8_7 = 0xfffffffb
                                else
                                    int32_t var_8_6 = 0
                            else
                                int32_t var_8_5 = 2
                        else
                            int32_t var_8_4 = 5
                    else
                        int32_t var_8_3 = 8
                else
                    int32_t var_8_2 = 0xa
                
                if (sub_4c2ca0() s<= 2)
                    int32_t* var_28_2 = &__saved_ebp
                    sub_4bdf18(0x25, 0x64, ecx)
                else
                    int32_t* var_28_1 = &__saved_ebp
                    sub_4bdf18(0x26, 0x64, ecx)
        else if (var_14 != 0)
            long double st0_1 = sub_402d38()
            long double x87_r6_1 = data_4be3d0
            x87_r6_1 - st0_1
            eax_5.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_5:1.b, 6)) && not(test_bit(eax_5:1.b, 0)))
                goto label_4be05d
    
    void* eax_12 = *esi
    *(eax_12 + 0x10020)
    int32_t eax_13 = *(eax_12 + 0x10020) * 0x41
    bool o_10 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
    
    if (o_10)
        sub_403010()
        noreturn
    
    int32_t edx_7 = *esi
    void* ecx_3 = *esi
    int32_t edi = *(ecx_3 + 0x21104)
    int32_t edi_1 = edi - *(edx_7 + (eax_13 << 3) + 0x1fea4)
    
    if (add_overflow(edi, neg.d(*(edx_7 + (eax_13 << 3) + 0x1fea4))))
        sub_403010()
        noreturn
    
    int32_t var_8_9 = 0
    void* eax_14 = *esi
    *(eax_14 + 0x21108)
    bool o_12 = unimplemented  {imul eax, dword [eax+0x21108], 0x8}
    
    if (o_12)
        sub_403010()
        noreturn
    
    int32_t eax_18
    
    if (edi_1 s>= *(eax_14 + 0x21108) * 8)
        int32_t eax_17 = *(*esi + 0x20070)
        eax_18 = eax_17 s>> 1
        bool c_2 = unimplemented  {sar eax, 0x1}
        
        if (eax_17 s>> 1 s< 0)
            eax_18 = adc.d(eax_18, 0, c_2)
    
    if (edi_1 s< *(eax_14 + 0x21108) * 8 || edi_1 s< eax_18)
        void* eax_19 = *esi
        *(eax_19 + 0x21108)
        bool o_13 = unimplemented  {imul eax, dword [eax+0x21108], 0x6}
        
        if (o_13)
            sub_403010()
            noreturn
        
        int32_t eax_22
        
        if (edi_1 s>= *(eax_19 + 0x21108) * 6)
            eax_22 = *(*esi + 0x20070)
            
            if (eax_22 s< 0)
                eax_22 += 3
        
        if (edi_1 s< *(eax_19 + 0x21108) * 6 || edi_1 s< eax_22 s>> 2)
            void* eax_23 = *esi
            *(eax_23 + 0x21108)
            bool o_14 = unimplemented  {imul eax, dword [eax+0x21108], 0x4}
            
            if (o_14)
                sub_403010()
                noreturn
            
            int32_t eax_27
            int32_t edx_8
            
            if (edi_1 s>= *(eax_23 + 0x21108) * 4)
                edx_8:eax_27 = sx.q(*(*esi + 0x20070))
            
            if (edi_1 s< *(eax_23 + 0x21108) * 4 || edi_1 s< divs.dp.d(edx_8:eax_27, 6))
                void* eax_28 = *esi
                *(eax_28 + 0x21108)
                bool o_15 = unimplemented  {imul eax, dword [eax+0x21108], 0x3}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                if (edi_1 s>= *(eax_28 + 0x21108) * 3)
                    int32_t eax_30 = *(*esi + 0x20070)
                    
                    if (eax_30 s< 0)
                        eax_30 += 7
                    
                    if (edi_1 s>= eax_30 s>> 3)
                        var_8_9 = 2
            else
                var_8_9 = 5
        else
            var_8_9 = 8
    else
        var_8_9 = 0xa
    
    if (ebx != 0)
        eax_18 = sub_4c2ca0()
    
    void* result
    
    if (ebx == 0 || eax_18 != 2 || var_8_9 s<= 0)
        if (ebx != 0)
            eax_18 = sub_4c2ca0()
        
        if (ebx == 0 || eax_18 s<= 2 || var_8_9 s<= 0)
            eax_18.b = var_13
            eax_18.b |= var_14
            
            if (eax_18.b == 0)
            label_4be2f5:
                result = sub_4c2ca0()
                
                if (result s>= 2 && var_8_9 s> 0)
                    int32_t* var_28_6 = &__saved_ebp
                    result = sub_4bdf18(0x19, 0x64, ecx_3)
            else
                if (sub_4c2ca0() s<= 2 || edi_1 s<= *(*esi + 0x21108) || var_8_9 s>= 0xa)
                    goto label_4be2f5
                
                long double st0_2 = sub_402d38()
                long double temp13_1 = fconvert.t(0.5f)
                st0_2 - temp13_1
                void* eax_32
                eax_32.w = (st0_2 < temp13_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_2, temp13_1) ? 1 : 0) << 0xa
                    | (st0_2 == temp13_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_32:1.b, 0)))
                    goto label_4be2f5
                
                if (add_overflow(8, neg.d(var_8_9)))
                    sub_403010()
                    noreturn
                
                int32_t var_8_10 = 8 - var_8_9
                int32_t* var_28_5 = &__saved_ebp
                result = sub_4bdf18(0x18, 0x64, ecx_3)
        else
            int32_t* var_28_4 = &__saved_ebp
            result = sub_4bdf18(0x17, 0x64, ecx_3)
    else
        int32_t* var_28_3 = &__saved_ebp
        result = sub_4bdf18(0x16, 0x64, ecx_3)
    
    if (var_13 != 0)
        int32_t var_28_7 = sx.d(*(*esi + 0x10878))
        result = sub_527230(var_18, 2, *esi, 0, 0, 0)
    
    if (ebx != 0)
        int32_t var_28_8 = sx.d(*(*esi + 0x10874))
        result = sub_527230(0, 2, *esi, 0, 0, 0)
    
    if (var_14 != 0)
        int32_t var_28_9 = sx.d(*(*esi + 0x10876))
        result = sub_527230(0, 2, *esi, 0, 0, 0)
    
    if (var_12 != 0)
        int32_t var_28_10 = sx.d(*(*esi + 0x10876))
        result = sub_527230(0, 2, *esi, 0, 0, 0)
    
    if (var_11 == 0)
        return result
    
    int32_t var_28_11 = sx.d(*(*esi + 0x1087a))
    return sub_527230(1, 2, *esi, 0, 0, 0)
}
