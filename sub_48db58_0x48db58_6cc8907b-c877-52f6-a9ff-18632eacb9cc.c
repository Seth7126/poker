// ============================================================
// 函数名称: sub_48db58
// 虚拟地址: 0x48db58
// WARP GUID: 6cc8907b-c877-52f6-a9ff-18632eacb9cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_46fd7c, sub_403fa0, sub_476c94, sub_403df8, sub_402b2c, sub_403010
// [被调用的父级函数]: sub_48c290, sub_48c0c8
// ============================================================

void* __convention("regparm")sub_48db58(int32_t arg1, char arg2, long double arg3 @ st0, float arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_48 = ebx
    int32_t esi
    int32_t var_4c = esi
    int32_t edi
    int32_t var_50 = edi
    void* var_40 = nullptr
    int32_t* var_54 = &var_4
    int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_39 = 0
    int32_t var_74
    int32_t var_70
    
    if (arg2 == 0x82)
        arg4 = fconvert.s(data_48e73c * fconvert.t(arg4))
        var_70 = 0xbf707b9f
        var_74 = 0x29b8eae2
        (*data_5306a4)(0x29b8eae2, 0xbf707b9f, 0xcbaab375, 0xbf63c78b, 0, 0)
    else if (arg2 == 0x86)
        arg4 = fconvert.s(data_48e73c * fconvert.t(arg4))
        var_70 = 0xbf707b9f
        var_74 = 0x29b8eae2
        (*data_5306a4)(0x29b8eae2, 0xbf707b9f, 0, 0, 0, 0)
    
    sub_403fa0()
    int32_t ecx
    void* ebp_1
    ecx, ebp_1 = sub_46fd7c(arg1, var_40)
    *(ebp_1 - 0x28) = fconvert.s(arg3 / fconvert.t(2f) * fconvert.t(*(*(ebp_1 - 4) + 0xe4c)))
    *(ebp_1 - 4)
    int32_t ebx_1 = sub_476c94(ecx, *(ebp_1 - 5))
    *(ebp_1 - 0x24) = fconvert.s(data_48e74c * fconvert.t(*(ebp_1 + 0x18)))
    *(ebp_1 - 0x20) = fconvert.s(data_48e74c * fconvert.t(*(ebp_1 + 0x18)) * data_48e758 * data_48e764)
    
    if (*(ebp_1 + 0xc) s> 0)
        *(ebp_1 - 0x20) = fconvert.s(data_48e74c * fconvert.t(*(ebp_1 + 0x18)) * float.t(*(ebp_1 + 0xc))
            / fconvert.t(1000f))
    
    *(ebp_1 - 0xc) = 0x40400000
    *(ebp_1 - 0x18) =
        fconvert.s(fconvert.t(*(ebp_1 - 0xc)) / fconvert.t(10f) * data_48e778 * data_48e758)
    *(ebp_1 - 0x1c) =
        fconvert.s(fconvert.t(*(ebp_1 - 0xc)) / fconvert.t(10f) / data_48e784 * data_48e778)
    int32_t edi_2 = ebx_1 & 0x8000000f
    
    if (edi_2 s< 0)
        edi_2 = ((edi_2 - 1) | 0xfffffff0) + 1
    
    if (ebx_1 s< 0)
        ebx_1 += 0xf
    
    int32_t ebx_2 = ebx_1 s>> 4
    
    if (add_overflow(7, neg.d(ebx_2)))
        sub_403010()
        noreturn
    
    *(ebp_1 - 0x40) = edi_2
    *(ebp_1 - 0x10) = fconvert.s(float.t(*(ebp_1 - 0x40)) * data_48e790 + data_48e79c)
    *(ebp_1 - 0x40) = 7 - ebx_2
    *(ebp_1 - 0x14) = fconvert.s(float.t(*(ebp_1 - 0x40)) * data_48e7a8 + data_48e7b4)
    
    if (*(ebp_1 + 8) == 0)
        if (*(ebp_1 - 5) != 0x8b)
            if (*(ebp_1 + 0xc) s> 0)
                var_74.q =
                    fconvert.d(data_48e7c4 * fconvert.t(*(ebp_1 + 0x18)) * fconvert.t(*(ebp_1 - 0x28)))
                (*data_5306a4)(var_74, var_70, 0, 0, 0, 0)
            
            var_74.q =
                fconvert.d(data_48e7d0 * fconvert.t(*(ebp_1 + 0x18)) * fconvert.t(*(ebp_1 - 0x28)))
            (*data_5306a4)(var_74, var_70, 0, 0, 0, 0)
        else
            *(ebp_1 - 0x20) =
                fconvert.s(data_48e74c * fconvert.t(*(ebp_1 + 0x18)) * data_48e758 * fconvert.t(10.5f))
            *(ebp_1 - 0x24) = 0x3d4ccccd
    
    *(ebp_1 - 0x34) = 1
    int32_t i
    
    do
        if (*(ebp_1 + 8) != 0)
            int32_t eax_12
            eax_12.b = *(ebp_1 - 5)
            
            if (add_overflow(eax_12, 0xffffff9c))
                sub_403010()
                noreturn
            
            *(ebp_1 - 0x40) = eax_12 - 0x64
            *(ebp_1 - 0x2c) = fconvert.s(float.t(*(ebp_1 - 0x40)) / fconvert.t(100f))
            (*data_53006c)(0xde1)
            (*data_530334)(0x302, 0x303)
            
            for (int32_t j = 1; j != 3; j += 1)
                if (j != 2)
                    *(ebp_1 - 0x30) = 0x3f800000
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3ecccccd)
                else
                    (*data_5301d4)(0, 0, 0x3b03126f)
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
                    __builtin_strncpy(ebp_1 - 0x30, "33s?", 4)
                
                (*data_52ffd4)(6)
                (*data_530744)(fconvert.s(data_48e7ec * fconvert.t(*(ebp_1 - 0x20)) * data_48e7f8), 
                    fconvert.s(data_48e7e0 * fconvert.t(*(ebp_1 - 0x24))))
                
                if (j != 1)
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f19999a)
                else
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3e4ccccd)
                
                *(ebp_1 - 0x36) = 0
                
                for (int32_t k = 0; k != 0x65; k += 1)
                    int32_t eax_34
                    int32_t edx_2
                    
                    if (*(ebp_1 - 0x36) != 0)
                        edx_2:eax_34 = sx.q(k)
                    
                    if (*(ebp_1 - 0x36) == 0 || mods.dp.d(edx_2:eax_34, 0xa) == 0)
                        int16_t eax_30
                        
                        if (j != 1)
                            *(ebp_1 - 0x40) = k
                            long double x87_r0_43 = float.t(*(ebp_1 - 0x40)) / fconvert.t(100f)
                            long double temp6_1 = fconvert.t(*(ebp_1 - 0x2c))
                            x87_r0_43 - temp6_1
                            eax_30 = (x87_r0_43 < temp6_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_43, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r0_43 == temp6_1 ? 1 : 0) << 0xe | 0x800
                        
                        if (j == 1 || test_bit(eax_30:1.b, 6) || test_bit(eax_30:1.b, 0))
                            if (add_overflow(k, 1))
                                sub_403010()
                                noreturn
                            
                            *(ebp_1 - 0x40) = k + 1
                            long double x87_r0_45 = float.t(*(ebp_1 - 0x40)) / fconvert.t(100f)
                            long double temp7_1 = fconvert.t(*(ebp_1 - 0x2c))
                            x87_r0_45 - temp7_1
                            int32_t eax_36
                            eax_36.w = (x87_r0_45 < temp7_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_45, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r0_45 == temp7_1 ? 1 : 0) << 0xe | 0x800
                            
                            if (not(test_bit(eax_36:1.b, 6)) && not(test_bit(eax_36:1.b, 0)))
                                *(ebp_1 - 0x36) = 1
                            
                            *(ebp_1 - 0x40) = k
                            *(ebp_1 - 0x10) = fconvert.s(fneg(sub_402b3c(float.t(*(ebp_1 - 0x40))
                                / fconvert.t(100f) * data_48e804 * fconvert.t(2f)))
                                * fconvert.t(*(ebp_1 - 0x20)) * fconvert.t(0.5f)
                                * fconvert.t(*(ebp_1 - 0x30)))
                            *(ebp_1 - 0x40) = k
                            *(ebp_1 - 0x14) = fconvert.s(sub_402b2c(float.t(*(ebp_1 - 0x40))
                                / fconvert.t(100f) * data_48e804 * fconvert.t(2f))
                                * fconvert.t(*(ebp_1 - 0x24)) * fconvert.t(0.5f)
                                * fconvert.t(*(ebp_1 - 0x30)))
                            (*data_530744)(
                                fconvert.s((data_48e7ec * fconvert.t(*(ebp_1 - 0x20))
                                    + fconvert.t(*(ebp_1 - 0x10))) * data_48e7f8), 
                                fconvert.s(data_48e7e0 * fconvert.t(*(ebp_1 - 0x24))
                                + fconvert.t(*(ebp_1 - 0x14))))
                
                (*data_530a08)()
            
            (*data_530334)(0x302, 1)
            (*data_530034)(0xde1)
        else if (*(ebp_1 + 0xc) == 0xfffffffb)
            *(ebp_1 - 0x2c) = fconvert.s((sub_402b3c(fconvert.t(*(*(ebp_1 - 4) + 0xa70))
                / fconvert.t(180f) * data_48e804 * fconvert.t(2f)) * data_48e74c + data_48e818)
                * fconvert.t(data_5320c4))
            (*data_52ffd4)(7)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
            (*data_5307f8)(*(ebp_1 - 0x10), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(0xbc03126f, 0)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(fconvert.s(fconvert.t(*(ebp_1 - 0x20)) - data_48e824), 0)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                *(ebp_1 - 0x14))
            (*data_530744)(fconvert.s(data_48e830 + fconvert.t(*(ebp_1 - 0x20))), *(ebp_1 - 0x24))
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
            (*data_5307f8)(*(ebp_1 - 0x10), *(ebp_1 - 0x14))
            (*data_530744)(0x3a83126f, *(ebp_1 - 0x24))
            (*data_530a08)()
        else if (*(ebp_1 + 0xc) == 0xfffffffd)
            *(ebp_1 - 0x2c) = fconvert.s((sub_402b3c(fconvert.t(*(*(ebp_1 - 4) + 0xa6c))
                / fconvert.t(180f) * data_48e804 * fconvert.t(2f)) * data_48e7ec + data_48e83c)
                * fconvert.t(data_5320c4))
            (*data_52ffd4)(7)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
            (*data_5307f8)(*(ebp_1 - 0x10), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(0xbc03126f, 0)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(fconvert.s(fconvert.t(*(ebp_1 - 0x20)) - data_48e824), 0)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                *(ebp_1 - 0x14))
            (*data_530744)(fconvert.s(data_48e830 + fconvert.t(*(ebp_1 - 0x20))), *(ebp_1 - 0x24))
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
            (*data_5307f8)(*(ebp_1 - 0x10), *(ebp_1 - 0x14))
            (*data_530744)(0x3a83126f, *(ebp_1 - 0x24))
            (*data_530a08)()
        else if (*(ebp_1 + 0xc) == 0xfffffffc)
            *(ebp_1 - 0x2c) = fconvert.s(sub_402b3c(fconvert.t(*(*(ebp_1 - 4) + 0xa6c))
                / fconvert.t(180f) * data_48e804 * fconvert.t(2f)) * data_48e848 + data_48e854)
            (*data_52ffd4)(7)
            *(ebp_1 - 0x24) = fconvert.s(data_48e860 * fconvert.t(*(ebp_1 - 0x24)))
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
            (*data_5307f8)(*(ebp_1 - 0x10), *(ebp_1 - 0x14))
            (*data_530744)(0x3a83126f, 0x3c343958)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                *(ebp_1 - 0x14))
            (*data_530744)(fconvert.s(data_48e830 + fconvert.t(*(ebp_1 - 0x20))), 0x3c343958)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(fconvert.s(fconvert.t(*(ebp_1 - 0x20)) - data_48e878), 
                fconvert.s(data_48e86c + fconvert.t(*(ebp_1 - 0x24))))
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
            (*data_5307f8)(*(ebp_1 - 0x10), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(0xbd449ba6, fconvert.s(data_48e86c + fconvert.t(*(ebp_1 - 0x24))))
            (*data_530a08)()
        else if (*(ebp_1 + 0xc) != 0xffffffff)
            (*data_52ffd4)(7)
            (*data_5307f8)(*(ebp_1 - 0x10), *(ebp_1 - 0x14))
            (*data_530744)(0, 0)
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                *(ebp_1 - 0x14))
            (*data_530744)(*(ebp_1 - 0x20), 0)
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(*(ebp_1 - 0x20), *(ebp_1 - 0x24))
            (*data_5307f8)(*(ebp_1 - 0x10), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(0, *(ebp_1 - 0x24))
            (*data_530a08)()
        else
            *(ebp_1 - 0x2c) = 0x3c23d70a
            *(ebp_1 - 0x30) = fconvert.s(fconvert.t(*(ebp_1 - 0x2c)) * fconvert.t(*(ebp_1 - 0x24)))
            *(ebp_1 - 0x14) = fconvert.s(data_48e7a8 * fconvert.t(*(ebp_1 - 0x2c)) * fconvert.t(2.5f)
                + fconvert.t(*(ebp_1 - 0x14)))
            *(ebp_1 - 0x1c) = fconvert.s((fconvert.t(1f) - fconvert.t(*(ebp_1 - 0x2c)) * fconvert.t(4f))
                * fconvert.t(*(ebp_1 - 0x1c)))
            *(ebp_1 - 0x24) = fconvert.s((fconvert.t(1f) - fconvert.t(*(ebp_1 - 0x2c)) * fconvert.t(4f))
                * fconvert.t(*(ebp_1 - 0x24)))
            (*data_52ffd4)(7)
            (*data_5307f8)(*(ebp_1 - 0x10), *(ebp_1 - 0x14))
            (*data_530744)(0, *(ebp_1 - 0x30))
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                *(ebp_1 - 0x14))
            (*data_530744)(*(ebp_1 - 0x20), *(ebp_1 - 0x30))
            (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(*(ebp_1 - 0x20), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x30)) + fconvert.t(*(ebp_1 - 0x24))))
            (*data_5307f8)(*(ebp_1 - 0x10), 
                fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
            (*data_530744)(0, fconvert.s(fconvert.t(*(ebp_1 - 0x30)) + fconvert.t(*(ebp_1 - 0x24))))
            (*data_530a08)()
        
        i = *(ebp_1 - 0x34)
        *(ebp_1 - 0x34) -= 1
    while (i != 1)
    
    if (*(ebp_1 - 5) != 0x8b && *(ebp_1 + 8) == 0)
        if (*(ebp_1 + 0xc) s> 0)
            var_74.q =
                fconvert.d(data_48e890 * fconvert.t(*(ebp_1 + 0x18)) * fconvert.t(*(ebp_1 - 0x28)))
            (*data_5306a4)(var_74, var_70, 0, 0, 0, 0)
        else if (*(ebp_1 - 0x35) == 0)
            var_74.q =
                fconvert.d(data_48e7d0 * fconvert.t(*(ebp_1 + 0x18)) * fconvert.t(*(ebp_1 - 0x28)))
            (*data_5306a4)(var_74, var_70, 0, 0, 0, 0)
        else
            var_74.q =
                fconvert.d(data_48e7d0 * fconvert.t(*(ebp_1 + 0x18)) * fconvert.t(*(ebp_1 - 0x28)))
            (*data_5306a4)(var_74, var_70, 0x6d9c7c09, 0xbf571378, 0, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_54_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_48e730
    sub_403df8(ebp_1 - 0x3c)
    return ebp_1 - 0x3c
}
