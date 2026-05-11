// ============================================================
// 函数名称: sub_4d6668
// 虚拟地址: 0x4d6668
// WARP GUID: 9649b0d6-0308-586e-92bd-ad6945572f22
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402c90, sub_402b4c, sub_40287c, sub_403010
// [被调用的父级函数]: sub_4dd1e0, sub_4dd1d7
// ============================================================

int32_t __convention("regparm")sub_4d6668(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_94 = &__saved_ebp
    int32_t (* var_98)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1 = *(arg1 + 0xab4)
    
    if (eax_1 s>= 7)
        int32_t i_1 = eax_1 - 6
        int32_t var_10_1 = 7
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul eax, dword [ebp-0xc], 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            void* ebx_1 = *(arg1 + 0xab0) + var_10_1 * 0x81c0
            int32_t eax_4
            eax_4.w = *(ebx_1 + 2)
            bool var_11_1 = eax_4.w == 0x118
            
            if (eax_4.w == 0x118)
                int32_t eax_5 = sx.d(*(ebx_1 + 6))
                
                if (add_overflow(eax_5, 0x6e))
                    sub_403010()
                    noreturn
                
                *(ebx_1 + 6) = eax_5.w + 0x6e
                *(ebx_1 + 2) = 0x1e0
                int32_t eax_7 = sx.d(*(ebx_1 + 8))
                
                if (add_overflow(eax_7, 0xffffffba))
                    sub_403010()
                    noreturn
                
                *(ebx_1 + 8) = eax_7.w - 0x46
                int32_t eax_9 = sx.d(*(ebx_1 + 4))
                
                if (add_overflow(eax_9, 0x50))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_9 + 0x50, 0x14))
                    sub_403010()
                    noreturn
                
                *(ebx_1 + 4) = (eax_9 + 0x50).w + 0x14
                
                if (var_10_1 == data_61ca1c)
                    int32_t eax_13 = sx.d(*(ebx_1 + 6))
                    
                    if (add_overflow(eax_13, 0x12c))
                        sub_403010()
                        noreturn
                    
                    *(ebx_1 + 6) = eax_13.w + 0x12c
                    int32_t eax_15 = sx.d(*(ebx_1 + 4))
                    
                    if (add_overflow(eax_15, 0x5a))
                        sub_403010()
                        noreturn
                    
                    *(ebx_1 + 4) = eax_15.w + 0x5a
                    int32_t eax_17 = sx.d(*(ebx_1 + 8))
                    
                    if (add_overflow(eax_17, 0xffffffa6))
                        sub_403010()
                        noreturn
                    
                    *(ebx_1 + 8) = eax_17.w - 0x5a
            
            char var_84
            sub_40287c(1, 1, ebx_1 + 0x813c, &var_84)
            int32_t ecx_1
            ecx_1.b = var_84
            sub_402c90(&var_84, 0x4d6968, ecx_1 + 1)
            
            if (ecx_1 != 0xffffffff && *(ebx_1 + 6) s>= 0x50 && *(ebx_1 + 8) s>= 0x50)
                int32_t j_2 = sx.d(*(ebx_1 + 0x8130))
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t esi_1 = 1
                    int32_t j
                    
                    do
                        int32_t edi_1 = esi_1 * 0x23
                        bool o_9 = unimplemented  {imul edi, esi, 0x23}
                        
                        if (o_9)
                            sub_403010()
                            noreturn
                        
                        int32_t ecx_3
                        ecx_3.b = *(ebx_1 + (edi_1 << 3) - 0xf0)
                        sub_402c90(ebx_1 + (edi_1 << 3) - 0xf0, 0x4d696c, ecx_3 + 1)
                        
                        if (ecx_3 == 0xffffffff)
                        label_4d6808:
                            *(ebx_1 + (edi_1 << 3) - 0xf0) = 0x5a20890a
                            void* edi_3 = ebx_1 + (edi_1 << 3) - 0xec
                            void* const esi_2 = &data_4d6980
                            *edi_3 = *esi_2
                            void* edi_4 = edi_3 + 4
                            void* esi_3 = esi_2 + 4
                            *edi_4 = *esi_3
                            *(edi_4 + 2) = *(esi_3 + 2)
                            *(ebx_1 + (edi_1 << 3) - 0x9c) = 0x73
                            int32_t eax_24 = sx.d(*(ebx_1 + (edi_1 << 3) - 0xf6))
                            
                            if (add_overflow(eax_24, 0x28))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_24 + 0x28, 0xfffffff6))
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + (edi_1 << 3) - 0xf6) = (eax_24 + 0x28).w - 0xa
                        else
                            bool o_10 = unimplemented  {imul eax, esi, 0x23}
                            
                            if (o_10)
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_5
                            ecx_5.b = *(ebx_1 + esi_1 * 0x118 - 0xf0)
                            sub_402c90(ebx_1 + esi_1 * 0x118 - 0xf0, 0x4d6974, ecx_5 + 1)
                            
                            if (ecx_5 == 0xffffffff)
                                goto label_4d6808
                        
                        int32_t edi_8 = esi_1 * 0x23
                        bool o_13 = unimplemented  {imul edi, esi, 0x23}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        if (*(ebx_1 + (edi_8 << 3) - 0xf8) != 1 || esi_1 != 1 || var_11_1 == 0)
                            bool o_14 = unimplemented  {imul eax, esi, 0x23}
                            
                            if (o_14)
                                sub_403010()
                                noreturn
                            
                            if (*(ebx_1 + esi_1 * 0x118 - 0xf8) == 0)
                                *(ebx_1 + (edi_8 << 3) - 0x9c) =
                                    sub_402b4c(float.t(*(ebx_1 + (edi_8 << 3) - 0x9c)) * data_4d6988)
                                
                                if (var_11_1 != 0)
                                    int32_t eax_29 = sx.d(*(ebx_1 + (edi_8 << 3) - 0xf6))
                                    
                                    if (add_overflow(eax_29, 0x1e))
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebx_1 + (edi_8 << 3) - 0xf6) = eax_29.w + 0x1e
                        else
                            *(ebx_1 + (edi_8 << 3) - 0x74) = 0x3fe66666
                        
                        if (*(ebx_1 + 4) s> 0x1e)
                            int32_t eax_33 = sx.d(*(ebx_1 + (edi_8 << 3) - 0xf4))
                            
                            if (add_overflow(eax_33, 0x12))
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + (edi_8 << 3) - 0xf4) = eax_33.w + 0x12
                        else
                            int32_t eax_31 = sx.d(*(ebx_1 + (edi_8 << 3) - 0xf4))
                            
                            if (add_overflow(eax_31, 0x1a))
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + (edi_8 << 3) - 0xf4) = eax_31.w + 0x1a
                        
                        if (var_10_1 == data_61c8f0)
                            int32_t eax_36 = sx.d(*(ebx_1 + (edi_8 << 3) - 0xf4))
                            
                            if (add_overflow(eax_36, 0xfffffff4))
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + (edi_8 << 3) - 0xf4) = eax_36.w - 0xc
                            int32_t eax_38 = sx.d(*(ebx_1 + (edi_8 << 3) - 0xf6))
                            
                            if (add_overflow(eax_38, 0x2a))
                                sub_403010()
                                noreturn
                            
                            *(ebx_1 + (edi_8 << 3) - 0xf6) = eax_38.w + 0x2a
                        
                        esi_1 += 1
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
            
            var_10_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    char var_9
    int32_t result
    result.b = var_9
    return result
}
