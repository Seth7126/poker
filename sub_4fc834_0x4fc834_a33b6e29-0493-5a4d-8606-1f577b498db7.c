// ============================================================
// 函数名称: sub_4fc834
// 虚拟地址: 0x4fc834
// WARP GUID: a33b6e29-0493-5a4d-8606-1f577b498db7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4fc3f8, sub_46c038, sub_404138, sub_406807, sub_47a078, sub_40401c, sub_4699b8, sub_512cbc, sub_4cda5c, sub_402b4c, sub_404280, sub_403e1c, sub_403010, sub_4ca100, sub_4ca218, sub_403e90, sub_404078, sub_4fb48c, sub_402b3c, sub_404188, sub_47a2ac, sub_48c0c8, sub_4ee7d8, sub_420bc8, sub_4d0204, sub_402bc0, sub_47ab08, sub_46a708, sub_4040c4, sub_408e1c, sub_46fd7c, sub_402b90, sub_4c2d7c, sub_4c4b34, sub_403df8, sub_4ee360, sub_5207dc, sub_4d06c0, sub_4cc200, sub_512d1c, sub_4c0924
// [被调用的父级函数]: sub_4fc7fa, sub_4f8b60
// ============================================================

int32_t __convention("regparm")sub_4fc834(int32_t arg1, int32_t arg2 @ esi, int32_t arg3 @ edi, long double arg4 @ st0, long double arg5 @ st1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_2 = 0x1a
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_2
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x1c
    char* var_50
    sub_408e1c(arg1, &var_50)
    void* var_2c
    sub_4040c4(&var_2c, "Spieler ", var_50)
    *(esp_2 - 0x20) = &var_2c
    void* esp_10 = esp_2 - 0x20
    sub_47a2ac(*data_530304, *data_530a74, *(data_52fed4 + (arg1 << 2)))
    sub_404188(var_2c, 0x4fd914)
    char var_31 = true
    int16_t top
    
    if (sub_47a078(*data_530304, *data_530a74, *(data_52fed4 + (arg1 << 2))) != 0)
        void* temp1_1 = var_2c
        
        if (temp1_1 != 0)
            sub_404188(var_2c, 0x4fd920)
            
            if (temp1_1 != 0)
                float var_24_1 = 0.730000019f
                
                if (arg1 == 1)
                    var_24_1 = 0.430000007f
                
                void var_30
                sub_403df8(&var_30)
                int32_t i_1 = 0x16
                bool cond:2_1 = arg1 != 1
                
                if (arg1 s> 1)
                    int32_t eax_14 = *data_5300d0 - 5
                    cond:2_1 = eax_14 != 2
                    
                    if (eax_14 u>= 2)
                        int32_t temp4_1 = *data_5300d0
                        cond:2_1 = temp4_1 != 7
                        
                        if (temp4_1 != 7)
                            int32_t temp5_1 = *data_5300d0
                            cond:2_1 = temp5_1 != 8
                            
                            if (temp5_1 == 8)
                                i_1 = 0xc
                        else
                            i_1 = 0xe
                    else
                        i_1 = 0x11
                
                void* var_54
                *(esp_10 - 4) = &var_54
                sub_404280(1, 1, var_2c)
                sub_404188(var_54, 0x4fd920)
                
                if (not(cond:2_1))
                    *(esp_10 - 4) = &var_2c
                    int32_t eax_21 = sub_404078(var_2c)
                    
                    if (add_overflow(eax_21, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    sub_404280(eax_21 - 1, 2, var_2c)
                
                if (i_1 s< sub_404078(var_2c))
                    int32_t eax_26 = sub_404078(var_2c)
                    bool o_2 = unimplemented  {imul edx, esi, 0x2}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    if (eax_26 s> i_1 * 2 && arg1 s> 1)
                        var_24_1 = 0.670000017f
                    
                    while (i_1 s> 1)
                        if (*(var_2c + i_1 - 1) == 0x20)
                            void* var_58
                            *(esp_10 - 4) = &var_58
                            
                            if (add_overflow(i_1, 1))
                                sub_403010()
                                noreturn
                            
                            sub_404280(1, i_1 + 1, var_2c)
                            sub_404188(var_58, 0x4fd92c)
                            
                            if (i_1 != 0xffffffff)
                                break
                        
                        int32_t i_3 = i_1
                        i_1 -= 1
                        
                        if (add_overflow(i_3, 0xffffffff))
                            sub_403010()
                            noreturn
                    
                    if (*(var_2c + i_1 - 1) == 0x20)
                        *(esp_10 - 4) = &var_30
                        int32_t eax_32 = sub_404078(var_2c)
                        
                        if (add_overflow(eax_32, neg.d(i_1)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(i_1, 1))
                            sub_403010()
                            noreturn
                        
                        sub_404280(eax_32 - i_1, i_1 + 1, var_2c)
                        *(esp_10 - 4) = &var_2c
                        
                        if (add_overflow(i_1, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        sub_404280(i_1 - 1, 1, var_2c)
                
                float var_24_2 = fconvert.s(data_4fd930 * fconvert.t(var_24_1))
                sub_4fb48c(arg1, 1)
                long double st0
                
                if (*(*data_5301f4 + 4) == 7)
                    bool o_8 = unimplemented  {imul eax, ebx, 0x41}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    void* esi = *data_5301f4 + arg1 * 0x208 + 0x1fea0
                    
                    if (*(esi + 0xe) != 0 && *(*data_5301f4 + 0xfff0) - 0xa u>= 3)
                        st0 = sub_402b3c(data_4fd93c * fconvert.t(*(esi + 0x1d4)))
                        float var_8_1 = fconvert.s(st0 / fconvert.t(8f))
                        
                        if (sub_4c4b34(arg1) != 0)
                            var_8_1 = fconvert.s(fneg(fconvert.t(var_8_1)))
                        
                        *(esp_10 - 4) = 0
                        *(esp_10 - 8) = fconvert.s(fconvert.t(var_8_1) * fconvert.t(0.5f))
                        *(esp_10 - 0xc) = 0
                        (*data_5301d4)()
                
                void* esp_29
                
                if (arg1 != 1)
                    *(esp_10 - 4) = 0x3df5c28f
                    *(esp_10 - 8) = 0x3f11eb85
                    *(esp_10 - 0xc) = 0x3cf5c28f
                    (*data_5301d4)()
                    esp_29 = esp_10
                else
                    *(esp_10 - 4) = 0x3ec7ae14
                    *(esp_10 - 8) = 0x3e6b851f
                    *(esp_10 - 0xc) = 0x3eeb851f
                    (*data_5301d4)()
                    *(esp_10 - 4) = 0
                    *(esp_10 - 8) = 0
                    *(esp_10 - 0xc) = 0x3f800000
                    *(esp_10 - 0x10) = 0xc1600000
                    (*data_5306b4)()
                    esp_29 = esp_10
                
                if (sub_4ca100() != 0)
                    *(esp_29 - 4) = 0x3bc5cb76
                    *(esp_29 - 8) = 0
                    *(esp_29 - 0xc) = 0
                    (*data_5301d4)()
                    *(esp_29 - 4) = 0
                    *(esp_29 - 8) = 0x3df73e53
                    *(esp_29 - 0xc) = 0
                    (*data_5301d4)()
                    
                    if (sub_4ee7d8() == 0)
                        float var_c_1 = 0f
                        
                        if (*data_5300d0 != 6)
                            if (*data_5300d0 != 7)
                                if (*data_5300d0 == 8)
                                    if (arg1 == 2)
                                        var_c_1 = -52f
                                    else if (arg1 == 3)
                                        var_c_1 = -40f
                                    else if (arg1 == 4)
                                        var_c_1 = -20f
                            else if (arg1 == 2)
                                var_c_1 = -30f
                            else if (arg1 == 3)
                                var_c_1 = -30f
                        else if (arg1 == 2)
                            var_c_1 = -30f
                        else if (arg1 == 3)
                            var_c_1 = -60f
                        else if (arg1 == 4)
                            var_c_1 = -45f
                        
                        *(esp_29 - 4) = 0
                        *(esp_29 - 8) = 0
                        *(esp_29 - 0xc) = fconvert.s(fconvert.t(var_c_1) / fconvert.t(497f))
                        (*data_5301d4)()
                
                int32_t edi_2
                ebp_1, edi_2 = sub_46fd7c(*data_530304, var_2c)
                ebp_1[-4] =
                    fconvert.s(arg4 * fconvert.t(ebp_1[-8]) * fconvert.t(40f) / fconvert.t(497f))
                int16_t top_1 = 1
                ebp_1[-6] = ebp_1[-4]
                
                if (edi_2 s>= 2 && edi_2 != 0x64)
                    ebp_1, edi_2 = sub_46fd7c(*data_530304, ebp_1[-0xb])
                    ebp_1[-5] =
                        fconvert.s(arg5 * fconvert.t(ebp_1[-8]) * fconvert.t(40f) / fconvert.t(497f))
                    *(esp_29 - 4) = ebp_1[-4]
                    *(esp_29 - 8) = ebp_1[-5]
                    st0 = sub_420bc8()
                    ebp_1[-6] = fconvert.s(st0)
                    top_1 = 2
                
                if (edi_2 == 0x64)
                    edi_2 = 2
                
                unimplemented  {fld st0, tword [0x4fd958]}
                unimplemented  {fmul st0, dword [ebp-0x18]}
                ebp_1[-7] = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
                unimplemented  {fstp dword [ebp-0x1c], st0}
                *(esp_29 - 4) = 0xde1
                (*data_53006c)()
                *(esp_29 + 0x20) = 0xbe2
                (*data_530034)()
                *(esp_29 + 0x20) = 0xb50
                (*data_53006c)()
                *(esp_29 + 0x20) = 0x303
                *(esp_29 + 0x1c) = 0x302
                (*data_530334)()
                int32_t eax_80 = *data_530304
                *(esp_29 + 0x20) = edi_2
                __builtin_memcpy(&ebp_1[-0x12], eax_80 + 0x1088, 0x10)
                int32_t edi_4 = *(esp_29 + 0x20)
                void* eax_81 = data_530a74
                *eax_81
                bool o_9 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                void* edx_20 = data_52fed4
                *(edx_20 + (arg1 << 2))
                bool o_10 = unimplemented  {imul edx, dword [edx+ebx*4], 0x23}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                ebp_1[-9] = *(*(*data_530304 + 0xab0) + *eax_81 * 0x81c0
                    + *(edx_20 + (arg1 << 2)) * 0x118 + 0x18)
                unimplemented  {fld st0, dword [ebp-0x3c]}
                unimplemented  {fmul st0, dword [ebp-0x24]}
                *(esp_29 + 0x20) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                *(esp_29 + 0x1c) = ebp_1[-0x10]
                *(esp_29 + 0x18) = ebp_1[-0x11]
                *(esp_29 + 0x14) = ebp_1[-0x12]
                (*data_530518)()
                void* esp_60 = esp_29 + 0x24
                void* eax_88
                eax_88.b = *(*data_5301f4 + 4)
                
                if (eax_88.b == 7)
                    bool o_11 = unimplemented  {imul edx, ebx, 0x41}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    void* esi_2 = *data_5301f4 + arg1 * 0x208 + 0x1fea0
                    
                    if (*(esi_2 + 2) == 8)
                        data_5301f4
                        char temp26_1 = eax_88.b
                        eax_88.b -= 7
                        
                        if (temp26_1 == 7)
                            if (arg1 != 1)
                                if (arg1 != 1 && edi_4 s>= 2)
                                    *(esp_60 - 4) = 0
                                    *(esp_60 - 8) = 0x3d4ccccd
                                    *(esp_60 - 0xc) = 0
                                    (*data_5301d4)()
                            else if (edi_4 s>= 2)
                                *(esp_60 - 4) = 0
                                *(esp_60 - 8) = 0x3d4ccccd
                                *(esp_60 - 0xc) = 0
                                (*data_5301d4)()
                        
                        if (*(esi_2 + 0x1e5) != 0)
                            void* eax_93 = data_5302c8
                            *eax_93
                            bool o_12 = unimplemented  {imul eax, dword [eax], 0x1038}
                            
                            if (o_12)
                                sub_403010()
                                noreturn
                            
                            if (*(*(*data_530304 + 0xab0) + *eax_93 * 0x81c0 + 1) != 0)
                                unimplemented  {fld st0, dword [0x4fd964]}
                                unimplemented  {fsub st0, dword [edx+eax*8+0x81b8]}
                                ebp_1[-3] = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
                                unimplemented  {fstp dword [ebp-0xc], st0}
                            else if (*data_530538 == 0)
                                ebp_1[-3] = 0x3f800000
                            else
                                ebp_1[-3] = 0
                            
                            if (*(esi_2 + 0x1e8) s<= 1)
                                *(esp_60 - 4) = 0x3f800000
                                *(esp_60 - 8) = 0
                                *(esp_60 - 0xc) = 0
                                unimplemented  {fld st0, dword [eax+0x21118]}
                                unimplemented  {fdiv st0, dword [0x4fd968]}
                                unimplemented  {fld st0, tword [0x4fd93c]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                st0 = sub_402b3c(st0)
                                unimplemented  {call 0x402b3c}
                                unimplemented  {fmul st0, dword [ebp-0xc]}
                                unimplemented  {fmul st0, dword [0x4fd948]}
                                *(esp_60 - 0x10) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                (*data_5306b4)()
                            else
                                *(esp_60 - 4) = 0x3f800000
                                *(esp_60 - 8) = 0
                                *(esp_60 - 0xc) = 0
                                unimplemented  {fld st0, dword [eax+0x21118]}
                                unimplemented  {fdiv st0, dword [0x4fd968]}
                                unimplemented  {fdiv st0, dword [0x4fd96c]}
                                unimplemented  {fld st0, tword [0x4fd93c]}
                                unimplemented  {fmulp st1, st0}
                                unimplemented  {fmulp st1, st0}
                                st0 = sub_402b3c(st0)
                                unimplemented  {call 0x402b3c}
                                unimplemented  {fmul st0, dword [ebp-0xc]}
                                unimplemented  {fmul st0, dword [0x4fd970]}
                                *(esp_60 - 0x10) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                (*data_5306b4)()
                
                if (arg1 != 1)
                    *(esp_60 - 4) = 0x3fe00000
                    *(esp_60 - 8) = 0
                    *(esp_60 - 0xc) = 0
                    *(esp_60 - 0x10) = 0
                    *(esp_60 - 0x14) = 0
                    *(esp_60 - 0x18) = 0
                    (*data_5306a4)()
                
                if (ebp_1[-0xa] != 0 && *(ebp_1 - 0x2d) == 0)
                    *(esp_60 - 4) = 0
                    *(esp_60 - 8) = 0
                    *(esp_60 - 0xc) = 0
                    *(esp_60 - 0x10) = 0
                    unimplemented  {fld st0, dword [ebp-0x1c]}
                    unimplemented  {fchs }
                    unimplemented  {fmul st0, dword [0x4fd94c]}
                    *(esp_60 - 0x18) = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    int32_t ecx_13 = (*data_5306a4)()
                    *(esp_60 - 4) = 0
                    unimplemented  {fld st0, dword [ebp-0x1c]}
                    unimplemented  {fmul st0, dword [0x4fd950]}
                    unimplemented  {fadd dword [0x4fd974]}
                    *(esp_60 - 8) = sub_402b4c(st0)
                    int32_t eax_106
                    int32_t edx_27
                    edx_27:eax_106 = sx.q(edi_4)
                    *(esp_60 - 0xc) = edx_27
                    *(esp_60 - 0x10) = eax_106
                    unimplemented  {fld st0, dword [0x4fd978]}
                    unimplemented  {fmul st0, dword [ebp-0x20]}
                    int32_t eax_107
                    int32_t edx_28
                    eax_107, edx_28 = sub_402b4c(st0)
                    int32_t eax_108 = sub_406807(ecx_13, edx_28, eax_107)
                    
                    if (add_overflow(esp_60 - 0x10, 0xfffffff8))
                        sub_403010()
                        noreturn
                    
                    *(esp_60 - 0xc) = eax_108
                    *(esp_60 - 0x10) = 0x32
                    *(esp_60 - 0x14) = ebp_1[-9]
                    *(esp_60 - 0x18) = 1
                    ebp_1 = sub_46c038(*data_530304, 0)
                
                *(esp_60 - 4) = 0
                *(esp_60 - 8) = 0
                *(esp_60 - 0xc) = 0x3f847ae1
                *(esp_60 - 0x10) = 0x47ae147b
                *(esp_60 - 0x14) = 0x3f947ae1
                *(esp_60 - 0x18) = 0x47ae147b
                (*data_5306a4)()
                *(esp_60 - 4) = 0xb50
                (*data_53006c)()
                *(esp_60 - 4) = 0xde1
                (*data_530034)()
                *(esp_60 - 4) = 0xbe2
                (*data_530034)()
                sub_4699b8(*data_530304)
                unimplemented  {fld st0, dword [0x4fd964]}
                unimplemented  {fmul st0, dword [ebp-0x24]}
                *(esp_60 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                top = top_1
                *(esp_60 - 8) = 0x3f800000
                *(esp_60 - 0xc) = 0x3f800000
                *(esp_60 - 0x10) = 0x3f800000
                (*data_530518)()
                
                if (edi_4 == 2)
                    *(esp_60 - 4) = 0
                    *(esp_60 - 8) = 0
                    unimplemented  {fld st0, tword [0x4fd97c]}
                    unimplemented  {fmul st0, dword [ebp-0x20]}
                    unimplemented  {fmul st0, dword [0x4fd988]}
                    *(esp_60 - 0x10) = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    *(esp_60 - 0x14) = 0
                    *(esp_60 - 0x18) = 0
                    (*data_5306a4)()
                
                void* esp_123
                
                if (*(ebp_1 - 0x2d) == 0)
                    *(esp_60 - 4) = 0
                    *(esp_60 - 8) = 0
                    *(esp_60 - 0xc) = 0
                    *(esp_60 - 0x10) = 0
                    unimplemented  {fld st0, dword [ebp-0x18]}
                    unimplemented  {fdiv st0, dword [0x4fd96c]}
                    unimplemented  {fld st0, dword [ebp-0x10]}
                    unimplemented  {fdiv st0, dword [0x4fd96c]}
                    unimplemented  {fsubp st1, st0}
                    unimplemented  {fsubp st1, st0}
                    unimplemented  {fld st0, tword [0x4fd958]}
                    unimplemented  {fmulp st1, st0}
                    unimplemented  {fmulp st1, st0}
                    *(esp_60 - 0x18) = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    (*data_5306a4)()
                    *(esp_60 - 4) = ebp_1[-8]
                    *(esp_60 - 8) = 0x3f800000
                    *(esp_60 - 0xc) = 0
                    ebp_1 = sub_48c0c8(*data_530304, ebp_1[-0xa])
                    esp_123 = esp_60
                    
                    if (ebp_1[-0xb] != 0)
                        *(esp_123 - 4) = 0
                        *(esp_123 - 8) = 0
                        unimplemented  {fld st0, dword [ebp-0x20]}
                        unimplemented  {fchs }
                        unimplemented  {fld st0, tword [0x4fd97c]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fld st0, tword [0x4fd98c]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        *(esp_123 - 0x10) = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        unimplemented  {fld st0, dword [ebp-0x10]}
                        unimplemented  {fchs }
                        unimplemented  {fdiv st0, dword [0x4fd96c]}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        unimplemented  {fdiv st0, dword [0x4fd96c]}
                        unimplemented  {fsubp st1, st0}
                        unimplemented  {fsubp st1, st0}
                        unimplemented  {fld st0, tword [0x4fd958]}
                        unimplemented  {fmulp st1, st0}
                        unimplemented  {fmulp st1, st0}
                        *(esp_123 - 0x18) = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        (*data_5306a4)()
                        *(esp_123 - 4) = ebp_1[-8]
                        *(esp_123 - 8) = 0x3f800000
                        *(esp_123 - 0xc) = 0
                        ebp_1 = sub_48c0c8(*data_530304, ebp_1[-0xb])
                else
                    *(esp_60 - 4) = 0x39
                    *(esp_60 - 8) = ebp_1[-9]
                    *(esp_60 - 0xc) = 0xfffffff8
                    *(esp_60 - 0x10) = 0x50
                    sub_46a708(0x6e, *data_530a04, *data_530304)
                    esp_123 = esp_60
                
                *(esp_123 - 4) = 0x203
                (*data_53051c)()
                esp_10 = esp_123
    
    int32_t esi_3 = arg1
    
    if ((esi_3 s>= 1 && esi_3 s<= 8) || esi_3 == 0xa || esi_3 == 9)
        int32_t edi_5
        
        if (sub_4c0924() == 0 || *(*data_5301f4 + 0xffec) == 2 || *data_5302d0 s< 1)
            edi_5 = 0
        else
            edi_5 = 1
        
        *(ebp_1 - 0x2e) = 0
        sub_403e90(&ebp_1[-0xe], "Starten..")
        char ebx_1 = 0
        *data_530364
        
        if (*(*data_5301f4 + 0x111f9) == 0 || *(*data_5301f4 + 0x10038) == 0 || esi_3 s> *data_5300d0)
        label_4fd234:
            
            if (esi_3 == 1 || esi_3 == 0xa)
            label_4fd283:
                int32_t edx_34
                edx_34.b = 5
                ebp_1[-0xd] = sub_4cc200(esi_3, edx_34.b)
                
                if (*(ebp_1 - 0x2e) != 0 || ((esi_3 == 1 || esi_3 - 9 u< 2) && ebp_1[-0xd] s> 0))
                label_4fd2f6:
                    *(esp_10 - 4) = 0
                    sub_4d0204(esi_3, 0)
                    
                    if (*(ebp_1 - 0x2e) == 0)
                        char eax_177
                        
                        if (esi_3 != 1 && esi_3 != 0xa && esi_3 != 9)
                            eax_177 = sub_512d1c(*data_530454, esi_3, 0)
                        
                        if (esi_3 != 1 && esi_3 != 0xa && esi_3 != 9 && eax_177 != 0)
                            sub_4ca218(esi_3)
                            unimplemented  {call 0x4ca218}
                            *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            void* eax_179 = data_5302c8
                            *eax_179
                            bool o_16 = unimplemented  {imul eax, dword [eax], 0x1038}
                            
                            if (o_16)
                                sub_403010()
                                noreturn
                            
                            *(esp_10 - 8) = *(*(*data_530304 + 0xab0) + *eax_179 * 0x81c0 + 0x81b8)
                            unimplemented  {call 0x420bc8}
                            *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            *(esp_10 - 8) = 0
                            *(esp_10 - 0xc) = &ebp_1[-0x21]
                            int32_t ecx_21
                            ecx_21.b = 1
                            sub_5207dc(*data_5301f4, esi_3, ecx_21)
                            sub_4040c4(&ebp_1[-0x20], "!", ebp_1[-0x21])
                            int32_t ecx_23
                            ecx_23.b = 1
                            esi_3 =
                                sub_4fc3f8(ebp_1[-0x20], esi_3, ecx_23, unimplemented  {call 0x4fc3f8})
                            ebx_1 = 1
                        else if (esi_3 == 1 || esi_3 == 0xa || esi_3 == 9)
                            if (esi_3 == 0xa)
                                ebp_1, edi_5 = sub_4cda5c(ebp_1[-0xd], 0, &ebp_1[-0x2c])
                                sub_4040c4(&ebp_1[-0x2b], "!Pot:  ", ebp_1[-0x2c])
                                *(esp_10 - 4) = ebp_1[-0x2b]
                                sub_47ab08(*data_530304, *data_530040, 2, 
                                    unimplemented  {call 0x47ab08})
                            else if (esi_3 == 1)
                                void* ebp_2 = sub_4cda5c(ebp_1[-0xd], 0, &ebp_1[-0x2e])
                                sub_4040c4(ebp_2 - 0xb4, U"!", *(ebp_2 - 0xb8))
                                *(esp_10 - 4) = *(ebp_2 - 0xb4)
                                sub_47ab08(*data_530304, *data_530a00, 1, 
                                    unimplemented  {call 0x47ab08})
                                void* ebp_3
                                ebp_3, edi_5 = sub_4cda5c(*(ebp_2 - 0x34), 0, ebp_2 - 0xbc)
                                int32_t eax_221 = sub_404078(*(ebp_3 - 0xbc)) * 0xd
                                bool o_18 = unimplemented  {imul eax, eax, 0xd}
                                
                                if (o_18)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_221, 0x28))
                                    sub_403010()
                                    noreturn
                                
                                void* edx_61 = data_530a00
                                *edx_61
                                bool o_20 = unimplemented  {imul edx, dword [edx], 0x1038}
                                
                                if (o_20)
                                    sub_403010()
                                    noreturn
                                
                                *(*(*data_530304 + 0xab0) + *edx_61 * 0x81c0 + 6) = eax_221.w + 0x28
                                ebp_1 = sub_4ee360()
                            
                            ebx_1 = 1
                        else
                            if (sub_4c0924() == 0 || *data_5302d0 != 2)
                                if (sub_4c0924() == 0 || *data_5302d0 s< 1)
                                    sub_4ca218(esi_3)
                                    unimplemented  {call 0x4ca218}
                                    *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    void* eax_200 = data_5302c8
                                    *eax_200
                                    bool o_17 = unimplemented  {imul eax, dword [eax], 0x1038}
                                    
                                    if (o_17)
                                        sub_403010()
                                        noreturn
                                    
                                    *(esp_10 - 8) =
                                        *(*(*data_530304 + 0xab0) + *eax_200 * 0x81c0 + 0x81b8)
                                    unimplemented  {call 0x420bc8}
                                    *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    *(esp_10 - 8) = &data_4fd9cc
                                    *(esp_10 - 0xc) = 0
                                    *(esp_10 - 0x10) = &ebp_1[-0x29]
                                    int32_t ecx_29
                                    ecx_29.b = 1
                                    sub_5207dc(*data_5301f4, esi_3, ecx_29)
                                    *(esp_10 - 0xc) = ebp_1[-0x29]
                                    *(esp_10 - 0x10) = &data_4fd9d8
                                    ebp_1, edi_5 = sub_4cda5c(ebp_1[-0xd], 0, &ebp_1[-0x2a])
                                    *(esp_10 - 0x14) = ebp_1[-0x2a]
                                    sub_404138(&ebp_1[-0x28], 4)
                                    int32_t ecx_31
                                    ecx_31.b = 1
                                    esi_3 = sub_4fc3f8(ebp_1[-0x28], esi_3, ecx_31, 
                                        unimplemented  {call 0x4fc3f8})
                                else
                                    ebp_1[-0x22] = edi_5
                                    unimplemented  {fild st0, dword [ebp-0x88]}
                                    *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    *(esp_10 - 8) = &data_4fd9cc
                                    *(esp_10 - 0xc) = 0
                                    *(esp_10 - 0x10) = &ebp_1[-0x26]
                                    int32_t ecx_19
                                    ecx_19.b = 1
                                    sub_5207dc(*data_5301f4, esi_3, ecx_19)
                                    *(esp_10 - 0xc) = ebp_1[-0x26]
                                    *(esp_10 - 0x10) = &data_4fd9d8
                                    ebp_1, edi_5 = sub_4cda5c(ebp_1[-0xd], 0, &ebp_1[-0x27])
                                    *(esp_10 - 0x14) = ebp_1[-0x27]
                                    sub_404138(&ebp_1[-0x25], 4)
                                    int32_t ecx_28
                                    ecx_28.b = 1
                                    esi_3 = sub_4fc3f8(ebp_1[-0x25], esi_3, ecx_28, 
                                        unimplemented  {call 0x4fc3f8})
                            else
                                ebp_1[-0x22] = edi_5
                                unimplemented  {fild st0, dword [ebp-0x88]}
                                *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                ebp_1, edi_5 = sub_4cda5c(ebp_1[-0xd], 0, &ebp_1[-0x24])
                                sub_4040c4(&ebp_1[-0x23], U"!", ebp_1[-0x24])
                                int32_t ecx_26
                                ecx_26.b = 1
                                esi_3 = sub_4fc3f8(ebp_1[-0x23], esi_3, ecx_26, 
                                    unimplemented  {call 0x4fc3f8})
                            
                            ebx_1 = 1
                    else
                        sub_4ca218(esi_3)
                        unimplemented  {call 0x4ca218}
                        *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t ecx_20
                        ecx_20.b = 1
                        esi_3 = sub_4fc3f8(ebp_1[-0xe], esi_3, ecx_20, unimplemented  {call 0x4fc3f8})
                        ebx_1 = 1
                else
                    char eax_167
                    
                    if (esi_3 != 1 && esi_3 s<= 8)
                        eax_167 = sub_4c2d7c(esi_3)
                    
                    if (esi_3 != 1 && esi_3 s<= 8 && eax_167 != 0)
                        goto label_4fd2f6
                    
                    char eax_168 = sub_4c0924()
                    char eax_171
                    
                    if (eax_168 != 0 && esi_3 != 1 && esi_3 s<= 8)
                        eax_171 = sub_512d1c(*data_530454, esi_3, 0)
                    
                    if (eax_168 != 0 && esi_3 != 1 && esi_3 s<= 8 && eax_171 != 0)
                        goto label_4fd2f6
                    
                    sub_4ca218(esi_3)
                    unimplemented  {call 0x4ca218}
                    long double temp15_1 = fconvert.t(0f)
                    unimplemented  {fcomp st0, dword [0x4fd9b0]} f- temp15_1
                    bool c0_2 = unimplemented  {fcomp st0, dword [0x4fd9b0]} f< temp15_1
                    bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, dword [0x4fd9b0]}, temp15_1)
                    bool c3_2 = unimplemented  {fcomp st0, dword [0x4fd9b0]} f== temp15_1
                    unimplemented  {fcomp st0, dword [0x4fd9b0]}
                    int16_t eax_224 = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa
                        | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
                    
                    if (not(test_bit(eax_224:1.b, 6)) && not(test_bit(eax_224:1.b, 0)) && esi_3 != 1
                            && esi_3 != 0xa && esi_3 != 9 && sub_512d1c(*data_530454, esi_3, 0) == 0
                            && sub_512cbc(*data_530454, esi_3) != 0)
                        *(esp_10 - 4) = 0
                        sub_4d0204(esi_3, 0)
                        sub_4ca218(esi_3)
                        unimplemented  {call 0x4ca218}
                        *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        *(esp_10 - 8) = 0
                        *(esp_10 - 0xc) = &ebp_1[-0x31]
                        int32_t ecx_42
                        ecx_42.b = 1
                        sub_5207dc(*data_5301f4, esi_3, ecx_42)
                        sub_4040c4(&ebp_1[-0x30], "!", ebp_1[-0x31])
                        int32_t ecx_44
                        ecx_44.b = 1
                        esi_3 = sub_4fc3f8(ebp_1[-0x30], esi_3, ecx_44, unimplemented  {call 0x4fc3f8})
                        ebx_1 = 1
            else
                if (esi_3 s> *data_5300d0)
                    if (*(ebp_1 - 0x2e) != 0)
                        goto label_4fd283
                    
                    goto label_4fd264
                
                sub_4ca218(esi_3)
                unimplemented  {call 0x4ca218}
                long double temp8_1 = fconvert.t(0f)
                unimplemented  {fcomp st0, dword [0x4fd9b0]} f- temp8_1
                bool c0_1 = unimplemented  {fcomp st0, dword [0x4fd9b0]} f< temp8_1
                bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [0x4fd9b0]}, temp8_1)
                bool c3_1 = unimplemented  {fcomp st0, dword [0x4fd9b0]} f== temp8_1
                unimplemented  {fcomp st0, dword [0x4fd9b0]}
                int16_t eax_157 = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                
                if ((not(test_bit(eax_157:1.b, 6)) && not(test_bit(eax_157:1.b, 0)))
                        || *(ebp_1 - 0x2e) != 0)
                    goto label_4fd283
                
            label_4fd264:
                
                if (*data_5302d0 s>= 2 && sub_4c0924() != 0 && esi_3 s<= 8)
                    goto label_4fd283
        else
            bool o_14 = unimplemented  {imul eax, esi, 0x21}
            
            if (o_14)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + esi_3 * 0x21 + 0x10018) == 0)
                goto label_4fd234
            
            *(esp_10 - 4) = 0
            sub_4d06c0(esi_3, 0)
            *(esp_10 - 4) = 0x3f800000
            sub_402bc0(&ebp_1[-0x1f], 0x4fd9ac)
            bool o_15 = unimplemented  {imul eax, esi, 0x21}
            
            if (o_15)
                sub_403010()
                noreturn
            
            sub_40401c(sub_402b90(&ebp_1[-0x1f], *data_5301f4 + esi_3 * 0x21 + 0x10018, 0x21), 
                &ebp_1[-0x1f])
            int32_t ecx_18
            ecx_18.b = 1
            esi_3 = sub_4fc3f8(ebp_1[-0x16], esi_3, ecx_18, unimplemented  {call 0x4fc3f8})
            ebx_1 = 1
        
        if (ebx_1 == 0)
            *data_5302c8
            bool o_21 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_21)
                sub_403010()
                noreturn
            
            unimplemented  {fld st0, dword [edx+eax*8+0x81b8]}
            long double temp14_1 = fconvert.t(0f)
            unimplemented  {fcomp st0, dword [0x4fd9b0]} f- temp14_1
            bool c0_3 = unimplemented  {fcomp st0, dword [0x4fd9b0]} f< temp14_1
            bool c2_3 = is_unordered.t(unimplemented  {fcomp st0, dword [0x4fd9b0]}, temp14_1)
            bool c3_3 = unimplemented  {fcomp st0, dword [0x4fd9b0]} f== temp14_1
            unimplemented  {fcomp st0, dword [0x4fd9b0]}
            int16_t eax_239 =
                (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe | (top & 7) << 0xb
            
            if (not(test_bit(eax_239:1.b, 6)) && not(test_bit(eax_239:1.b, 0)))
            label_4fd78a:
                
                if (esi_3 != 1 && esi_3 != 0xa && esi_3 != 9 && esi_3 s<= *data_5300d0
                        && sub_4c2d7c(esi_3) != 0)
                    *(esp_10 - 4) = 0
                    sub_4d0204(esi_3, 0)
                    int32_t ecx_45
                    
                    if (sub_4c0924() == 0 || *data_5302d0 != 1)
                        void* eax_253 = data_5302c8
                        *eax_253
                        bool o_22 = unimplemented  {imul eax, dword [eax], 0x1038}
                        
                        if (o_22)
                            sub_403010()
                            noreturn
                        
                        *(esp_10 - 4) = *(*(*data_530304 + 0xab0) + *eax_253 * 0x81c0 + 0x81b8)
                        *(esp_10 - 8) = 0
                        *(esp_10 - 0xc) = &ebp_1[-0x35]
                        ecx_45.b = 1
                        sub_5207dc(*data_5301f4, esi_3, ecx_45)
                        sub_4040c4(&ebp_1[-0x34], U"!", ebp_1[-0x35])
                        int32_t ecx_49
                        ecx_49.b = 1
                        sub_4fc3f8(ebp_1[-0x34], esi_3, ecx_49, unimplemented  {call 0x4fc3f8})
                    else
                        ebp_1[-0x22] = edi_5
                        unimplemented  {fild st0, dword [ebp-0x88]}
                        *(esp_10 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        *(esp_10 - 8) = 0
                        *(esp_10 - 0xc) = &ebp_1[-0x33]
                        ecx_45.b = 1
                        sub_5207dc(*data_5301f4, esi_3, ecx_45)
                        sub_4040c4(&ebp_1[-0x32], U"!", ebp_1[-0x33])
                        int32_t ecx_47
                        ecx_47.b = 1
                        sub_4fc3f8(ebp_1[-0x32], esi_3, ecx_47, unimplemented  {call 0x4fc3f8})
            else if (sub_4c0924() != 0 && *data_5302d0 == 1)
                goto label_4fd78a
    
    *(esp_10 + 8)
    fsbase->NtTib.ExceptionList = *esp_10
    *(esp_10 + 8) = sub_4fd8ee
    sub_403e1c(&ebp_1[-0x35], 0x13)
    sub_403e1c(&ebp_1[-0x21], 2)
    sub_403e1c(&ebp_1[-0x16], 4)
    sub_403df8(&ebp_1[-0xe])
    return sub_403e1c(&ebp_1[-0xb], 2)
}
