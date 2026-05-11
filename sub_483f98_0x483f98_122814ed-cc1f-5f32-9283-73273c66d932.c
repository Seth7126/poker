// ============================================================
// 函数名称: sub_483f98
// 虚拟地址: 0x483f98
// WARP GUID: 122814ed-cc1f-5f32-9283-73273c66d932
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_47ab08, sub_402b4c, sub_404188, sub_402c90, sub_484b3c, sub_469cc8, sub_483f98, sub_483d54, sub_40401c, sub_46fd7c, sub_47b3d8, sub_47a140, sub_403fb0, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4dd1e0, sub_4dd1d7, sub_47d208, sub_484b3c, sub_483f98, sub_483958, sub_483128
// ============================================================

int32_t __convention("regparm")sub_483f98(void* arg1, char arg2, void* arg3, long double arg4 @ st0, int32_t arg5, float arg6, float arg7, int32_t arg8, char* arg9, int32_t arg10)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    void* var_20 = nullptr
    void* const var_1c = nullptr
    void* var_18 = nullptr
    void* var_8 = arg3
    void* edi_1 = arg1
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool o = unimplemented  {imul eax, eax, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* eax_2 = *(edi_1 + 0xab0) + *(edi_1 + 0x8a8) * 0x81c0
    int16_t temp3 = *(eax_2 + 0x8130)
    *(eax_2 + 0x8130) += 1
    
    if (add_overflow(temp3, 1))
        sub_403010()
        noreturn
    
    void* eax_4
    eax_4.w = *(eax_2 + 0x8130)
    int32_t var_10 = sx.d(eax_4.w)
    
    if (sx.d(eax_4.w) - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_2 = unimplemented  {imul eax, eax, 0x23}
    
    if (o_2)
        sub_403010()
        noreturn
    
    void* esi_1 = eax_2 + sx.d(eax_4.w) * 0x118 - 0xf8
    *(esi_1 + 0xf8) = 0
    *(esi_1 + 0xfc) = 0
    *esi_1 = arg2
    int32_t ecx
    bool cond:0
    
    if (arg2 - 0xd u>= 5)
        cond:0 = arg2 == 1
        
        if (arg2 != 1)
            cond:0 = arg2 == 2
            
            if (arg2 != 2)
                *(esi_1 + 0xe0) = 1
                int32_t eax_17
                eax_17, ecx = sub_469cc8(edi_1, sx.d(*(esi_1 + 0xe0)))
                *(esi_1 + 0xdc) = eax_17
            else
                *(esi_1 + 0xe0) = 4
                int32_t eax_15
                eax_15, ecx = sub_469cc8(edi_1, sx.d(*(esi_1 + 0xe0)))
                *(esi_1 + 0xdc) = eax_15
        else
            *(esi_1 + 0xe0) = 2
            int32_t eax_13
            eax_13, ecx = sub_469cc8(edi_1, sx.d(*(esi_1 + 0xe0)))
            *(esi_1 + 0xdc) = eax_13
    else
        if (arg2 - 0xd u< 2 || arg2 == 0x11)
            *(esi_1 + 0xe0) = 0xc8
        
        char temp10_1 = *esi_1 - 0xf
        cond:0 = temp10_1 == 2
        
        if (temp10_1 u< 2)
            *(esi_1 + 0xe0) = 0x7d0
        
        int32_t eax_11
        eax_11, ecx = sub_469cc8(edi_1, sx.d(*(esi_1 + 0xe0)))
        *(esi_1 + 0xdc) = eax_11
    
    sub_403fb0(ecx, arg9)
    int32_t ecx_1 = sub_404188(var_18, "highlight")
    *(esi_1 + 0xe2) = cond:0
    
    if (var_8 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(esi_1 + 2) = (var_8 + 0x8000).w - 0x8000
    
    if (arg10 + 0x8000 u> 0xffff)
        sub_403008()
        noreturn
    
    *(esi_1 + 4) = (arg10 + 0x8000).w - 0x8000
    *(esi_1 + 7) = 1
    *(esi_1 + 6) = 1
    *(esi_1 + 0x22) = 0
    *(esi_1 + 0x3c) = 0
    sub_403fb0(ecx_1, arg9)
    int32_t ecx_3
    float ebx_2
    ecx_3, ebx_2 = sub_47ab08(edi_1, *(edi_1 + 0x8a8), sx.d(*(eax_2 + 0x8130)), arg4, var_1c)
    void** esp = &var_8
    *(esi_1 + 0x58) = 0
    *(esi_1 + 0x56) = 0
    *(esi_1 + 0xe4) = 0
    *(esi_1 + 0xec) = 0
    *(esi_1 + 0xda) = 0
    *(esi_1 + 0x88) = 0
    *(esi_1 + 0x72) = 0
    *(esi_1 + 0x74) = 0
    *(esi_1 + 0x76) = 0
    *(esi_1 + 0x78) = 0
    *(esi_1 + 0x68) = 0x3d4ccccd
    *(esi_1 + 0x64) = 0
    *(esi_1 + 0x71) = 0
    *(esi_1 + 0xee) = 0
    *(esi_1 + 0x84) = arg5
    *(esi_1 + 0xf0) = 0
    *(esi_1 + 0x80) = 0xc2c80000
    *(esi_1 + 0x100) = 1
    *(esi_1 + 0x101) = 1
    *(esi_1 + 0x10c) = 0
    *(esi_1 + 0x110) = 0x3f800000
    float eax_30
    eax_30.b = ebx_2.b - 0x12
    char temp11 = eax_30.b
    eax_30.b -= 2
    int16_t top
    
    if (temp11 u< 2)
        if (arg8 == 0xffffffff)
            *(esi_1 + 0x5c) = 0x64
        else
            *(esi_1 + 0x5c) = arg8
        
        if (arg7 == 0xffffffff)
            *(esi_1 + 0x60) = 0x64
        else
            *(esi_1 + 0x60) = arg7
        
        long double x87_r7_1 = fconvert.t(arg6)
        long double temp13_1 = fconvert.t(1f)
        x87_r7_1 - temp13_1
        top = 0
        eax_30.w = (x87_r7_1 < temp13_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp13_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp13_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_30:1.b, 6)))
            *(esi_1 + 0x74) = 0
        else
            *(esi_1 + 0x74) = 1
        
        if (ebx_2.b == 0x13)
            *(esi_1 + 0x76) = 2
            int32_t eax_31
            int32_t edx_12
            eax_31, edx_12 = sub_402b4c(fconvert.t(arg6))
            top = 0
            int32_t edx_13 = adc.d(edx_12, 0, eax_31 u>= 0xffff8000)
            bool cond:2_1 = edx_13 u<= 0
            
            if (edx_13 == 0)
                cond:2_1 = eax_31 + 0x8000 u<= 0xffff
            
            if (not(cond:2_1))
                sub_403008()
                noreturn
            
            *(esi_1 + 0xee) = (eax_31 + 0x8000).w - 0x8000
        
        *(esi_1 + 0x68) = 0
    
    float eax_35
    eax_35.b = (ebx_2 i- 1).b - 2
    
    if ((ebx_2 i- 1).b u< 2)
        if (arg8 == 0xffffffff)
            *(esi_1 + 0x5c) = 0x31
        else
            float eax_36
            int32_t edx_15
            eax_36, edx_15 = sub_402b4c(float.t(arg8) / data_484ab8)
            esp = &var_8
            
            if (eax_36 s>> 0x1f != edx_15)
                sub_403008()
                noreturn
            
            *(esi_1 + 0x5c) = eax_36
        
        if (arg7 == 0xffffffff)
            *(esi_1 + 0x60) = 0x11
        else
            *(esi_1 + 0x60) = arg7
        
        long double x87_r7_5 = fconvert.t(arg6)
        long double temp17_1 = fconvert.t(1f)
        x87_r7_5 - temp17_1
        top = 0
        eax_35.w = (x87_r7_5 < temp17_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_5, temp17_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp17_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_35:1.b, 6)))
            *(esi_1 + 0x74) = 0
        else
            *(esi_1 + 0x74) = 1
        
        *(esi_1 + 0x68) = 0
    
    if (ebx_2.b == 0)
        if (arg8 != 0xffffffff)
            *(esi_1 + 0x5c) = arg8
        
        if (arg7 != 0xffffffff)
            *(esi_1 + 0x60) = arg7
        
        if (arg8 == 0xffffffff)
            *(esi_1 + 0x5c) = 0x8c
        
        if (arg7 == 0xffffffff)
            *(esi_1 + 0x60) = 0x24
        
        long double x87_r7_6 = fconvert.t(arg6)
        long double temp19_1 = fconvert.t(0f)
        x87_r7_6 - temp19_1
        eax_35.w = (x87_r7_6 < temp19_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_6, temp19_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp19_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_35:1.b, 6)))
            *(esi_1 + 0x68) = arg6
        
        long double x87_r7_7 = fconvert.t(arg6)
        long double temp21_1 = fconvert.t(-1f)
        x87_r7_7 - temp21_1
        top = 0
        eax_35.w = (x87_r7_7 < temp21_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_7, temp21_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp21_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_35:1.b, 6))
            *(esi_1 + 0x68) = 0
    else if (ebx_2.b == 0xc)
        *(esi_1 + 0x68) = 0x3c75c28f
        
        if (arg8 != 0xffffffff)
            *(esi_1 + 0x5c) = arg8
        
        if (arg8 == 0xffffffff)
            *(esi_1 + 0x5c) = 0xc8
        
        int32_t eax_39
        eax_39.b = *(esi_1 + 8)
        *(esi_1 + 0x72) = 0
        ecx_3 = 0xd
        int32_t eax_41
        int32_t edx_16
        edx_16:eax_41 = sx.q(*(esi_1 + 0x5c))
        
        if (divs.dp.d(edx_16:eax_41, 0xd) + 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        *(esi_1 + 0x78) = (divs.dp.d(edx_16:eax_41, 0xd) + 0x8000).w - 0x8000
        long double x87_r7_8 = fconvert.t(arg6)
        long double temp24_1 = fconvert.t(0f)
        x87_r7_8 - temp24_1
        top = 0
        
        if (test_bit(
                ((x87_r7_8 < temp24_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_8, temp24_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp24_1 ? 1 : 0) << 0xe):1.b, 
                6))
            *(esi_1 + 0x76) = 0x14
        else
            int32_t eax_45
            int32_t edx_18
            eax_45, edx_18 = sub_402b4c(fconvert.t(arg6))
            top = 0
            int32_t edx_19 = adc.d(edx_18, 0, eax_45 u>= 0xffff8000)
            bool cond:4_1 = edx_19 u<= 0
            
            if (edx_19 == 0)
                cond:4_1 = eax_45 + 0x8000 u<= 0xffff
            
            if (not(cond:4_1))
                sub_403008()
                noreturn
            
            *(esi_1 + 0x76) = (eax_45 + 0x8000).w - 0x8000
        
        *(esi_1 + 0x76)
        
        if (arg7 i+ 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        *(esi_1 + 0xee) = (arg7 i+ 0x8000).w - 0x8000
        *(esi_1 + 0x60) = 0x1a
        *(esi_1 + 0x74) = 0
        *(esi_1 + 0x7a) = *(esi_1 + 0x76)
    else if (ebx_2.b == 0xa)
        if (arg8 != 0xffffffff)
            *(esi_1 + 0x5c) = arg8
        
        *(esi_1 + 0x60) = arg7
        
        if (arg7 == 0)
            *(esi_1 + 0x60) = *(esi_1 + 0x5c)
        
        if (arg7 i+ 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        *(esi_1 + 0xee) = arg7.w
        long double x87_r7_10 = fconvert.t(arg6)
        long double temp20_1 = fconvert.t(0f)
        x87_r7_10 - temp20_1
        float eax_56
        eax_56.w = (x87_r7_10 < temp20_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_10, temp20_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp20_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_56:1.b, 6)))
            *(esi_1 + 0x68) = arg6
        
        long double x87_r7_11 = fconvert.t(arg6)
        long double temp23_1 = fconvert.t(-1f)
        x87_r7_11 - temp23_1
        top = 0
        eax_56.w = (x87_r7_11 < temp23_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_11, temp23_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp23_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_56:1.b, 6))
            *(esi_1 + 0x68) = 0
    
    if (ebx_2.b == 4)
        if (arg8 != 0xffffffff)
            *(esi_1 + 0x5c) = arg8
        else
            *(esi_1 + 0x5c) = 0xc8
        
        if (arg7 != 0xffffffff)
            *(esi_1 + 0x60) = arg7
        else
            *(esi_1 + 0x60) = 0x1a
        
        *(esi_1 + 0x70) = 0
        *(esi_1 + 0x68) = 0x3c75c28f
        sub_40401c(ecx_3, esi_1 + 8)
        ebp_1, edi_1 = sub_46fd7c(edi_1, var_20)
        int32_t eax_60
        int32_t edx_23
        eax_60, edx_23 = sub_402b4c(arg4 * fconvert.t(11.5f) + fconvert.t(42f))
        top = 1
        esp = &var_8
        
        if (eax_60 s>> 0x1f != edx_23)
            sub_403008()
            noreturn
        
        *(esi_1 + 0x5c) = eax_60
    
    float eax_63
    eax_63.b = ebx_2.b - 0xd
    char temp14 = eax_63.b
    eax_63.b -= 3
    char temp18_1
    
    if (temp14 u>= 3)
        temp18_1 = eax_63.b
        eax_63.b -= 1
    
    if (temp14 u< 3 || temp18_1 == 1)
        if (ebp_1[5] != 0xffffffff)
            *(esi_1 + 0x5c) = ebp_1[5]
        else
            *(esi_1 + 0x5c) = 0xc8
        
        if (ebp_1[4] != 0xffffffff)
            *(esi_1 + 0x60) = ebp_1[4]
        else
            *(esi_1 + 0x60) = 0x80
        
        unimplemented  {fld st0, tword [0x484ad4]}
        long double temp27_1 = fconvert.t(*(esi_1 + 0x84))
        unimplemented  {fcomp st0, dword [esi+0x84]} f- temp27_1
        bool c0_8 = unimplemented  {fcomp st0, dword [esi+0x84]} f< temp27_1
        bool c2_8 = is_unordered.t(unimplemented  {fcomp st0, dword [esi+0x84]}, temp27_1)
        bool c3_8 = unimplemented  {fcomp st0, dword [esi+0x84]} f== temp27_1
        unimplemented  {fcomp st0, dword [esi+0x84]}
        eax_63.w =
            (c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe | (top & 7) << 0xb
        
        if (test_bit(eax_63:1.b, 0))
            *(esi_1 + 0x5a) = 0x18
        else
            *(esi_1 + 0x5a) = 0x13
        
        esp = &var_8
        int32_t eax_66
        int32_t edx_25
        edx_25:eax_66 = sx.q(*(esi_1 + 0x60))
        
        if (divs.dp.d(edx_25:eax_66, sx.d(*(esi_1 + 0x5a))) + 0x8000 u> 0xffff)
            sub_403008()
            noreturn
        
        *(esi_1 + 0x76) = (divs.dp.d(edx_25:eax_66, sx.d(*(esi_1 + 0x5a))) + 0x8000).w - 0x8000
        
        if (ebx_2.b == 0x11)
            *(esi_1 + 0x76) = 1
        
        *(esi_1 + 0x68) = 0x3c75c28f
        
        if (ebx_2.b != 0xd)
            unimplemented  {fld st0, dword [ebp+0xc]}
            int32_t eax_70
            int32_t edx_27
            eax_70, edx_27 = sub_402b4c()
            int32_t edx_28 = adc.d(edx_27, 0, eax_70 u>= 0xffff8000)
            bool cond:5_1 = edx_28 u<= 0
            
            if (edx_28 == 0)
                cond:5_1 = eax_70 + 0x8000 u<= 0xffff
            
            if (not(cond:5_1))
                sub_403008()
                noreturn
            
            *(esi_1 + 0x7e) = (eax_70 + 0x8000).w - 0x8000
        else
            *(esi_1 + 0x7e) = 1
        
        if (ebx_2.b == 0x11)
            *(esi_1 + 0x7e) = 1
            int32_t ecx_5
            ecx_5.b = *(esi_1 + 8)
            sub_402c90(esi_1 + 8, 0x484ae0, ecx_5 + 1)
            int32_t ecx_7
            
            if (ecx_5 != 0xffffffff)
                ecx_7.b = *(esi_1 + 8)
                sub_402c90(esi_1 + 8, 0x484aec, ecx_7 + 1)
            
            if (ecx_5 == 0xffffffff || ecx_7 == 0xffffffff)
                int32_t ecx_23
                ecx_23.b = *(esi_1 + 8)
                sub_402c90(esi_1 + 8, 0x484aec, ecx_23 + 1)
                
                if (ecx_23 == 0xffffffff)
                    int32_t var_c_13 = sx.d(*(esi_1 + 4))
                    int32_t eax_121 = *(esi_1 + 0x5c)
                    
                    if (add_overflow(eax_121, 0xffffffe2))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_121 - 0x1e, 1))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_121 - 0x1d, 0))
                        sub_403010()
                        noreturn
                    
                    int32_t var_14_4 = 0x19
                    int32_t var_18_4 = 0
                    var_1c = "ListText"
                    esp = &var_1c
                    int32_t ecx_37 = sx.d(*(esi_1 + 2))
                    
                    if (add_overflow(ecx_37, 0x24))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ecx_37 + 0x24, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ecx_37 + 0x23, 0))
                        sub_403010()
                        noreturn
                    
                    void** eax_126
                    eax_126, ebp_1, esi_1 = sub_483d54(edi_1, 0xa, ecx_37 + 0x23, var_1c.b, var_18_4, 
                        var_14_4, eax_121 - 0x1d)
                    ebp_1[-2] = eax_126
                    sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
                else
                    if (add_overflow(sx.d(*(esi_1 + 2)), 6))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-2] = sub_484b3c(edi_1, "Left", sx.d(*(esi_1 + 4)))
                    sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
                    int32_t ecx_28 = sx.d(*(esi_1 + 2))
                    
                    if (add_overflow(ecx_28, *(esi_1 + 0x5c)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ecx_28 + *(esi_1 + 0x5c), 6))
                        sub_403010()
                        noreturn
                    
                    int32_t edx_40
                    edx_40.b = 7
                    ebp_1[-2] = sub_484b3c(edi_1, "Right", sx.d(*(esi_1 + 4)))
                    sub_47a140(ebp_1[-2], *(edi_1 + 0x8a8), edi_1, 1)
                    sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
                    int32_t var_c_12 = sx.d(*(esi_1 + 4))
                    int32_t eax_114 = *(esi_1 + 0x5c)
                    
                    if (add_overflow(eax_114, 0xffffffe2))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_114 - 0x1e, 1))
                        sub_403010()
                        noreturn
                    
                    int32_t var_14_3 = 0x19
                    int32_t var_18_3 = 0
                    var_1c = "ListText"
                    esp = &var_1c
                    int32_t ecx_33 = sx.d(*(esi_1 + 2))
                    
                    if (add_overflow(ecx_33, 0x24))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ecx_33 + 0x24, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    void** eax_118
                    eax_118, ebp_1, esi_1 = sub_483d54(edi_1, 0xa, ecx_33 + 0x23, var_1c.b, var_18_3, 
                        var_14_3, eax_114 - 0x1d)
                    ebp_1[-2] = eax_118
                    sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
            else
                int32_t eax_75 = sx.d(*(esi_1 + 4))
                
                if (add_overflow(eax_75, 0x1c))
                    sub_403010()
                    noreturn
                
                if (add_overflow(sx.d(*(esi_1 + 2)), 6))
                    sub_403010()
                    noreturn
                
                int32_t edx_29
                edx_29.b = 7
                ebp_1[-2] = sub_484b3c(edi_1, "Left", eax_75 + 0x1c)
                sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
                int32_t eax_80 = sx.d(*(esi_1 + 4))
                
                if (add_overflow(eax_80, 0x1c))
                    sub_403010()
                    noreturn
                
                int32_t ecx_12 = sx.d(*(esi_1 + 2))
                
                if (add_overflow(ecx_12, *(esi_1 + 0x5c)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(ecx_12 + *(esi_1 + 0x5c), 6))
                    sub_403010()
                    noreturn
                
                int32_t edx_31
                edx_31.b = 7
                ebp_1[-2] = sub_484b3c(edi_1, "Right", eax_80 + 0x1c)
                sub_47a140(ebp_1[-2], *(edi_1 + 0x8a8), edi_1, 1)
                sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
                int32_t eax_86 = sx.d(*(esi_1 + 4))
                
                if (add_overflow(eax_86, 0x1c))
                    sub_403010()
                    noreturn
                
                int32_t var_c_7 = eax_86 + 0x1c
                void* const var_10_3 = "LeftRight"
                int32_t eax_88 = *(esi_1 + 0x5c)
                
                if (add_overflow(eax_88, 0xffffffe2))
                    sub_403010()
                    noreturn
                
                int32_t var_14_1 = eax_88 - 0x1e
                int32_t eax_90 = *(esi_1 + 0x60)
                
                if (add_overflow(eax_90, 4))
                    sub_403010()
                    noreturn
                
                int32_t var_18_1 = eax_90 + 4
                var_1c = nullptr
                
                if (add_overflow(sx.d(*(esi_1 + 2)), 0x22))
                    sub_403010()
                    noreturn
                
                int32_t edx_34
                edx_34.b = 9
                ebp_1[-2] = sub_483f98(0x3f800000)
                sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
                int32_t var_c_8 = sx.d(*(esi_1 + 4))
                int32_t eax_96 = *(esi_1 + 0x5c)
                
                if (add_overflow(eax_96, 0xffffffe2))
                    sub_403010()
                    noreturn
                
                int32_t eax_98 = *(esi_1 + 0x60)
                
                if (add_overflow(eax_98, 4))
                    sub_403010()
                    noreturn
                
                int32_t var_18_2 = 0
                var_1c = "ListText"
                esp = &var_1c
                int32_t ecx_20 = sx.d(*(esi_1 + 2))
                
                if (add_overflow(ecx_20, 0x24))
                    sub_403010()
                    noreturn
                
                void** eax_101
                eax_101, ebp_1, esi_1 =
                    sub_483d54(edi_1, 0xa, ecx_20 + 0x24, var_1c.b, var_18_2, eax_98 + 4, eax_96 - 0x1e)
                ebp_1[-2] = eax_101
                sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
        else if (ebx_2.b != 0xe)
            int32_t eax_128 = sx.d(*(esi_1 + 4))
            
            if (add_overflow(eax_128, 2))
                sub_403010()
                noreturn
            
            int32_t ecx_42 = sx.d(*(esi_1 + 2))
            int32_t ecx_43 = ecx_42 + *(esi_1 + 0x5c)
            
            if (add_overflow(ecx_42, *(esi_1 + 0x5c)))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_43, 6))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_43 + 6, 0xfffffffa))
                sub_403010()
                noreturn
            
            int32_t edx_26
            edx_26.b = 7
            ebp_1[-2] = sub_484b3c(edi_1, "Up", eax_128 + 2)
            sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
            int32_t eax_133 = sx.d(*(esi_1 + 4))
            int32_t eax_134 = eax_133 + *(esi_1 + 0x60)
            
            if (add_overflow(eax_133, *(esi_1 + 0x60)))
                sub_403010()
                noreturn
            
            if (add_overflow(eax_134, 0xffffffe5))
                sub_403010()
                noreturn
            
            int32_t ecx_47 = sx.d(*(esi_1 + 2))
            int32_t ecx_48 = ecx_47 + *(esi_1 + 0x5c)
            
            if (add_overflow(ecx_47, *(esi_1 + 0x5c)))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_48, 6))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_48 + 6, 0xfffffffa))
                sub_403010()
                noreturn
            
            int32_t edx_47
            edx_47.b = 7
            ebp_1[-2] = sub_484b3c(edi_1, "Down", eax_134 - 0x1b)
            sub_47a140(ebp_1[-2], *(edi_1 + 0x8a8), edi_1, 1)
            sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
            int32_t eax_140 = sx.d(*(esi_1 + 4))
            
            if (add_overflow(eax_140, 0x1c))
                sub_403010()
                noreturn
            
            int32_t var_c_17 = eax_140 + 0x1c
            void* const var_10_11 = "UpDown"
            int32_t var_14_5 = 0x1a
            int32_t eax_142 = *(esi_1 + 0x60)
            
            if (add_overflow(eax_142, 0xffffffc6))
                sub_403010()
                noreturn
            
            int32_t var_18_5 = eax_142 - 0x3a
            var_1c = nullptr
            int32_t ecx_53 = sx.d(*(esi_1 + 2))
            int32_t ecx_54 = ecx_53 + *(esi_1 + 0x5c)
            
            if (add_overflow(ecx_53, *(esi_1 + 0x5c)))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_54, 8))
                sub_403010()
                noreturn
            
            if (add_overflow(ecx_54 + 8, 0xfffffffa))
                sub_403010()
                noreturn
            
            int32_t edx_50
            edx_50.b = 8
            esp = &var_8
            ebp_1[-2] = sub_483f98(0x3f800000)
            sub_47b3d8(edi_1, ebp_1[-3], ebp_1[-2])
    
    if (ebx_2.b == 7)
        *(esi_1 + 0x5c) = 0x19
        *(esi_1 + 0x60) = 0x19
        *(esi_1 + 0x68) = 0x3c23d70a
    
    if (ebx_2.b == 8)
        *(esi_1 + 0x5c) = ebp_1[5]
        *(esi_1 + 0x5c) = 0x19
        *(esi_1 + 0x60) = ebp_1[4]
        *(esi_1 + 0x68) = 0x3c23d70a
    
    if (ebx_2.b == 9)
        *(esi_1 + 0x5c) = ebp_1[5]
        *(esi_1 + 0x60) = ebp_1[4]
        *(esi_1 + 0x68) = 0x3c23d70a
    
    ebp_1[-3]
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_484a95
    return sub_403e1c(&ebp_1[-7], 3)
}
