// ============================================================
// 函数名称: sub_477bff
// 虚拟地址: 0x477bff
// WARP GUID: 73ce22f5-92ec-543b-9bb0-a198e846e372
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47ab08, sub_404078, sub_4042c0, sub_404080, sub_47a7ec, sub_46fd7c, sub_403e1c, sub_403fa0, sub_404280, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_477bff(char* arg1, int32_t arg2, int32_t* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg2:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t* var_4 = arg3
    int32_t** esp_1 = &var_4
    int32_t i_1 = 5
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t temp0_1 = *(arg4 - 4)
    *(arg4 - 4) = i_1
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg5
    *(esp_1 - 0xc) = arg6
    *(arg4 - 4) = arg2
    *(esp_1 - 0x10) = arg4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t eax_2 = *(arg1 + 0xab0) + *(arg4 - 4) * 0x81c0
    
    if (temp0_1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t edx_1 = temp0_1 * 0x23
    bool o_1 = unimplemented  {imul edx, edi, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx
    ecx.b = *(eax_2 + (edx_1 << 3) - 0xf8)
    
    if (ecx.b == 0xc)
        if (temp0_1 - 1 u> 0x75)
            sub_403008()
            noreturn
        
        void* ebx = eax_2 + (edx_1 << 3) - 0xf8
        *(esp_8 - 4) = 0
        *(esp_8 - 8) = arg4 - 0xc
        *(arg4 - 4)
        int16_t eax_5
        void* ebp
        eax_5, ebp = sub_47a7ec(temp0_1)
        void* esp_11 = esp_8
        eax_5.b = *(ebp + 0xc)
        
        if (eax_5.b == 0x24)
            *(ebx + 0x72) = 0
            *(ebx + 0x74) = 0
        else if (eax_5.b == 0x23)
            int32_t eax_8 = sub_404078(*(ebp - 0xc)) + 0x8000
            
            if (eax_8 u> 0xffff)
                sub_403008()
                noreturn
            
            *(ebx + 0x72) = eax_8.w - 0x8000
        else if (eax_5.b == 0x2e)
            if (sub_404078(*(ebp - 0xc)) s> sx.d(*(ebx + 0x72)))
                int32_t edx_4 = sx.d(*(ebx + 0x72))
                
                if (add_overflow(edx_4, 1))
                    sub_403010()
                    noreturn
                
                sub_4042c0(ebp - 0xc, edx_4 + 1, 1)
                *(esp_11 - 4) = *(ebp - 0xc)
                ebx = sub_47ab08(arg1, *(ebp - 4), temp0_1, arg7)
                esp_11 += 0x1c
        else if (eax_5.b == 8)
            eax_5 = *(ebx + 0x72)
            
            if (eax_5 s> 0)
                sub_4042c0(ebp - 0xc, sx.d(eax_5), 1)
                *(esp_11 - 4) = *(ebp - 0xc)
                ebx = sub_47ab08(arg1, *(ebp - 4), temp0_1, arg7)
                esp_11 += 0x1c
                int16_t temp7_1 = *(ebx + 0x72)
                *(ebx + 0x72) -= 1
                
                if (add_overflow(temp7_1, 0xffff))
                    sub_403010()
                    noreturn
                
                if (*(ebx + 0x74) s> 0)
                    int16_t temp12_1 = *(ebx + 0x74)
                    *(ebx + 0x74) -= 1
                    
                    if (add_overflow(temp12_1, 0xffff))
                        sub_403010()
                        noreturn
        else if (eax_5.b != 0x25)
            if (eax_5.b != 0x27)
                *(ebp - 0xd) = 0
                eax_5 = *(ebx + 0xee)
                
                if (eax_5 == 0 || eax_5 == 3)
                    int16_t edx_10
                    
                    if (eax_5 != 3)
                        edx_10.b = *(ebp + 0xc)
                        edx_10.b -= 0x20
                        bool c_2 = edx_10.b u< 0xbf
                        
                        if (edx_10.b == 0xbf || c_2)
                            c_2 = test_bit(1, zx.d(edx_10.b))
                        
                        if (not(c_2))
                            eax_5.b = *(ebp + 0xc)
                        
                        if (not(c_2) && (eax_5.b u< 0x30 || eax_5.b u> 0x7a))
                            eax_5 = 0
                        else
                            eax_5.b = 1
                        
                        *(ebp - 0xd) = eax_5.b
                    else
                        edx_10.b = *(ebp + 0xc)
                        edx_10.b -= 0x20
                        bool c_1 = edx_10.b u< 0xc7
                        
                        if (edx_10.b == 0xc7 || c_1)
                            c_1 = test_bit(1, zx.d(edx_10.b))
                        
                        if (not(c_1))
                            eax_5.b = *(ebp + 0xc)
                        
                        if (not(c_1) && (eax_5.b u< 0x30 || eax_5.b u> 0x7a))
                            eax_5 = 0
                        else
                            eax_5.b = 1
                        
                        *(ebp - 0xd) = eax_5.b
                        
                        if (*(ebp + 8) == 0)
                            eax_5.b = *(ebp + 0xc)
                            char edx_12 = eax_5.b
                            
                            if (edx_12 == 0xbb)
                            label_477eef:
                                
                                if (eax_5.b == 0xbe)
                                    *(ebp + 0xc) = 0x2e
                                
                                eax_5.b = *(ebp + 0xc)
                                
                                if (eax_5.b == 0xdb)
                                    *(ebp + 0xc) = 0xdf
                                
                                eax_5.b = *(ebp + 0xc)
                                
                                if (eax_5.b == 0xbb)
                                    *(ebp + 0xc) = 0x2b
                                
                                eax_5.b = *(ebp + 0xc)
                                
                                if (eax_5.b == 0xe2)
                                    *(ebp + 0xc) = 0x3c
                                
                                eax_5.b = *(ebp + 0xc)
                                
                                if (eax_5.b == 0xdc)
                                    *(ebp + 0xc) = 0x5e
                            else
                                if (edx_12 == 0xbe)
                                    goto label_477eef
                                
                                if (edx_12 + 0x25 u< 2)
                                    goto label_477eef
                                
                                if (edx_12 == 0xe2)
                                    goto label_477eef
                        else
                            eax_5.b = *(ebp + 0xc)
                            
                            if (eax_5.b == 0xe2)
                                *(ebp + 0xc) = 0x3e
                            
                            if (*(ebp + 0xc) == 0x31)
                                *(ebp + 0xc) = 0x21
                            
                            if (*(ebp + 0xc) == 0x32)
                                *(ebp + 0xc) = 0x22
                            
                            if (*(ebp + 0xc) == 0x33)
                                *(ebp + 0xc) = 0xa7
                            
                            if (*(ebp + 0xc) == 0x34)
                                *(ebp + 0xc) = 0x24
                            
                            if (*(ebp + 0xc) == 0x35)
                                *(ebp + 0xc) = 0x25
                            
                            if (*(ebp + 0xc) == 0x36)
                                *(ebp + 0xc) = 0x26
                            
                            if (*(ebp + 0xc) == 0x37)
                                *(ebp + 0xc) = 0x2f
                            
                            if (*(ebp + 0xc) == 0x38)
                                *(ebp + 0xc) = 0x28
                            
                            if (*(ebp + 0xc) == 0x39)
                                *(ebp + 0xc) = 0x29
                            
                            if (*(ebp + 0xc) == 0x30)
                                *(ebp + 0xc) = 0x3d
                            
                            eax_5.b = *(ebp + 0xc)
                            
                            if (eax_5.b == 0xdb)
                                *(ebp + 0xc) = 0x3f
                            
                            eax_5.b = *(ebp + 0xc)
                            
                            if (eax_5.b == 0xbe)
                                *(ebp + 0xc) = 0x3a
                            
                            eax_5.b = *(ebp + 0xc)
                            
                            if (eax_5.b == 0xbc)
                                *(ebp + 0xc) = 0x3b
                            
                            eax_5.b = *(ebp + 0xc)
                            
                            if (eax_5.b == 0xbb)
                                *(ebp + 0xc) = 0x2a
                            
                            eax_5.b = *(ebp + 0xc)
                            
                            if (eax_5.b == 0xdc)
                                *(ebp + 0xc) = 0x5e
                    eax_5.b = *(ebp + 0xc)
                    eax_5.b -= 0x30
                    char temp19_1 = eax_5.b
                    eax_5.b -= 0xa
                    
                    if (temp19_1 u< 0xa && *(ebp + 8) != 0)
                        int32_t eax_20
                        eax_20.b = *(ebp + 0xc)
                        
                        if (add_overflow(eax_20, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        *(ebp + 0xc) = (eax_20.w - 1).b
                    
                    if (*(ebp + 8) != 0)
                        eax_5.b = *(ebp + 0xc)
                        
                        if (eax_5.b == 0xde)
                            *(ebp + 0xc) = 0xc4
                        
                        eax_5.b = *(ebp + 0xc)
                        
                        if (eax_5.b == 0xc0)
                            *(ebp + 0xc) = 0xd6
                        
                        eax_5.b = *(ebp + 0xc)
                        
                        if (eax_5.b == 0xba)
                            *(ebp + 0xc) = 0xdc
                    else
                        eax_5.b = *(ebp + 0xc)
                        
                        if (eax_5.b == 0xde)
                            *(ebp + 0xc) = 0xe4
                        
                        eax_5.b = *(ebp + 0xc)
                        
                        if (eax_5.b == 0xc0)
                            *(ebp + 0xc) = 0xf6
                        
                        eax_5.b = *(ebp + 0xc)
                        
                        if (eax_5.b == 0xba)
                            *(ebp + 0xc) = 0xfc
                    
                    eax_5.b = *(ebp + 0xc)
                    
                    if (eax_5.b == 0xbc)
                        *(ebp + 0xc) = 0x2c
                    
                    eax_5.b = *(ebp + 0xc)
                    
                    if (eax_5.b == 0xbd)
                        if (*(ebp + 8) == 0)
                            *(ebp + 0xc) = 0x8c
                        else
                            *(ebp + 0xc) = 0x5f
                
                if (*(ebx + 0xee) - 1 u< 2)
                    int16_t eax_21
                    eax_21.b = *(ebp + 0xc)
                    
                    if (eax_21.b u< 0x30 || eax_21.b u> 0x39)
                        eax_21 = 0
                    else
                        eax_21.b = 1
                    
                    *(ebp - 0xd) = eax_21.b
                
                if (sub_404078(*(ebp - 0xc)) s>= sx.d(*(ebx + 0x76)))
                    *(ebp - 0xd) = 0
                
                if (*(ebp - 0xd) != 0)
                    *(esp_11 - 4) = 0
                    *(esp_11 - 8) = ebp - 8
                    *(ebp - 4)
                    ebp = sub_47a7ec(temp0_1)
                    *(esp_11 - 4) = ebp - 0xc
                    sub_404280(sx.d(*(ebx + 0x72)), 1, *(ebp - 8))
                    int32_t edx_17
                    edx_17.b = *(ebp + 0xc)
                    sub_403fa0()
                    sub_404080(ebp - 0xc, *(ebp - 0x1c))
                    *(esp_11 - 4) = ebp - 0x20
                    int32_t eax_32 = sub_404078(*(ebp - 8))
                    int32_t eax_33 = sx.d(*(ebx + 0x72))
                    int32_t ecx_7 = eax_32 - eax_33
                    
                    if (add_overflow(eax_32, neg.d(eax_33)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ecx_7, 2))
                        sub_403010()
                        noreturn
                    
                    int32_t edx_19 = sx.d(*(ebx + 0x72))
                    
                    if (add_overflow(edx_19, 1))
                        sub_403010()
                        noreturn
                    
                    sub_404280(ecx_7 + 2, edx_19 + 1, *(ebp - 8))
                    sub_404080(ebp - 0xc, *(ebp - 0x20))
                    *(esp_11 - 4) = *(ebp - 0xc)
                    ebx = sub_47ab08(arg1, *(ebp - 4), temp0_1, arg7)
                    esp_11 += 0x1c
                    int16_t temp26_1 = *(ebx + 0x72)
                    *(ebx + 0x72) += 1
                    
                    if (add_overflow(temp26_1, 1))
                        sub_403010()
                        noreturn
            else if (sub_404078(*(ebp - 0xc)) s> sx.d(*(ebx + 0x72)))
                int16_t temp11_1 = *(ebx + 0x72)
                *(ebx + 0x72) += 1
                
                if (add_overflow(temp11_1, 1))
                    sub_403010()
                    noreturn
        else if (*(ebx + 0x72) s> 0)
            int16_t temp9_1 = *(ebx + 0x72)
            *(ebx + 0x72) -= 1
            
            if (add_overflow(temp9_1, 0xffff))
                sub_403010()
                noreturn
        
        int32_t eax_38 = sx.d(*(ebx + 0x72))
        int32_t edx_23 = sx.d(*(ebx + 0x74))
        
        if (add_overflow(eax_38, neg.d(edx_23)))
            sub_403010()
            noreturn
        
        if (eax_38 - edx_23 s< 0)
            int16_t temp6_1 = *(ebx + 0x74)
            *(ebx + 0x74) -= 1
            
            if (add_overflow(temp6_1, 0xffff))
                sub_403010()
                noreturn
        
        *(ebp - 0x18) = 0xbe4ccccd
        *(esp_11 - 4) = ebp - 0x24
        int32_t ecx_10 = sx.d(*(ebx + 0x72))
        int32_t edi_5 = sx.d(*(ebx + 0x74))
        
        if (add_overflow(ecx_10, neg.d(edi_5)))
            sub_403010()
            noreturn
        
        sub_404280(ecx_10 - edi_5, edi_5, *(ebp - 0xc))
        esp_8 = esp_11
        arg4 = sub_46fd7c(arg1, *(ebp - 0x24))
        *(arg4 - 0x14) = fconvert.s(arg7)
        long double x87_r0_1 = float.t(*(ebx + 0x78)) + fconvert.t(*(arg4 - 0x18))
        long double temp8_1 = fconvert.t(*(arg4 - 0x14))
        x87_r0_1 - temp8_1
        int16_t top_1 = 1
        
        if (test_bit(
                ((x87_r0_1 < temp8_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r0_1, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r0_1 == temp8_1 ? 1 : 0) << 0xe | 0x800):1.b, 
                0))
            *(ebx + 0x74) = 0xffff
            int16_t eax_47
            
            do
                int16_t temp13_1 = *(ebx + 0x74)
                *(ebx + 0x74) += 1
                
                if (add_overflow(temp13_1, 1))
                    sub_403010()
                    noreturn
                
                *(esp_8 - 4) = arg4 - 0x28
                int32_t ecx_12 = sx.d(*(ebx + 0x72))
                int32_t edi_6 = sx.d(*(ebx + 0x74))
                
                if (add_overflow(ecx_12, neg.d(edi_6)))
                    sub_403010()
                    noreturn
                
                sub_404280(ecx_12 - edi_6, edi_6, *(arg4 - 0xc))
                arg4 = sub_46fd7c(arg1, *(arg4 - 0x28))
                *(arg4 - 0x14) = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                unimplemented  {fild st0, word [ebx+0x78]}
                unimplemented  {fadd dword [ebp-0x18]}
                long double temp17_1 = fconvert.t(*(arg4 - 0x14))
                unimplemented  {fcomp st0, dword [ebp-0x14]} f- temp17_1
                bool c0_2 = unimplemented  {fcomp st0, dword [ebp-0x14]} f< temp17_1
                bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x14]}, temp17_1)
                bool c3_2 = unimplemented  {fcomp st0, dword [ebp-0x14]} f== temp17_1
                unimplemented  {fcomp st0, dword [ebp-0x14]}
                top_1 += 1
                eax_47 = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_1 & 7) << 0xb
            while (test_bit(eax_47:1.b, 6) || test_bit(eax_47:1.b, 0))
        
        int32_t eax_50 = sub_404078(*(arg4 - 0xc)) + 0x8000
        
        if (eax_50 u> 0xffff)
            sub_403008()
            noreturn
        
        *(ebx + 0x7a) = eax_50.w - 0x8000
        
        while (true)
            *(esp_8 - 4) = arg4 - 0x2c
            sub_404280(sx.d(*(ebx + 0x7a)), sx.d(*(ebx + 0x74)), *(arg4 - 0xc))
            arg4 = sub_46fd7c(arg1, *(arg4 - 0x2c))
            unimplemented  {fild st0, word [ebx+0x78]}
            unimplemented  {fadd dword [ebp-0x18]}
            unimplemented  {fcompp } f- unimplemented  {fcompp }
            bool c0_3 = unimplemented  {fcompp } f< unimplemented  {fcompp }
            bool c2_3 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
            bool c3_3 = unimplemented  {fcompp } f== unimplemented  {fcompp }
            unimplemented  {fcompp }
            unimplemented  {fcompp }
            top_1 += 1
            
            if (not(test_bit(
                    ((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                        | (top_1 & 7) << 0xb):1.b, 
                    0)))
                break
            
            int16_t temp16_1 = *(ebx + 0x7a)
            *(ebx + 0x7a) -= 1
            
            if (add_overflow(temp16_1, 0xffff))
                sub_403010()
                noreturn
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_4781f5
    sub_403e1c(arg4 - 0x2c, 5)
    return sub_403e1c(arg4 - 0xc, 2)
}
