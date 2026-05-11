// ============================================================
// 函数名称: sub_48cfc8
// 虚拟地址: 0x48cfc8
// WARP GUID: 4928ae56-9447-5416-a55d-14eb360dcd34
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b3c, sub_46fd7c, sub_4699b8, sub_403fa0, sub_476c94, sub_403df8, sub_402b2c, sub_403010
// [被调用的父级函数]: sub_48c290, sub_48c0c8
// ============================================================

void* __convention("regparm")sub_48cfc8(int32_t arg1, long double arg2 @ st0)
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
    int32_t* var_54 = &var_4
    int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_39 = 0
    sub_403fa0()
    int32_t ecx
    void* ebp_1
    ecx, ebp_1 = sub_46fd7c(arg1, nullptr)
    *(ebp_1 - 0x28) = fconvert.s(arg2 / fconvert.t(2f) * fconvert.t(*(*(ebp_1 - 4) + 0xe4c)))
    *(ebp_1 - 4)
    int32_t ebx_1 = sub_476c94(ecx, *(ebp_1 - 5))
    *(ebp_1 - 0x24) = fconvert.s(data_48da14 * fconvert.t(*(ebp_1 + 0x1c)))
    *(ebp_1 - 0x20) = fconvert.s(data_48da14 * fconvert.t(*(ebp_1 + 0x1c)) * data_48da20)
    
    if (*(ebp_1 + 0x10) s> 0)
        *(ebp_1 - 0x20) = fconvert.s(data_48da14 * fconvert.t(*(ebp_1 + 0x1c))
            * float.t(*(ebp_1 + 0x10)) / fconvert.t(1000f))
    
    *(ebp_1 - 0xc) = 0x40400000
    *(ebp_1 - 0x18) =
        fconvert.s(fconvert.t(*(ebp_1 - 0xc)) / fconvert.t(10f) * data_48da34 * data_48da20)
    *(ebp_1 - 0x1c) =
        fconvert.s(fconvert.t(*(ebp_1 - 0xc)) / fconvert.t(10f) / data_48da40 * data_48da34)
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
    *(ebp_1 - 0x10) = fconvert.s(float.t(*(ebp_1 - 0x40)) * data_48da4c + data_48da58)
    *(ebp_1 - 0x40) = 7 - ebx_2
    *(ebp_1 - 0x14) = fconvert.s(float.t(*(ebp_1 - 0x40)) * data_48da64 + data_48da70)
    
    if (*(ebp_1 + 0xc) == 0)
        if (*(ebp_1 - 5) != 0x8b)
            if (*(ebp_1 + 0x10) s> 0)
                (*data_5306a4)(
                    fconvert.d(data_48da80 * fconvert.t(*(ebp_1 + 0x1c))
                        * fconvert.t(*(ebp_1 - 0x28))), 
                    0, 0, 0, 0)
            
            (*data_5306a4)(
                fconvert.d(data_48da8c * fconvert.t(*(ebp_1 + 0x1c)) * fconvert.t(*(ebp_1 - 0x28))), 0, 
                0, 0, 0)
        else
            *(ebp_1 - 0x20) =
                fconvert.s(data_48da14 * fconvert.t(*(ebp_1 + 0x1c)) * data_48da20 * fconvert.t(10.5f))
            *(ebp_1 - 0x24) = 0x3d4ccccd
    
    *(ebp_1 - 0x34) = 1
    int32_t i
    
    do
        if (*(ebp_1 + 0xc) == 0)
            if (*(ebp_1 + 0x10) == 0xfffffffd)
                *(ebp_1 - 0x2c) = fconvert.s((sub_402b3c(fconvert.t(*(*(ebp_1 - 4) + 0xa6c))
                    / fconvert.t(180f) * data_48dad0 * fconvert.t(2f)) * data_48daa0 + data_48dae4)
                    * fconvert.t(data_5320c4))
                (*data_52ffd4)(7)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
                (*data_5307f8)(*(ebp_1 - 0x10), 
                    fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
                (*data_530744)(0xbc03126f, 0)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
                (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                    fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
                (*data_530744)(fconvert.s(fconvert.t(*(ebp_1 - 0x20)) - data_48daf0), 0)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
                (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                    *(ebp_1 - 0x14))
                (*data_530744)(fconvert.s(data_48dafc + fconvert.t(*(ebp_1 - 0x20))), *(ebp_1 - 0x24))
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
                (*data_5307f8)(*(ebp_1 - 0x10), *(ebp_1 - 0x14))
                (*data_530744)(0x3a83126f, *(ebp_1 - 0x24))
                (*data_530a08)()
            else if (*(ebp_1 + 0x10) == 0xfffffffc)
                *(ebp_1 - 0x2c) = fconvert.s(sub_402b3c(fconvert.t(*(*(ebp_1 - 4) + 0xa6c))
                    / fconvert.t(180f) * data_48dad0 * fconvert.t(2f)) * data_48db08 + data_48db14)
                (*data_52ffd4)(7)
                *(ebp_1 - 0x24) = fconvert.s(data_48db20 * fconvert.t(*(ebp_1 - 0x24)))
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
                (*data_5307f8)(*(ebp_1 - 0x10), *(ebp_1 - 0x14))
                (*data_530744)(0x3a83126f, 0x3c343958)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0)
                (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                    *(ebp_1 - 0x14))
                (*data_530744)(fconvert.s(data_48dafc + fconvert.t(*(ebp_1 - 0x20))), 0x3c343958)
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
                (*data_5307f8)(fconvert.s(fconvert.t(*(ebp_1 - 0x10)) + fconvert.t(*(ebp_1 - 0x18))), 
                    fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
                (*data_530744)(fconvert.s(fconvert.t(*(ebp_1 - 0x20)) - data_48db38), 
                    fconvert.s(data_48db2c + fconvert.t(*(ebp_1 - 0x24))))
                (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, *(ebp_1 - 0x2c))
                (*data_5307f8)(*(ebp_1 - 0x10), 
                    fconvert.s(fconvert.t(*(ebp_1 - 0x14)) + fconvert.t(*(ebp_1 - 0x1c))))
                (*data_530744)(0xbd449ba6, fconvert.s(data_48db2c + fconvert.t(*(ebp_1 - 0x24))))
                (*data_530a08)()
            else if (*(ebp_1 + 0x10) != 0xffffffff)
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
                *(ebp_1 - 0x14) = fconvert.s(
                    data_48da64 * fconvert.t(*(ebp_1 - 0x2c)) * fconvert.t(2.5f)
                    + fconvert.t(*(ebp_1 - 0x14)))
                *(ebp_1 - 0x1c) = fconvert.s((fconvert.t(1f)
                    - fconvert.t(*(ebp_1 - 0x2c)) * fconvert.t(4f)) * fconvert.t(*(ebp_1 - 0x1c)))
                *(ebp_1 - 0x24) = fconvert.s((fconvert.t(1f)
                    - fconvert.t(*(ebp_1 - 0x2c)) * fconvert.t(4f)) * fconvert.t(*(ebp_1 - 0x24)))
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
        else if (*(ebp_1 + 0x10) s>= 0)
            int32_t eax_8
            eax_8.b = *(ebp_1 - 5)
            
            if (add_overflow(eax_8, 0xffffff9c))
                sub_403010()
                noreturn
            
            *(ebp_1 - 0x40) = eax_8 - 0x64
            *(ebp_1 - 0x2c) = fconvert.s(float.t(*(ebp_1 - 0x40)) / fconvert.t(100f))
            (*data_53006c)(0xde1)
            (*data_530334)(0x302, 0x303)
            
            for (int32_t j = 1; j != 3; j += 1)
                if (j != 2)
                    *(ebp_1 - 0x30) = 0x3f800000
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                        fconvert.s(data_48daa0 * fconvert.t(*(ebp_1 + 8))))
                else
                    (*data_5301d4)(0, 0, 0x3b03126f)
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                        fconvert.s(fconvert.t(1f) * fconvert.t(*(ebp_1 + 8))))
                    __builtin_strncpy(ebp_1 - 0x30, "33s?", 4)
                
                (*data_52ffd4)(6)
                (*data_530744)(fconvert.s(data_48daa0 * fconvert.t(*(ebp_1 - 0x20)) * data_48dab8), 
                    fconvert.s(data_48daac * fconvert.t(*(ebp_1 - 0x24))))
                
                if (j != 1)
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                        fconvert.s(data_48dac4 * fconvert.t(*(ebp_1 + 8))))
                else
                    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                        fconvert.s(data_48da34 * fconvert.t(*(ebp_1 + 8))))
                
                *(ebp_1 - 0x36) = 0
                
                for (int32_t k = 0; k != 0x65; k += 1)
                    int32_t eax_30
                    int32_t edx_2
                    
                    if (*(ebp_1 - 0x36) != 0)
                        edx_2:eax_30 = sx.q(k)
                    
                    if (*(ebp_1 - 0x36) == 0 || mods.dp.d(edx_2:eax_30, 0xa) == 0)
                        int16_t eax_26
                        
                        if (j != 1)
                            *(ebp_1 - 0x40) = k
                            long double x87_r0_50 = float.t(*(ebp_1 - 0x40)) / fconvert.t(100f)
                            long double temp6_1 = fconvert.t(*(ebp_1 - 0x2c))
                            x87_r0_50 - temp6_1
                            eax_26 = (x87_r0_50 < temp6_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_50, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r0_50 == temp6_1 ? 1 : 0) << 0xe | 0x800
                        
                        if (j == 1 || test_bit(eax_26:1.b, 6) || test_bit(eax_26:1.b, 0))
                            if (add_overflow(k, 1))
                                sub_403010()
                                noreturn
                            
                            *(ebp_1 - 0x40) = k + 1
                            long double x87_r0_52 = float.t(*(ebp_1 - 0x40)) / fconvert.t(100f)
                            long double temp7_1 = fconvert.t(*(ebp_1 - 0x2c))
                            x87_r0_52 - temp7_1
                            int32_t eax_32
                            eax_32.w = (x87_r0_52 < temp7_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r0_52, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r0_52 == temp7_1 ? 1 : 0) << 0xe | 0x800
                            
                            if (not(test_bit(eax_32:1.b, 6)) && not(test_bit(eax_32:1.b, 0)))
                                *(ebp_1 - 0x36) = 1
                            
                            *(ebp_1 - 0x40) = k
                            *(ebp_1 - 0x10) = fconvert.s(fneg(sub_402b3c(float.t(*(ebp_1 - 0x40))
                                / fconvert.t(100f) * data_48dad0 * fconvert.t(2f)))
                                * fconvert.t(*(ebp_1 - 0x20)) * fconvert.t(0.5f)
                                * fconvert.t(*(ebp_1 - 0x30)))
                            *(ebp_1 - 0x40) = k
                            *(ebp_1 - 0x14) = fconvert.s(sub_402b2c(float.t(*(ebp_1 - 0x40))
                                / fconvert.t(100f) * data_48dad0 * fconvert.t(2f))
                                * fconvert.t(*(ebp_1 - 0x24)) * fconvert.t(0.5f)
                                * fconvert.t(*(ebp_1 - 0x30)))
                            (*data_530744)(
                                fconvert.s((data_48daa0 * fconvert.t(*(ebp_1 - 0x20))
                                    + fconvert.t(*(ebp_1 - 0x10))) * data_48dab8), 
                                fconvert.s(data_48daac * fconvert.t(*(ebp_1 - 0x24))
                                + fconvert.t(*(ebp_1 - 0x14))))
                
                (*data_530a08)()
            
            (*data_530034)(0xde1)
            (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
                fconvert.s(fconvert.t(1f) * fconvert.t(*(ebp_1 + 8))))
            sub_4699b8(*(ebp_1 - 4))
        
        i = *(ebp_1 - 0x34)
        *(ebp_1 - 0x34) -= 1
    while (i != 1)
    
    if (*(ebp_1 - 5) != 0x8b && *(ebp_1 + 0xc) == 0)
        if (*(ebp_1 + 0x10) s> 0)
            (*data_5306a4)(
                fconvert.d(data_48db4c * fconvert.t(*(ebp_1 + 0x1c)) * fconvert.t(*(ebp_1 - 0x28))), 0, 
                0, 0, 0)
        else if (*(ebp_1 - 0x35) == 0)
            (*data_5306a4)(
                fconvert.d(data_48da8c * fconvert.t(*(ebp_1 + 0x1c)) * fconvert.t(*(ebp_1 - 0x28))), 0, 
                0, 0, 0)
        else
            (*data_5306a4)(
                fconvert.d(data_48da8c * fconvert.t(*(ebp_1 + 0x1c)) * fconvert.t(*(ebp_1 - 0x28))), 
                0x6d9c7c09, 0xbf571378, 0, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_54_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_48da05
    sub_403df8(ebp_1 - 0x3c)
    return ebp_1 - 0x3c
}
