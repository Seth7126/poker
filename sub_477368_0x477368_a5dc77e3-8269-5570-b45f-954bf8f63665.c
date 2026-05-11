// ============================================================
// 函数名称: sub_477368
// 虚拟地址: 0x477368
// WARP GUID: a5dc77e3-8269-5570-b45f-954bf8f63665
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_402c90, sub_40fa94, sub_40401c, sub_40287c, sub_46fd7c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_475990, sub_47c160
// ============================================================

void* __convention("regparm")sub_477368(void* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_40 = ebx
    int32_t esi
    int32_t var_44 = esi
    int32_t edi
    int32_t var_48 = edi
    int32_t var_20 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    int32_t* var_4c = &var_4
    int32_t (* var_50)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* eax_2 = *(arg1 + 0xab0) + var_8 * 0x81c0
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t esi_1 = arg3 * 0x23
    bool o_1 = unimplemented  {imul esi, eax, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    void* eax_6
    eax_6.b = *(eax_2 + (esi_1 << 3) - 0xf8)
    
    if (eax_6.b == 0)
    label_4773e9:
        void var_1c
        sub_40fa94(0xfffffff4, arg3, &var_1c)
        void* ecx
        ecx.b = 0x38
        *(arg1 + 0x1d4)
        (*(arg1 + 0x1d0))(arg1 + 0xa96, &var_1c)
        esp = &ExceptionList
    else
        char temp1_1 = eax_6.b
        eax_6.b -= 4
        
        if (temp1_1 == 4)
            goto label_4773e9
        
        eax_6.b -= 3
        char temp2_1 = eax_6.b
        eax_6.b -= 4
        
        if (temp2_1 u< 4 || eax_6.b - 1 u< 2)
            goto label_4773e9
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    void* eax_12
    eax_12.b = *(eax_2 + (esi_1 << 3) - 0xf8)
    char var_d = eax_12.b
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    void* eax_15
    eax_15.b = *(eax_2 + (esi_1 << 3) - 8)
    eax_15.b -= 4
    char temp4 = eax_15.b
    eax_15.b -= 2
    
    if (temp4 u>= 2)
        eax_15.b = var_d
        char temp5_1 = eax_15.b
        eax_15.b -= 8
        
        if (temp5_1 == 8)
            if (arg3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            eax_15 = eax_2 + (esi_1 << 3) - 0xf8
            esi_1.w = *(eax_15 + 0x74)
            int32_t edx
            edx.w = *(eax_15 + 0x7c)
            
            if (esi_1.w s< edx.w)
                int32_t ecx_1 = sx.d(esi_1.w)
                
                if (add_overflow(ecx_1, *(eax_15 + 0x64)))
                    sub_403010()
                    noreturn
                
                if (ecx_1 + *(eax_15 + 0x64) s> sx.d(edx.w))
                    *(eax_15 + 0x78) = edx.w
    else
        *(arg1 + 0x9a8) = *(arg1 + 0x9a0)
        *(arg1 + 0x9ac) = *(arg1 + 0x9a4)
    
    eax_15.b = var_d
    char temp6 = eax_15.b
    eax_15.b -= 0xe
    
    if (temp6 == 0xe)
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_3 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_3)
            sub_403010()
            noreturn
        
        void* edx_3
        edx_3.w = *(eax_2 + arg3 * 0x118 - 0x7c)
        *(eax_2 + arg3 * 0x118 - 0x80) = edx_3.w
    
    if (var_d == 9)
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_4 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_4)
            sub_403010()
            noreturn
        
        esi_1.w = *(eax_2 + arg3 * 0x118 - 0x84)
        void* edx_4
        edx_4.w = *(eax_2 + arg3 * 0x118 - 0x7c)
        
        if (esi_1.w s< edx_4.w)
            int32_t ecx_3 = sx.d(esi_1.w)
            
            if (add_overflow(ecx_3, *(eax_2 + arg3 * 0x118 - 0x94)))
                sub_403010()
                noreturn
            
            if (ecx_3 + *(eax_2 + arg3 * 0x118 - 0x94) s> sx.d(edx_4.w))
                *(eax_2 + arg3 * 0x118 - 0x80) = edx_4.w
    
    if (var_d == 0xc)
        if (arg3 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        bool o_6 = unimplemented  {imul eax, eax, 0x23}
        
        if (o_6)
            sub_403010()
            noreturn
        
        int32_t edi_1 = 0
        int32_t eax_40
        int32_t edi_2
        
        while (true)
            esp = &ExceptionList
            sub_40401c(
                sub_40287c(edi_1, sx.d(*(eax_2 + arg3 * 0x118 - 0x84)), eax_2 + arg3 * 0x118 - 0xf0, 
                    &ebp_1[-0xe]), 
                &ebp_1[-0xe])
            ebp_1, edi_2 = sub_46fd7c(arg1, ebp_1[-7])
            unimplemented  {fild st0, word [esi+0x7c]}
            unimplemented  {fdiv st0, dword [0x477828]}
            unimplemented  {fld st0, tword [0x47782c]}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            unimplemented  {fcompp } f- unimplemented  {fcompp }
            bool c0_1 = unimplemented  {fcompp } f< unimplemented  {fcompp }
            bool c2_1 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
            bool c3_1 = unimplemented  {fcompp } f== unimplemented  {fcompp }
            unimplemented  {fcompp }
            unimplemented  {fcompp }
            int16_t top = top + 1
            int16_t eax_38 =
                (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
            
            if (not(test_bit(eax_38:1.b, 6)) && not(test_bit(eax_38:1.b, 0)))
                int32_t eax_39
                eax_39.b = *(eax_2 + arg3 * 0x118 - 0xf0)
                
                if (edi_2 s<= eax_39)
                    edi_1 = edi_2 + 1
                    
                    if (not(add_overflow(edi_2, 1)))
                        continue
                    
                    sub_403010()
                    noreturn
            
            eax_40 = sx.d(*(eax_2 + arg3 * 0x118 - 0x84))
            break
        
        if (add_overflow(eax_40, edi_2))
            sub_403010()
            noreturn
        
        if (eax_40 + edi_2 + 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        *(eax_2 + arg3 * 0x118 - 0x86) = (eax_40 + edi_2 + 0x8000).w - 0x8000
        
        if ((eax_40 + edi_2 + 0x8000).w - 0x8000 s< 0)
            *(eax_2 + arg3 * 0x118 - 0x86) = 0
        
        int16_t eax_44
        eax_44.b = *(eax_2 + arg3 * 0x118 - 0xf0)
        
        if (eax_44 s< *(eax_2 + arg3 * 0x118 - 0x86))
            *(eax_2 + arg3 * 0x118 - 0x86) = eax_44
    
    void* eax_45 = *(arg1 + 0xab8)
    
    if (eax_45 s> 0)
        bool o_9 = unimplemented  {imul eax, eax, 0x1038}
        
        if (o_9)
            sub_403010()
            noreturn
        
        if (*(*(arg1 + 0xab0) + eax_45 * 0x81c0 + 0x8134) s> 0)
            eax_45 = *(arg1 + 0xab8)
            bool o_10 = unimplemented  {imul edx, eax, 0x1038}
            
            if (o_10)
                sub_403010()
                noreturn
            
            int32_t edx_10
            edx_10.w = *(*(arg1 + 0xab0) + eax_45 * 0x81c0 + 0x8134)
            bool o_11 = unimplemented  {imul ecx, eax, 0x1038}
            
            if (o_11)
                sub_403010()
                noreturn
            
            if (edx_10.w s<= *(*(arg1 + 0xab0) + eax_45 * 0x81c0 + 0x8130)
                    && eax_45 s<= *(arg1 + 0xab4))
                bool o_12 = unimplemented  {imul edx, eax, 0x1038}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                int32_t edx_13 = sx.d(*(*(arg1 + 0xab0) + eax_45 * 0x81c0 + 0x8134)) - 1
                
                if (edx_13 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_13 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                bool o_14 = unimplemented  {imul eax, eax, 0x1038}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                char* esi_5 = *(arg1 + 0xab0) + eax_45 * 0x81c0 + (edx_13 + 1) * 0x118 - 0xf8
                *(ebp_1[-4] + 0x8132) = 0
                esi_5[0x71] = 0
                
                if (*esi_5 == 0xc && *(esi_5 + 0xee) == 1)
                    if (esi_5[8] == 0)
                        *(esi_5 + 8) = 0x3101
                    else
                        int32_t ecx_11
                        ecx_11.b = esi_5[8]
                        sub_402c90(&esi_5[8], 0x477838, ecx_11 + 1)
                        
                        if (ecx_11 == 0xffffffff)
                            *(esi_5 + 8) = 0x3101
                        else
                            int32_t ecx_13
                            ecx_13.b = esi_5[8]
                            sub_402c90(&esi_5[8], 0x47783c, ecx_13 + 1)
                            
                            if (ecx_13 == 0xffffffff)
                                *(esi_5 + 8) = 0x3101
                            else
                                int32_t ecx_15
                                ecx_15.b = esi_5[8]
                                sub_402c90(&esi_5[8], 0x477840, ecx_15 + 1)
                                
                                if (ecx_15 == 0xffffffff)
                                    *(esi_5 + 8) = 0x3101
    
    if (*(arg1 + 0x9b0) != 0)
        eax_45.b = *(ebp_1 - 9)
        
        if (eax_45.b == 0)
        label_47772f:
            
            if (*(arg1 + 0x95a) != 0)
                ebp_1[-2]
                ebp_1[-1]
                *(arg1 + 0x95c)
                (*(arg1 + 0x958))()
        else
            char temp15_1 = eax_45.b
            eax_45.b -= 0xa
            
            if (temp15_1 == 0xa)
                goto label_47772f
    
    char temp17_1
    
    if (*(arg1 + 0x9b0) != 0 && *(arg1 + 0xa95) == 0)
        eax_45.b = *(ebp_1 - 9)
        temp17_1 = eax_45.b
        eax_45.b -= 0xc
    
    if (*(arg1 + 0x9b0) == 0 || *(arg1 + 0xa95) != 0 || temp17_1 == 0xc)
        *(arg1 + 0xab8) = ebp_1[-1]
        int32_t eax_54 = ebp_1[-2] + 0x8000
        
        if (eax_54 u> 0xffff)
            sub_403008()
            noreturn
        
        *(ebp_1[-4] + 0x8134) = eax_54.w - 0x8000
        void* edx_17
        edx_17.b = *(ebp_1 - 9)
        char temp16_1 = edx_17.b
        edx_17.b -= 0xc
        
        if (temp16_1 == 0xc)
            if (sx.d(eax_54.w - 0x8000) - 1 u> 0x75)
                sub_403008()
                noreturn
            
            bool o_15 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_15)
                sub_403010()
                noreturn
            
            *(ebp_1[-4] + sx.d(eax_54.w - 0x8000) * 0x118 - 0x87) = 1
            void* eax_60
            eax_60.w = *(ebp_1[-4] + 0x8134)
            *(ebp_1[-4] + 0x8132) = eax_60.w
            *(arg1 + 0x9b4) = sx.d(*(ebp_1[-4] + 0x8134))
        
        if (*(arg1 + 0x95a) != 0)
            ebp_1[-2]
            ebp_1[-1]
            *(arg1 + 0x95c)
            (*(arg1 + 0x958))()
            esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_47781d
    sub_403df8(&ebp_1[-7])
    return &ebp_1[-7]
}
