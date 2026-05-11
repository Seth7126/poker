// ============================================================
// 函数名称: sub_4fb834
// 虚拟地址: 0x4fb834
// WARP GUID: 13b392ea-8b84-5b74-80c9-16eb181e515d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4699a8, sub_4042c0, sub_46d5f4, sub_40401c, sub_402b4c, sub_404280, sub_403e1c, sub_403010, sub_404308, sub_469994, sub_404078, sub_402b3c, sub_402c90, sub_404188, sub_48c0c8, sub_40422c, sub_404248, sub_46fd7c, sub_403fa0, sub_403df8, sub_50a53c
// [被调用的父级函数]: sub_4f8b60
// ============================================================

void* __convention("regparm")sub_4fb834(void* arg1, int32_t arg2, float arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_16c = ebx
    int32_t esi
    int32_t var_170 = esi
    int32_t edi
    int32_t var_174 = edi
    int32_t var_168 = 0
    int32_t var_164 = 0
    int32_t var_160 = 0
    int32_t var_15c = 0
    int32_t var_150 = 0
    int32_t var_14c = 0
    int32_t var_148 = 0
    sub_40422c(arg1)
    int32_t* var_178 = &var_4
    int32_t (* var_17c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_30 = 0x3db020c5
    (*data_5306a4)(0x47ae147b, 0x3fb47ae1, 0x33333333, 0x3fc33333, 0x1eb851ec, 0x3fb1eb85, 
        ExceptionList, var_17c, var_178)
    int32_t var_14 = 0x3f19999a
    int32_t eax_4 = sub_50a53c(arg2)
    long double st0
    
    if (*(*data_530454 + (eax_4 << 2) + 0x244) != 0)
        int32_t eax_10 = sub_50a53c(arg2)
        
        if (*(*data_530454 + (eax_10 << 2) + 0x244) != 2)
            int32_t var_1c_3 = 0
        else
            if (add_overflow(arg2, 3))
                sub_403010()
                noreturn
            
            st0 = sub_402b3c(sub_4699a8(*data_530304, arg2 + 3) / fconvert.t(180f) * data_4fc2e4
                * fconvert.t(2f))
            long double temp2_1 = fconvert.t(0f)
            st0 - temp2_1
            
            if (not(test_bit(
                    ((st0 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(st0, temp2_1) ? 1 : 0) << 0xa
                        | (st0 == temp2_1 ? 1 : 0) << 0xe):1.b, 
                    0)))
                st0 = sub_402b3c(sub_4699a8(*data_530304, arg2 + 3) / fconvert.t(180f) * data_4fc2e4
                    * fconvert.t(2f))
                float var_1c_2 = fconvert.s(st0)
            else
                int32_t eax_15 = sub_50a53c(arg2)
                *(*data_530454 + (eax_15 << 2) + 0x244) = 3
                int32_t var_1c_1 = 0
    else
        int32_t eax_6 = sub_50a53c(arg2)
        *(*data_530454 + (eax_6 << 2) + 0x244) = 2
        
        if (add_overflow(arg2, 3))
            sub_403010()
            noreturn
        
        sub_469994(*data_530304, arg2 + 3, 0)
        int32_t var_1c = 0
    
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14_1 = 0x3fe0869c
    int32_t var_18
    __builtin_strncpy(&var_18, ")f\x7f>", 4)
    int32_t var_1c_4 = 0xbfc40803
    (*data_5306a4)(0x347b648f, var_1c_4, var_18, var_14_1, var_10, var_c)
    
    if (arg2 s> 1)
        int32_t eax_21
        
        if (*data_5300d0 == 8)
            eax_21 = 0
            
            switch (arg2)
                case 2
                    eax_21 = 0xffffffec
                case 3
                    eax_21 = 0xfffffff6
                case 4
                    eax_21 = 0x5a
                case 5
                    eax_21 = 0xa0
                case 6
                    eax_21 = 0x64
                case 7
                    eax_21 = 0x32
                case 8
                    eax_21 = 0xffffffec
        else if (*data_5300d0 == 7)
            eax_21 = 0
            
            if (arg2 == 3)
                eax_21 = 0
            
            if (arg2 == 4)
                eax_21 = 0x82
            
            if (arg2 == 5)
                eax_21 = 0x78
            
            if (arg2 == 6)
                eax_21 = 0x32
            
            if (arg2 == 7)
                eax_21 = 0xfffffff6
        else if (*data_5300d0 != 6)
            eax_21 = 0x78
        else
            eax_21 = 0x1e
            
            if (arg2 == 2)
                eax_21 = 0x50
            
            if (arg2 == 3)
                eax_21 = 0x50
            
            if (arg2 == 4)
                eax_21 = 0xc8
            
            if (arg2 == 5)
                eax_21 = 0x64
        
        int32_t var_c_1 = 0
        int32_t var_10_1 = 0
        int32_t var_14_2 = 0
        int32_t var_18_1 = 0
        int32_t var_20
        var_20.q = fconvert.d(float.t(eax_21) / fconvert.t(639f))
        (*data_5306a4)(var_20)
    
    if (arg2 == *data_5300d0)
        var_1c_4 = 0
        (*data_5306a4)(0, var_1c_4, 0, 0, 0x347b648f, 0xbfb40803)
    
    (*data_53006c)(0xde1)
    (*data_530034)(0xbe2)
    (*data_53006c)(0xb50)
    (*data_530334)(0x302, 0x303)
    int32_t var_40
    __builtin_memcpy(&var_40, *data_530304 + 0x1088, 0x10)
    float var_c_8
    
    if (arg2 != 1)
        var_c_8 = fconvert.s(data_4fc308 * fconvert.t(arg3))
    else
        var_c_8 = fconvert.s(data_4fc2fc * fconvert.t(arg3))
    
    int16_t top = 0
    int32_t var_3c
    int32_t var_38
    float var_34
    (*data_530518)(var_40, var_3c, var_38, fconvert.s(fconvert.t(var_34) * fconvert.t(var_c_8)))
    int32_t var_24 = 0x41300000
    
    if (*data_5300d0 == 8)
        int32_t var_24_1 = 0x41100000
    else if (*data_5300d0 == 7)
        int32_t var_24_2 = 0x41200000
    
    void* i = nullptr
    int32_t var_20_2 = 0
    int32_t var_2c = 0x3f800000
    int32_t var_28 = 0x3f800000
    
    while (i s< sub_404078(ebp_1[-1]))
        void* i_4 = i
        i += 1
        
        if (add_overflow(i_4, 1))
            sub_403010()
            noreturn
        
        *(ebp_1[-1] + i - 1)
        int32_t edx_12
        edx_12.b = *(ebp_1[-1] + i - 1)
        sub_403fa0()
        void* i_3
        ebp_1, i_3 = sub_46fd7c(*data_530304, ebp_1[-0x51])
        unimplemented  {fadd dword [ebp-0x1c]}
        ebp_1[-7] = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
        unimplemented  {fstp dword [ebp-0x1c], st0}
        int16_t top_1 = top + 1
        
        if (*(ebp_1[-1] + i - 1) == 0xd)
            if (i s>= sub_404078(ebp_1[-1]) || *(ebp_1[-1] + i) != 0xd)
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fadd dword [0x4fc314]}
                ebp_1[-0xa] = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
            else
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fadd dword [0x4fc314]}
                ebp_1[-0xa] = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
            
            ebp_1[-7] = 0
        
        unimplemented  {fld st0, dword [ebp-0x1c]}
        long double temp4_1 = fconvert.t(ebp_1[-9])
        unimplemented  {fcomp st0, dword [ebp-0x24]} f- temp4_1
        bool c0_2 = unimplemented  {fcomp st0, dword [ebp-0x24]} f< temp4_1
        bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x24]}, temp4_1)
        bool c3_2 = unimplemented  {fcomp st0, dword [ebp-0x24]} f== temp4_1
        unimplemented  {fcomp st0, dword [ebp-0x24]}
        void* const eax_47
        eax_47.w =
            (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
        
        if (not(test_bit(eax_47:1.b, 6)) && not(test_bit(eax_47:1.b, 0)))
            ebp_1[-9] = ebp_1[-7]
        
        unimplemented  {fld st0, dword [ebp-0x20]}
        unimplemented  {fmul st0, dword [0x4fc318]}
        long double temp6_1 = fconvert.t(ebp_1[-7])
        unimplemented  {fcomp st0, dword [ebp-0x1c]} f- temp6_1
        bool c0_3 = unimplemented  {fcomp st0, dword [ebp-0x1c]} f< temp6_1
        bool c2_3 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x1c]}, temp6_1)
        bool c3_3 = unimplemented  {fcomp st0, dword [ebp-0x1c]} f== temp6_1
        unimplemented  {fcomp st0, dword [ebp-0x1c]}
        eax_47.w =
            (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
        
        if (test_bit(eax_47:1.b, 0))
        label_4fbcb3:
            
            if (*(ebp_1[-1] + i - 1) != 0x20 && i_3 != 0)
                i = i_3
            
            unimplemented  {fld st0, dword [ebp-0x28]}
            unimplemented  {fadd dword [0x4fc314]}
            ebp_1[-0xa] = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
            unimplemented  {fstp dword [ebp-0x28], st0}
            ebp_1[-7] = 0
            
            if (*(ebp_1[-1] + i - 1) != 0x20)
                sub_404308(0x4fc324, &ebp_1[-1], i)
                void* i_5 = i
                i += 1
                
                if (add_overflow(i_5, 1))
                    sub_403010()
                    noreturn
            else
                *(sub_404248(&ebp_1[-1]) + i - 1) = 0xd
        else
            unimplemented  {fld st0, dword [ebp-0x20]}
            unimplemented  {fmul st0, dword [0x4fc314]}
            long double temp7_1 = fconvert.t(ebp_1[-7])
            unimplemented  {fcomp st0, dword [ebp-0x1c]} f- temp7_1
            bool c0_4 = unimplemented  {fcomp st0, dword [ebp-0x1c]} f< temp7_1
            bool c2_4 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x1c]}, temp7_1)
            bool c3_4 = unimplemented  {fcomp st0, dword [ebp-0x1c]} f== temp7_1
            unimplemented  {fcomp st0, dword [ebp-0x1c]}
            eax_47.w =
                (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
            
            if (test_bit(eax_47:1.b, 0) && *(ebp_1[-1] + i - 1) == 0x20)
                goto label_4fbcb3
        
        unimplemented  {fld st0, dword [ebp-0x28]}
        long double temp9_1 = fconvert.t(7f)
        unimplemented  {fcomp st0, dword [0x4fc328]} f- temp9_1
        bool c0_5 = unimplemented  {fcomp st0, dword [0x4fc328]} f< temp9_1
        bool c2_5 = is_unordered.t(unimplemented  {fcomp st0, dword [0x4fc328]}, temp9_1)
        bool c3_5 = unimplemented  {fcomp st0, dword [0x4fc328]} f== temp9_1
        unimplemented  {fcomp st0, dword [0x4fc328]}
        top = top_1
        eax_47.w =
            (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top & 7) << 0xb
        bool z_2 = test_bit(eax_47:1.b, 6)
        
        if (not(z_2) && not(test_bit(eax_47:1.b, 0)))
            unimplemented  {fld st0, tword [0x4fc32c]}
            unimplemented  {fsubr st0, dword [ebp-0x28]}
            ebp_1[-0xa] = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
            unimplemented  {fstp dword [ebp-0x28], st0}
            sub_404280(i, 1, ebp_1[-1], &ebp_1[-1])
            
            while (true)
                sub_404280(1, sub_404078(ebp_1[-1]), ebp_1[-1], &ebp_1[-0x52])
                sub_404188(ebp_1[-0x52], 0x4fc324)
                
                if (z_2)
                    break
                
                sub_4042c0(&ebp_1[-1], sub_404078(ebp_1[-1]), 1)
            
            while (true)
                sub_404280(1, sub_404078(ebp_1[-1]), ebp_1[-1], &ebp_1[-0x53])
                char* eax_71
                eax_71.b = *ebp_1[-0x53]
                char temp12_1 = eax_71.b
                eax_71.b -= 0xd
                
                if (temp12_1 != 0xd)
                    char temp14_1 = eax_71.b
                    eax_71.b -= 0x7e
                    
                    if (temp14_1 != 0x7e)
                        break
                
                sub_4042c0(&ebp_1[-1], sub_404078(ebp_1[-1]), 1)
            
            break
    
    int16_t top_13
    
    if (sub_404078(ebp_1[-1]) s> 0xc)
        if (sub_404078(ebp_1[-1]) s> 0x18)
            unimplemented  {fld st0, tword [0x4fc350]}
            unimplemented  {fmul st0, dword [ebp-0x10]}
            ebp_1[-4] = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            top_13 = top
        else
            unimplemented  {fld st0, tword [0x4fc344]}
            unimplemented  {fmul st0, dword [ebp-0x10]}
            ebp_1[-4] = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            top_13 = top
    else
        unimplemented  {fld st0, tword [0x4fc338]}
        unimplemented  {fmul st0, dword [ebp-0x10]}
        ebp_1[-4] = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
        top_13 = top
    
    if (arg2 == 1)
        unimplemented  {fld st0, tword [0x4fc35c]}
        unimplemented  {fmul st0, dword [ebp-0x10]}
        ebp_1[-4] = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
    
    ebp_1[-0x50] = arg2
    unimplemented  {fild st0, dword [ebp-0x140]}
    unimplemented  {fild st0, dword [eax]}
    unimplemented  {fdivp st1, st0}
    unimplemented  {fdivp st1, st0}
    long double temp5 = fconvert.t(0.5f)
    unimplemented  {fcomp st0, dword [0x4fc368]} f- temp5
    bool c0_6 = unimplemented  {fcomp st0, dword [0x4fc368]} f< temp5
    bool c2_6 = is_unordered.t(unimplemented  {fcomp st0, dword [0x4fc368]}, temp5)
    bool c3_6 = unimplemented  {fcomp st0, dword [0x4fc368]} f== temp5
    unimplemented  {fcomp st0, dword [0x4fc368]}
    int16_t eax_78 =
        (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | (top_13 & 7) << 0xb
    
    if (not(test_bit(eax_78:1.b, 6)) && not(test_bit(eax_78:1.b, 0)))
        unimplemented  {fld st0, tword [0x4fc36c]}
        unimplemented  {fmul st0, dword [ebp-0x10]}
        ebp_1[-4] = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
    
    unimplemented  {fld st0, tword [0x4fc378]}
    unimplemented  {fmul st0, dword [ebp-0x24]}
    unimplemented  {fld st0, tword [0x4fc384]}
    unimplemented  {faddp st1, st0}
    unimplemented  {faddp st1, st0}
    unimplemented  {fmul st0, dword [ebp-0x10]}
    ebp_1[-3] = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
    unimplemented  {fstp dword [ebp-0xc], st0}
    int32_t var_c_13 = 0
    int32_t var_10_5 = 0
    unimplemented  {fld st0, tword [0x4fc390]}
    unimplemented  {fmul st0, dword [ebp-0x28]}
    unimplemented  {fmul st0, dword [ebp-0x2c]}
    unimplemented  {fld st0, tword [0x4fc350]}
    unimplemented  {fmulp st1, st0}
    unimplemented  {fmulp st1, st0}
    unimplemented  {fdiv st0, dword [0x4fc2f0]}
    unimplemented  {fmul st0, dword [eax+0xe4c]}
    unimplemented  {fmul st0, dword [ebp-0x10]}
    int32_t var_18_3
    var_18_3.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
    unimplemented  {fstp qword [esp], st0}
    unimplemented  {fld st0, tword [0x4fc39c]}
    unimplemented  {fsubr st0, dword [ebp-0xc]}
    unimplemented  {fchs }
    unimplemented  {fmul st0, dword [0x4fc3a8]}
    unimplemented  {fld st0, tword [0x4fc3ac]}
    unimplemented  {fmulp st1, st0}
    unimplemented  {fmulp st1, st0}
    int32_t eax_79
    int32_t edx_19
    eax_79, edx_19 = sub_402b4c(st0)
    ebp_1[-0x55] = eax_79
    ebp_1[-0x54] = edx_19
    unimplemented  {fild st0, qword [ebp-0x154]}
    unimplemented  {fld st0, tword [0x4fc3b8]}
    unimplemented  {fmulp st1, st0}
    unimplemented  {fmulp st1, st0}
    unimplemented  {fld st0, tword [0x4fc3c4]}
    unimplemented  {faddp st1, st0}
    unimplemented  {faddp st1, st0}
    var_20_2.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
    unimplemented  {fstp qword [esp], st0}
    (*data_5306a4)(var_20_2, var_1c_4, var_18_3)
    int32_t var_c_14 = 0
    int32_t var_10_6 = 0
    unimplemented  {fld st0, dword [ebp-0x18]}
    unimplemented  {fdiv st0, dword [0x4fc2f8]}
    unimplemented  {fmul st0, dword [0x4fc3d0]}
    var_18_3.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
    unimplemented  {fstp qword [esp], st0}
    (*data_5306a4)(0, 0, var_18_3)
    
    if (arg2 == 1 && *(data_5304fc + 0x109c0) s>= 0x10)
        (*data_5306a4)(0, 0, 0, 0, 0x722dabde, 0x3fa8099d)
    
    if (arg2 == 1)
        (*data_5306b4)(0xc1900000, 0x3f800000, 0, 0)
    
    int32_t var_c_17 = 0
    unimplemented  {fld st0, dword [ebp-0xc]}
    unimplemented  {fmul st0, dword [0x4fc3a8]}
    int32_t var_10_9 = sub_402b4c(st0)
    unimplemented  {fld st0, tword [0x4fc3ac]}
    unimplemented  {fadd dword [ebp-0x28]}
    unimplemented  {fmul st0, dword [ebp-0x2c]}
    unimplemented  {fmul st0, dword [0x4fc3d4]}
    unimplemented  {fmul st0, dword [ebp-0x10]}
    int32_t eax_90 = sub_402b4c(st0)
    int32_t var_18_6 = 0x14
    void* ebp_2 = sub_46d5f4(*data_530304, 0, 0f, 0, ebp_1[2])
    unimplemented  {fld st0, tword [0x4fc350]}
    unimplemented  {fmul st0, dword [ebp-0x28]}
    unimplemented  {fmul st0, dword [ebp-0x2c]}
    unimplemented  {fmul st0, dword [eax+0xe4c]}
    unimplemented  {fmul st0, dword [ebp-0x10]}
    unimplemented  {fld st0, tword [0x4fc3d8]}
    unimplemented  {faddp st1, st0}
    unimplemented  {faddp st1, st0}
    var_18_6.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
    unimplemented  {fstp qword [esp], st0}
    int16_t top_49 = top_13
    int32_t var_1c_8 = 0x3f826e97
    (*data_5306a4)(0x8d4fdf3b, var_1c_8, var_18_6, eax_90, 0, 0)
    (*data_530334)(0x302, 1)
    (*data_53006c)(0xb50)
    (*data_530034)(0xde1)
    (*data_530034)(0xbe2)
    (*data_530334)(0, 0x301)
    int32_t var_14_8 = 0x3f800000
    (*data_530518)(0x3f800000, var_14_8, 0x3f800000, *(ebp_2 + 8))
    (*data_53036c)(0xde1, *(*data_530304 + 0x8c8))
    int32_t edi_4 = 0
    *(ebp_2 - 0x14) = 0
    int32_t i_2 = sub_404078(*(ebp_2 - 4))
    
    if (i_2 s> 0)
        int32_t ebx_3 = 1
        int32_t i_1
        
        do
            if (ebx_3 == sub_404078(*(ebp_2 - 4)) || *(*(ebp_2 - 4) + ebx_3 - 1) == 0xd)
                int32_t ecx_3
                ecx_3.b = *(ebp_2 - 0x13c)
                sub_402c90(ebp_2 - 0x13c, 0x4fc3e4, ecx_3 + 1)
                int16_t top_51
                int32_t var_18_7
                
                if (ecx_3 == 0xffffffff)
                    unimplemented  {fld st0, dword [ebp-0x2c]}
                    unimplemented  {fchs }
                    unimplemented  {fmul st0, dword [eax+0xe4c]}
                    unimplemented  {fmul st0, dword [ebp-0x10]}
                    var_18_7.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    top_51 = top_49
                    var_1c_8 = 0
                    (*data_5306a4)(0, var_1c_8, var_18_7, var_14_8, 0, 0)
                else
                    int32_t var_20_6
                    
                    if (*(*(ebp_2 - 4) + ebx_3 - 1) != 0xd || ebx_3 s<= 0
                            || *(*(ebp_2 - 4) + ebx_3 - 2) != 0xd)
                        unimplemented  {fld st0, dword [ebp-0x2c]}
                        unimplemented  {fchs }
                        unimplemented  {fmul st0, dword [eax+0xe4c]}
                        unimplemented  {fmul st0, dword [ebp-0x10]}
                        var_18_7.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        unimplemented  {fld st0, tword [0x4fc3ec]}
                        unimplemented  {fmul st0, dword [ebp-0x10]}
                        unimplemented  {fmul st0, dword [ebp-0x14]}
                        var_20_6.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        top_51 = top_49
                        (*data_5306a4)(var_20_6, var_1c_8, var_18_7, var_14_8, 0, 0)
                    else
                        unimplemented  {fld st0, dword [0x4fc3e8]}
                        unimplemented  {fmul st0, dword [ebp-0x2c]}
                        unimplemented  {fmul st0, dword [eax+0xe4c]}
                        unimplemented  {fmul st0, dword [ebp-0x10]}
                        var_18_7.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        unimplemented  {fld st0, tword [0x4fc3ec]}
                        unimplemented  {fmul st0, dword [ebp-0x10]}
                        unimplemented  {fmul st0, dword [ebp-0x14]}
                        var_20_6.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        top_51 = top_49
                        (*data_5306a4)(var_20_6, var_1c_8, var_18_7, var_14_8, 0, 0)
                int32_t ecx_8
                
                if (*(*(ebp_2 - 4) + ebx_3 - 1) != 0xd)
                    if (add_overflow(ebx_3, neg.d(edi_4)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edi_4, 1))
                        sub_403010()
                        noreturn
                    
                    sub_404280(ebx_3 - edi_4, edi_4 + 1, *(ebp_2 - 4), ebp_2 - 0x15c)
                    ecx_8 = sub_404054(ebp_2 - 0x13c, *(ebp_2 - 0x15c), 0xff)
                else
                    int32_t ecx_6 = ebx_3 - edi_4
                    
                    if (add_overflow(ebx_3, neg.d(edi_4)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(ecx_6, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edi_4, 1))
                        sub_403010()
                        noreturn
                    
                    sub_404280(ecx_6 - 1, edi_4 + 1, *(ebp_2 - 4), ebp_2 - 0x158)
                    ecx_8 = sub_404054(ebp_2 - 0x13c, *(ebp_2 - 0x158), 0xff)
                
                sub_40401c(ecx_8, ebp_2 - 0x13c)
                int32_t ecx_11
                void* ebp_3
                ecx_11, ebp_3 = sub_46fd7c(*data_530304, *(ebp_2 - 0x160))
                unimplemented  {fdiv st0, dword [0x4fc2f0]}
                unimplemented  {fmul st0, dword [eax+0xe4c]}
                *(ebp_3 - 0x14) = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                top_49 = top_51 + 1
                int32_t var_c_31 = *(ebp_3 - 0x10)
                int32_t var_10_18 = 0x3f800000
                var_14_8 = *(ebp_3 - 0xc)
                int32_t ecx_12 = sub_40401c(ecx_11, ebp_3 - 0x13c)
                ebp_2 = sub_48c0c8(*data_530304, *(ebp_3 - 0x164), ecx_12, var_14_8, var_10_18)
                edi_4 = ebx_3
            
            ebx_3 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    (*data_530034)(0xb50)
    (*data_53051c)(0x203)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4fc2d7
    sub_403e1c(ebp_2 - 0x164, 4)
    sub_403e1c(ebp_2 - 0x14c, 3)
    sub_403df8(ebp_2 - 4)
    return ebp_2 - 4
}
