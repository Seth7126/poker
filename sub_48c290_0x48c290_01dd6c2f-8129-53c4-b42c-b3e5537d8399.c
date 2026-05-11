// ============================================================
// 函数名称: sub_48c290
// 虚拟地址: 0x48c290
// WARP GUID: 01dd6c2f-8129-53c4-b42c-b3e5537d8399
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48cfc8, sub_4042c0, sub_4699b8, sub_402b4c, sub_403e1c, sub_404280, sub_403010, sub_403008, sub_404078, sub_402b3c, sub_404188, sub_48db58, sub_404080, sub_47c0f0, sub_40422c, sub_4040c4, sub_404248, sub_46fd7c, sub_403df8
// [被调用的父级函数]: sub_488509, sub_484e24, sub_4f8b60
// ============================================================

void* __convention("regparm")sub_48c290(void* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, int32_t* arg3, void* arg4, int32_t arg5, char arg6, float arg7, float arg8, float arg9)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_84 = ebx
    int32_t esi
    int32_t var_88 = esi
    int32_t edi
    int32_t var_8c = edi
    int32_t var_80
    __builtin_memset(&var_80, 0, 0x18)
    int32_t var_48 = 0
    int32_t ecx
    int32_t var_c = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    void* edi_1 = arg1
    sub_40422c(var_8)
    sub_40422c(arg4)
    int32_t* var_90 = &var_4
    int32_t (* var_94)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg3)
    long double st0
    int16_t top
    
    if (arg5 s> 0)
        int32_t esi_2 = arg5 + 5
        
        if (add_overflow(arg5, 5))
            sub_403010()
            noreturn
        
        if (sub_404078(var_8) s>= 0x14)
            int32_t temp2_1 = esi_2
            esi_2 += 0x14
            
            if (add_overflow(temp2_1, 0x14))
                sub_403010()
                noreturn
        
        sub_403df8(&var_48)
        int32_t eax_6
        int32_t edx
        eax_6, edx = sub_402b4c(fconvert.t(16f) * fconvert.t(arg9))
        int32_t var_60_1 = edx
        float var_40_1 = fconvert.s(float.t(eax_6.q) + fconvert.t(arg7))
        int32_t eax_7
        int32_t edx_1
        eax_7, edx_1 = sub_402b4c(fconvert.t(16f) * fconvert.t(arg9))
        int32_t var_60_2 = edx_1
        int32_t var_54_1 = 0
        long double x87_r7_10 = float.t(esi_2) - fconvert.t(arg8)
        long double temp1_1 = fconvert.t(20f)
        x87_r7_10 - temp1_1
        top = 0
        int16_t eax_8 = (x87_r7_10 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_8:1.b, 6)) && not(test_bit(eax_8:1.b, 0)) && sub_404078(var_8) s>= 1)
            while (true)
                ebp_1, edi_1 = sub_46fd7c(edi_1, ebp_1[-1])
                unimplemented  {fmul st0, dword [0x48cec4]}
                unimplemented  {fmul st0, dword [ebp+0x30]}
                unimplemented  {fsub st0, dword [0x48cec8]}
                unimplemented  {fsub st0, dword [0x48cecc]}
                ebp_1[-0x19] = esi_2
                unimplemented  {fild st0, dword [ebp-0x64]}
                unimplemented  {fsub st0, dword [ebp+0x2c]}
                unimplemented  {fadd dword [0x48cecc]}
                unimplemented  {fcompp } f- unimplemented  {fcompp }
                bool c0_2 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                bool c2_2 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                bool c3_2 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                unimplemented  {fcompp }
                unimplemented  {fcompp }
                top += 1
                int16_t eax_27 = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool z_2 = test_bit(eax_27:1.b, 6)
                
                if (not(test_bit(eax_27:1.b, 0)))
                    int32_t temp4_1 = ebp_1[-0x11]
                    
                    if (temp4_1 == 0)
                        break
                    
                    sub_404280(1, sub_404078(ebp_1[-1]), ebp_1[-1], &ebp_1[-0x1c])
                    sub_404188(ebp_1[-0x1c], 0x48ceb4)
                    
                    if (temp4_1 == 0)
                        break
                    
                    sub_404188(ebp_1[3], 0x48cec0)
                    
                    if (temp4_1 == 0)
                        break
                    
                    int32_t temp10_1 = ebp_1[-0x14]
                    z_2 = temp10_1 == 0xf
                    
                    if (temp10_1 - 0xf s< 0 == add_overflow(temp10_1, 0xfffffff1))
                        break
                
                sub_404280(1, sub_404078(ebp_1[-1]), ebp_1[-1], &ebp_1[-0x1a])
                sub_404188(ebp_1[-0x1a], 0x48ceb4)
                
                if (not(z_2))
                    sub_404188(ebp_1[3], 0x48cec0)
                
                if (not(z_2) && not(z_2))
                    int32_t temp7_1 = ebp_1[-0x14]
                    ebp_1[-0x14] += 1
                    
                    if (add_overflow(temp7_1, 1))
                        sub_403010()
                        noreturn
                else
                    ebp_1[-0x14] = 0
                
                sub_404280(1, sub_404078(ebp_1[-1]), ebp_1[-1], &ebp_1[-0x1b])
                sub_4040c4(&ebp_1[-0x11], ebp_1[-0x1b], ebp_1[-0x11])
                sub_4042c0(&ebp_1[-1], sub_404078(ebp_1[-1]), 1)
            
            *(edi_1 + 0x9a0)
            bool o_5 = unimplemented  {imul eax, dword [edi+0x9a0], 0x327}
            
            if (o_5)
                sub_403010()
                noreturn
            
            ebp_1[-0x19] = *(edi_1 + 0x9a0) * 0x327
            unimplemented  {fild st0, dword [ebp-0x64]}
            unimplemented  {fild st0, dword [edi+0x894]}
            unimplemented  {fdivp st1, st0}
            unimplemented  {fdivp st1, st0}
            int32_t eax_35
            int32_t edx_8
            eax_35, edx_8 = sub_402b4c(st0)
            
            if (eax_35 s>> 0x1f != edx_8)
                sub_403008()
                noreturn
            
            ebp_1[-0x12] = eax_35
            *(edi_1 + 0x9a4)
            bool o_6 = unimplemented  {imul eax, dword [edi+0x9a4], 0x25f}
            
            if (o_6)
                sub_403010()
                noreturn
            
            ebp_1[-0x19] = *(edi_1 + 0x9a4) * 0x25f
            unimplemented  {fild st0, dword [ebp-0x64]}
            unimplemented  {fild st0, dword [edi+0x898]}
            unimplemented  {fdivp st1, st0}
            unimplemented  {fdivp st1, st0}
            int32_t eax_39
            int32_t edx_9
            eax_39, edx_9 = sub_402b4c(st0)
            esp = &ExceptionList
            
            if (eax_39 s>> 0x1f != edx_9)
                sub_403008()
                noreturn
            
            ebp_1[-0x13] = eax_39
            
            if (ebp_1[-0x11] == 0)
                ebp_1[4] = 0
            
            if (ebp_1[4] != 0)
                sub_4040c4(ebp_1[2], U">", ebp_1[-0x11])
            else
                unimplemented  {fild st0, dword [ebp-0x48]}
                long double temp13_1 = fconvert.t(ebp_1[0xb])
                unimplemented  {fcomp st0, dword [ebp+0x2c]} f- temp13_1
                bool c0_3 = unimplemented  {fcomp st0, dword [ebp+0x2c]} f< temp13_1
                bool c2_3 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x2c]}, temp13_1)
                bool c3_3 = unimplemented  {fcomp st0, dword [ebp+0x2c]} f== temp13_1
                unimplemented  {fcomp st0, dword [ebp+0x2c]}
                int32_t eax_41
                eax_41.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                
                if (test_bit(eax_41:1.b, 0) || esi_2 s< ebp_1[-0x12])
                label_48c54f:
                    
                    if (ebp_1[-0x11] != 0)
                        int32_t eax_46 = sub_404078(ebp_1[-1])
                        
                        if (add_overflow(eax_46, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        sub_404280(2, eax_46 - 1, ebp_1[-1], &ebp_1[-0x1d])
                        esp = &ExceptionList
                        sub_404188(ebp_1[-0x1d], 0x48cee4)
                        
                        if (eax_46 != 1)
                            sub_404080(&ebp_1[-1], "..")
                else
                    unimplemented  {fild st0, dword [ebp-0x4c]}
                    long double temp15_1 = fconvert.t(ebp_1[0xa])
                    unimplemented  {fcomp st0, dword [ebp+0x28]} f- temp15_1
                    bool c0_4 = unimplemented  {fcomp st0, dword [ebp+0x28]} f< temp15_1
                    bool c2_4 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x28]}, temp15_1)
                    bool c3_4 = unimplemented  {fcomp st0, dword [ebp+0x28]} f== temp15_1
                    unimplemented  {fcomp st0, dword [ebp+0x28]}
                    eax_41.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    
                    if (test_bit(eax_41:1.b, 0))
                        goto label_48c54f
                    
                    unimplemented  {fild st0, dword [ebp-0x4c]}
                    long double temp16_1 = fconvert.t(ebp_1[-0xf])
                    unimplemented  {fcomp st0, dword [ebp-0x3c]} f- temp16_1
                    bool c0_5 = unimplemented  {fcomp st0, dword [ebp-0x3c]} f< temp16_1
                    bool c2_5 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x3c]}, temp16_1)
                    bool c3_5 = unimplemented  {fcomp st0, dword [ebp-0x3c]} f== temp16_1
                    unimplemented  {fcomp st0, dword [ebp-0x3c]}
                    eax_41.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    bool z_3 = test_bit(eax_41:1.b, 6)
                    
                    if (not(z_3) && not(test_bit(eax_41:1.b, 0)))
                        goto label_48c54f
                    
                    sub_404188(ebp_1[3], 0x48cec0)
                    
                    if (z_3)
                        goto label_48c54f
                    
                    sub_4040c4(ebp_1[2], U">", ebp_1[-0x11])
    
    if (arg6 != 0xa)
        sub_404280(1, 1, ebp_1[-1], &ebp_1[-0x1e])
        esp = &ExceptionList
        sub_404188(ebp_1[-0x1e], 0x48ced8)
        
        if (arg6 != 0xa)
            if (ebp_1[-2] != 3)
                ebp_1[-0xc] = 0x3f800000
            else
                ebp_1[-0xc] = 0x3ecccccd
            
            unimplemented  {fld st0, dword [ebp+0x30]}
            unimplemented  {fsub st0, dword [0x48cee8]}
            ebp_1[-0xd] = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
            unimplemented  {fstp dword [ebp-0x34], st0}
            unimplemented  {fld st0, tword [0x48ceec]}
            unimplemented  {fdivr st0, dword [ebp+0x30]}
            ebp_1[0xc] = fconvert.s(unimplemented  {fstp dword [ebp+0x30], st0})
            unimplemented  {fstp dword [ebp+0x30], st0}
            int32_t var_9c_8 = 0xbe2
            (*data_530034)(0xbe2)
            
            if (data_5320b8 != 0)
                (*data_53006c)(0xbe2)
            
            (*data_530810)()
            ebp_1[-0xa] = 0
            ebp_1[-0xb] = 0x3b23d70a
            
            if (arg6 != 2 && ebp_1[-2] == 1)
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fadd dword [ebp-0x2c]}
                ebp_1[-0xa] = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
            
            if (ebp_1[-2] == 2)
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fsub st0, dword [ebp-0x2c]}
                ebp_1[-0xa] = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
            
            unimplemented  {fld st0, tword [0x48cef8]}
            long double temp5_1 = fconvert.t(ebp_1[9])
            unimplemented  {fcomp st0, dword [ebp+0x24]} f- temp5_1
            bool c0_6 = unimplemented  {fcomp st0, dword [ebp+0x24]} f< temp5_1
            bool c2_6 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x24]}, temp5_1)
            bool c3_6 = unimplemented  {fcomp st0, dword [ebp+0x24]} f== temp5_1
            unimplemented  {fcomp st0, dword [ebp+0x24]}
            
            if (not(test_bit(
                    ((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb):1.b, 
                    0)))
                ebp_1[-0xa] = 0
            
            unimplemented  {fld st0, tword [0x48cf04]}
            unimplemented  {fadd dword [ebp-0x28]}
            double var_18_1 = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            unimplemented  {fld st0, tword [0x48cf10]}
            unimplemented  {fsub st0, dword [ebp-0x28]}
            double var_20_1 = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            (*data_5306a4)(var_20_1, var_18_1, 0, 0xbff80000)
            sub_47c0f0(edi_1)
            
            if (arg6 == 9)
                var_18_1:4.d = 0
                var_18_1.d = 0x41c80000
                (*data_5306b4)(var_18_1, 0x3f800000, 0)
                unimplemented  {fld st0, dword [ebp+0x28]}
                unimplemented  {fadd dword [0x48cf1c]}
                unimplemented  {fdiv st0, dword [0x48cf20]}
                unimplemented  {fld st0, tword [0x48cf24]}
                unimplemented  {fmulp st1, st0}
                unimplemented  {fmulp st1, st0}
                st0 = sub_402b3c(st0)
                unimplemented  {call 0x402b3c}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fld st0, dword [ebp+0x18]}
                long double temp8_1 = fconvert.t(1f)
                unimplemented  {fcomp st0, dword [0x48cee8]} f- temp8_1
                bool c0_7 = unimplemented  {fcomp st0, dword [0x48cee8]} f< temp8_1
                bool c2_7 = is_unordered.t(unimplemented  {fcomp st0, dword [0x48cee8]}, temp8_1)
                bool c3_7 = unimplemented  {fcomp st0, dword [0x48cee8]} f== temp8_1
                unimplemented  {fcomp st0, dword [0x48cee8]}
                
                if (test_bit(
                        ((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                            | (top & 7) << 0xb):1.b, 
                        0))
                    unimplemented  {fld st0, dword [ebp+0x30]}
                    unimplemented  {fmul st0, dword [ebp+0x18]}
                    ebp_1[0xc] = fconvert.s(unimplemented  {fstp dword [ebp+0x30], st0})
                    unimplemented  {fstp dword [ebp+0x30], st0}
            
            int32_t var_c_4 = 0
            int32_t var_10_3 = 0
            unimplemented  {fld st0, dword [ebp-0x34]}
            unimplemented  {fmul st0, dword [0x48cf30]}
            unimplemented  {fadd dword [ebp+0x28]}
            unimplemented  {fchs }
            unimplemented  {fdiv st0, dword [0x48cf34]}
            double var_18_2 = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            unimplemented  {fld st0, dword [ebp-0x34]}
            unimplemented  {fmul st0, dword [0x48cecc]}
            unimplemented  {fsubr st0, dword [ebp+0x2c]}
            unimplemented  {fdiv st0, dword [0x48cf34]}
            double var_20_2 = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            (*data_5306a4)(var_20_2, var_18_2, var_10_3, var_c_4)
            
            if (*(edi_1 + 0x9cc) != 0)
                __builtin_memset(&var_20_2, 0, 0x18)
                int32_t var_10_4
                int32_t var_c_5
                (*data_5306a4)(var_20_2, var_18_2, var_10_4, var_c_5)
            
            void* edi_2
            ebp_1, edi_2 = sub_46fd7c(edi_1, ebp_1[-1])
            unimplemented  {fld st0, tword [0x48cf38]}
            unimplemented  {fmulp st1, st0}
            unimplemented  {fmulp st1, st0}
            unimplemented  {fld st0, tword [0x48cf44]}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            unimplemented  {fmul st0, dword [ebp+0x30]}
            ebp_1[-5] = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
            unimplemented  {fstp dword [ebp-0x14], st0}
            int16_t top_38 = top + 1
            
            if (ebp_1[7] == 0)
                __builtin_memset(&var_20_2, 0, 0x18)
                int32_t var_10_5
                int32_t var_c_6
                (*data_5306a4)(var_20_2, var_18_2, var_10_5, var_c_6)
            else if (ebp_1[7] == 1)
                int32_t var_c_7 = 0
                int32_t var_10_6 = 0
                var_18_2:4.d = 0
                var_18_2.d = 0
                unimplemented  {fld st0, dword [ebp-0x14]}
                unimplemented  {fchs }
                unimplemented  {fdiv st0, dword [0x48cf50]}
                var_20_2 = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                (*data_5306a4)(var_20_2, var_18_2, var_10_6, var_c_7)
            else if (ebp_1[7] == 2)
                int32_t var_c_8 = 0
                int32_t var_10_7 = 0
                var_18_2:4.d = 0
                var_18_2.d = 0
                unimplemented  {fld st0, dword [ebp-0x14]}
                unimplemented  {fchs }
                var_20_2 = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                (*data_5306a4)(var_20_2, var_18_2, var_10_7, var_c_8)
            
            int16_t top_42
            
            if (arg6 - 1 u< 2 && ebp_1[-2] - 1 u< 2)
                unimplemented  {fld st0, dword [0x48cee8]}
                unimplemented  {fmul st0, dword [edi+0x1064]}
                unimplemented  {fmul st0, dword [ebp-0x30]}
                unimplemented  {fmul st0, dword [ebp+0x18]}
                float var_c_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_42 = top_38
                var_18_2:4.d = *(edi_2 + 0x105c)
                var_18_2.d = *(edi_2 + 0x1058)
                (*data_530518)(var_18_2, *(edi_2 + 0x1060), var_c_9)
            else if (ebp_1[-2] != 3)
                unimplemented  {fld st0, dword [0x48cee8]}
                unimplemented  {fmul st0, dword [edi+0x1054]}
                unimplemented  {fmul st0, dword [ebp-0x30]}
                unimplemented  {fmul st0, dword [ebp+0x18]}
                float var_c_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_42 = top_38
                var_18_2:4.d = *(edi_2 + 0x104c)
                var_18_2.d = *(edi_2 + 0x1048)
                (*data_530518)(var_18_2, *(edi_2 + 0x1050), var_c_11)
            else
                unimplemented  {fld st0, dword [0x48cee8]}
                unimplemented  {fmul st0, dword [edi+0x1074]}
                unimplemented  {fmul st0, dword [ebp-0x30]}
                unimplemented  {fmul st0, dword [ebp+0x18]}
                float var_c_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top_42 = top_38
                var_18_2:4.d = *(edi_2 + 0x106c)
                var_18_2.d = *(edi_2 + 0x1068)
                (*data_530518)(var_18_2, *(edi_2 + 0x1070), var_c_10)
            
            (*data_53006c)(0xb50)
            ebp_1[-3] = 0
            
            if (arg6 == 5 || arg6 == 8)
                int32_t eax_90 = *(edi_2 + 0x10cc)
                
                if (eax_90 == 4)
                    ebp_1[-3] = 0xfffffffc
                    (*data_530334)(0x302, 0x303)
                    int32_t eax_93 = *(edi_2 + 0x8cc)
                    
                    if (eax_93 s< 0)
                        sub_403008()
                        noreturn
                    
                    (*data_53036c)(0xde1, eax_93)
                    int32_t var_c_15 = 0
                    unimplemented  {fld st0, dword [ebp+0x28]}
                    unimplemented  {fdiv st0, dword [0x48cf54]}
                    unimplemented  {fsubr st0, dword [0x48cf58]}
                    unimplemented  {fmul st0, dword [ebp+0x30]}
                    unimplemented  {fdiv st0, dword [0x48cf5c]}
                    float var_10_13 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    var_18_2:4.d = 0
                    (*data_5301d4)()
                else if (eax_90 != 3)
                    if (arg6 != 8)
                        unimplemented  {fld st0, dword [edi+0xa6c]}
                        unimplemented  {fdiv st0, dword [0x48cf74]}
                        unimplemented  {fld st0, tword [0x48cf24]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmul st0, dword [0x48cf50]}
                        st0 = sub_402b3c(st0)
                        unimplemented  {call 0x402b3c}
                        unimplemented  {fld st0, tword [0x48cf88]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fld st0, tword [0x48cf94]}
                        unimplemented  {faddp st1, st0}
                        unimplemented  {faddp st1, st0}
                        unimplemented  {fld st0, dword [edi+0x1074]}
                        unimplemented  {fmul st0, dword [ebp-0x30]}
                        unimplemented  {fmul st0, dword [ebp+0x18]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        float var_c_21 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        var_18_2:4.d = *(edi_2 + 0x106c)
                        var_18_2.d = *(edi_2 + 0x1068)
                        (*data_530518)(var_18_2, *(edi_2 + 0x1070), var_c_21)
                    else
                        unimplemented  {fld st0, dword [edi+0xa70]}
                        unimplemented  {fdiv st0, dword [0x48cf74]}
                        unimplemented  {fld st0, tword [0x48cf24]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmul st0, dword [0x48cf50]}
                        st0 = sub_402b3c(st0)
                        unimplemented  {call 0x402b3c}
                        unimplemented  {fmul st0, dword [0x48cf78]}
                        unimplemented  {fld st0, tword [0x48cf7c]}
                        unimplemented  {faddp st1, st0}
                        unimplemented  {faddp st1, st0}
                        unimplemented  {fld st0, dword [edi+0x1074]}
                        unimplemented  {fmul st0, dword [ebp-0x30]}
                        unimplemented  {fmul st0, dword [ebp+0x18]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        float var_c_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        var_18_2:4.d = *(edi_2 + 0x106c)
                        var_18_2.d = *(edi_2 + 0x1068)
                        (*data_530518)(var_18_2, *(edi_2 + 0x1070), var_c_20)
                    
                    (*data_530334)(0x302, 1)
                    int32_t eax_114 = *(edi_2 + 0x8cc)
                    
                    if (eax_114 s< 0)
                        sub_403008()
                        noreturn
                    
                    (*data_53036c)(0xde1, eax_114)
                else
                    ebp_1[-3] = 0xfffffffd
                    
                    if (arg6 == 8)
                        ebp_1[-3] = 0xfffffffb
                    
                    data_5320c4 = ebp_1[6]
                    (*data_530334)(0x302, 1)
                    int32_t eax_101 = *(edi_2 + 0x8cc)
                    
                    if (eax_101 s< 0)
                        sub_403008()
                        noreturn
                    
                    (*data_53036c)(0xde1, eax_101)
                    unimplemented  {fld st0, tword [0x48cf60]}
                    unimplemented  {fmul st0, dword [ebp+0x30]}
                    ebp_1[0xc] = fconvert.s(unimplemented  {fstp dword [ebp+0x30], st0})
                    unimplemented  {fstp dword [ebp+0x30], st0}
                    int32_t var_c_18 = 0
                    unimplemented  {fld st0, dword [ebp+0x28]}
                    unimplemented  {fdiv st0, dword [0x48cf54]}
                    unimplemented  {fsubr st0, dword [0x48cf58]}
                    unimplemented  {fmul st0, dword [ebp+0x30]}
                    unimplemented  {fdiv st0, dword [0x48cf5c]}
                    float var_10_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    unimplemented  {fld st0, dword [0x48cf6c]}
                    unimplemented  {fadd dword [ebp+0x2c]}
                    unimplemented  {fdiv st0, dword [0x48cf70]}
                    unimplemented  {fdiv st0, dword [0x48cf5c]}
                    var_18_2:4.d = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    (*data_5301d4)()
                    var_18_2:4.d = 0x3f800000
                    var_18_2.d = 0xc2200000
                    (*data_5306b4)(var_18_2, 0, 0)
            else
                sub_4699b8(edi_2)
            
            *(ebp_1 - 0x35) = 0
            *(ebp_1 - 0x51) = 0
            
            if (sub_404078(ebp_1[-1]) s> 0)
                int32_t eax_121 = sub_404078(ebp_1[-1])
                
                if (add_overflow(eax_121, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_121 - 1, 1))
                    sub_403010()
                    noreturn
                
                if (eax_121 s> 0)
                    ebp_1[-0x16] = eax_121
                    int32_t esi_3 = 1
                    int32_t i
                    
                    do
                        void* eax_124 = ebp_1[-1]
                        
                        if (esi_3 - 1 u>= *(eax_124 - 4))
                            sub_403008()
                            noreturn
                        
                        if (*(eax_124 + esi_3 - 1) != 0xe1)
                            void* eax_125 = ebp_1[-1]
                            
                            if (esi_3 - 1 u>= *(eax_125 - 4))
                                sub_403008()
                                noreturn
                            
                            if (*(eax_125 + esi_3 - 1) == 0x23)
                                *(ebp_1 - 0x35) = 1
                            
                            if (*(ebp_1 - 0x35) == 0)
                                int32_t edx_13
                                
                                if (*(ebp_1 - 0x51) == 0)
                                    unimplemented  {fld st0, tword [0x48cfa0]}
                                    unimplemented  {fmul st0, dword [ebp+0x30]}
                                    float var_c_25 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t var_10_23 = ebp_1[0xb]
                                    var_18_2:4.d = ebp_1[0xa]
                                    var_18_2.d = ebp_1[-3]
                                    int32_t eax_129
                                    eax_129.b = *(ebp_1 - 0x51)
                                    var_20_2:4.d = eax_129
                                    void* eax_130 = ebp_1[-1]
                                    
                                    if (esi_3 - 1 u>= *(eax_130 - 4))
                                        sub_403008()
                                        noreturn
                                    
                                    edx_13.b = *(eax_130 + esi_3 - 1)
                                    sub_48db58(edi_2, edx_13, unimplemented  {call 0x48db58})
                                else
                                    unimplemented  {fld st0, tword [0x48cfa0]}
                                    unimplemented  {fmul st0, dword [ebp+0x30]}
                                    float var_c_24 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    int32_t var_10_22 = ebp_1[0xb]
                                    var_18_2:4.d = ebp_1[0xa]
                                    var_18_2.d = ebp_1[-3]
                                    int32_t eax_126
                                    eax_126.b = *(ebp_1 - 0x51)
                                    var_20_2:4.d = eax_126
                                    var_20_2.d = ebp_1[6]
                                    void* eax_127 = ebp_1[-1]
                                    
                                    if (esi_3 - 1 u>= *(eax_127 - 4))
                                        sub_403008()
                                        noreturn
                                    
                                    edx_13.b = *(eax_127 + esi_3 - 1)
                                    sub_48cfc8(edi_2, st0)
                                
                                if (esi_3 s<= sub_404078(ebp_1[3]))
                                    void* eax_134 = ebp_1[3]
                                    
                                    if (esi_3 - 1 u>= *(eax_134 - 4))
                                        sub_403008()
                                        noreturn
                                    
                                    if (*(eax_134 + esi_3 - 1) == 0x23)
                                        ebp_1[-4] = 1
                                        
                                        while (true)
                                            int32_t eax_138 = sub_404078(ebp_1[3])
                                            int32_t edx_18 = ebp_1[-4]
                                            
                                            if (add_overflow(edx_18, esi_3))
                                                sub_403010()
                                                noreturn
                                            
                                            if (eax_138 s< edx_18 + esi_3)
                                                break
                                            
                                            int32_t eax_139 = ebp_1[-4]
                                            
                                            if (add_overflow(eax_139, esi_3))
                                                sub_403010()
                                                noreturn
                                            
                                            void* edx_20 = ebp_1[3]
                                            
                                            if (eax_139 + esi_3 - 1 u>= *(edx_20 - 4))
                                                sub_403008()
                                                noreturn
                                            
                                            if (*(edx_20 + eax_139 + esi_3 - 1) != 0x23)
                                                break
                                            
                                            void* eax_136 = sub_404248(&ebp_1[3])
                                            int32_t edx_14 = ebp_1[-4]
                                            
                                            if (add_overflow(edx_14, esi_3))
                                                sub_403010()
                                                noreturn
                                            
                                            if (edx_14 + esi_3 - 1 u>= *(eax_136 - 4))
                                                sub_403008()
                                                noreturn
                                            
                                            *(eax_136 + edx_14 + esi_3 - 1) = 0x20
                                            int32_t temp24_1 = ebp_1[-4]
                                            ebp_1[-4] += 1
                                            
                                            if (add_overflow(temp24_1, 1))
                                                sub_403010()
                                                noreturn
                                        
                                        if (add_overflow(esi_3, 1))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_404280(ebp_1[-4], esi_3 + 1, ebp_1[-1], &ebp_1[-0x1f])
                                        ebp_1, edi_2 = sub_46fd7c(edi_2, ebp_1[-0x1f])
                                        unimplemented  {fld st0, tword [0x48cfac]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmul st0, dword [0x48cfb8]}
                                        unimplemented  {fld st0, tword [0x48cf7c]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        int32_t eax_146
                                        int32_t edx_24
                                        eax_146, edx_24 = sub_402b4c(st0)
                                        
                                        if (eax_146 s>> 0x1f != edx_24)
                                            sub_403008()
                                            noreturn
                                        
                                        ebp_1[-4] = eax_146
                                        
                                        if (*(ebp_1 - 0x51) == 0)
                                            unimplemented  {fld st0, tword [0x48cfa0]}
                                            unimplemented  {fmul st0, dword [ebp+0x30]}
                                            float var_c_29 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            top_42 += 1
                                            int32_t var_10_25 = ebp_1[0xb]
                                            var_18_2:4.d = ebp_1[0xa]
                                            var_18_2.d = ebp_1[-4]
                                            int32_t eax_151
                                            eax_151.b = *(ebp_1 - 0x51)
                                            var_20_2:4.d = eax_151
                                            edx_24.b = 0x5f
                                            sub_48db58(edi_2, edx_24, unimplemented  {call 0x48db58})
                                        else
                                            unimplemented  {fld st0, tword [0x48cfa0]}
                                            unimplemented  {fmul st0, dword [ebp+0x30]}
                                            float var_c_28 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            top_42 += 1
                                            int32_t var_10_24 = ebp_1[0xb]
                                            var_18_2:4.d = ebp_1[0xa]
                                            var_18_2.d = ebp_1[-4]
                                            int32_t eax_149
                                            eax_149.b = *(ebp_1 - 0x51)
                                            var_20_2:4.d = eax_149
                                            var_20_2.d = ebp_1[6]
                                            edx_24.b = 0x5f
                                            sub_48cfc8(edi_2, st0)
                            
                            if (*(ebp_1 - 0x51) != 0)
                                if (arg6 == 5)
                                    unimplemented  {fld st0, dword [edi+0xa6c]}
                                    unimplemented  {fdiv st0, dword [0x48cf74]}
                                    unimplemented  {fld st0, tword [0x48cf24]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmul st0, dword [0x48cf50]}
                                    st0 = sub_402b3c(st0)
                                    unimplemented  {call 0x402b3c}
                                    unimplemented  {fld st0, tword [0x48cfbc]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fld st0, tword [0x48cf94]}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {faddp st1, st0}
                                    unimplemented  {fld st0, dword [edi+0x1074]}
                                    unimplemented  {fmul st0, dword [ebp-0x30]}
                                    unimplemented  {fmul st0, dword [ebp+0x18]}
                                    unimplemented  {fmulp st1, st0}
                                    unimplemented  {fmulp st1, st0}
                                    float var_c_30 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    var_18_2:4.d = *(edi_2 + 0x106c)
                                    var_18_2.d = *(edi_2 + 0x1068)
                                    (*data_530518)(var_18_2, *(edi_2 + 0x1070), var_c_30)
                                else if (arg6 != 8)
                                    unimplemented  {fld st0, dword [0x48cee8]}
                                    unimplemented  {fmul st0, dword [edi+0x1074]}
                                    unimplemented  {fmul st0, dword [ebp-0x30]}
                                    unimplemented  {fmul st0, dword [ebp+0x18]}
                                    float var_c_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    var_18_2:4.d = *(edi_2 + 0x106c)
                                    var_18_2.d = *(edi_2 + 0x1068)
                                    (*data_530518)(var_18_2, *(edi_2 + 0x1070), var_c_32)
                                else
                                    unimplemented  {fld st0, dword [edi+0x1074]}
                                    unimplemented  {fmul st0, dword [ebp-0x30]}
                                    unimplemented  {fmul st0, dword [ebp+0x18]}
                                    unimplemented  {fmul st0, dword [0x48cee8]}
                                    float var_c_31 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    var_18_2:4.d = *(edi_2 + 0x106c)
                                    var_18_2.d = *(edi_2 + 0x1068)
                                    (*data_530518)(var_18_2, *(edi_2 + 0x1070), var_c_31)
                            
                            *(ebp_1 - 0x51) = 0
                        else
                            *(ebp_1 - 0x51) = 1
                        
                        esi_3 += 1
                        i = ebp_1[-0x16]
                        ebp_1[-0x16] -= 1
                    while (i != 1)
            
            int32_t var_c_33 = 0x2100
            int32_t var_10_29 = 0x2200
            var_18_2:4.d = 0x2300
            (*data_5304ac)()
            (*data_53006c)(0xbe2)
            esp = &var_8
            
            if (*(edi_2 + 0xcf4) == 0)
                (*data_530034)(0xb50)
                esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_48ce99
    sub_403e1c(&ebp_1[-0x1f], 6)
    sub_403df8(&ebp_1[-0x11])
    sub_403df8(&ebp_1[-1])
    sub_403df8(&ebp_1[3])
    return &ebp_1[3]
}
