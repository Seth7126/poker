// ============================================================
// 函数名称: sub_484e24
// 虚拟地址: 0x484e24
// WARP GUID: d48a3037-422b-5492-beb9-3ba5eb77da60
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_46ae30, sub_46c038, sub_4042c0, sub_402e28, sub_469d58, sub_47a7ec, sub_40423c, sub_46d5f4, sub_40401c, sub_482da8, sub_402b4c, sub_46c3d0, sub_404280, sub_403010, sub_403008, sub_48c214, sub_403e1c, sub_403e90, sub_404078, sub_402b3c, sub_402c90, sub_404188, sub_48c0c8, sub_403fb0, sub_47c0f0, sub_402bc0, sub_482828, sub_46a708, sub_4040c4, sub_48bae4, sub_408e80, sub_46fd7c, sub_402b90, sub_46a50c, sub_403fa0, sub_403df8, sub_4822b4, sub_48c290, sub_48b3d8, sub_479f44, sub_402e88, sub_40287c, sub_48156c, sub_47a86c, sub_4028c0, sub_484dfc
// [被调用的父级函数]: sub_48bd60
// ============================================================

void* __convention("regparm")sub_484e24(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_5 = 0x78
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_5
        i_5 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg2
    *(esp_2 - 0xc) = arg3
    char edx
    char var_5 = edx
    void* ebx = arg1
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    *(esp_2 - 0x1c) = 0x207
    (*data_53051c)()
    int32_t var_14 = 0
    uint32_t eax_2 = GetTickCount()
    *esp_2 = 0
    *(esp_2 - 4) = eax_2
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(ebx + 0x994))
    int32_t temp3 = *(esp_2 - 4)
    *(esp_2 - 4) -= eax_4
    *esp_2 = sbb.d(*esp_2, edx_1, temp3 u< eax_4)
    int32_t eax_5 = *(esp_2 - 4)
    *esp_2
    void* esp_14 = &esp_2[1]
    int32_t temp4 = *(ebx + 0x998)
    *(ebx + 0x998) += eax_5
    
    if (add_overflow(temp4, eax_5))
        sub_403010()
        noreturn
    
    uint32_t eax_6 = GetTickCount()
    
    if (eax_6 s< 0)
        sub_403008()
        noreturn
    
    *(ebx + 0x994) = eax_6
    
    if (*(ebx + 0x998) s> 0x1f4 && *(ebx + 0x990) != 0)
    label_484ec0:
        eax_6.b = *(ebx + 0x990)
        eax_6.b ^= 1
        *(ebx + 0x990) = eax_6.b
        *(ebx + 0x998) = 0
    else if (*(ebx + 0x998) s> 0x12c && *(ebx + 0x990) == 0)
        goto label_484ec0
    
    int32_t var_c = 1
    
    while (true)
        int32_t eax_7 = *(ebx + 0xab4)
        
        if (eax_7 s> 0)
            ebp_1[-0x23] = eax_7
            int32_t esi = 1
            
            while (true)
                if (ebp_1[-2] != 3 || esi != *(ebx + 0x10d8))
                    if (esi != *(ebx + 0x10d8) && ebp_1[-2] == 2)
                        bool o_1 = unimplemented  {imul eax, esi, 0x1038}
                        
                        if (o_1)
                            sub_403010()
                            noreturn
                        
                        if (*(*(ebx + 0xab0) + esi * 0x81c0 + 0x8139) != 0)
                            goto label_484f5a
                        
                        goto label_484f2f
                    
                label_484f2f:
                    
                    if (ebp_1[-2] == 1)
                        bool o_2 = unimplemented  {imul eax, esi, 0x1038}
                        
                        if (o_2)
                            sub_403010()
                            noreturn
                        
                        if (*(*(ebx + 0xab0) + esi * 0x81c0 + 0x8139) == 0)
                            goto label_484f5a
                else
                label_484f5a:
                    bool o_3 = unimplemented  {imul eax, esi, 0x1038}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    char* eax_11 = *(ebx + 0xab0) + esi * 0x81c0 + 0x813c
                    int32_t ecx
                    ecx.b = *eax_11
                    int32_t ecx_2 = sub_402c90(eax_11, 0x48ab78, ecx + 1)
                    
                    if (ecx != 0xffffffff)
                    label_484fae:
                        
                        if (esi == *(ebx + 0x8a0))
                        label_484ffd:
                            bool o_7 = unimplemented  {imul eax, esi, 0x1038}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            if (*(*(ebx + 0xab0) + esi * 0x81c0) == 0)
                            label_485030:
                                bool o_9 = unimplemented  {imul eax, esi, 0x1038}
                                
                                if (o_9)
                                    sub_403010()
                                    noreturn
                                
                                if (sub_484dfc(ecx_2, *(ebx + 0xab0) + esi * 0x81c0 + 0x81a8) != 0)
                                    goto label_485059
                            else
                                bool o_8 = unimplemented  {imul eax, esi, 0x1038}
                                
                                if (o_8)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*(ebx + 0xab0) + esi * 0x81c0 + 1) == 0)
                                    goto label_485030
                                
                            label_485059:
                                bool o_10 = unimplemented  {imul eax, esi, 0x1038}
                                
                                if (o_10)
                                    sub_403010()
                                    noreturn
                                
                                ebp_1[-0x24] = *(ebx + 0xab0) + esi * 0x81c0
                                char* eax_27 = ebp_1[-0x24] + 0x813c
                                int32_t ecx_3
                                ecx_3.b = *eax_27
                                sub_402c90(eax_27, 0x48ab7c, ecx_3 + 1)
                                
                                if (ecx_3 == 0xffffffff)
                                    *(ebx + 0x9cc) = 1
                                
                                bool o_11 = unimplemented  {imul eax, esi, 0x1038}
                                
                                if (o_11)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_28
                                eax_28.b = *(*(ebx + 0xab0) + esi * 0x81c0 + 0x8139)
                                char temp8_1 = eax_28.b
                                eax_28.b -= 1
                                eax_28.b = temp8_1 u< 1
                                eax_28.b ^= 1
                                *(ebx + 0x97c) = eax_28.b
                                eax_28.b = *(ebp_1 - 1)
                                eax_28.b ^= 1
                                
                                if (eax_28.b != 0)
                                    *(esp_14 - 4) = 0x2100
                                    *(esp_14 - 8) = 0x2200
                                    *(esp_14 - 0xc) = 0x2300
                                    (*data_5304ac)()
                                
                                (*data_530810)()
                                unimplemented  {fld st0, dword [ebx+0x978]}
                                long double temp9_1 = fconvert.t(18f)
                                unimplemented  {fcomp st0, dword [0x48ab80]} f- temp9_1
                                bool c0_1 = unimplemented  {fcomp st0, dword [0x48ab80]} f< temp9_1
                                bool c2_1 = is_unordered.t(
                                    unimplemented  {fcomp st0, dword [0x48ab80]}, temp9_1)
                                bool c3_1 = unimplemented  {fcomp st0, dword [0x48ab80]} f== temp9_1
                                unimplemented  {fcomp st0, dword [0x48ab80]}
                                int16_t top
                                int16_t eax_33 = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa
                                    | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                
                                if (not(test_bit(eax_33:1.b, 6)) && not(test_bit(eax_33:1.b, 0)))
                                    *(ebx + 0x978) = 0
                                
                                *(esp_14 - 4) = 0xde1
                                (*data_53006c)()
                                *(esp_14 - 4) = 0xb50
                                (*data_53006c)()
                                
                                if (*(ebp_1 - 1) != 1)
                                    *(esp_14 - 4) = 0xbe2
                                    (*data_530034)()
                                
                                if ((data_5320b8 | *(ebp_1 - 1)) != 0)
                                    *(esp_14 - 4) = 0xbe2
                                    (*data_53006c)()
                                
                                if (*(ebp_1 - 1) != 1)
                                    *(esp_14 - 4) = 0x303
                                    *(esp_14 - 8) = 0x302
                                    (*data_530334)()
                                
                                long double st0
                                
                                if (*(ebp_1 - 1) != 1)
                                    *(esp_14 - 4) = 0xbffe6666
                                    *(esp_14 - 8) = 0x66666666
                                    *(esp_14 - 0xc) = 0x3fe35c28
                                    *(esp_14 - 0x10) = 0xf5c28f5c
                                    *(esp_14 - 0x14) = 0xbfe9b22d
                                    *(esp_14 - 0x18) = 0xe560419
                                    (*data_5306a4)()
                                    sub_47c0f0(ebx)
                                    *(esp_14 - 4) = 0
                                    *(esp_14 - 8) = 0
                                    int32_t eax_49 = sx.d(*(ebp_1[-0x24] + 4))
                                    
                                    if (neg.d(eax_49) == 0x80000000)
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1[-0x29] = neg.d(eax_49)
                                    unimplemented  {fild st0, dword [ebp-0xa4]}
                                    unimplemented  {fdiv st0, dword [0x48ab84]}
                                    *(esp_14 - 0x10) =
                                        fconvert.d(unimplemented  {fstp qword [esp], st0})
                                    unimplemented  {fstp qword [esp], st0}
                                    unimplemented  {fild st0, word [eax+0x2]}
                                    unimplemented  {fdiv st0, dword [0x48ab84]}
                                    *(esp_14 - 0x18) =
                                        fconvert.d(unimplemented  {fstp qword [esp], st0})
                                    unimplemented  {fstp qword [esp], st0}
                                    (*data_5306a4)()
                                    void* esp_38
                                    
                                    if (esi == *(ebx + 0x8a0) || *(ebp_1[-0x24] + 0x8139) == 0)
                                        int32_t eax_54 = ebp_1[-0x24]
                                        *(esp_14 - 4) = esi
                                        __builtin_memcpy(eax_54 + 0xc, ebx + 0x1088, 0x10)
                                        esi = *(esp_14 - 4)
                                        esp_38 = esp_14
                                    else
                                        int32_t eax_55 = ebp_1[-0x24]
                                        *(esp_14 - 4) = esi
                                        __builtin_memcpy(eax_55 + 0xc, ebx + 0x1078, 0x10)
                                        esi = *(esp_14 - 4)
                                        esp_38 = esp_14
                                    
                                    unimplemented  {fld st0, dword [eax+0x18]}
                                    unimplemented  {fmul st0, dword [eax+0x81b8]}
                                    *(esp_38 - 4) = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    *(esp_38 - 8) = *(ebp_1[-0x24] + 0x14)
                                    *(esp_38 - 0xc) = *(ebp_1[-0x24] + 0x10)
                                    *(esp_38 - 0x10) = *(ebp_1[-0x24] + 0xc)
                                    (*data_530518)()
                                    *(esp_38 - 4) = *(ebp_1[-0x24] + 0x81b8)
                                    int32_t eax_63 = sx.d(*(ebp_1[-0x24] + 2))
                                    int32_t edx_18 = sx.d(*(ebp_1[-0x24] + 6))
                                    int32_t edx_19 = edx_18 s>> 1
                                    bool c_3 = unimplemented  {sar edx, 0x1}
                                    
                                    if (edx_18 s>> 1 s< 0)
                                        edx_19 = adc.d(edx_19, 0, c_3)
                                    
                                    if (add_overflow(eax_63, edx_19))
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t ecx_5
                                    ecx_5.b = eax_63 + edx_19 s< 0x17c
                                    sub_46ae30(ecx_5, esi, ebx)
                                    void* esp_51
                                    
                                    if (*(ebp_1[-0x24] + 0x81a6) s> 0 && *(ebx + 0x10c8) == 3)
                                        *(esp_38 - 4) = sx.d(*(ebp_1[-0x24] + 4))
                                        *(esp_38 - 8) = sx.d(*(ebp_1[-0x24] + 6))
                                        *(esp_38 - 0xc) = sx.d(*(ebp_1[-0x24] + 8))
                                        *(esp_38 - 0x10) = *(ebp_1[-0x24] + 0x81b8)
                                        sub_46c3d0(sx.d(*(ebp_1[-0x24] + 2)), 0, ebx)
                                        esp_51 = esp_38
                                    else if (*(ebp_1[-0x24] + 0x81a6) s<= 0 || *(ebx + 0x10c8) != 2)
                                        if (*(ebp_1[-0x24] + 0x81a2) != 0)
                                            int32_t eax_116 = ebp_1[-0x24]
                                            *(esp_38 - 4) = esi
                                            __builtin_memcpy(eax_116 + 0xc, ebx + 0x1088, 0x10)
                                            esi = *(esp_38 - 4)
                                            *(esp_38 - 4) = *(ebp_1[-0x24] + 0x18)
                                            *(esp_38 - 8) = 0x3f800000
                                            *(esp_38 - 0xc) = 0x3f800000
                                            *(esp_38 - 0x10) = 0x3f800000
                                            (*data_530518)()
                                            
                                            if (*(ebx + 0xce9) == 0)
                                                *(esp_38 - 4) = 0xde1
                                                (*data_530034)()
                                            
                                            int32_t eax_123 = sx.d(*(ebp_1[-0x24] + 0x81a2))
                                            
                                            if (eax_123 s< 0)
                                                sub_403008()
                                                noreturn
                                            
                                            *(esp_38 - 4) = eax_123
                                            *(esp_38 - 8) = 0xde1
                                            (*data_53036c)()
                                            *(esp_38 - 4) = 7
                                            (*data_52ffd4)()
                                            *(esp_38 - 4) = 0
                                            *(esp_38 - 8) = 0
                                            (*data_5307f8)()
                                            *(esp_38 - 4) = 0
                                            int32_t eax_131 = sx.d(*(ebp_1[-0x24] + 8))
                                            
                                            if (neg.d(eax_131) == 0x80000000)
                                                sub_403010()
                                                noreturn
                                            
                                            ebp_1[-0x29] = neg.d(eax_131)
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            *(esp_38 - 8) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            *(esp_38 - 0xc) = 0
                                            (*data_530368)()
                                            *(esp_38 - 4) = 0
                                            *(esp_38 - 8) = 0x3f800000
                                            (*data_5307f8)()
                                            *(esp_38 - 4) = 0
                                            int32_t eax_138 = sx.d(*(ebp_1[-0x24] + 8))
                                            
                                            if (neg.d(eax_138) == 0x80000000)
                                                sub_403010()
                                                noreturn
                                            
                                            ebp_1[-0x29] = neg.d(eax_138)
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            *(esp_38 - 8) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            unimplemented  {fild st0, word [eax+0x6]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            *(esp_38 - 0xc) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            (*data_530368)()
                                            *(esp_38 - 4) = 0x3f800000
                                            *(esp_38 - 8) = 0x3f800000
                                            (*data_5307f8)()
                                            *(esp_38 - 4) = 0
                                            *(esp_38 - 8) = 0
                                            unimplemented  {fild st0, word [eax+0x6]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            void* esp_104
                                            *(esp_104 - 8) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            (*data_530368)()
                                            *esp_104 = 0x3f800000
                                            *(esp_104 - 4) = 0
                                            (*data_5307f8)()
                                            *esp_104 = 0
                                            *(esp_104 - 4) = 0
                                            *(esp_104 - 8) = 0
                                            (*data_530368)()
                                            (*data_530a08)()
                                            *esp_104 = 0xde1
                                            (*data_53006c)()
                                            esp_51 = esp_104 + 4
                                        else
                                            *(esp_38 - 4) = 7
                                            (*data_52ffd4)()
                                            *(esp_38 - 4) = 0
                                            int32_t eax_101 = sx.d(*(ebp_1[-0x24] + 8))
                                            
                                            if (neg.d(eax_101) == 0x80000000)
                                                sub_403010()
                                                noreturn
                                            
                                            ebp_1[-0x29] = neg.d(eax_101)
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            *(esp_38 - 8) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            *(esp_38 - 0xc) = 0
                                            (*data_530368)()
                                            *(esp_38 - 4) = 0
                                            int32_t eax_106 = sx.d(*(ebp_1[-0x24] + 8))
                                            
                                            if (neg.d(eax_106) == 0x80000000)
                                                sub_403010()
                                                noreturn
                                            
                                            ebp_1[-0x29] = neg.d(eax_106)
                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            *(esp_38 - 8) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            unimplemented  {fild st0, word [eax+0x6]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            *(esp_38 - 0xc) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            (*data_530368)()
                                            *(esp_38 - 4) = 0
                                            *(esp_38 - 8) = 0
                                            unimplemented  {fild st0, word [eax+0x6]}
                                            unimplemented  {fdiv st0, dword [0x48ab88]}
                                            *(esp_38 - 0xc) =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            (*data_530368)()
                                            *(esp_38 - 4) = 0
                                            *(esp_38 - 8) = 0
                                            *(esp_38 - 0xc) = 0
                                            (*data_530368)()
                                            void* esp_75
                                            esp_51 = esp_75 + 8
                                            (*data_530a08)()
                                    else if (*(ebp_1[-0x24] + 2) != 0x1e0)
                                        *(esp_38 - 4) = 0
                                        *(esp_38 - 8) = sx.d(*(ebp_1[-0x24] + 6))
                                        *(esp_38 - 0xc) = sx.d(*(ebp_1[-0x24] + 8))
                                        bool o_16 = unimplemented  {imul eax, eax, 0x3}
                                        
                                        if (o_16)
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_38 - 0x10) = sx.d(*(ebp_1[-0x24] + 0x81a6)) * 3
                                        *(esp_38 - 0x14) = *(ebp_1[-0x24] + 0x81b8)
                                        *(esp_38 - 0x18) = 0
                                        ebp_1 = sub_46c038(ebx, 0xfffffff9)
                                        esp_51 = esp_38
                                    else
                                        *(esp_38 - 4) = 0
                                        int32_t eax_79 = sx.d(*(ebp_1[-0x24] + 6))
                                        
                                        if (add_overflow(eax_79, 0x64))
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_38 - 8) = eax_79 + 0x64
                                        *(esp_38 - 0xc) = sx.d(*(ebp_1[-0x24] + 8))
                                        bool o_15 = unimplemented  {imul eax, eax, 0x3}
                                        
                                        if (o_15)
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_38 - 0x10) = sx.d(*(ebp_1[-0x24] + 0x81a6)) * 3
                                        *(esp_38 - 0x14) = *(ebp_1[-0x24] + 0x81b8)
                                        *(esp_38 - 0x18) = 0
                                        ebp_1 = sub_46c038(ebx, 0xfffffff9)
                                        esp_51 = esp_38
                                    
                                    if (*(ebp_1[-0x24] + 0x813c) != 0)
                                        *(esp_51 - 4) = &ebp_1[-0x43]
                                        sub_40287c(1, 1, ebp_1[-0x24] + 0x813c)
                                        int32_t ecx_10
                                        ecx_10.b = ebp_1[-0x43].b
                                        sub_402c90(&ebp_1[-0x43], 0x48ab78, ecx_10 + 1)
                                        
                                        if (ecx_10 != 0xffffffff)
                                            (*data_530a08)()
                                    
                                    *(esp_51 - 4) = 0xbe2
                                    (*data_53006c)()
                                    esp_14 = esp_51
                                    
                                    if (*(ebx + 0xce9) == 0)
                                        *(esp_14 - 4) = 0xde1
                                        (*data_530034)()
                                    
                                    if (*(ebx + 0xcf4) == 0)
                                        *(esp_14 - 4) = 0xb50
                                        (*data_530034)()
                                    
                                    if (*(ebp_1[-0x24] + 0x81a4) != 0 && *(ebp_1[-0x24] + 6) != 0
                                            && *(ebp_1[-0x24] + 8) != 0)
                                        unimplemented  {fild st0, word [eax+0x6]}
                                        unimplemented  {fld st0, tword [0x48ab8c]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        int32_t eax_170
                                        int32_t edx_25
                                        eax_170, edx_25 = sub_402b4c(st0)
                                        bool o_21 = unimplemented  {adc edx, 0x0}
                                        
                                        if (o_21)
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_14 - 4) = eax_170 + 6
                                        
                                        if ((eax_170 + 6) s>> 0x1f
                                                != adc.d(edx_25, 0, eax_170 u>= 0xfffffffa))
                                            sub_403008()
                                            noreturn
                                        
                                        *(esp_14 - 4) = *(esp_14 - 4)
                                        unimplemented  {fild st0, word [eax+0x8]}
                                        unimplemented  {fld st0, tword [0x48ab98]}
                                        unimplemented  {fmulp st1, st0}
                                        unimplemented  {fmulp st1, st0}
                                        int32_t eax_174
                                        int32_t edx_27
                                        eax_174, edx_27 = sub_402b4c(st0)
                                        *(esp_14 - 8) = eax_174
                                        
                                        if (eax_174 s>> 0x1f != edx_27)
                                            sub_403008()
                                            noreturn
                                        
                                        *(esp_14 - 8) = *(esp_14 - 8)
                                        *(esp_14 - 0xc) = 0
                                        void* esp_133 = esp_14 - 0xc
                                        int32_t ecx_13
                                        
                                        if (*(ebp_1[-0x24] + 0x813c) != 0)
                                            *(esp_133 - 4) = &ebp_1[-0x43]
                                            sub_40287c(1, 1, ebp_1[-0x24] + 0x813c)
                                            ecx_13.b = ebp_1[-0x43].b
                                            sub_402c90(&ebp_1[-0x43], 0x48ab78, ecx_13 + 1)
                                        
                                        int32_t eax_182
                                        
                                        if (*(ebp_1[-0x24] + 0x813c) != 0 && ecx_13 != 0xffffffff)
                                            eax_182.b = 1
                                        else
                                            eax_182 = 0
                                        
                                        *(esp_133 - 4) = eax_182
                                        *(esp_133 - 8) = 1
                                        *(esp_133 - 0xc) = *(ebp_1[-0x24] + 0x81b8)
                                        sub_48b3d8(sx.d(*(ebp_1[-0x24] + 4)), 
                                            sx.d(*(ebp_1[-0x24] + 2)), ebx)
                                        esp_14 = esp_133 + 0xc
                                
                                int32_t eax_188 = sx.d(*(ebp_1[-0x24] + 0x8130))
                                
                                if (eax_188 s> 0)
                                    ebp_1[-0x25] = eax_188
                                    ebp_1[-3] = 1
                                    
                                    while (true)
                                        int32_t eax_190 = ebp_1[-3] - 1
                                        
                                        if (eax_190 u> 0x75)
                                            sub_403008()
                                            noreturn
                                        
                                        int32_t edi_3 = (eax_190 + 1) * 0x23
                                        bool o_22 = unimplemented  {imul edi, eax, 0x23}
                                        
                                        if (o_22)
                                            sub_403010()
                                            noreturn
                                        
                                        char* eax_193 = ebp_1[-0x24] + (edi_3 << 3) - 0xf0
                                        int32_t ecx_16
                                        ecx_16.b = *eax_193
                                        int32_t ecx_18 = sub_402c90(eax_193, 0x48aba4, ecx_16 + 1)
                                        
                                        if (ecx_16 != 0xffffffff)
                                            if (ebp_1[-3] - 1 u> 0x75)
                                                sub_403008()
                                                noreturn
                                            
                                            if (*(ebp_1[-0x24] + (edi_3 << 3) - 0xf8) != 2)
                                                int32_t eax_198 = ebp_1[-3] - 1
                                                
                                                if (eax_198 u> 0x75)
                                                    sub_403008()
                                                    noreturn
                                                
                                                int32_t edi_4 = (eax_198 + 1) * 0x23
                                                bool o_23 = unimplemented  {imul edi, eax, 0x23}
                                                
                                                if (o_23)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(ebp_1[-0x24] + (edi_4 << 3) - 0xf1) != 0)
                                                label_4858d2:
                                                    *(esp_14 - 4) = *(ebp_1[-0x24] + 0x81b8)
                                                    int32_t eax_208 = sx.d(*(ebp_1[-0x24] + 2))
                                                    int32_t edx_32 = sx.d(*(ebp_1[-0x24] + 6))
                                                    int32_t edx_33 = edx_32 s>> 1
                                                    bool c_5 = unimplemented  {sar edx, 0x1}
                                                    
                                                    if (edx_32 s>> 1 s< 0)
                                                        edx_33 = adc.d(edx_33, 0, c_5)
                                                    
                                                    if (add_overflow(eax_208, edx_33))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ecx_18.b = eax_208 + edx_33 s< 0x17c
                                                    int32_t eax_211 = sub_46ae30(ecx_18, esi, ebx)
                                                    int32_t edx_36 = sx.d(*(ebp_1[-0x24] + 2))
                                                    
                                                    if (add_overflow(eax_211, edx_36))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    ebp_1[-5] = eax_211 + edx_36
                                                    ebp_1[-6] = sx.d(*(ebp_1[-0x24] + 4))
                                                    
                                                    if (ebp_1[-3] - 1 u> 0x75)
                                                        sub_403008()
                                                        noreturn
                                                    
                                                    ebp_1[-0x26] = ebp_1[-0x24] + (edi_4 << 3) - 0xf8
                                                    *(esp_14 - 4) = 0
                                                    *(esp_14 - 8) = &ebp_1[-0x1e]
                                                    void* ebp_2 = sub_47a7ec(ebp_1[-3])
                                                    *(esp_14 - 4) = 0
                                                    *(esp_14 - 8) = ebp_2 - 0x7c
                                                    ebp_1 = sub_47a86c(*(ebp_2 - 0xc))
                                                    
                                                    if (*ebp_1[-0x26] != 0xa
                                                            || *(ebp_1[-0x26] + 0xf0) != 8
                                                            || *(ebp_1[-0x24] + 8) s< 0x168
                                                            || *(ebx + 0x10c8) != 3)
                                                        int32_t eax_239 = sx.d(*(ebp_1[-0x26] + 2))
                                                        int32_t temp25_1 = ebp_1[-5]
                                                        ebp_1[-5] += eax_239
                                                        
                                                        if (add_overflow(temp25_1, eax_239))
                                                            sub_403010()
                                                            noreturn
                                                    else
                                                        int32_t eax_227 = sx.d(*(ebp_1[-0x26] + 2))
                                                        
                                                        if (add_overflow(eax_227, ebp_1[-5]))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_229
                                                        int32_t edx_39
                                                        edx_39:eax_229 = sx.q(eax_227 + ebp_1[-5])
                                                        *(esp_14 - 4) = edx_39
                                                        *(esp_14 - 8) = eax_229
                                                        int32_t eax_231 = sx.d(*(ebp_1[-0x26] + 4))
                                                        int32_t edx_41 = sx.d(*(ebp_1[-0x24] + 4))
                                                        
                                                        if (add_overflow(eax_231, edx_41))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp_1[-0x29] = eax_231 + edx_41
                                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                                        unimplemented  {fdiv st0, dword [0x48aba8]}
                                                        unimplemented  {fld st0, tword [0x48abac]}
                                                        unimplemented  {fmulp st1, st0}
                                                        unimplemented  {fmulp st1, st0}
                                                        st0 = sub_402b3c(st0)
                                                        unimplemented  {call 0x402b3c}
                                                        unimplemented  {fmul st0, dword [0x48abb8]}
                                                        int32_t eax_233
                                                        int32_t edx_42
                                                        eax_233, edx_42 = sub_402b4c(st0)
                                                        int32_t temp33_1 = *(esp_14 - 8)
                                                        *(esp_14 - 8) -= eax_233
                                                        *(esp_14 - 4) = sbb.d(*(esp_14 - 4), edx_42, 
                                                            temp33_1 u< eax_233)
                                                        int32_t eax_234 = *(esp_14 - 8)
                                                        int32_t edx_44 = adc.d(*(esp_14 - 4), 0, 
                                                            eax_234 u>= 0xfffffff6)
                                                        bool o_28 = unimplemented  {adc edx, 0x0}
                                                        
                                                        if (o_28)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 4) = eax_234 + 0xa
                                                        
                                                        if ((eax_234 + 0xa) s>> 0x1f != edx_44)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        ebp_1[-5] = *(esp_14 - 4)
                                                    
                                                    int32_t eax_241 = sx.d(*(ebp_1[-0x26] + 4))
                                                    int32_t temp27_1 = ebp_1[-6]
                                                    ebp_1[-6] += eax_241
                                                    
                                                    if (add_overflow(temp27_1, eax_241))
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (*(ebx + 0x9b4) == ebp_1[-3]
                                                            && esi == *(ebx + 0x9b8)
                                                            && *(ebx + 0x9b0) != 0)
                                                        *(ebp_1[-0x26] + 0x56) = 1
                                                    
                                                    ebp_1[-0xb] = sx.d(*(ebp_1[-0x26] + 0x56))
                                                    ebp_1[-0xe] = sx.d(*(ebp_1[-0x26] + 0x56))
                                                    
                                                    if (*(ebp_1[-0x26] + 6) == 0)
                                                        ebp_1[-0xb] = 3
                                                        ebp_1[-0xe] = 3
                                                    else if (esi != *(ebx + 0x8a0)
                                                            && *(ebp_1[-0x24] + 0x8139) != 0)
                                                        ebp_1[-0xb] = 3
                                                        ebp_1[-0xe] = 3
                                                    
                                                    if (*ebp_1[-0x26] == 6
                                                            && *(ebp_1[-0x26] + 0xfa) != 0)
                                                        int32_t eax_253 = ebp_1[-3] - 1
                                                        
                                                        if (eax_253 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_31 = unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_31)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 4) = sx.d(*(ebp_1[-0x24]
                                                            + (eax_253 + 1) * 0x118 - 0xf6))
                                                        int32_t eax_258 = ebp_1[-3] - 1
                                                        
                                                        if (eax_258 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_32 = unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_32)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 8) = sx.d(*(ebp_1[-0x24]
                                                            + (eax_258 + 1) * 0x118 - 0xf4))
                                                        void* edi_5 = ebp_1[-0x26]
                                                        ebp_1[-3]
                                                        *(edi_5 + 0xfc)
                                                        (*(edi_5 + 0xf8))()
                                                    
                                                    char* eax_263
                                                    eax_263.b = *ebp_1[-0x26]
                                                    char temp37_1 = eax_263.b
                                                    eax_263.b -= 0x13
                                                    
                                                    if (temp37_1 != 0x13)
                                                        char* eax_287
                                                        eax_287.b = *ebp_1[-0x26]
                                                        
                                                        if (eax_287.b == 0)
                                                        label_485c88:
                                                            
                                                            if (*(ebp_1[-0x26] + 0x88) s> 0)
                                                                int32_t eax_291 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                
                                                                if (eax_291 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_33 =
                                                                    unimplemented  {imul eax, eax, 0x23}
                                                                
                                                                if (o_33)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (*(ebp_1[-0x24]
                                                                        + (eax_291 + 1) * 0x118 - 0xf8)
                                                                        == 0x11)
                                                                    sub_402bc0(&ebp_1[-0x4a], 0x48abc0)
                                                                    int32_t eax_297 =
                                                                        sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                    
                                                                    if (eax_297 u> 0x75)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    bool o_34 =
                                                                        unimplemented  {imul eax, eax, 0x23}
                                                                    
                                                                    if (o_34)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    sub_40401c(
                                                                        sub_402b90(&ebp_1[-0x4a], 
                                                                            ebp_1[-0x24] + (eax_297 + 1) * 0x118
                                                                                - 0xf0, 
                                                                            0x1b), 
                                                                        &ebp_1[-0x4a])
                                                            
                                                            int32_t edi_6
                                                            
                                                            if (*ebp_1[-0x26] != 0
                                                                    || *(ebp_1[-0x26] + 0xf0) != 0)
                                                                char temp43_1
                                                                
                                                                if (*ebp_1[-0x26] != 0xa)
                                                                    void* eax_305
                                                                    eax_305.b = *(ebp_1[-0x26] + 0xf0)
                                                                    eax_305.b -= 0x15
                                                                    temp43_1 = eax_305.b
                                                                    eax_305.b -= 5
                                                                
                                                                if (*ebp_1[-0x26] != 0xa
                                                                        && temp43_1 u>= 5)
                                                                    edi_6 = *(ebx + 0x8c4)
                                                                else
                                                                    edi_6 = sx.d(*(ebp_1[-0x26] + 0xee))
                                                                    
                                                                    if (*(ebp_1[-0x26] + 0xf0) == 8)
                                                                        edi_6 = 0xfffffffe
                                                                    
                                                                    if (*(ebp_1[-0x26] + 0xf0) == 0xb)
                                                                        edi_6 = 0xfffffffe
                                                                    
                                                                    if (*(ebp_1[-0x26] + 0xf0) == 4)
                                                                        edi_6 = sx.d(*(ebx + 0x938))
                                                                    else if (*(ebp_1[-0x26] + 0xf0) != 0xd)
                                                                        void* eax_311
                                                                        eax_311.b = *(ebp_1[-0x26] + 0xf0)
                                                                        
                                                                        if (eax_311.b - 1 u< 3)
                                                                            edi_6 = sx.d(*(ebx + 0x936))
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 5)
                                                                            edi_6 = sx.d(*(ebx + 0x93a))
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 6)
                                                                            edi_6 = sx.d(*(ebx + 0x93e))
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0xe)
                                                                            edi_6 = *(ebx + 0x8d8)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0xf)
                                                                            edi_6 = *(ebx + 0x8dc)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x10)
                                                                            edi_6 = *(ebx + 0x8e8)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x11)
                                                                            edi_6 = *(ebx + 0x8ec)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x12)
                                                                            edi_6 = *(ebx + 0x8f4)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x14)
                                                                            edi_6 = *(ebx + 0x8fc)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x17)
                                                                            edi_6 = *(ebx + 0x908)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x16)
                                                                            edi_6 = *(ebx + 0x904)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x15)
                                                                            edi_6 = *(ebx + 0x900)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x19)
                                                                            edi_6 = *(ebx + 0x910)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x18)
                                                                            edi_6 = *(ebx + 0x90c)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x13)
                                                                            edi_6 = *(ebx + 0x8f8)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x1a)
                                                                            edi_6 = *(ebx + 0x914)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0x1b)
                                                                            edi_6 = *(ebx + 0x918)
                                                                        else if (*(ebp_1[-0x26] + 0xf0) == 0xc)
                                                                            edi_6 = *(ebx + 0x8c4)
                                                                    else
                                                                        edi_6 = sx.d(*(ebx + 0x93a))
                                                            else
                                                                edi_6 = *(ebx + 0x8c0)
                                                            
                                                            if (*(ebp_1[-0x26] + 0x56) == 1
                                                                    && *(ebp_1[-0x26] + 6) != 0)
                                                                ebp_1[-0xb] = 0
                                                            
                                                            if (edi_6 s> 0xffffffff)
                                                                void* eax_332
                                                                eax_332.b = *(ebp_1[-0x26] + 0xf0)
                                                                eax_332.b -= 9
                                                                char temp53_1 = eax_332.b
                                                                eax_332.b -= 2
                                                                
                                                                if (temp53_1 u>= 2)
                                                                    sub_404188(ebp_1[-0x1e], 0x48abd0)
                                                                    
                                                                    if (temp53_1 != 2)
                                                                        if (*(ebx + 0x900) u> 0xff)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        int32_t edx_59 = *(ebx + 0x90c)
                                                                        
                                                                        if (edx_59 u> 0xff)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        int32_t eax_370
                                                                        eax_370:1.b = 0x20
                                                                        sub_402e88(eax_370.w, edx_59.b, 
                                                                            &ebp_1[-0x52])
                                                                        bool c_8 = edi_6 u< 0xff
                                                                        
                                                                        if (edi_6 == 0xff || c_8)
                                                                            c_8 = test_bit(ebp_1[-0x52], edi_6)
                                                                        
                                                                        if (not(c_8))
                                                                            *(esp_14 - 4) = ebp_1[-6]
                                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                                            *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                            *(esp_14 - 0x14) = 0
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x20) = 0
                                                                            *(esp_14 - 0x24) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0x28) = 0x3f800000
                                                                            sub_48156c(ebp_1[-5], edi_6, ebx)
                                                                        else
                                                                            *(esp_14 - 4) = ebp_1[-6]
                                                                            *(esp_14 - 8) = 0x2d
                                                                            *(esp_14 - 0xc) = 0x2d
                                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                            *(esp_14 - 0x14) = 0
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x20) = 0
                                                                            *(esp_14 - 0x24) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0x28) = 0x3f800000
                                                                            sub_48156c(ebp_1[-5], edi_6, ebx)
                                                                    else
                                                                        *(esp_14 - 4) = ebp_1[-6]
                                                                        *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                                        *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                                        *(esp_14 - 0x10) =
                                                                            sx.d(*(ebp_1[-0x26] + 0x56))
                                                                        *(esp_14 - 0x14) = 0
                                                                        *(esp_14 - 0x18) = 0xc0e00000
                                                                        *(esp_14 - 0x1c) =
                                                                            *(ebp_1[-0x26] + 0x68)
                                                                        *(esp_14 - 0x20) = 0
                                                                        *(esp_14 - 0x24) =
                                                                            *(ebp_1[-0x26] + 0x110)
                                                                        *(esp_14 - 0x28) = 0x3f800000
                                                                        sub_48156c(ebp_1[-5], edi_6, ebx)
                                                                else
                                                                    void* eax_333
                                                                    eax_333.b = *(ebp_1[-0x26] + 0xf0)
                                                                    eax_333.b -= 9
                                                                    char temp60_1 = eax_333.b
                                                                    eax_333.b -= 2
                                                                    
                                                                    if (temp60_1 u< 2)
                                                                        (*data_530810)()
                                                                        *(esp_14 - 4) = 0xbff80000
                                                                        *(esp_14 - 8) = 0
                                                                        *(esp_14 - 0xc) = 0x3fde76c8
                                                                        *(esp_14 - 0x10) = 0xb4395810
                                                                        *(esp_14 - 0x14) = 0xbfe451eb
                                                                        *(esp_14 - 0x18) = 0x851eb852
                                                                        (*data_5306a4)()
                                                                        
                                                                        if (*(ebp_1[-0x26] + 0xf0) == 0xa)
                                                                            ebp_1[-0x22] = 0
                                                                            
                                                                            if (*(ebp_1[-0x26] + 0x56) == 1)
                                                                                ebp_1[-0x22] = 0x3b23d70a
                                                                            
                                                                            void* eax_340
                                                                            eax_340.w = *(ebp_1[-0x26] + 0x56)
                                                                            
                                                                            if (eax_340.w - 2 u< 2)
                                                                                ebp_1[-0x22] = 0x3b23d70a
                                                                            
                                                                            *(esp_14 - 4) = 0
                                                                            *(esp_14 - 8) = 0
                                                                            unimplemented  {fld st0, dword [ebp
                                                                                -0x88]}
                                                                            *(esp_14 - 0x10) = fconvert.d(
                                                                                unimplemented  {fstp qword [esp], st0})
                                                                            unimplemented  {fstp qword [esp], st0}
                                                                            unimplemented  {fld st0, dword [ebp
                                                                                -0x88]}
                                                                            unimplemented  {fchs }
                                                                            *(esp_14 - 0x18) = fconvert.d(
                                                                                unimplemented  {fstp qword [esp], st0})
                                                                            unimplemented  {fstp qword [esp], st0}
                                                                            (*data_5306a4)()
                                                                        
                                                                        *(esp_14 - 4) = 0
                                                                        *(esp_14 - 8) = 0
                                                                        int32_t eax_344 = ebp_1[-6]
                                                                        
                                                                        if (neg.d(eax_344) == 0x80000000)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x29] = neg.d(eax_344)
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0xa4]}
                                                                        unimplemented  {fdiv st0, dword [
                                                                            0x48abc4]}
                                                                        *(esp_14 - 0x10) = fconvert.d(
                                                                            unimplemented  {fstp qword [esp], st0})
                                                                        unimplemented  {fstp qword [esp], st0}
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0x14]}
                                                                        unimplemented  {fdiv st0, dword [
                                                                            0x48abc4]}
                                                                        *(esp_14 - 0x18) = fconvert.d(
                                                                            unimplemented  {fstp qword [esp], st0})
                                                                        unimplemented  {fstp qword [esp], st0}
                                                                        (*data_5306a4)()
                                                                        
                                                                        if (*(ebp_1[-0x26] + 0x74) != 0x4d)
                                                                            *(esp_14 - 4) = *(ebp_1[-0x26] + 0x60)
                                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0xc) = 0
                                                                            *(esp_14 - 0x10) = 0
                                                                            sub_46a708(*(ebp_1[-0x26] + 0x5c), 
                                                                                edi_6, ebx)
                                                                            esp_14 = esp_14
                                                                        else
                                                                            *(esp_14 - 4) = *(ebp_1[-0x26] + 0x60)
                                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0xc) = 0
                                                                            *(esp_14 - 0x10) = 0
                                                                            sub_46a50c(*(ebp_1[-0x26] + 0x5c), 
                                                                                edi_6, ebx)
                                                                            esp_14 = esp_14
                                                                
                                                                if (edi_6 == 0xfffffffe)
                                                                    int32_t eax_387 =
                                                                        sx.d(*(ebp_1[-0x24] + 0x8136))
                                                                    int32_t temp72_1 = ebp_1[-3]
                                                                    
                                                                    if (eax_387 == temp72_1)
                                                                        *(esp_14 - 4) = &ebp_1[-0x53]
                                                                        sub_404280(1, 1, ebp_1[-0x1e])
                                                                        sub_404188(ebp_1[-0x53], 0x48abdc)
                                                                        
                                                                        if (eax_387 != temp72_1)
                                                                            *(esp_14 - 4) = ebp_1[-6]
                                                                            *(esp_14 - 8) =
                                                                                sx.d(*(ebp_1[-0x26] + 0x76))
                                                                            *(esp_14 - 0xc) =
                                                                                sx.d(*(ebp_1[-0x26] + 0x72))
                                                                            *(esp_14 - 0x10) =
                                                                                sx.d(*(ebp_1[-0x26] + 0x78))
                                                                            *(esp_14 - 0x14) = 0
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0x2c]}
                                                                            *(esp_14 - 0x18) = fconvert.s(
                                                                                unimplemented  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x20) = 4
                                                                            *(esp_14 - 0x24) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0x28) = 0x3f800000
                                                                            int32_t eax_401 =
                                                                                sx.d(*(ebp_1[-0x24] + 2))
                                                                            int32_t edx_64 =
                                                                                sx.d(*(ebp_1[-0x26] + 2))
                                                                            
                                                                            if (add_overflow(eax_401, edx_64))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_403
                                                                            int32_t edx_65
                                                                            edx_65:eax_403 = sx.q(eax_401 + edx_64)
                                                                            *(esp_14 - 0x2c) = edx_65
                                                                            *(esp_14 - 0x30) = eax_403
                                                                            unimplemented  {fild st0, word [eax
                                                                                +0x76]}
                                                                            unimplemented  {fdiv st0, dword [
                                                                                0x48abe0]}
                                                                            int32_t eax_404
                                                                            int32_t edx_66
                                                                            eax_404, edx_66 = sub_402b4c(st0)
                                                                            int32_t temp95_1 = *(esp_14 - 0x30)
                                                                            *(esp_14 - 0x30) -= eax_404
                                                                            *(esp_14 - 0x2c) = sbb.d(
                                                                                *(esp_14 - 0x2c), edx_66, 
                                                                                temp95_1 u< eax_404)
                                                                            int32_t eax_405 = *(esp_14 - 0x30)
                                                                            int32_t edx_67 = *(esp_14 - 0x2c)
                                                                            *(esp_14 - 0x2c) = eax_405
                                                                            
                                                                            if (eax_405 s>> 0x1f != edx_67)
                                                                                sub_403008()
                                                                                noreturn
                                                                            
                                                                            sub_48156c(*(esp_14 - 0x2c), 
                                                                                *(ebx + 0x11c8), ebx)
                                                            
                                                            if (*(ebp_1[-0x26] + 6) != 0)
                                                                void* eax_410
                                                                eax_410.b = *(ebp_1[-0x26] + 0xf0)
                                                                char temp59_1 = eax_410.b
                                                                eax_410.b -= 8
                                                                
                                                                if (temp59_1 != 8)
                                                                    char temp66_1 = eax_410.b
                                                                    eax_410.b -= 3
                                                                    
                                                                    if (temp66_1 != 3)
                                                                        void* eax_411
                                                                        eax_411.w = *(ebp_1[-0x26] + 0x56)
                                                                        
                                                                        if (eax_411.w - 1 u< 2)
                                                                            sub_404188(ebp_1[-0x1e], 0x48abd0)
                                                                            
                                                                            if (eax_411.w != 3)
                                                                                *(esp_14 - 4) = ebp_1[-6]
                                                                                *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                                                *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                                                *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                                *(esp_14 - 0x14) = 0
                                                                                *(esp_14 - 0x18) = 0
                                                                                *(esp_14 - 0x1c) =
                                                                                    *(ebp_1[-0x26] + 0x68)
                                                                                *(esp_14 - 0x20) = 0
                                                                                unimplemented  {fld st0, dword [ebx
                                                                                    +0xa6c]}
                                                                                unimplemented  {fdiv st0, dword [
                                                                                    0x48abe4]}
                                                                                unimplemented  {fld st0, tword [0x48abac
                                                                                    ]}
                                                                                unimplemented  {fmulp st1, st0}
                                                                                unimplemented  {fmulp st1, st0}
                                                                                unimplemented  {fmul st0, dword [
                                                                                    0x48abbc]}
                                                                                st0 = sub_402b3c(st0)
                                                                                unimplemented  {call 0x402b3c}
                                                                                unimplemented  {fld st0, tword [0x48abe8
                                                                                    ]}
                                                                                unimplemented  {fmulp st1, st0}
                                                                                unimplemented  {fmulp st1, st0}
                                                                                unimplemented  {fld st0, tword [0x48abf4
                                                                                    ]}
                                                                                unimplemented  {faddp st1, st0}
                                                                                unimplemented  {faddp st1, st0}
                                                                                unimplemented  {fmul st0, dword [eax
                                                                                    +0x110]}
                                                                                *(esp_14 - 0x24) = fconvert.s(
                                                                                    unimplemented  {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                *(esp_14 - 0x28) = 0x3f800000
                                                                                sub_48156c(ebp_1[-5], 0xfffffffe, ebx)
                                                            
                                                            ebp_1[-0x17] = 0
                                                            
                                                            if (*(ebp_1[-0x26] + 0x88) s> 0)
                                                                int32_t eax_425 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                
                                                                if (eax_425 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_37 =
                                                                    unimplemented  {imul eax, eax, 0x23}
                                                                
                                                                if (o_37)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (*(ebp_1[-0x24]
                                                                        + (eax_425 + 1) * 0x118 - 0xf8)
                                                                        == 0x11)
                                                                    ebp_1[-0x17] = 1
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x14]}
                                                                    unimplemented  {fild st0, dword [eax
                                                                        +0x5c]}
                                                                    unimplemented  {fdiv st0, dword [
                                                                        0x48abbc]}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {fsub st0, dword [
                                                                        0x48ac00]}
                                                                    int32_t eax_428
                                                                    int32_t edx_71
                                                                    eax_428, edx_71 = sub_402b4c(st0)
                                                                    *(esp_14 - 4) = eax_428
                                                                    
                                                                    if (eax_428 s>> 0x1f != edx_71)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-5] = *(esp_14 - 4)
                                                                    int32_t temp94_1 = ebp_1[-6]
                                                                    ebp_1[-6] -= 2
                                                                    
                                                                    if (add_overflow(temp94_1, 0xfffffffe))
                                                                        sub_403010()
                                                                        noreturn
                                                            
                                                            void* eax_431
                                                            eax_431.b = *(ebp_1[-0x26] + 0xf0)
                                                            char temp65_1 = eax_431.b
                                                            eax_431.b -= 8
                                                            char temp69_1
                                                            
                                                            if (temp65_1 != 8)
                                                                temp69_1 = eax_431.b
                                                                eax_431.b -= 3
                                                            
                                                            if (temp65_1 != 8 && temp69_1 != 3)
                                                                sub_403e90(&ebp_1[-0x18], ebp_1[-0x1e])
                                                                
                                                                if (*(ebp_1[-0x26] + 0xf0) == 0xc)
                                                                    void* edx_78 = ebp_1[-0x18]
                                                                    
                                                                    if (0 u>= *(edx_78 - 4))
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    char eax_463 = *edx_78
                                                                    
                                                                    if (eax_463 == 0x3f)
                                                                    label_4866d7:
                                                                        void* edx_79 = ebp_1[-0x18]
                                                                        
                                                                        if (0 u>= *(edx_79 - 4))
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        if (*edx_79 != 0x3f)
                                                                            void* edx_80 = ebp_1[-0x18]
                                                                            
                                                                            if (0 u>= *(edx_80 - 4))
                                                                                sub_403008()
                                                                                noreturn
                                                                            
                                                                            char eax_465 = *edx_80
                                                                            char temp157_1
                                                                            
                                                                            if (eax_465 != 0x47)
                                                                                temp157_1 = eax_465 - 0x47
                                                                            
                                                                            if (eax_465 == 0x47 || temp157_1 == 7)
                                                                                int32_t temp156_1 = ebp_1[-5]
                                                                                ebp_1[-5] += 3
                                                                                
                                                                                if (add_overflow(temp156_1, 3))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                        else
                                                                            int32_t temp132_1 = ebp_1[-5]
                                                                            ebp_1[-5] += 4
                                                                            
                                                                            if (add_overflow(temp132_1, 4))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t temp142_1 = ebp_1[-6]
                                                                            ebp_1[-6] -= 1
                                                                            
                                                                            if (add_overflow(temp142_1, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                    else
                                                                        if (eax_463 == 0x47)
                                                                            goto label_4866d7
                                                                        
                                                                        if (eax_463 == 0x4e)
                                                                            goto label_4866d7
                                                                        
                                                                        if (eax_463 + 0x77 u< 2)
                                                                            goto label_4866d7
                                                                        
                                                                        if (*(ebx + 0xcc8) != 2)
                                                                            if (add_overflow(
                                                                                    sub_408e80(ebp_1[-0x18]), 0x97))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            sub_403fa0()
                                                                        else
                                                                            if (add_overflow(
                                                                                    sub_408e80(ebp_1[-0x18]), 0x9b))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            sub_403fa0()
                                                                    
                                                                    int32_t temp175_1 = ebp_1[-5]
                                                                    ebp_1[-5] -= 9
                                                                    
                                                                    if (add_overflow(temp175_1, 0xfffffff7))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t temp189_1 = ebp_1[-6]
                                                                    ebp_1[-6] -= 2
                                                                    
                                                                    if (add_overflow(temp189_1, 0xfffffffe))
                                                                        sub_403010()
                                                                        noreturn
                                                                
                                                                int32_t temp82_1 =
                                                                    *(ebp_1[-0x26] + 0x60)
                                                                
                                                                if (temp82_1 s<= 0x23)
                                                                    *(esp_14 - 4) = &ebp_1[-0x57]
                                                                    sub_404280(1, 1, ebp_1[-0x1e])
                                                                    sub_404188(ebp_1[-0x57], 0x48ac0c)
                                                                
                                                                if (temp82_1 s> 0x23
                                                                        || temp82_1 == 0x23)
                                                                    *(esp_14 - 4) = &ebp_1[-0x58]
                                                                    sub_404280(1, 1, ebp_1[-0x1e])
                                                                    sub_404188(ebp_1[-0x58], 0x48ac0c)
                                                                    
                                                                    if (temp82_1 == 0x23)
                                                                        sub_4042c0(&ebp_1[-0x18], 1, 1)
                                                                    
                                                                    if (*(ebx + 0x900) u> 0xff)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    int32_t edx_87 = *(ebx + 0x90c)
                                                                    
                                                                    if (edx_87 u> 0xff)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    int32_t eax_480
                                                                    eax_480:1.b = 0x20
                                                                    int32_t ecx_42 = sub_402e88(eax_480.w, 
                                                                        edx_87.b, &ebp_1[-0x52])
                                                                    bool c_10 = edi_6 u< 0xff
                                                                    
                                                                    if (edi_6 == 0xff || c_10)
                                                                        c_10 = test_bit(ebp_1[-0x52], edi_6)
                                                                    
                                                                    if (not(c_10))
                                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                        sub_40401c(ecx_42, ebp_1[-0x26] + 8)
                                                                        ebp_1 = sub_46fd7c(ebx, ebp_1[-0x5c])
                                                                        unimplemented  {fld st0, dword [0x48ac10
                                                                            ]}
                                                                        unimplemented  {fmul st0, dword [eax
                                                                            +0x84]}
                                                                        unimplemented  {fmulp st1, st0}
                                                                        unimplemented  {fmulp st1, st0}
                                                                        unimplemented  {fild st0, dword [eax
                                                                            +0x5c]}
                                                                        unimplemented  {fdiv st0, dword [
                                                                            0x48abbc]}
                                                                        unimplemented  {fsubrp st1, st0}
                                                                        unimplemented  {fsubrp st1, st0}
                                                                        int32_t eax_495
                                                                        int32_t edx_92
                                                                        eax_495, edx_92 = sub_402b4c(st0)
                                                                        *(esp_14 - 8) = edx_92
                                                                        *(esp_14 - 0xc) = eax_495
                                                                        int32_t eax_496 = ebp_1[-5]
                                                                        
                                                                        if (add_overflow(eax_496, 0xfffffffb))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t eax_498
                                                                        int32_t edx_93
                                                                        edx_93:eax_498 = sx.q(eax_496 - 5)
                                                                        int32_t edx_94 = adc.d(edx_93, 
                                                                            *(esp_14 - 8), 
                                                                            eax_498 + *(esp_14 - 0xc) u< eax_498)
                                                                        bool o_53 = unimplemented  {adc edx, 
                                                                            dword [esp+0x4]}
                                                                        
                                                                        if (o_53)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x5e] = eax_498 + *(esp_14 - 0xc)
                                                                        ebp_1[-0x5d] = edx_94
                                                                        unimplemented  {fild st0, qword [ebp
                                                                            -0x178]}
                                                                        *(esp_14 - 8) = fconvert.s(unimplemented
                                                                              {fstp dword [esp], st0})
                                                                        unimplemented  {fstp dword [esp], st0}
                                                                        int32_t eax_500 = ebp_1[-6]
                                                                        
                                                                        if (add_overflow(eax_500, 0xa))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x29] = eax_500 + 0xa
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0xa4]}
                                                                        *(esp_14 - 0xc) = fconvert.s(
                                                                            unimplemented  {fstp dword [esp], st0})
                                                                        unimplemented  {fstp dword [esp], st0}
                                                                        top += 1
                                                                        *(esp_14 - 0x10) =
                                                                            *(ebp_1[-0x26] + 0x68)
                                                                        *(esp_14 - 0x14) = 2
                                                                        *(esp_14 - 0x18) = ebp_1[-0x17]
                                                                        *(esp_14 - 0x1c) =
                                                                            *(ebp_1[-0x26] + 0x110)
                                                                        *(esp_14 - 0x20) = 0
                                                                        *(esp_14 - 0x24) = 0
                                                                        *(esp_14 - 0x28) = 0
                                                                        *(esp_14 - 0x2c) = &ebp_1[-0x5b]
                                                                        ebp_1[-0xe]
                                                                        sub_48c290(ebx, ebp_1[-0x18])
                                                                    else
                                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                        int32_t eax_483 = ebp_1[-5]
                                                                        
                                                                        if (add_overflow(eax_483, 0x2d))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x29] = eax_483 + 0x2d
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0xa4]}
                                                                        *(esp_14 - 8) = fconvert.s(unimplemented
                                                                              {fstp dword [esp], st0})
                                                                        unimplemented  {fstp dword [esp], st0}
                                                                        int32_t eax_485 = ebp_1[-6]
                                                                        
                                                                        if (add_overflow(eax_485, 0xc))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x5a] = eax_485 + 0xc
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0x168]}
                                                                        *(esp_14 - 0xc) = fconvert.s(
                                                                            unimplemented  {fstp dword [esp], st0})
                                                                        unimplemented  {fstp dword [esp], st0}
                                                                        *(esp_14 - 0x10) =
                                                                            *(ebp_1[-0x26] + 0x68)
                                                                        *(esp_14 - 0x14) = 2
                                                                        *(esp_14 - 0x18) = ebp_1[-0x17]
                                                                        *(esp_14 - 0x1c) =
                                                                            *(ebp_1[-0x26] + 0x110)
                                                                        *(esp_14 - 0x20) = 0
                                                                        *(esp_14 - 0x24) = 0
                                                                        *(esp_14 - 0x28) = 0
                                                                        *(esp_14 - 0x2c) = &ebp_1[-0x59]
                                                                        ebp_1[-0xe]
                                                                        sub_48c290(ebx, ebp_1[-0x18])
                                                                else if (*(ebp_1[-0x26] + 0x60)
                                                                        s<= 0x1e)
                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                    int32_t eax_519 = ebp_1[-5]
                                                                    
                                                                    if (add_overflow(eax_519, 8))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_519 + 8
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                          {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_521 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_521, 5))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x5a] = eax_521 + 5
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x168]}
                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_14 - 0x10) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_14 - 0x14) = 2
                                                                    *(esp_14 - 0x18) = ebp_1[-0x17]
                                                                    *(esp_14 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x110)
                                                                    *(esp_14 - 0x20) = 0
                                                                    *(esp_14 - 0x24) = 0
                                                                    *(esp_14 - 0x28) = 0
                                                                    *(esp_14 - 0x2c) = &ebp_1[-0x60]
                                                                    ebp_1[-0xe]
                                                                    sub_48c290(ebx, ebp_1[-0x18])
                                                                else
                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                    int32_t eax_509 = ebp_1[-5]
                                                                    
                                                                    if (add_overflow(eax_509, 6))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_509 + 6
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                          {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_511 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_511, 7))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x5a] = eax_511 + 7
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x168]}
                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_14 - 0x10) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_14 - 0x14) = 2
                                                                    *(esp_14 - 0x18) = ebp_1[-0x17]
                                                                    *(esp_14 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x110)
                                                                    *(esp_14 - 0x20) = 0
                                                                    *(esp_14 - 0x24) = 0
                                                                    *(esp_14 - 0x28) = 0
                                                                    *(esp_14 - 0x2c) = &ebp_1[-0x5f]
                                                                    ebp_1[-0xe]
                                                                    sub_48c290(ebx, ebp_1[-0x18])
                                                            else
                                                                sub_403e90(&ebp_1[-0x18], ebp_1[-0x1e])
                                                                void* edx_73 = ebp_1[-0x18]
                                                                
                                                                if (0 u>= *(edx_73 - 4))
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                if (*edx_73 == 0x21)
                                                                    sub_4042c0(&ebp_1[-0x18], 1, 1)
                                                                
                                                                if (*(ebp_1[-0x26] + 0xf0) == 8)
                                                                    int32_t eax_436 =
                                                                        sx.d(*(ebp_1[-0x26] + 0x76))
                                                                    int32_t temp92_1 = ebp_1[-5]
                                                                    ebp_1[-5] += eax_436
                                                                    
                                                                    if (add_overflow(temp92_1, eax_436))
                                                                        sub_403010()
                                                                        noreturn
                                                                
                                                                if (ebp_1[-0xe] == 1)
                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x14]}
                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                          {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_438 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_438, 0xa))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_438 + 0xa
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_14 - 0x10) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_14 - 0x14) = 5
                                                                    *(esp_14 - 0x18) = ebp_1[-0x17]
                                                                    *(esp_14 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x110)
                                                                    *(esp_14 - 0x20) = 0
                                                                    *(esp_14 - 0x24) = 0
                                                                    *(esp_14 - 0x28) = 0
                                                                    *(esp_14 - 0x2c) = &ebp_1[-0x54]
                                                                    sub_48c290(ebx, ebp_1[-0x18])
                                                                
                                                                if (ebp_1[-0xe] == 2)
                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x14]}
                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                          {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_446 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_446, 0xa))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_446 + 0xa
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_14 - 0x10) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_14 - 0x14) = 5
                                                                    *(esp_14 - 0x18) = ebp_1[-0x17]
                                                                    *(esp_14 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x110)
                                                                    *(esp_14 - 0x20) = 0
                                                                    *(esp_14 - 0x24) = 0
                                                                    *(esp_14 - 0x28) = 0
                                                                    *(esp_14 - 0x2c) = &ebp_1[-0x55]
                                                                    ebp_1[-0xe]
                                                                    sub_48c290(ebx, ebp_1[-0x18])
                                                                
                                                                *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0x14]}
                                                                *(esp_14 - 8) = fconvert.s(unimplemented
                                                                      {fstp dword [esp], st0})
                                                                unimplemented  {fstp dword [esp], st0}
                                                                int32_t eax_454 = ebp_1[-6]
                                                                
                                                                if (add_overflow(eax_454, 0xa))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x29] = eax_454 + 0xa
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0xa4]}
                                                                *(esp_14 - 0xc) = fconvert.s(
                                                                    unimplemented  {fstp dword [esp], st0})
                                                                unimplemented  {fstp dword [esp], st0}
                                                                *(esp_14 - 0x10) =
                                                                    *(ebp_1[-0x26] + 0x68)
                                                                *(esp_14 - 0x14) = 2
                                                                *(esp_14 - 0x18) = ebp_1[-0x17]
                                                                *(esp_14 - 0x1c) =
                                                                    *(ebp_1[-0x26] + 0x110)
                                                                *(esp_14 - 0x20) = 0
                                                                *(esp_14 - 0x24) = 0
                                                                *(esp_14 - 0x28) = 0
                                                                *(esp_14 - 0x2c) = &ebp_1[-0x56]
                                                                ebp_1[-0xe]
                                                                sub_48c290(ebx, ebp_1[-0x18])
                                                            
                                                            if (*(ebp_1[-0x26] + 0xf0) != 0
                                                                    && *(ebp_1[-0x26] + 0x56) != 0
                                                                    && *(ebp_1[-0x26] + 6) != 0)
                                                                *(esp_14 - 4) = 0xde1
                                                                (*data_53006c)()
                                                                *(esp_14 - 4) = 0xbe2
                                                                (*data_530034)()
                                                                *(esp_14 - 4) = 0xb50
                                                                (*data_53006c)()
                                                                *(esp_14 - 4) = 0x303
                                                                *(esp_14 - 8) = 0x302
                                                                (*data_530334)()
                                                                *(esp_14 - 4) = 0
                                                                *(esp_14 - 8) = 0
                                                                *(esp_14 - 0xc) = 0x3fc0134a
                                                                *(esp_14 - 0x10) = 0x5937dca2
                                                                *(esp_14 - 0x14) = 0x3fa0134a
                                                                *(esp_14 - 0x18) = 0x5937dca2
                                                                int32_t ecx_47 = (*data_5306a4)()
                                                                void* edx_98 = ebp_1[-0x26]
                                                                sub_40401c(ecx_47, edx_98 + 0x22)
                                                                *(esp_14 - 4) = &ebp_1[-0x61]
                                                                sub_404280(1, 1, ebp_1[-0x10])
                                                                sub_404188(ebp_1[-0x61], 0x48ac0c)
                                                                
                                                                if (edx_98 == 0xffffffde)
                                                                    sub_4042c0(&ebp_1[-0x10], 1, 1)
                                                                
                                                                if (ebp_1[-0x10] != 0)
                                                                    *(esp_14 - 4) = 0
                                                                    sub_46fd7c(ebx, ebp_1[-0x10])
                                                                    unimplemented  {fld st0, tword [0x48ac14
                                                                        ]}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    int32_t eax_547
                                                                    int32_t edx_102
                                                                    eax_547, edx_102 = sub_402b4c(st0)
                                                                    top += 1
                                                                    bool o_59 =
                                                                        unimplemented  {adc edx, 0x0}
                                                                    
                                                                    if (o_59)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    *(esp_14 - 8) = eax_547 + 0x14
                                                                    
                                                                    if ((eax_547 + 0x14) s>> 0x1f != adc.d(
                                                                            edx_102, 0, eax_547 u>= 0xffffffec))
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    *(esp_14 - 8) = *(esp_14 - 8)
                                                                    *(esp_14 - 0xc) = 0x1e
                                                                    *(esp_14 - 0x10) = 0x14
                                                                    *(esp_14 - 0x14) = 0x3f800000
                                                                    *(esp_14 - 0x18) = 0
                                                                    ebx, ebp_1 = sub_46d5f4(ebx, 0)
                                                                
                                                                *(esp_14 - 4) = 0
                                                                *(esp_14 - 8) = 0
                                                                *(esp_14 - 0xc) = 0x3f90134a
                                                                *(esp_14 - 0x10) = 0x5937dca2
                                                                *(esp_14 - 0x14) = 0x3f826e97
                                                                *(esp_14 - 0x18) = 0x8d4fdf3b
                                                                (*data_5306a4)()
                                                                *(esp_14 - 4) = 1
                                                                *(esp_14 - 8) = 0x302
                                                                (*data_530334)()
                                                                *(esp_14 - 4) = 0xb50
                                                                (*data_53006c)()
                                                                *(esp_14 - 4) = 0xde1
                                                                (*data_530034)()
                                                                *(esp_14 - 4) = 0xbe2
                                                                (*data_530034)()
                                                                *(esp_14 - 4) = 0x301
                                                                *(esp_14 - 8) = 0
                                                                (*data_530334)()
                                                                *(esp_14 - 4) = 0x3f800000
                                                                *(esp_14 - 8) = 0x3f800000
                                                                *(esp_14 - 0xc) = 0x3f800000
                                                                void* esp_380
                                                                *(esp_380 - 8) = 0x3f800000
                                                                (*data_530518)()
                                                                int32_t eax_566 = *(ebx + 0x8c8)
                                                                
                                                                if (eax_566 s< 0)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                *(esp_380 + 4) = eax_566
                                                                *esp_380 = 0xde1
                                                                (*data_53036c)()
                                                                *(esp_380 + 4) = 0x3e99999a
                                                                *esp_380 = 0x3f800000
                                                                *(esp_380 - 4) = 0
                                                                ebp_1 = sub_48c0c8(ebx, ebp_1[-0x10])
                                                                *(esp_380 + 4) = 0xde1
                                                                (*data_530034)()
                                                                esp_14 = esp_380 + 8
                                                        else
                                                            char temp38_1 = eax_287.b
                                                            eax_287.b -= 0xa
                                                            
                                                            if (temp38_1 == 0xa)
                                                                goto label_485c88
                                                            
                                                            if (*ebp_1[-0x26] == 4)
                                                                int32_t edi_7
                                                                
                                                                if (*(ebp_1[-0x26] + 0x70) == 0)
                                                                    edi_7 = *(ebx + 0x8d0)
                                                                else
                                                                    edi_7 = *(ebx + 0x8d4)
                                                                
                                                                *(esp_14 - 4) = ebp_1[-6]
                                                                *(esp_14 - 8) = 0x19
                                                                *(esp_14 - 0xc) = 0x19
                                                                *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                *(esp_14 - 0x14) = 0
                                                                *(esp_14 - 0x18) = 0
                                                                *(esp_14 - 0x1c) =
                                                                    *(ebp_1[-0x26] + 0x68)
                                                                *(esp_14 - 0x20) = 1
                                                                *(esp_14 - 0x24) =
                                                                    *(ebp_1[-0x26] + 0x110)
                                                                *(esp_14 - 0x28) = 0x3f800000
                                                                sub_48156c(ebp_1[-5], edi_7, ebx)
                                                                void* eax_579
                                                                eax_579.w = *(ebp_1[-0x26] + 0x56)
                                                                
                                                                if (eax_579.w - 1 u< 2)
                                                                    *(esp_14 - 4) = ebp_1[-6]
                                                                    int32_t eax_583 = *(ebp_1[-0x26] + 0x5c)
                                                                    
                                                                    if (add_overflow(eax_583, 0xffffffe0))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    *(esp_14 - 8) = eax_583 - 0x20
                                                                    *(esp_14 - 0xc) = 0x19
                                                                    *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                    *(esp_14 - 0x14) = 0
                                                                    *(esp_14 - 0x18) = 0
                                                                    *(esp_14 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_14 - 0x20) = 1
                                                                    unimplemented  {fld st0, dword [ebx
                                                                        +0xa6c]}
                                                                    unimplemented  {fdiv st0, dword [
                                                                        0x48abe4]}
                                                                    unimplemented  {fld st0, tword [0x48abac
                                                                        ]}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmul st0, dword [
                                                                        0x48abbc]}
                                                                    long double st0_1 = sub_402b3c(st0)
                                                                    unimplemented  {call 0x402b3c}
                                                                    unimplemented  {fld st0, tword [0x48abe8
                                                                        ]}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fld st0, tword [0x48abf4
                                                                        ]}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {fmul st0, dword [eax
                                                                        +0x110]}
                                                                    *(esp_14 - 0x24) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_14 - 0x28) = 0x3f800000
                                                                    int32_t ecx_51 = ebp_1[-5]
                                                                    
                                                                    if (add_overflow(ecx_51, 0x1f))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    sub_48156c(ecx_51 + 0x1f, 0xfffffffe, 
                                                                        ebx)
                                                                    *(esp_14 - 4) = ebp_1[-6]
                                                                    *(esp_14 - 8) = 0x19
                                                                    *(esp_14 - 0xc) = 0x19
                                                                    *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                    *(esp_14 - 0x14) = 0
                                                                    *(esp_14 - 0x18) = 0
                                                                    *(esp_14 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_14 - 0x20) = 1
                                                                    unimplemented  {fld st0, dword [ebx
                                                                        +0xa6c]}
                                                                    unimplemented  {fdiv st0, dword [
                                                                        0x48abe4]}
                                                                    unimplemented  {fld st0, tword [0x48abac
                                                                        ]}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmul st0, dword [
                                                                        0x48abbc]}
                                                                    st0 = sub_402b3c(st0_1)
                                                                    unimplemented  {call 0x402b3c}
                                                                    unimplemented  {fld st0, tword [0x48abe8
                                                                        ]}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fld st0, tword [0x48abf4
                                                                        ]}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {fmul st0, dword [eax
                                                                        +0x110]}
                                                                    *(esp_14 - 0x24) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_14 - 0x28) = 0x3f800000
                                                                    sub_48156c(ebp_1[-5], 0xfffffffe, ebx)
                                                                
                                                                ebp_1 = sub_46fd7c(ebx, ebp_1[-0x1e])
                                                                unimplemented  {fmul st0, dword [
                                                                    0x48ac20]}
                                                                unimplemented  {fadd dword [0x48ac24]}
                                                                int32_t eax_593
                                                                int32_t edx_110
                                                                eax_593, edx_110 = sub_402b4c(st0)
                                                                *(esp_14 - 4) = eax_593
                                                                
                                                                if (eax_593 s>> 0x1f != edx_110)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                *(ebp_1[-0x26] + 0x5c) = *(esp_14 - 4)
                                                                *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                int32_t eax_597 = ebp_1[-5]
                                                                
                                                                if (add_overflow(eax_597, 0xf))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (add_overflow(eax_597 + 0xf, 0xf))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x29] = eax_597 + 0x1e
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0xa4]}
                                                                *(esp_14 - 8) = fconvert.s(unimplemented
                                                                      {fstp dword [esp], st0})
                                                                unimplemented  {fstp dword [esp], st0}
                                                                int32_t eax_600 = ebp_1[-6]
                                                                
                                                                if (add_overflow(eax_600, 4))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x5a] = eax_600 + 4
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0x168]}
                                                                *(esp_14 - 0xc) = fconvert.s(
                                                                    unimplemented  {fstp dword [esp], st0})
                                                                unimplemented  {fstp dword [esp], st0}
                                                                top += 1
                                                                *(esp_14 - 0x10) =
                                                                    *(ebp_1[-0x26] + 0x68)
                                                                *(esp_14 - 0x14) = 2
                                                                *(esp_14 - 0x18) = 0
                                                                *(esp_14 - 0x1c) =
                                                                    *(ebp_1[-0x26] + 0x110)
                                                                *(esp_14 - 0x20) = 0
                                                                *(esp_14 - 0x24) = 0
                                                                *(esp_14 - 0x28) = 0
                                                                *(esp_14 - 0x2c) = &ebp_1[-0x62]
                                                                ebp_1[-0xe]
                                                                sub_48c290(ebx, ebp_1[-0x1e])
                                                                esp_14 = esp_14
                                                    else if (*(ebp_1[-0x26] + 0x76) != 0)
                                                        if (*(ebp_1[-0x26] + 0x5c) s> 0)
                                                            *(esp_14 - 4) = *(ebp_1[-0x26] + 0x5c)
                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x60)
                                                            unimplemented  {fild st0, word [eax+0xee]}
                                                            unimplemented  {fild st0, word [eax+0x76]}
                                                            unimplemented  {fdivp st1, st0}
                                                            unimplemented  {fdivp st1, st0}
                                                            int32_t eax_280
                                                            int32_t edx_50
                                                            eax_280, edx_50 = sub_402b4c(st0)
                                                            *(esp_14 - 0xc) = eax_280
                                                            
                                                            if (eax_280 s>> 0x1f != edx_50)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            *(esp_14 - 0xc) = *(esp_14 - 0xc)
                                                            *(esp_14 - 0x10) =
                                                                sx.d(*(ebp_1[-0x26] + 0x58))
                                                            *(esp_14 - 0x14) = 0
                                                            *(esp_14 - 0x18) = 1
                                                            *(esp_14 - 0x1c) = 1
                                                            *(esp_14 - 0x20) = *(ebp_1[-0x26] + 0x110)
                                                            sub_48bae4(ebp_1[-6], ebp_1[-5], ebx)
                                                    else if (*(ebp_1[-0x26] + 0x5c) s> 0)
                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x5c)
                                                        *(esp_14 - 8) = *(ebp_1[-0x26] + 0x60)
                                                        unimplemented  {fild st0, word [eax+0xee]}
                                                        unimplemented  {fdiv st0, dword [0x48abbc]}
                                                        int32_t eax_270
                                                        int32_t edx_48
                                                        eax_270, edx_48 = sub_402b4c(st0)
                                                        *(esp_14 - 0xc) = eax_270
                                                        
                                                        if (eax_270 s>> 0x1f != edx_48)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        *(esp_14 - 0xc) = *(esp_14 - 0xc)
                                                        *(esp_14 - 0x10) = 1
                                                        *(esp_14 - 0x14) = 0
                                                        *(esp_14 - 0x18) = 1
                                                        *(esp_14 - 0x1c) = 1
                                                        *(esp_14 - 0x20) = *(ebp_1[-0x26] + 0x110)
                                                        sub_48bae4(ebp_1[-6], ebp_1[-5], ebx)
                                                    
                                                    if (*ebp_1[-0x26] == 0x12)
                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x5c)
                                                        *(esp_14 - 8) = *(ebp_1[-0x26] + 0x60)
                                                        *(esp_14 - 0xc) = 1
                                                        *(esp_14 - 0x10) = 1
                                                        *(esp_14 - 0x14) = 0
                                                        *(esp_14 - 0x18) = *(ebp_1[-0x26] + 0x110)
                                                        sub_48b3d8(ebp_1[-6], ebp_1[-5], ebx)
                                                    
                                                    char* eax_613
                                                    eax_613.b = *ebp_1[-0x26]
                                                    
                                                    if (eax_613.b - 1 u< 2 || eax_613.b == 0x12)
                                                        if (*ebp_1[-0x26] == 0x12)
                                                            ebp_1 = sub_46fd7c(ebx, ebp_1[-0x1e])
                                                            unimplemented  {fld st0, dword [0x48abe0]}
                                                            unimplemented  {fmul st0, dword [eax+0x84]}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fild st0, dword [eax+0x5c]}
                                                            unimplemented  {fdiv st0, dword [0x48abbc]}
                                                            unimplemented  {fsubrp st1, st0}
                                                            unimplemented  {fsubrp st1, st0}
                                                            int32_t eax_617
                                                            int32_t edx_115
                                                            eax_617, edx_115 = sub_402b4c(st0)
                                                            top += 1
                                                            *(esp_14 - 4) = edx_115
                                                            *(esp_14 - 8) = eax_617
                                                            int32_t eax_618 = ebp_1[-5]
                                                            
                                                            if (add_overflow(eax_618, 0xffffffec))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_620
                                                            int32_t edx_116
                                                            edx_116:eax_620 = sx.q(eax_618 - 0x14)
                                                            int32_t eax_621 = eax_620 + *(esp_14 - 8)
                                                            int32_t edx_117 = adc.d(edx_116, 
                                                                *(esp_14 - 4), 
                                                                eax_620 + *(esp_14 - 8) u< eax_620)
                                                            bool o_66 = unimplemented  {adc edx, dword [
                                                                esp+0x4]}
                                                            
                                                            if (o_66)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_14 - 4) = eax_621
                                                            
                                                            if (eax_621 s>> 0x1f != edx_117)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            ebp_1[-5] = *(esp_14 - 4)
                                                        
                                                        if (*(ebp_1[-0x26] + 0x88) s> 0)
                                                            int32_t eax_627 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (eax_627 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_67 =
                                                                unimplemented  {imul eax, eax, 0x23}
                                                            
                                                            if (o_67)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(ebp_1[-0x24] + (eax_627 + 1) * 0x118
                                                                    - 0xf8) == 0x11)
                                                                int32_t edx_121 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                
                                                                if (edx_121 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_68 =
                                                                    unimplemented  {imul edx, edx, 0x23}
                                                                
                                                                if (o_68)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t ecx_56 = ebp_1[-0x24]
                                                                sub_40401c(ecx_56, 
                                                                    ecx_56 + (edx_121 + 1) * 0x118 - 0xf0)
                                                        
                                                        sub_403e90(&ebp_1[-0x10], ebp_1[-0x1e])
                                                        ebp_1[-0x11] = 0
                                                        
                                                        if (sub_404078(ebp_1[-0x1e]) s> 0)
                                                            while (true)
                                                                int32_t edi_8 = *(ebp_1[-0x26] + 0x5c)
                                                                
                                                                if (sub_404078(ebp_1[-0x10])
                                                                        s< *(ebp_1[-0x26] + 0x5c))
                                                                    edi_8 = sub_404078(ebp_1[-0x10])
                                                                
                                                                int32_t edi_10
                                                                
                                                                while (true)
                                                                    void* eax_639 = ebp_1[-0x10]
                                                                    
                                                                    if (edi_8 - 1 u>= *(eax_639 - 4))
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    edi_10 = edi_8
                                                                    
                                                                    if (*(eax_639 + edi_10 - 1) == 0x20)
                                                                        *(esp_14 - 4) = &ebp_1[-0x63]
                                                                        
                                                                        if (add_overflow(edi_10, 1))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        sub_404280(1, edi_10 + 1, ebp_1[-0x10])
                                                                        sub_404188(ebp_1[-0x63], 0x48ac30)
                                                                        
                                                                        if (edi_10 != 0xffffffff)
                                                                            *(esp_14 - 4) = &ebp_1[-0x64]
                                                                            
                                                                            if (add_overflow(edi_10, 1))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            sub_404280(1, edi_10 + 1, ebp_1[-0x10])
                                                                            sub_404188(ebp_1[-0x64], 0x48ac3c)
                                                                            
                                                                            if (edi_10 != 0xffffffff)
                                                                                break
                                                                    
                                                                    if (edi_10 s<= 1)
                                                                        break
                                                                    
                                                                    edi_8 = edi_10 - 1
                                                                    
                                                                    if (add_overflow(edi_10, 0xffffffff))
                                                                        sub_403010()
                                                                        noreturn
                                                                
                                                                if (edi_10 s<= 1)
                                                                    edi_10 = *(ebp_1[-0x26] + 0x5c)
                                                                
                                                                if (sub_404078(ebp_1[-0x10])
                                                                        s< *(ebp_1[-0x26] + 0x5c))
                                                                    edi_10 = sub_404078(ebp_1[-0x10])
                                                                
                                                                int32_t eax_651 = 0
                                                                int32_t edi_11
                                                                int16_t temp134_1
                                                                bool cond:23_1
                                                                
                                                                while (true)
                                                                    int32_t temp106_1 = eax_651
                                                                    eax_651 += 1
                                                                    
                                                                    if (add_overflow(temp106_1, 1))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (edi_10 s> eax_651)
                                                                        void* edx_132 = ebp_1[-0x10]
                                                                        
                                                                        if (eax_651 - 1 u>= *(edx_132 - 4))
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        if (*(edx_132 + eax_651 - 1) != 0xd)
                                                                            continue
                                                                    
                                                                    edi_11 = eax_651
                                                                    temp134_1 = *(ebp_1[-0x26] + 0x74)
                                                                    cond:23_1 = temp134_1 != 1
                                                                    break
                                                                
                                                                if (temp134_1 == 1)
                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x110)
                                                                    int32_t eax_656 =
                                                                        sx.d(*(ebp_1[-0x24] + 2))
                                                                    int32_t edx_134 =
                                                                        sx.d(*(ebp_1[-0x24] + 6))
                                                                    int32_t edx_135 = edx_134 s>> 1
                                                                    bool c_14 =
                                                                        unimplemented  {sar edx, 0x1}
                                                                    
                                                                    if (edx_134 s>> 1 s< 0)
                                                                        edx_135 = adc.d(edx_135, 0, c_14)
                                                                    
                                                                    if (add_overflow(eax_656, edx_135))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t ecx_57
                                                                    ecx_57.b = eax_656 + edx_135 s< 0x17c
                                                                    int32_t eax_660
                                                                    int32_t edx_137
                                                                    edx_137:eax_660 =
                                                                        sx.q(sub_46ae30(ecx_57, esi, ebx))
                                                                    *(esp_14 - 4) = edx_137
                                                                    *(esp_14 - 8) = eax_660
                                                                    unimplemented  {fild st0, word [eax+0x6]
                                                                        }
                                                                    unimplemented  {fdiv st0, dword [
                                                                        0x48abbc]}
                                                                    int32_t eax_661
                                                                    int32_t edx_138
                                                                    eax_661, edx_138 = sub_402b4c(st0)
                                                                    *(esp_14 - 0xc) = edx_138
                                                                    *(esp_14 - 0x10) = eax_661
                                                                    int32_t eax_664
                                                                    int32_t edx_139
                                                                    edx_139:eax_664 =
                                                                        sx.q(*(ebp_1[-0x24] + 2))
                                                                    int32_t eax_665 =
                                                                        eax_664 + *(esp_14 - 0x10)
                                                                    bool o_74 = unimplemented  {adc edx, 
                                                                        dword [esp+0x4]}
                                                                    
                                                                    if (o_74)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    bool o_75 =
                                                                        unimplemented  {sbb edx, 0x0}
                                                                    
                                                                    if (o_75)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t eax_667 =
                                                                        eax_665 - 0x14 + *(esp_14 - 8)
                                                                    int32_t edx_142 = adc.d(
                                                                        sbb.d(
                                                                            adc.d(edx_139, *(esp_14 - 0xc), 
                                                                                eax_664 + *(esp_14 - 0x10) u< eax_664), 
                                                                            0, eax_665 u< 0x14), 
                                                                        *(esp_14 - 4), 
                                                                        eax_665 - 0x14 + *(esp_14 - 8)
                                                                            u< eax_665 - 0x14)
                                                                    bool o_76 = unimplemented  {adc edx, 
                                                                        dword [esp+0x4]}
                                                                    
                                                                    if (o_76)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    *(esp_14 - 4) = eax_667
                                                                    int32_t eax_668 = eax_667 s>> 0x1f
                                                                    cond:23_1 = eax_668 != edx_142
                                                                    
                                                                    if (eax_668 != edx_142)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-5] = *(esp_14 - 4)
                                                                    sub_4040c4(&ebp_1[-0x1e], !", 
                                                                        ebp_1[-0x1e])
                                                                
                                                                sub_403e90(&ebp_1[-0x18], ebp_1[-0x1e])
                                                                *(esp_14 - 4) = &ebp_1[-0x65]
                                                                sub_404280(1, 1, ebp_1[-0x1e])
                                                                void* esp_462 = esp_14
                                                                sub_404188(ebp_1[-0x65], 0x48ac0c)
                                                                
                                                                if (not(cond:23_1))
                                                                    sub_4042c0(&ebp_1[-0x18], 1, 1)
                                                                    ebp_1 = sub_46fd7c(ebx, ebp_1[-0x18])
                                                                    unimplemented  {fld st0, tword [0x48ac40
                                                                        ]}
                                                                    unimplemented  {fmul st0, dword [eax
                                                                        +0x84]}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    int32_t eax_677
                                                                    int32_t edx_146
                                                                    eax_677, edx_146 = sub_402b4c(st0)
                                                                    top += 1
                                                                    *(esp_462 - 4) = edx_146
                                                                    *(esp_462 - 8) = eax_677
                                                                    int32_t eax_679
                                                                    int32_t edx_147
                                                                    edx_147:eax_679 = sx.q(ebp_1[-5])
                                                                    int32_t eax_680 =
                                                                        eax_679 + *(esp_462 - 8)
                                                                    int32_t edx_148 = adc.d(edx_147, 
                                                                        *(esp_462 - 4), 
                                                                        eax_679 + *(esp_462 - 8) u< eax_679)
                                                                    bool o_77 = unimplemented  {adc edx, 
                                                                        dword [esp+0x4]}
                                                                    
                                                                    if (o_77)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    *(esp_462 - 4) = eax_680
                                                                    
                                                                    if (eax_680 s>> 0x1f != edx_148)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-5] = *(esp_462 - 4)
                                                                    sub_403e90(&ebp_1[-0x10], ebp_1[-0x18])
                                                                    edi_11 = sub_404078(ebp_1[-0x10])
                                                                
                                                                if (*(ebp_1[-0x26] + 0xee) == 0x7b
                                                                        && sub_404078(ebp_1[-0x10]) s> 3)
                                                                    *(esp_462 - 4) = 0xde1
                                                                    (*data_53006c)()
                                                                    *(esp_462 - 4) = 0xbe2
                                                                    (*data_530034)()
                                                                    *(esp_462 - 4) = 0xb50
                                                                    (*data_53006c)()
                                                                    *(esp_462 - 4) = 0x303
                                                                    *(esp_462 - 8) = 0x302
                                                                    (*data_530334)()
                                                                    ebp_1[-0x22] = 0x3f4ccccd
                                                                    int32_t eax_697 = ebp_1[-5]
                                                                    
                                                                    if (add_overflow(eax_697, 0xc))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_697 + 0xc
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_462 - 4) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_699 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_699, 0xffffffed))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x5a] = eax_699 - 0x13
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x168]}
                                                                    *(esp_462 - 8) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    sub_48c214(ebx)
                                                                    void* esp_487
                                                                    
                                                                    if (*(ebp_1[-0x26] + 6) != 0)
                                                                        *(esp_462 - 4) = 0
                                                                        sub_4040c4(&ebp_1[-0x67], ebp_1[-0x10], 
                                                                            "  ")
                                                                        void* ebp_3
                                                                        ebp_3, edi_11 =
                                                                            sub_46fd7c(ebx, ebp_1[-0x67])
                                                                        unimplemented  {fld st0, tword [0x48ac58
                                                                            ]}
                                                                        unimplemented  {fmulp st1, st0}
                                                                        unimplemented  {fmulp st1, st0}
                                                                        int32_t eax_711
                                                                        int32_t edx_156
                                                                        eax_711, edx_156 = sub_402b4c(st0)
                                                                        top += 1
                                                                        *(esp_462 - 8) = eax_711
                                                                        
                                                                        if (eax_711 s>> 0x1f != edx_156)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        *(esp_462 - 8) = *(esp_462 - 8)
                                                                        *(esp_462 - 0xc) = 0x1b
                                                                        *(esp_462 - 0x10) = 0x14
                                                                        *(esp_462 - 0x14) =
                                                                            *(*(ebp_3 - 0x98) + 0x110)
                                                                        *(esp_462 - 0x18) = 0
                                                                        ebp_1 = sub_46c038(ebx, 0)
                                                                        esp_487 = esp_462
                                                                    else
                                                                        *(esp_462 - 4) = 0
                                                                        sub_4040c4(&ebp_1[-0x66], ebp_1[-0x10], 
                                                                            "  ")
                                                                        edi_11 = sub_46fd7c(ebx, ebp_1[-0x66])
                                                                        unimplemented  {fld st0, tword [0x48ac58
                                                                            ]}
                                                                        unimplemented  {fmulp st1, st0}
                                                                        unimplemented  {fmulp st1, st0}
                                                                        int32_t eax_705
                                                                        int32_t edx_152
                                                                        eax_705, edx_152 = sub_402b4c(st0)
                                                                        *(esp_462 - 8) = eax_705
                                                                        
                                                                        if (eax_705 s>> 0x1f != edx_152)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        *(esp_462 - 8) = *(esp_462 - 8)
                                                                        *(esp_462 - 0xc) = 0x1b
                                                                        *(esp_462 - 0x10) = 0x14
                                                                        unimplemented  {fld st0, dword [eax
                                                                            +0x110]}
                                                                        unimplemented  {fmul st0, dword [
                                                                            0x48ac64]}
                                                                        *(esp_462 - 0x14) = fconvert.s(
                                                                            unimplemented  {fstp dword [esp], st0})
                                                                        unimplemented  {fstp dword [esp], st0}
                                                                        top += 1
                                                                        *(esp_462 - 0x18) = 0
                                                                        ebp_1 = sub_46c038(ebx, 0)
                                                                        esp_487 = esp_462
                                                                    
                                                                    *(esp_487 - 4) = 0xde1
                                                                    (*data_530034)()
                                                                    esp_462 = esp_487
                                                                
                                                                int16_t eax_719
                                                                
                                                                if (*ebp_1[-0x26] == 1
                                                                        && ebp_1[-3] == 1)
                                                                    unimplemented  {fld st0, dword [eax
                                                                        +0x84]}
                                                                    long double temp205_1 = fconvert.t(1.5f)
                                                                    unimplemented  {fcomp st0, dword [
                                                                        0x48ac68]} f- temp205_1
                                                                    bool c0_2 = unimplemented  {fcomp st0, 
                                                                        dword [0x48ac68]} f< temp205_1
                                                                    bool c2_2 = is_unordered.t(
                                                                        unimplemented  {fcomp st0, dword [
                                                                            0x48ac68]}, 
                                                                        temp205_1)
                                                                    bool c3_2 = unimplemented  {fcomp st0, 
                                                                        dword [0x48ac68]} f== temp205_1
                                                                    unimplemented  {fcomp st0, dword [
                                                                        0x48ac68]}
                                                                    eax_719 = (c0_2 ? 1 : 0) << 8
                                                                        | (c2_2 ? 1 : 0) << 0xa
                                                                        | (c3_2 ? 1 : 0) << 0xe
                                                                        | (top & 7) << 0xb
                                                                
                                                                void* esp_524
                                                                
                                                                if (*ebp_1[-0x26] != 1 || ebp_1[-3] != 1
                                                                        || test_bit(eax_719:1.b, 6)
                                                                        || test_bit(eax_719:1.b, 0))
                                                                    *(esp_462 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                    int32_t eax_753 = ebp_1[-5]
                                                                    
                                                                    if (add_overflow(eax_753, 0xf))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_753 + 0xf
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_462 - 8) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_755 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_755, 8))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x11]
                                                                    int32_t edx_168 = ebp_1[-0x11] * 0x14
                                                                    bool o_94 = unimplemented  {imul edx, 
                                                                        dword [ebp-0x44], 0x14}
                                                                    
                                                                    if (o_94)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (add_overflow(eax_755 + 8, edx_168))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x5a] = eax_755 + 8 + edx_168
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x168]}
                                                                    *(esp_462 - 0xc) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_462 - 0x10) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_462 - 0x14) = 0
                                                                    *(esp_462 - 0x18) = 0
                                                                    *(esp_462 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x110)
                                                                    int32_t eax_761 =
                                                                        sx.d(*(ebp_1[-0x24] + 2))
                                                                    int32_t edx_170 =
                                                                        sx.d(*(ebp_1[-0x24] + 6))
                                                                    int32_t eax_762 = eax_761 + edx_170
                                                                    
                                                                    if (add_overflow(eax_761, edx_170))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (add_overflow(eax_762, 0xfffffff1))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    *(esp_462 - 0x20) = eax_762 - 0xf
                                                                    *(esp_462 - 0x24) = 0
                                                                    *(esp_462 - 0x28) = 0
                                                                    *(esp_462 - 0x2c) = &ebp_1[-0x6c]
                                                                    *(esp_462 - 0x30) = &ebp_1[-0x6d]
                                                                    sub_404280(edi_11, 1, ebp_1[-0x10])
                                                                    ebp_1[-0xb]
                                                                    sub_48c290(ebx, ebp_1[-0x6d])
                                                                    esp_524 = esp_462
                                                                else
                                                                    *(esp_462 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                    int32_t eax_721 = ebp_1[-5]
                                                                    
                                                                    if (add_overflow(eax_721, 0xf))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_721 + 0xf
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_462 - 8) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_723 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_723, 8))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x11]
                                                                    int32_t edx_158 = ebp_1[-0x11] * 0x14
                                                                    bool o_82 = unimplemented  {imul edx, 
                                                                        dword [ebp-0x44], 0x14}
                                                                    
                                                                    if (o_82)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (add_overflow(eax_723 + 8, edx_158))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x5a] = eax_723 + 8 + edx_158
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x168]}
                                                                    *(esp_462 - 0xc) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_462 - 0x10) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_462 - 0x14) = 6
                                                                    *(esp_462 - 0x18) = 0
                                                                    *(esp_462 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x110)
                                                                    int32_t eax_729 =
                                                                        sx.d(*(ebp_1[-0x24] + 2))
                                                                    int32_t edx_160 =
                                                                        sx.d(*(ebp_1[-0x24] + 6))
                                                                    int32_t eax_730 = eax_729 + edx_160
                                                                    
                                                                    if (add_overflow(eax_729, edx_160))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (add_overflow(eax_730, 0xfffffff1))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    *(esp_462 - 0x20) = eax_730 - 0xf
                                                                    *(esp_462 - 0x24) = 0
                                                                    *(esp_462 - 0x28) = 0
                                                                    *(esp_462 - 0x2c) = &ebp_1[-0x68]
                                                                    *(esp_462 - 0x30) = &ebp_1[-0x69]
                                                                    sub_404280(edi_11, 1, ebp_1[-0x10])
                                                                    ebp_1[-0xb]
                                                                    sub_48c290(ebx, ebp_1[-0x69])
                                                                    *(esp_462 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                    int32_t eax_737 = ebp_1[-5]
                                                                    
                                                                    if (add_overflow(eax_737, 0xf))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = eax_737 + 0xf
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    *(esp_462 - 8) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    int32_t eax_739 = ebp_1[-6]
                                                                    
                                                                    if (add_overflow(eax_739, 8))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x11]
                                                                    int32_t edx_163 = ebp_1[-0x11] * 0x14
                                                                    bool o_88 = unimplemented  {imul edx, 
                                                                        dword [ebp-0x44], 0x14}
                                                                    
                                                                    if (o_88)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (add_overflow(eax_739 + 8, edx_163))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x5a] = eax_739 + 8 + edx_163
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x168]}
                                                                    *(esp_462 - 0xc) = fconvert.s(
                                                                        unimplemented  {fstp dword [esp], st0})
                                                                    unimplemented  {fstp dword [esp], st0}
                                                                    *(esp_462 - 0x10) =
                                                                        *(ebp_1[-0x26] + 0x68)
                                                                    *(esp_462 - 0x14) = 8
                                                                    *(esp_462 - 0x18) = 0
                                                                    *(esp_462 - 0x1c) =
                                                                        *(ebp_1[-0x26] + 0x110)
                                                                    int32_t eax_745 =
                                                                        sx.d(*(ebp_1[-0x24] + 2))
                                                                    int32_t edx_165 =
                                                                        sx.d(*(ebp_1[-0x24] + 6))
                                                                    int32_t eax_746 = eax_745 + edx_165
                                                                    
                                                                    if (add_overflow(eax_745, edx_165))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (add_overflow(eax_746, 0xfffffff1))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    *(esp_462 - 0x20) = eax_746 - 0xf
                                                                    *(esp_462 - 0x24) = 0
                                                                    *(esp_462 - 0x28) = 0
                                                                    *(esp_462 - 0x2c) = &ebp_1[-0x6a]
                                                                    *(esp_462 - 0x30) = &ebp_1[-0x6b]
                                                                    sub_404280(edi_11, 1, ebp_1[-0x10])
                                                                    ebp_1[-0xb]
                                                                    sub_48c290(ebx, ebp_1[-0x6b])
                                                                    esp_524 = esp_462
                                                                
                                                                int32_t temp263_1 = ebp_1[-0x11]
                                                                ebp_1[-0x11] += 1
                                                                
                                                                if (add_overflow(temp263_1, 1))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                *(esp_524 - 4) = &ebp_1[-0x10]
                                                                int32_t eax_770 =
                                                                    sub_404078(ebp_1[-0x10])
                                                                
                                                                if (add_overflow(eax_770, 
                                                                        neg.d(edi_11)))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (add_overflow(edi_11, 1))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                sub_404280(eax_770 - edi_11, 
                                                                    edi_11 + 1, ebp_1[-0x10])
                                                                esp_14 = esp_524
                                                                
                                                                if (sub_404078(ebp_1[-0x10]) s<= 0)
                                                                    break
                                                        
                                                        *(ebp_1[-0x26] + 0x60) = ebp_1[-0x11]
                                                    
                                                    if (*ebp_1[-0x26] == 0x11
                                                            && *(ebp_1[-0x26] + 0xee) s< 0)
                                                        void* eax_777 = ebp_1[-0x26]
                                                        *(esp_14 - 4) = esi
                                                        __builtin_strncpy(eax_777 + 8, "\t#HL", 4)
                                                        int32_t* edi_13 = eax_777 + 0xc
                                                        void* const esi_4 = "_Image"
                                                        *edi_13 = *esi_4
                                                        edi_13[1].w = *(esi_4 + 4)
                                                        esi = *(esp_14 - 4)
                                                        ebp_1[-0xd] = *(ebp_1[-0x26] + 0x64)
                                                        int32_t eax_780 = ebp_1[-3]
                                                        
                                                        if (add_overflow(eax_780, 3))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (eax_780 + 2 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_102 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_102)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp_1[-0xb] = sx.d(*(ebp_1[-0x24]
                                                            + (eax_780 + 3) * 0x118 - 0xa2))
                                                        int32_t eax_786 = ebp_1[-6]
                                                        
                                                        if (add_overflow(eax_786, 2))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 4) = eax_786 + 2
                                                        int32_t eax_789 = *(ebp_1[-0x26] + 0x5c)
                                                        
                                                        if (add_overflow(eax_789, 0x14))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp_1[-0x29] = eax_789 + 0x14
                                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                                        unimplemented  {fmul st0, dword [eax+0x68]}
                                                        int32_t eax_791
                                                        int32_t edx_177
                                                        eax_791, edx_177 = sub_402b4c(st0)
                                                        *(esp_14 - 8) = eax_791
                                                        
                                                        if (eax_791 s>> 0x1f != edx_177)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        *(esp_14 - 8) = *(esp_14 - 8)
                                                        *(esp_14 - 0xc) = ebp_1[-0xd]
                                                        *(esp_14 - 0x10) = ebp_1[-0xb]
                                                        int32_t eax_797 = sx.d(*(ebp_1[-0x26] + 0x74))
                                                        
                                                        if (add_overflow(eax_797, 0xffffffff))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp_1[-0x5a] = eax_797 - 1
                                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                                        unimplemented  {fild st0, word [eax+0xe4]}
                                                        unimplemented  {fdivp st1, st0}
                                                        unimplemented  {fdivp st1, st0}
                                                        *(esp_14 - 0x14) = fconvert.s(unimplemented  {
                                                            fstp dword [esp], st0})
                                                        unimplemented  {fstp dword [esp], st0}
                                                        unimplemented  {fild st0, word [eax+0x74]}
                                                        unimplemented  {fild st0, word [eax+0xe4]}
                                                        unimplemented  {fdivp st1, st0}
                                                        unimplemented  {fdivp st1, st0}
                                                        *(esp_14 - 0x18) = fconvert.s(unimplemented  {
                                                            fstp dword [esp], st0})
                                                        unimplemented  {fstp dword [esp], st0}
                                                        *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x110)
                                                        unimplemented  {fld st0, dword [0x48ac78]}
                                                        unimplemented  {fsub st0, dword [eax+0x68]}
                                                        unimplemented  {fild st0, dword [eax+0x5c]}
                                                        unimplemented  {fmulp st1, st0}
                                                        unimplemented  {fmulp st1, st0}
                                                        unimplemented  {fdiv st0, dword [0x48abbc]}
                                                        int32_t eax_800
                                                        int32_t edx_178
                                                        eax_800, edx_178 = sub_402b4c(st0)
                                                        *(esp_14 - 0x20) = edx_178
                                                        *(esp_14 - 0x24) = eax_800
                                                        int32_t eax_801 = ebp_1[-5]
                                                        
                                                        if (add_overflow(eax_801, 0xa))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_803
                                                        int32_t edx_179
                                                        edx_179:eax_803 = sx.q(eax_801 + 0xa)
                                                        int32_t eax_804 = eax_803 + *(esp_14 - 0x24)
                                                        int32_t edx_180 = adc.d(edx_179, 
                                                            *(esp_14 - 0x20), 
                                                            eax_803 + *(esp_14 - 0x24) u< eax_803)
                                                        bool o_107 =
                                                            unimplemented  {adc edx, dword [esp+0x4]}
                                                        
                                                        if (o_107)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 0x20) = eax_804
                                                        
                                                        if (eax_804 s>> 0x1f != edx_180)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        int32_t edx_181 = sx.d(*(ebp_1[-0x26] + 0xee))
                                                        
                                                        if (neg.d(edx_181) == 0x80000000)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        sub_482da8(*(esp_14 - 0x20), neg.d(edx_181), 
                                                            ebx)
                                                    else if (*ebp_1[-0x26] == 0x11
                                                            && *(ebp_1[-0x26] + 0xee) s> 0)
                                                        ebp_1[-0xd] = *(ebp_1[-0x26] + 0x64)
                                                        ebp_1[-0xb] = sx.d(*(ebp_1[-0x26] + 0x56))
                                                        int32_t eax_815 = ebp_1[-6]
                                                        int32_t eax_816 = eax_815 - ebp_1[-0xd]
                                                        
                                                        if (add_overflow(eax_815, neg.d(ebp_1[-0xd])))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (add_overflow(eax_816, 0xfffffff6))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 4) = eax_816 - 0xa
                                                        int32_t eax_819 = *(ebp_1[-0x26] + 0x5c)
                                                        
                                                        if (add_overflow(eax_819, 0x14))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp_1[-0x29] = eax_819 + 0x14
                                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                                        unimplemented  {fmul st0, dword [eax+0x68]}
                                                        int32_t eax_821
                                                        int32_t edx_183
                                                        eax_821, edx_183 = sub_402b4c(st0)
                                                        *(esp_14 - 8) = eax_821
                                                        
                                                        if (eax_821 s>> 0x1f != edx_183)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        *(esp_14 - 8) = *(esp_14 - 8)
                                                        *(esp_14 - 0xc) = ebp_1[-0xd]
                                                        *(esp_14 - 0x10) = ebp_1[-0xb]
                                                        int32_t eax_827 = sx.d(*(ebp_1[-0x26] + 0x74))
                                                        
                                                        if (add_overflow(eax_827, 0xffffffff))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp_1[-0x5a] = eax_827 - 1
                                                        unimplemented  {fild st0, dword [ebp-0x168]}
                                                        unimplemented  {fild st0, word [eax+0xe4]}
                                                        unimplemented  {fdivp st1, st0}
                                                        unimplemented  {fdivp st1, st0}
                                                        *(esp_14 - 0x14) = fconvert.s(unimplemented  {
                                                            fstp dword [esp], st0})
                                                        unimplemented  {fstp dword [esp], st0}
                                                        unimplemented  {fild st0, word [eax+0x74]}
                                                        unimplemented  {fild st0, word [eax+0xe4]}
                                                        unimplemented  {fdivp st1, st0}
                                                        unimplemented  {fdivp st1, st0}
                                                        *(esp_14 - 0x18) = fconvert.s(unimplemented  {
                                                            fstp dword [esp], st0})
                                                        unimplemented  {fstp dword [esp], st0}
                                                        *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x110)
                                                        unimplemented  {fld st0, dword [0x48ac78]}
                                                        unimplemented  {fsub st0, dword [eax+0x68]}
                                                        unimplemented  {fild st0, dword [eax+0x5c]}
                                                        unimplemented  {fmulp st1, st0}
                                                        unimplemented  {fmulp st1, st0}
                                                        unimplemented  {fdiv st0, dword [0x48abbc]}
                                                        int32_t eax_830
                                                        int32_t edx_184
                                                        eax_830, edx_184 = sub_402b4c(st0)
                                                        *(esp_14 - 0x20) = edx_184
                                                        *(esp_14 - 0x24) = eax_830
                                                        int32_t eax_831 = ebp_1[-5]
                                                        
                                                        if (add_overflow(eax_831, 0xa))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_833
                                                        int32_t edx_185
                                                        edx_185:eax_833 = sx.q(eax_831 + 0xa)
                                                        int32_t eax_834 = eax_833 + *(esp_14 - 0x24)
                                                        int32_t edx_186 = adc.d(edx_185, 
                                                            *(esp_14 - 0x20), 
                                                            eax_833 + *(esp_14 - 0x24) u< eax_833)
                                                        bool o_114 =
                                                            unimplemented  {adc edx, dword [esp+0x4]}
                                                        
                                                        if (o_114)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 0x20) = eax_834
                                                        
                                                        if (eax_834 s>> 0x1f != edx_186)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        sub_482da8(*(esp_14 - 0x20), 
                                                            sx.d(*(ebp_1[-0x26] + 0xee)), ebx)
                                                    
                                                    char* eax_839
                                                    eax_839.b = *ebp_1[-0x26]
                                                    eax_839.b -= 0xd
                                                    char temp57_1 = eax_839.b
                                                    eax_839.b -= 3
                                                    char temp62_1
                                                    
                                                    if (temp57_1 u>= 3)
                                                        temp62_1 = eax_839.b
                                                        eax_839.b -= 1
                                                    
                                                    if ((temp57_1 u< 3 || temp62_1 == 1) && (
                                                            *(ebp_1[-0x26] + 0xee) s>= 0
                                                            || *ebp_1[-0x26] != 0x11))
                                                        if (*ebp_1[-0x26] == 0x11)
                                                            *(esp_14 - 4) = esi
                                                            *(esp_14 - 8) = ebp_1[-3]
                                                            *(esp_14 - 0xc) =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            *(esp_14 - 0x10) = &ebp_1[-0xad]
                                                            ebx, ebp_1 =
                                                                sub_469d58(ebx, ebp_1[-0x26] + 8, 0x19)
                                                            ebp_1[-0xc] = *(ebp_1[-0x26] + 0x5c)
                                                            
                                                            if (*(ebp_1[-0x26] + 0x56) != 2)
                                                            label_487bdc:
                                                                *(esp_14 - 4) = ebp_1[-6]
                                                                int32_t eax_864 = ebp_1[-0xc]
                                                                
                                                                if (add_overflow(eax_864, 0xffffffea))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (add_overflow(eax_864 - 0x16, 
                                                                        0xfffffff8))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                *(esp_14 - 8) = eax_864 - 0x1e
                                                                *(esp_14 - 0xc) = 0x19
                                                                *(esp_14 - 0x10) = 0
                                                                *(esp_14 - 0x14) = 0
                                                                *(esp_14 - 0x18) = 0
                                                                *(esp_14 - 0x1c) =
                                                                    *(ebp_1[-0x26] + 0x68)
                                                                *(esp_14 - 0x20) = 0
                                                                *(esp_14 - 0x24) =
                                                                    *(ebp_1[-0x26] + 0x110)
                                                                *(esp_14 - 0x28) = 0x3f800000
                                                                int32_t ecx_78 = ebp_1[-5]
                                                                
                                                                if (add_overflow(ecx_78, 0x20))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (add_overflow(ecx_78 + 0x20, 4))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                sub_48156c(ecx_78 + 0x24, 0xffffffff, 
                                                                    ebx)
                                                            else
                                                                bool o_115 =
                                                                    unimplemented  {imul eax, esi, 0x1038}
                                                                
                                                                if (o_115)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t edx_190 = ebp_1[-3]
                                                                
                                                                if (add_overflow(edx_190, 3))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (sx.d(*(*(ebx + 0xab0) + esi * 0x81c0
                                                                        + 0x8130)) s< edx_190 + 3)
                                                                    goto label_487bdc
                                                                
                                                                bool o_117 =
                                                                    unimplemented  {imul eax, esi, 0x1038}
                                                                
                                                                if (o_117)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t edx_193 = ebp_1[-3]
                                                                
                                                                if (add_overflow(edx_193, 3))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (edx_193 + 2 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_119 =
                                                                    unimplemented  {imul edx, edx, 0x23}
                                                                
                                                                if (o_119)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (*(*(ebx + 0xab0) + esi * 0x81c0
                                                                        + (edx_193 + 3) * 0x118 - 0xa2) != 2)
                                                                    goto label_487bdc
                                                                
                                                                *(esp_14 - 4) = ebp_1[-6]
                                                                int32_t eax_857 = ebp_1[-0xc]
                                                                
                                                                if (add_overflow(eax_857, 0xffffffea))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (add_overflow(eax_857 - 0x16, 
                                                                        0xfffffff8))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                *(esp_14 - 8) = eax_857 - 0x1e
                                                                *(esp_14 - 0xc) = 0x19
                                                                *(esp_14 - 0x10) = 2
                                                                *(esp_14 - 0x14) = 0
                                                                *(esp_14 - 0x18) = 0
                                                                *(esp_14 - 0x1c) =
                                                                    *(ebp_1[-0x26] + 0x68)
                                                                *(esp_14 - 0x20) = 0
                                                                *(esp_14 - 0x24) =
                                                                    *(ebp_1[-0x26] + 0x110)
                                                                *(esp_14 - 0x28) = 0x3f800000
                                                                int32_t ecx_75 = ebp_1[-5]
                                                                
                                                                if (add_overflow(ecx_75, 0x20))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (add_overflow(ecx_75 + 0x20, 4))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                sub_48156c(ecx_75 + 0x24, 0xffffffff, 
                                                                    ebx)
                                                        else if (*ebp_1[-0x26] != 0xe)
                                                            ebp_1[-0xc] = *(ebp_1[-0x26] + 0x5c)
                                                            *(ebp_1[-0x26] + 0xec)
                                                            int32_t eax_874 = *(ebp_1[-0x26] + 0x5c)
                                                            
                                                            if (add_overflow(eax_874, 0x1c))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (add_overflow(eax_874 + 0x1c, 6))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-0xc] = eax_874 + 0x22
                                                            
                                                            if (*(ebp_1[-0x26] + 6) != 0
                                                                    && esi != *(ebx + 0x8a0))
                                                                *(ebp_1[-0x24] + 0x8139)
                                                            
                                                            ebp_1[-0xb] = 0
                                                            *(esp_14 - 4) = ebp_1[-6]
                                                            int32_t eax_880 = ebp_1[-0xc]
                                                            
                                                            if (add_overflow(eax_880, 0xfffffffb))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_14 - 8) = eax_880 - 5
                                                            *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                            *(esp_14 - 0x10) = 2
                                                            *(esp_14 - 0x14) = 0
                                                            unimplemented  {fild st0, dword [ebp-0x2c]}
                                                            *(esp_14 - 0x18) = fconvert.s(unimplemented
                                                                  {fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            *(esp_14 - 0x1c) = 0
                                                            *(esp_14 - 0x20) = 0
                                                            *(esp_14 - 0x24) = *(ebp_1[-0x26] + 0x110)
                                                            *(esp_14 - 0x28) = 0x3f800000
                                                            sub_48156c(ebp_1[-5], 0xffffffff, ebx)
                                                        
                                                        if (*ebp_1[-0x26] == 0xf)
                                                            ebp_1[-0x19] = 0
                                                            ebp_1[-0x1a] = 0
                                                            int32_t edi_16 = 0
                                                            ebp_1[-0x11] = 0
                                                            ebp_1[-0x15] = 0
                                                            bool o_131 = unimplemented  {imul edx}
                                                            
                                                            if (o_131)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-0x29] = sx.d(*(ebp_1[-0x26] + 0x74))
                                                                * sx.d(*(ebp_1[-0x26] + 0x7e))
                                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                                            int32_t eax_890
                                                            int32_t edx_204
                                                            eax_890, edx_204 = sub_402b4c(st0)
                                                            bool o_132 = unimplemented  {adc edx, 0x0}
                                                            
                                                            if (o_132)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_14 - 4) = eax_890 + 1
                                                            int32_t eax_893 = *(esp_14 - 4)
                                                            
                                                            if ((eax_890 + 1) s>> 0x1f != adc.d(
                                                                    edx_204, 0, eax_890 u>= 0xffffffff))
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            int32_t edx_207 =
                                                                sx.d(*(ebp_1[-0x26] + 0xe4))
                                                            
                                                            if (edx_207 s>= eax_893)
                                                                ebp_1[-0x27] = edx_207 - eax_893 + 1
                                                                ebp_1[-7] = eax_893
                                                                int32_t i_1
                                                                
                                                                do
                                                                    int32_t temp147_1 = edi_16
                                                                    edi_16 += 1
                                                                    
                                                                    if (add_overflow(temp147_1, 1))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t temp167_1 = ebp_1[-0x15]
                                                                    ebp_1[-0x15] += 1
                                                                    
                                                                    if (add_overflow(temp167_1, 1))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (edi_16
                                                                            s> sx.d(*(ebp_1[-0x26] + 0x7e)))
                                                                        edi_16 = 1
                                                                        int32_t temp198_1 = ebp_1[-0x11]
                                                                        ebp_1[-0x11] += 1
                                                                        
                                                                        if (add_overflow(temp198_1, 1))
                                                                            sub_403010()
                                                                            noreturn
                                                                    
                                                                    if (sx.d(*(ebp_1[-0x26] + 0x76))
                                                                            s>= ebp_1[-0x11])
                                                                        ebp_1[-0x12] = 0x44
                                                                        
                                                                        if (*(ebp_1[-0x26] + 0xee) == 0xfff9)
                                                                            ebp_1[-0x12] = 0x70
                                                                        
                                                                        int32_t eax_899 = ebp_1[-0x11]
                                                                        
                                                                        if (add_overflow(eax_899, 0xffffffff))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t eax_901 = (eax_899 - 1) * 0x18
                                                                        bool o_137 =
                                                                            unimplemented  {imul eax, eax, 0x18}
                                                                        
                                                                        if (o_137)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (add_overflow(eax_901, 5))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x14] = eax_901 + 5
                                                                        
                                                                        if (*(ebp_1[-0x26] + 0x7e) s<= 1)
                                                                            if (add_overflow(edi_16, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x12]
                                                                            int32_t eax_910 =
                                                                                (edi_16 - 1) * ebp_1[-0x12]
                                                                            bool o_143 =
                                                                                unimplemented  {imul dword [ebp-0x48]}
                                                                            
                                                                            if (o_143)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_910, 0xfffffffa))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x13] = eax_910 - 6
                                                                        else
                                                                            if (add_overflow(edi_16, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x12]
                                                                            int32_t eax_906 =
                                                                                (edi_16 - 1) * ebp_1[-0x12]
                                                                            bool o_140 =
                                                                                unimplemented  {imul dword [ebp-0x48]}
                                                                            
                                                                            if (o_140)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_906, 0xffffffe2))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x13] = eax_906 - 0x1e
                                                                        
                                                                        if (*(ebp_1[-0x26] + 0xee) == 0xfff9)
                                                                            int32_t temp330_1 = ebp_1[-0x13]
                                                                            ebp_1[-0x13] -= 0x78
                                                                            
                                                                            if (add_overflow(temp330_1, 0xffffff88))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (edi_16 s>= 3)
                                                                                int32_t temp357_1 = ebp_1[-0x13]
                                                                                ebp_1[-0x13] -= 0xa
                                                                                
                                                                                if (add_overflow(temp357_1, 0xfffffff6))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                            
                                                                            if (edi_16 == 1)
                                                                                int32_t temp361_1 = ebp_1[-0x13]
                                                                                ebp_1[-0x13] += 0x8c
                                                                                
                                                                                if (add_overflow(temp361_1, 0x8c))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                        
                                                                        if (ebp_1[-0x11] != 0)
                                                                            ebp_1[-8] = ebp_1[-7]
                                                                        else
                                                                            ebp_1[-8] = edi_16
                                                                        
                                                                        int32_t eax_915 =
                                                                            sx.d(*(ebp_1[-0x26] + 0xe4))
                                                                        int32_t edx_211 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x7e))
                                                                        int32_t eax_916 = eax_915 - edx_211
                                                                        
                                                                        if (add_overflow(eax_915, 
                                                                                neg.d(edx_211)))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (add_overflow(eax_916, 1))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (eax_916 + 1 s< ebp_1[-7])
                                                                            ebp_1[-0x14] = *(ebp_1[-0x26] + 0x60)
                                                                        
                                                                        *(esp_14 - 4) = esi
                                                                        *(esp_14 - 8) = ebp_1[-3]
                                                                        *(esp_14 - 0xc) = ebp_1[-8]
                                                                        *(esp_14 - 0x10) = &ebp_1[-0xad]
                                                                        int32_t ecx_83
                                                                        void* ebp_4
                                                                        ecx_83, ebx, ebp_4 =
                                                                            sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                        sub_40401c(ecx_83, ebp_4 - 0x2b4)
                                                                        void** eax_926
                                                                        int32_t ecx_84
                                                                        eax_926, ecx_84, ebp_1 =
                                                                            sub_479f44(nullptr, *(ebp_4 - 0x2b8))
                                                                        ebp_1[-9] = eax_926
                                                                        *(esp_14 - 4) = &ebp_1[-0xaf]
                                                                        sub_403fb0(ecx_84, ebp_1[-9])
                                                                        sub_404280(1, 1, ebp_1[-0xb0])
                                                                        int32_t ecx_86 =
                                                                            sub_404188(ebp_1[-0xaf], 0x48ac0c)
                                                                        *(esp_14 - 4) = &ebp_1[-0xb1]
                                                                        int32_t ecx_87 =
                                                                            sub_403fb0(ecx_86, ebp_1[-9])
                                                                        int32_t eax_934 =
                                                                            sub_404078(ebp_1[-0xb2])
                                                                        
                                                                        if (add_overflow(eax_934, 0xffffffff))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        *(esp_14 - 8) = eax_934 - 1
                                                                        sub_403fb0(ecx_87, ebp_1[-9])
                                                                        int32_t ecx_89 = sub_404280(
                                                                            *(esp_14 - 8), 2, ebp_1[-0xb3])
                                                                        ebp_1[-9] = sub_40423c(ebp_1[-0xb1])
                                                                        sub_403fb0(ecx_89, ebp_1[-9])
                                                                        ecx_86, ebp_1, edi_16 =
                                                                            sub_46fd7c(ebx, ebp_1[-0xb4])
                                                                        unimplemented  {fmul st0, dword [
                                                                            0x48ac20]}
                                                                        unimplemented  {fmul st0, dword [eax
                                                                            +0x84]}
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0x48]}
                                                                        unimplemented  {fsubrp st1, st0}
                                                                        unimplemented  {fsubrp st1, st0}
                                                                        unimplemented  {fdiv st0, dword [
                                                                            0x48abbc]}
                                                                        int32_t eax_942
                                                                        int32_t edx_222
                                                                        eax_942, edx_222 = sub_402b4c(st0)
                                                                        top += 1
                                                                        *(esp_14 - 4) = edx_222
                                                                        *(esp_14 - 8) = eax_942
                                                                        int32_t eax_944
                                                                        int32_t edx_223
                                                                        edx_223:eax_944 = sx.q(ebp_1[-0x13])
                                                                        int32_t eax_945 =
                                                                            eax_944 + *(esp_14 - 8)
                                                                        int32_t edx_224 = adc.d(edx_223, 
                                                                            *(esp_14 - 4), 
                                                                            eax_944 + *(esp_14 - 8) u< eax_944)
                                                                        bool o_151 = unimplemented  {adc edx, 
                                                                            dword [esp+0x4]}
                                                                        
                                                                        if (o_151)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        *(esp_14 - 4) = eax_945
                                                                        int32_t eax_946 = eax_945 s>> 0x1f
                                                                        
                                                                        if (eax_946 != edx_224)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x13] = *(esp_14 - 4)
                                                                        *(esp_14 - 4) = &ebp_1[-0xb5]
                                                                        sub_403fb0(ecx_86, ebp_1[-9])
                                                                        sub_404280(1, 1, ebp_1[-0xb6])
                                                                        int32_t ecx_91 =
                                                                            sub_404188(ebp_1[-0xb5], 0x48ac84)
                                                                        
                                                                        if (eax_946 == edx_224)
                                                                            *(esp_14 - 4) = &ebp_1[-0xb7]
                                                                            int32_t ecx_92 =
                                                                                sub_403fb0(ecx_91, ebp_1[-9])
                                                                            int32_t eax_955 =
                                                                                sub_404078(ebp_1[-0xb8])
                                                                            
                                                                            if (add_overflow(eax_955, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 8) = eax_955 - 1
                                                                            sub_403fb0(ecx_92, ebp_1[-9])
                                                                            sub_404280(*(esp_14 - 8), 2, 
                                                                                ebp_1[-0xb9])
                                                                            ebp_1[-9] = sub_40423c(ebp_1[-0xb7])
                                                                            *(esp_14 - 4) = esi
                                                                            *(esp_14 - 8) = ebp_1[-3]
                                                                            int32_t eax_962 = ebp_1[-8]
                                                                            
                                                                            if (add_overflow(eax_962, 1))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 0xc) = eax_962 + 1
                                                                            *(esp_14 - 0x10) = &ebp_1[-0xad]
                                                                            int32_t ecx_95
                                                                            void* ebp_5
                                                                            ecx_95, ebx, ebp_5 =
                                                                                sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                            sub_40401c(ecx_95, ebp_5 - 0x2b4)
                                                                            void** eax_968
                                                                            eax_968, ecx_91, ebp_1 =
                                                                                sub_479f44(nullptr, *(ebp_5 - 0x2e8))
                                                                            ebp_1[-0xa] = eax_968
                                                                            
                                                                            if (ebp_1[-7] != 1)
                                                                            label_488176:
                                                                                
                                                                                if (*(ebp_1[-0x26] + 0x5c) != 0x267)
                                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                    sub_403fb0(ecx_91, ebp_1[-9])
                                                                                    ebp_1, edi_16 =
                                                                                        sub_46fd7c(ebx, ebp_1[-0xbd])
                                                                                    unimplemented  {fmul st0, dword [
                                                                                        0x48ac20]}
                                                                                    unimplemented  {fmul st0, dword [eax
                                                                                        +0x84]}
                                                                                    unimplemented  {fdiv st0, dword [
                                                                                        0x48abbc]}
                                                                                    int32_t eax_978
                                                                                    int32_t edx_237
                                                                                    eax_978, edx_237 = sub_402b4c(st0)
                                                                                    *(esp_14 - 8) = edx_237
                                                                                    *(esp_14 - 0xc) = eax_978
                                                                                    int32_t eax_979 = ebp_1[-5]
                                                                                    
                                                                                    if (add_overflow(eax_979, 8))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_979 + 8, 
                                                                                            ebp_1[-0x13]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t eax_982
                                                                                    int32_t edx_238
                                                                                    edx_238:eax_982 =
                                                                                        sx.q(eax_979 + 8 + ebp_1[-0x13])
                                                                                    int32_t edx_239 = adc.d(edx_238, 
                                                                                        *(esp_14 - 8), 
                                                                                        eax_982 + *(esp_14 - 0xc) u< eax_982)
                                                                                    bool o_156 = unimplemented  {adc edx, 
                                                                                        dword [esp+0x4]}
                                                                                    
                                                                                    if (o_156)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x5e] = eax_982 + *(esp_14 - 0xc)
                                                                                    ebp_1[-0x5d] = edx_239
                                                                                    unimplemented  {fild st0, qword [ebp
                                                                                        -0x178]}
                                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                          {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    int32_t eax_984 = ebp_1[-6]
                                                                                    
                                                                                    if (add_overflow(eax_984, ebp_1[-0x14]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x29] = eax_984 + ebp_1[-0x14]
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0xa4]}
                                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                                        unimplemented  {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    top += 1
                                                                                    *(esp_14 - 0x10) =
                                                                                        *(ebp_1[-0x26] + 0x68)
                                                                                    *(esp_14 - 0x14) = 2
                                                                                    *(esp_14 - 0x18) = 0
                                                                                    *(esp_14 - 0x1c) =
                                                                                        *(ebp_1[-0x26] + 0x110)
                                                                                    *(esp_14 - 0x20) = 0
                                                                                    *(esp_14 - 0x24) = 0
                                                                                    *(esp_14 - 0x28) = 0
                                                                                    *(esp_14 - 0x2c) = &ebp_1[-0xbc]
                                                                                    ebp_1[-0xb]
                                                                                    ecx_91 = sub_48c290(ebx, &data_48aca0)
                                                                            else
                                                                                sub_403fb0(ecx_91, ebp_1[-0xa])
                                                                                ecx_91, ebp_1, edi_16 =
                                                                                    sub_46fd7c(ebx, ebp_1[-0xbb])
                                                                                unimplemented  {fmul st0, dword [
                                                                                    0x48ac20]}
                                                                                long double temp394_1 = fconvert.t(90f)
                                                                                unimplemented  {fcomp st0, dword [
                                                                                    0x48ac88]} f- temp394_1
                                                                                bool c0_3 = unimplemented  {fcomp st0, 
                                                                                    dword [0x48ac88]} f< temp394_1
                                                                                bool c2_3 = is_unordered.t(
                                                                                    unimplemented  {fcomp st0, dword [
                                                                                        0x48ac88]}, 
                                                                                    temp394_1)
                                                                                bool c3_3 = unimplemented  {fcomp st0, 
                                                                                    dword [0x48ac88]} f== temp394_1
                                                                                unimplemented  {fcomp st0, dword [
                                                                                    0x48ac88]}
                                                                                top += 1
                                                                                int16_t eax_971 = (c0_3 ? 1 : 0) << 8
                                                                                    | (c2_3 ? 1 : 0) << 0xa
                                                                                    | (c3_3 ? 1 : 0) << 0xe
                                                                                    | (top & 7) << 0xb
                                                                                
                                                                                if (test_bit(eax_971:1.b, 6)
                                                                                        || test_bit(eax_971:1.b, 0))
                                                                                    goto label_488176
                                                                                
                                                                                char* eax_973 = ebp_1[-0x26] + 8
                                                                                int32_t ecx_96
                                                                                ecx_96.b = *eax_973
                                                                                ecx_91 = sub_402c90(eax_973, 
                                                                                    "\thighlight", ecx_96 + 1)
                                                                                
                                                                                if (ecx_96 == 0xffffffff)
                                                                                    goto label_488176
                                                                            
                                                                            int32_t temp398_1 = ebp_1[-0x14]
                                                                            ebp_1[-0x14] -= 0x11
                                                                            
                                                                            if (add_overflow(temp398_1, 0xffffffef))
                                                                                sub_403010()
                                                                                noreturn
                                                                        
                                                                        if (ebp_1[-0x11] s> 0)
                                                                            int32_t temp385_1 = ebp_1[-0x14]
                                                                            ebp_1[-0x14] += 7
                                                                            
                                                                            if (add_overflow(temp385_1, 7))
                                                                                sub_403010()
                                                                                noreturn
                                                                        
                                                                        if (ebp_1[-8] s>= ebp_1[-0x19]
                                                                                && ebp_1[-8] s<= ebp_1[-0x1a])
                                                                            *(esp_14 - 4) =
                                                                                sx.d(*(ebp_1[-0x26] + 0x7e))
                                                                            ecx_91 = *(esp_14 - 4)
                                                                            
                                                                            if (mods.dp.d(sx.q(ebp_1[-8]), ecx_91)
                                                                                    == ebp_1[-0x1b])
                                                                                ebp_1[-9] = &data_48ab80
                                                                        
                                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                        int32_t eax_998 = ebp_1[-5]
                                                                        
                                                                        if (add_overflow(eax_998, 8))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (add_overflow(eax_998 + 8, 
                                                                                ebp_1[-0x13]))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x29] =
                                                                            eax_998 + 8 + ebp_1[-0x13]
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0xa4]}
                                                                        *(esp_14 - 8) = fconvert.s(unimplemented
                                                                              {fstp dword [esp], st0})
                                                                        unimplemented  {fstp dword [esp], st0}
                                                                        int32_t eax_1001 = ebp_1[-6]
                                                                        
                                                                        if (add_overflow(eax_1001, 
                                                                                ebp_1[-0x14]))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-0x5a] = eax_1001 + ebp_1[-0x14]
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0x168]}
                                                                        *(esp_14 - 0xc) = fconvert.s(
                                                                            unimplemented  {fstp dword [esp], st0})
                                                                        unimplemented  {fstp dword [esp], st0}
                                                                        *(esp_14 - 0x10) =
                                                                            *(ebp_1[-0x26] + 0x68)
                                                                        *(esp_14 - 0x14) = 0xa
                                                                        *(esp_14 - 0x18) = 0
                                                                        *(esp_14 - 0x1c) =
                                                                            *(ebp_1[-0x26] + 0x110)
                                                                        int32_t eax_1006 =
                                                                            sx.d(*(ebp_1[-0x24] + 2))
                                                                        int32_t edx_245 =
                                                                            sx.d(*(ebp_1[-0x26] + 2))
                                                                        int32_t eax_1007 = eax_1006 + edx_245
                                                                        
                                                                        if (add_overflow(eax_1006, edx_245))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        void* edx_246 = ebp_1[-0x26]
                                                                        int32_t eax_1008 =
                                                                            eax_1007 + *(edx_246 + 0x5c)
                                                                        
                                                                        if (add_overflow(eax_1007, 
                                                                                *(edx_246 + 0x5c)))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (add_overflow(eax_1008, 0xffffffec))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        *(esp_14 - 0x20) = eax_1008 - 0x14
                                                                        *(esp_14 - 0x24) = 0
                                                                        *(esp_14 - 0x28) = 0
                                                                        *(esp_14 - 0x2c) = &ebp_1[-0x10]
                                                                        sub_403fb0(ecx_91, ebp_1[-9])
                                                                        ebp_1[-0xb]
                                                                        sub_48c290(ebx, ebp_1[-0xbe])
                                                                        ebp_1[-0x17] = 0
                                                                        bool z_8 = ebp_1[-0x1f] == 0
                                                                        
                                                                        if (not(z_8))
                                                                            z_8 = *(ebp_1[-0x26] + 0xee) == 0xfff9
                                                                            
                                                                            if (z_8)
                                                                                *(esp_14 - 4) = &ebp_1[-0xbf]
                                                                                sub_404280(1, 2, ebp_1[-0x1f])
                                                                                int32_t eax_1017
                                                                                int32_t ecx_101
                                                                                eax_1017, ecx_101 =
                                                                                    sub_408e80(ebp_1[-0xbf])
                                                                                int32_t edx_251 =
                                                                                    sx.d(*(ebp_1[-0x26] + 0x74))
                                                                                int32_t eax_1018 = eax_1017 - edx_251
                                                                                
                                                                                if (add_overflow(eax_1017, 
                                                                                        neg.d(edx_251)))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                int32_t temp416_1 = ebp_1[-0x11]
                                                                                z_8 = eax_1018 == temp416_1
                                                                                
                                                                                if (z_8 || eax_1018 - temp416_1 s< 0 !=
                                                                                        add_overflow(eax_1018, 
                                                                                        neg.d(temp416_1)))
                                                                                    int32_t temp417_1 = ebp_1[-0x11]
                                                                                    z_8 = temp417_1 == 0
                                                                                    
                                                                                    if (not(z_8) && temp417_1 s< 0
                                                                                            == add_overflow(temp417_1, 0))
                                                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                        int32_t eax_1020 = ebp_1[-5]
                                                                                        
                                                                                        if (add_overflow(eax_1020, 8))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        if (add_overflow(eax_1020 + 8, 
                                                                                                ebp_1[-0x13]))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        ebp_1[-0x29] =
                                                                                            eax_1020 + 8 + ebp_1[-0x13]
                                                                                        unimplemented  {fild st0, dword [ebp
                                                                                            -0xa4]}
                                                                                        *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                              {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        int32_t eax_1023 = ebp_1[-6]
                                                                                        
                                                                                        if (add_overflow(eax_1023, 
                                                                                                ebp_1[-0x14]))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        ebp_1[-0x5a] = eax_1023 + ebp_1[-0x14]
                                                                                        unimplemented  {fild st0, dword [ebp
                                                                                            -0x168]}
                                                                                        *(esp_14 - 0xc) = fconvert.s(
                                                                                            unimplemented  {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        *(esp_14 - 0x10) =
                                                                                            *(ebp_1[-0x26] + 0x68)
                                                                                        *(esp_14 - 0x14) = 2
                                                                                        *(esp_14 - 0x18) = 0
                                                                                        unimplemented  {fld st0, tword [0x48aca4
                                                                                            ]}
                                                                                        unimplemented  {fmul st0, dword [eax
                                                                                            +0x110]}
                                                                                        *(esp_14 - 0x1c) = fconvert.s(
                                                                                            unimplemented  {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        int32_t eax_1027 =
                                                                                            sx.d(*(ebp_1[-0x24] + 2))
                                                                                        int32_t edx_253 =
                                                                                            sx.d(*(ebp_1[-0x26] + 2))
                                                                                        int32_t eax_1028 = eax_1027 + edx_253
                                                                                        
                                                                                        if (add_overflow(eax_1027, edx_253))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        void* edx_254 = ebp_1[-0x26]
                                                                                        int32_t eax_1029 =
                                                                                            eax_1028 + *(edx_254 + 0x5c)
                                                                                        
                                                                                        if (add_overflow(eax_1028, 
                                                                                                *(edx_254 + 0x5c)))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        z_8 = eax_1029 == 0x14
                                                                                        
                                                                                        if (add_overflow(eax_1029, 0xffffffec))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        *(esp_14 - 0x20) = eax_1029 - 0x14
                                                                                        *(esp_14 - 0x24) = 0
                                                                                        *(esp_14 - 0x28) = 0
                                                                                        *(esp_14 - 0x2c) = &ebp_1[-0xc0]
                                                                                        sub_403fb0(ecx_101, ebp_1[-9])
                                                                                        ebp_1[-0xb]
                                                                                        sub_48c290(ebx, ebp_1[-0xc1])
                                                                                        ebp_1[-0x17] = 1
                                                                        
                                                                        *(esp_14 - 4) = &ebp_1[-0xc2]
                                                                        sub_404280(1, 1, ebp_1[-0x10])
                                                                        esp_14 = esp_14
                                                                        int32_t ecx_104 =
                                                                            sub_404188(ebp_1[-0xc2], 0x48acb8)
                                                                        
                                                                        if (z_8)
                                                                            ebp_1[-0x17]
                                                                            ecx_104 =
                                                                                sub_4042c0(&ebp_1[-0x10], 1, 1)
                                                                        
                                                                        if (ebp_1[-0x17] == 0)
                                                                            if (ebp_1[-0x1f] == 0
                                                                                || *(ebp_1[-0x26] + 0xee) != 0xfff9)
                                                                            label_488802:
                                                                                
                                                                                if (ebp_1[-0x1f] != 0)
                                                                                    if (add_overflow(esi, 0x3e8))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(esp_14 - 4) = esi + 0x3e8
                                                                                    *(esp_14 - 8) = ebp_1[-3]
                                                                                    *(esp_14 - 0xc) = ebp_1[-8]
                                                                                    *(esp_14 - 0x10) = &ebp_1[-0xad]
                                                                                    int32_t ecx_110
                                                                                    void* ebp_6
                                                                                    ecx_110, ebx, ebp_6 =
                                                                                        sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                                    sub_40401c(ecx_110, ebp_6 - 0x2b4)
                                                                                    char* eax_1084
                                                                                    eax_1084, ebp_1 =
                                                                                        sub_479f44(nullptr, *(ebp_6 - 0x328))
                                                                                    int32_t ecx_111 =
                                                                                        sub_402e28(ebx + 0xbc8, eax_1084)
                                                                                    
                                                                                    if (ebp_1[-0x14] s> 0
                                                                                            || *(ebp_1[-0x26] + 0x5c) != 0x267)
                                                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                        int32_t eax_1107 = ebp_1[-5]
                                                                                        
                                                                                        if (add_overflow(eax_1107, 8))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        if (add_overflow(eax_1107 + 8, 
                                                                                                ebp_1[-0x13]))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        ebp_1[-0x29] =
                                                                                            eax_1107 + 8 + ebp_1[-0x13]
                                                                                        unimplemented  {fild st0, dword [ebp
                                                                                            -0xa4]}
                                                                                        *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                              {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        int32_t eax_1110 = ebp_1[-6]
                                                                                        
                                                                                        if (add_overflow(eax_1110, 
                                                                                                ebp_1[-0x14]))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        ebp_1[-0x5a] = eax_1110 + ebp_1[-0x14]
                                                                                        unimplemented  {fild st0, dword [ebp
                                                                                            -0x168]}
                                                                                        *(esp_14 - 0xc) = fconvert.s(
                                                                                            unimplemented  {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        *(esp_14 - 0x10) =
                                                                                            *(ebp_1[-0x26] + 0x68)
                                                                                        *(esp_14 - 0x14) = 2
                                                                                        *(esp_14 - 0x18) = 0
                                                                                        *(esp_14 - 0x1c) =
                                                                                            *(ebp_1[-0x26] + 0x110)
                                                                                        int32_t eax_1115 =
                                                                                            sx.d(*(ebp_1[-0x24] + 2))
                                                                                        int32_t edx_282 =
                                                                                            sx.d(*(ebp_1[-0x26] + 2))
                                                                                        int32_t eax_1116 = eax_1115 + edx_282
                                                                                        
                                                                                        if (add_overflow(eax_1115, edx_282))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        void* edx_283 = ebp_1[-0x26]
                                                                                        int32_t eax_1117 =
                                                                                            eax_1116 + *(edx_283 + 0x5c)
                                                                                        
                                                                                        if (add_overflow(eax_1116, 
                                                                                                *(edx_283 + 0x5c)))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        if (add_overflow(eax_1117, 0xffffffec))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        *(esp_14 - 0x20) = eax_1117 - 0x14
                                                                                        *(esp_14 - 0x24) = 0
                                                                                        int32_t ecx_114 =
                                                                                            sub_40401c(ecx_111, ebx + 0xbc8)
                                                                                        *(esp_14 - 0x28) = ebp_1[-0xcf]
                                                                                        *(esp_14 - 0x2c) = &ebp_1[-0xce]
                                                                                        sub_403fb0(ecx_114, ebp_1[-9])
                                                                                        ebp_1[-0xb]
                                                                                        sub_48c290(ebx, ebp_1[-0xd0])
                                                                                    else
                                                                                        unimplemented  {fld st0, dword [eax
                                                                                            +0x84]}
                                                                                        unimplemented  {fmul st0, dword [
                                                                                            0x48ac68]}
                                                                                        *(esp_14 - 4) = fconvert.s(unimplemented
                                                                                              {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        int32_t eax_1087 = ebp_1[-5]
                                                                                        
                                                                                        if (add_overflow(eax_1087, 8))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        int32_t eax_1089 =
                                                                                            eax_1087 + 8 + ebp_1[-0x13]
                                                                                        
                                                                                        if (add_overflow(eax_1087 + 8, 
                                                                                                ebp_1[-0x13]))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        if (add_overflow(eax_1089, 0xfffffff6))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        ebp_1[-0x29] = eax_1089 - 0xa
                                                                                        unimplemented  {fild st0, dword [ebp
                                                                                            -0xa4]}
                                                                                        *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                              {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        int32_t eax_1091 = ebp_1[-6]
                                                                                        int32_t eax_1092 =
                                                                                            eax_1091 + ebp_1[-0x14]
                                                                                        
                                                                                        if (add_overflow(eax_1091, 
                                                                                                ebp_1[-0x14]))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        if (add_overflow(eax_1092, 0xa))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        ebp_1[-0x5a] = eax_1092 + 0xa
                                                                                        unimplemented  {fild st0, dword [ebp
                                                                                            -0x168]}
                                                                                        *(esp_14 - 0xc) = fconvert.s(
                                                                                            unimplemented  {fstp dword [esp], st0})
                                                                                        unimplemented  {fstp dword [esp], st0}
                                                                                        *(esp_14 - 0x10) =
                                                                                            *(ebp_1[-0x26] + 0x68)
                                                                                        *(esp_14 - 0x14) = 2
                                                                                        *(esp_14 - 0x18) = 0
                                                                                        *(esp_14 - 0x1c) =
                                                                                            *(ebp_1[-0x26] + 0x110)
                                                                                        int32_t eax_1097 =
                                                                                            sx.d(*(ebp_1[-0x24] + 2))
                                                                                        int32_t edx_276 =
                                                                                            sx.d(*(ebp_1[-0x26] + 2))
                                                                                        int32_t eax_1098 = eax_1097 + edx_276
                                                                                        
                                                                                        if (add_overflow(eax_1097, edx_276))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        void* edx_277 = ebp_1[-0x26]
                                                                                        int32_t eax_1099 =
                                                                                            eax_1098 + *(edx_277 + 0x5c)
                                                                                        
                                                                                        if (add_overflow(eax_1098, 
                                                                                                *(edx_277 + 0x5c)))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        if (add_overflow(eax_1099, 0xffffffec))
                                                                                            sub_403010()
                                                                                            noreturn
                                                                                        
                                                                                        *(esp_14 - 0x20) = eax_1099 - 0x14
                                                                                        *(esp_14 - 0x24) = 0
                                                                                        int32_t ecx_112 =
                                                                                            sub_40401c(ecx_111, ebx + 0xbc8)
                                                                                        *(esp_14 - 0x28) = ebp_1[-0xcc]
                                                                                        *(esp_14 - 0x2c) = &ebp_1[-0xcb]
                                                                                        sub_403fb0(ecx_112, ebp_1[-9])
                                                                                        ebp_1[-0xb]
                                                                                        sub_48c290(ebx, ebp_1[-0xcd])
                                                                                else if (ebp_1[-0x14] s> 0
                                                                                        || *(ebp_1[-0x26] + 0x5c) != 0x267)
                                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                    int32_t eax_1143 = ebp_1[-5]
                                                                                    
                                                                                    if (add_overflow(eax_1143, 8))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_1143 + 8, 
                                                                                            ebp_1[-0x13]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x29] =
                                                                                        eax_1143 + 8 + ebp_1[-0x13]
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0xa4]}
                                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                          {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    int32_t eax_1146 = ebp_1[-6]
                                                                                    
                                                                                    if (add_overflow(eax_1146, 
                                                                                            ebp_1[-0x14]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x5a] = eax_1146 + ebp_1[-0x14]
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0x168]}
                                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                                        unimplemented  {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    *(esp_14 - 0x10) =
                                                                                        *(ebp_1[-0x26] + 0x68)
                                                                                    *(esp_14 - 0x14) = 2
                                                                                    *(esp_14 - 0x18) = 0
                                                                                    *(esp_14 - 0x1c) =
                                                                                        *(ebp_1[-0x26] + 0x110)
                                                                                    int32_t eax_1151 =
                                                                                        sx.d(*(ebp_1[-0x24] + 2))
                                                                                    int32_t edx_293 =
                                                                                        sx.d(*(ebp_1[-0x26] + 2))
                                                                                    int32_t eax_1152 = eax_1151 + edx_293
                                                                                    
                                                                                    if (add_overflow(eax_1151, edx_293))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    void* edx_294 = ebp_1[-0x26]
                                                                                    int32_t eax_1153 =
                                                                                        eax_1152 + *(edx_294 + 0x5c)
                                                                                    
                                                                                    if (add_overflow(eax_1152, 
                                                                                            *(edx_294 + 0x5c)))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_1153, 0xffffffec))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(esp_14 - 0x20) = eax_1153 - 0x14
                                                                                    *(esp_14 - 0x24) = 0
                                                                                    *(esp_14 - 0x28) = 0
                                                                                    *(esp_14 - 0x2c) = &ebp_1[-0xd3]
                                                                                    sub_403fb0(ecx_104, ebp_1[-9])
                                                                                    ebp_1[-0xb]
                                                                                    sub_48c290(ebx, ebp_1[-0xd4])
                                                                                else
                                                                                    unimplemented  {fld st0, dword [eax
                                                                                        +0x84]}
                                                                                    unimplemented  {fmul st0, dword [
                                                                                        0x48ac68]}
                                                                                    *(esp_14 - 4) = fconvert.s(unimplemented
                                                                                          {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    int32_t eax_1125 = ebp_1[-5]
                                                                                    
                                                                                    if (add_overflow(eax_1125, 8))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t eax_1127 =
                                                                                        eax_1125 + 8 + ebp_1[-0x13]
                                                                                    
                                                                                    if (add_overflow(eax_1125 + 8, 
                                                                                            ebp_1[-0x13]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_1127, 0xfffffff6))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x29] = eax_1127 - 0xa
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0xa4]}
                                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                          {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    int32_t eax_1129 = ebp_1[-6]
                                                                                    int32_t eax_1130 =
                                                                                        eax_1129 + ebp_1[-0x14]
                                                                                    
                                                                                    if (add_overflow(eax_1129, 
                                                                                            ebp_1[-0x14]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_1130, 0xa))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x5a] = eax_1130 + 0xa
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0x168]}
                                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                                        unimplemented  {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    *(esp_14 - 0x10) =
                                                                                        *(ebp_1[-0x26] + 0x68)
                                                                                    *(esp_14 - 0x14) = 2
                                                                                    *(esp_14 - 0x18) = 0
                                                                                    *(esp_14 - 0x1c) =
                                                                                        *(ebp_1[-0x26] + 0x110)
                                                                                    int32_t eax_1135 =
                                                                                        sx.d(*(ebp_1[-0x24] + 2))
                                                                                    int32_t edx_288 =
                                                                                        sx.d(*(ebp_1[-0x26] + 2))
                                                                                    int32_t eax_1136 = eax_1135 + edx_288
                                                                                    
                                                                                    if (add_overflow(eax_1135, edx_288))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    void* edx_289 = ebp_1[-0x26]
                                                                                    int32_t eax_1137 =
                                                                                        eax_1136 + *(edx_289 + 0x5c)
                                                                                    
                                                                                    if (add_overflow(eax_1136, 
                                                                                            *(edx_289 + 0x5c)))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_1137, 0xffffffec))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(esp_14 - 0x20) = eax_1137 - 0x14
                                                                                    *(esp_14 - 0x24) = 0
                                                                                    *(esp_14 - 0x28) = 0
                                                                                    *(esp_14 - 0x2c) = &ebp_1[-0xd1]
                                                                                    sub_403fb0(ecx_104, ebp_1[-9])
                                                                                    ebp_1[-0xb]
                                                                                    sub_48c290(ebx, ebp_1[-0xd2])
                                                                            else
                                                                                *(esp_14 - 4) = &ebp_1[-0xc5]
                                                                                sub_404280(1, 1, ebp_1[-0x1f])
                                                                                int32_t eax_1042
                                                                                eax_1042, ecx_104 =
                                                                                    sub_408e80(ebp_1[-0xc5])
                                                                                int32_t edx_260 =
                                                                                    sx.d(*(ebp_1[-0x26] + 0x74))
                                                                                
                                                                                if (add_overflow(eax_1042, 
                                                                                        neg.d(edx_260)))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (eax_1042 - edx_260 != ebp_1[-0x11]
                                                                                        || ebp_1[-0x11] s<= 0)
                                                                                    goto label_488802
                                                                                
                                                                                *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                int32_t eax_1045 = ebp_1[-5]
                                                                                
                                                                                if (add_overflow(eax_1045, 8))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (add_overflow(eax_1045 + 8, 
                                                                                        ebp_1[-0x13]))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0x29] =
                                                                                    eax_1045 + 8 + ebp_1[-0x13]
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0xa4]}
                                                                                *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                      {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                int32_t eax_1048 = ebp_1[-6]
                                                                                
                                                                                if (add_overflow(eax_1048, 
                                                                                        ebp_1[-0x14]))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0x5a] = eax_1048 + ebp_1[-0x14]
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0x168]}
                                                                                *(esp_14 - 0xc) = fconvert.s(
                                                                                    unimplemented  {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                *(esp_14 - 0x10) =
                                                                                    *(ebp_1[-0x26] + 0x68)
                                                                                *(esp_14 - 0x14) = 5
                                                                                *(esp_14 - 0x18) = 0
                                                                                *(esp_14 - 0x1c) =
                                                                                    *(ebp_1[-0x26] + 0x110)
                                                                                int32_t eax_1053 =
                                                                                    sx.d(*(ebp_1[-0x24] + 2))
                                                                                int32_t edx_262 =
                                                                                    sx.d(*(ebp_1[-0x26] + 2))
                                                                                int32_t eax_1054 = eax_1053 + edx_262
                                                                                
                                                                                if (add_overflow(eax_1053, edx_262))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                void* edx_263 = ebp_1[-0x26]
                                                                                int32_t eax_1055 =
                                                                                    eax_1054 + *(edx_263 + 0x5c)
                                                                                
                                                                                if (add_overflow(eax_1054, 
                                                                                        *(edx_263 + 0x5c)))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (add_overflow(eax_1055, 0xffffffec))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(esp_14 - 0x20) = eax_1055 - 0x14
                                                                                *(esp_14 - 0x24) = 0
                                                                                *(esp_14 - 0x28) = 0
                                                                                *(esp_14 - 0x2c) = &ebp_1[-0xc6]
                                                                                sub_403fb0(ecx_104, ebp_1[-9])
                                                                                ebp_1[-0xb]
                                                                                int32_t ecx_107 =
                                                                                    sub_48c290(ebx, ebp_1[-0xc7])
                                                                                *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                int32_t eax_1061 = ebp_1[-5]
                                                                                
                                                                                if (add_overflow(eax_1061, 8))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (add_overflow(eax_1061 + 8, 
                                                                                        ebp_1[-0x13]))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0x29] =
                                                                                    eax_1061 + 8 + ebp_1[-0x13]
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0xa4]}
                                                                                *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                      {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                int32_t eax_1064 = ebp_1[-6]
                                                                                
                                                                                if (add_overflow(eax_1064, 
                                                                                        ebp_1[-0x14]))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0x5a] = eax_1064 + ebp_1[-0x14]
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0x168]}
                                                                                *(esp_14 - 0xc) = fconvert.s(
                                                                                    unimplemented  {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                *(esp_14 - 0x10) =
                                                                                    *(ebp_1[-0x26] + 0x68)
                                                                                *(esp_14 - 0x14) = 2
                                                                                *(esp_14 - 0x18) = 0
                                                                                *(esp_14 - 0x1c) =
                                                                                    *(ebp_1[-0x26] + 0x110)
                                                                                int32_t eax_1069 =
                                                                                    sx.d(*(ebp_1[-0x24] + 2))
                                                                                int32_t edx_267 =
                                                                                    sx.d(*(ebp_1[-0x26] + 2))
                                                                                int32_t eax_1070 = eax_1069 + edx_267
                                                                                
                                                                                if (add_overflow(eax_1069, edx_267))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                void* edx_268 = ebp_1[-0x26]
                                                                                int32_t eax_1071 =
                                                                                    eax_1070 + *(edx_268 + 0x5c)
                                                                                
                                                                                if (add_overflow(eax_1070, 
                                                                                        *(edx_268 + 0x5c)))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (add_overflow(eax_1071, 0xffffffec))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(esp_14 - 0x20) = eax_1071 - 0x14
                                                                                *(esp_14 - 0x24) = 0
                                                                                *(esp_14 - 0x28) = 0
                                                                                *(esp_14 - 0x2c) = &ebp_1[-0xc8]
                                                                                sub_403fb0(ecx_107, ebp_1[-9])
                                                                                ebp_1[-0xb]
                                                                                sub_48c290(ebx, ebp_1[-0xc9])
                                                                        
                                                                        ebp_1[-0x1c] = 0
                                                                        
                                                                        while (ebp_1[-0x10] != 0)
                                                                            int32_t eax_1203 = ebp_1[-0x1c]
                                                                            int32_t eax_1204 =
                                                                                eax_1203 + ebp_1[-0x11]
                                                                            
                                                                            if (add_overflow(eax_1203, 
                                                                                    ebp_1[-0x11]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1204, 1))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (eax_1204 + 1
                                                                                    s> sx.d(*(ebp_1[-0x26] + 0x76)))
                                                                                break
                                                                            
                                                                            int32_t temp439_1 = ebp_1[-0x1c]
                                                                            ebp_1[-0x1c] += 1
                                                                            
                                                                            if (add_overflow(temp439_1, 1))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                            int32_t eax_1159 = ebp_1[-5]
                                                                            
                                                                            if (add_overflow(eax_1159, 8))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1159 + 8, 
                                                                                    ebp_1[-0x13]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x29] =
                                                                                eax_1159 + 8 + ebp_1[-0x13]
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0xa4]}
                                                                            *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            int32_t eax_1162 = ebp_1[-0x11]
                                                                            
                                                                            if (add_overflow(eax_1162, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1162 - 1, 
                                                                                    ebp_1[-0x1c]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1165 =
                                                                                (eax_1162 - 1 + ebp_1[-0x1c]) * 0x18
                                                                            bool o_222 =
                                                                                unimplemented  {imul eax, eax, 0x18}
                                                                            
                                                                            if (o_222)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1165, 5))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1165 + 5, 
                                                                                    ebp_1[-6]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x5a] = eax_1165 + 5 + ebp_1[-6]
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0x168]}
                                                                            *(esp_14 - 0xc) = fconvert.s(
                                                                                unimplemented  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            *(esp_14 - 0x10) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x14) = 5
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            int32_t eax_1171 =
                                                                                sx.d(*(ebp_1[-0x24] + 2))
                                                                            int32_t edx_298 =
                                                                                sx.d(*(ebp_1[-0x26] + 2))
                                                                            int32_t eax_1172 = eax_1171 + edx_298
                                                                            
                                                                            if (add_overflow(eax_1171, edx_298))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            void* edx_299 = ebp_1[-0x26]
                                                                            int32_t eax_1173 =
                                                                                eax_1172 + *(edx_299 + 0x5c)
                                                                            
                                                                            if (add_overflow(eax_1172, 
                                                                                    *(edx_299 + 0x5c)))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1173, 0xffffffec))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 0x20) = eax_1173 - 0x14
                                                                            *(esp_14 - 0x24) = ebp_1[-0x1c]
                                                                            *(esp_14 - 0x28) = 0
                                                                            *(esp_14 - 0x2c) = &ebp_1[-0xd5]
                                                                            ebp_1[-0xb]
                                                                            sub_48c290(ebx, ebp_1[-0x10])
                                                                            *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                            int32_t eax_1179 = ebp_1[-5]
                                                                            
                                                                            if (add_overflow(eax_1179, 8))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1179 + 8, 
                                                                                    ebp_1[-0x13]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x29] =
                                                                                eax_1179 + 8 + ebp_1[-0x13]
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0xa4]}
                                                                            *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            int32_t eax_1182 = ebp_1[-0x11]
                                                                            
                                                                            if (add_overflow(eax_1182, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1182 - 1, 
                                                                                    ebp_1[-0x1c]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1185 =
                                                                                (eax_1182 - 1 + ebp_1[-0x1c]) * 0x18
                                                                            bool o_232 =
                                                                                unimplemented  {imul eax, eax, 0x18}
                                                                            
                                                                            if (o_232)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1185, 5))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1185 + 5, 
                                                                                    ebp_1[-6]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x5a] = eax_1185 + 5 + ebp_1[-6]
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0x168]}
                                                                            *(esp_14 - 0xc) = fconvert.s(
                                                                                unimplemented  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            *(esp_14 - 0x10) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x14) = 2
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            int32_t eax_1191 =
                                                                                sx.d(*(ebp_1[-0x24] + 2))
                                                                            int32_t edx_302 =
                                                                                sx.d(*(ebp_1[-0x26] + 2))
                                                                            int32_t eax_1192 = eax_1191 + edx_302
                                                                            
                                                                            if (add_overflow(eax_1191, edx_302))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            void* edx_303 = ebp_1[-0x26]
                                                                            int32_t eax_1193 =
                                                                                eax_1192 + *(edx_303 + 0x5c)
                                                                            
                                                                            if (add_overflow(eax_1192, 
                                                                                    *(edx_303 + 0x5c)))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1193, 0xffffffec))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 0x20) = eax_1193 - 0x14
                                                                            *(esp_14 - 0x24) = ebp_1[-0x1c]
                                                                            *(esp_14 - 0x28) = 0
                                                                            *(esp_14 - 0x2c) = &ebp_1[-0xd6]
                                                                            ebp_1[-0xb]
                                                                            sub_48c290(ebx, ebp_1[-0x10])
                                                                            sub_403e90(&ebp_1[-0x10], ebp_1[-0xd6])
                                                                            *(esp_14 - 4) = &ebp_1[-0xd7]
                                                                            sub_404280(1, 1, ebp_1[-0x10])
                                                                            sub_404188(ebp_1[-0xd7], 0x48acb8)
                                                                            
                                                                            if (eax_1193 == 0x14)
                                                                                sub_4042c0(&ebp_1[-0x10], 1, 1)
                                                                        
                                                                        if (ebp_1[-0x1c] s> 0)
                                                                            int32_t eax_1207 =
                                                                                sx.d(*(ebp_1[-0x26] + 0x7e))
                                                                            
                                                                            if (add_overflow(eax_1207, ebp_1[-8]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x19] = eax_1207 + ebp_1[-8]
                                                                            ebp_1[-0x1c]
                                                                            int32_t eax_1211 =
                                                                                sx.d(*(ebp_1[-0x26] + 0x7e))
                                                                                * ebp_1[-0x1c]
                                                                            bool o_241 =
                                                                                unimplemented  {imul dword [ebp-0x70]}
                                                                            
                                                                            if (o_241)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1211, ebp_1[-8]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x1a] = eax_1211 + ebp_1[-8]
                                                                            *(esp_14 - 4) =
                                                                                sx.d(*(ebp_1[-0x26] + 0x7e))
                                                                            ebp_1[-0x1b] = mods.dp.d(
                                                                                sx.q(ebp_1[-8]), *(esp_14 - 4))
                                                                    
                                                                    ebp_1[-7] += 1
                                                                    i_1 = ebp_1[-0x27]
                                                                    ebp_1[-0x27] -= 1
                                                                while (i_1 != 1)
                                                        else if (*ebp_1[-0x26] == 0xe)
                                                            bool o_243 =
                                                                unimplemented  {imul eax, eax, 0x18}
                                                            
                                                            if (o_243)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-0x29] =
                                                                sx.d(*(ebp_1[-0x26] + 0xec)) * 0x18
                                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                                            ebp_1[-0x21] = fconvert.s(unimplemented  {
                                                                fstp dword [ebp-0x84], st0})
                                                            unimplemented  {fstp dword [ebp-0x84], st0}
                                                            
                                                            if (*(ebp_1[-0x26] + 0x56) != 2)
                                                                unimplemented  {fld st0, dword [0x48ac78
                                                                    ]}
                                                                unimplemented  {fdiv st0, dword [ebx
                                                                    +0x11cc]}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x48acbc]}
                                                                unimplemented  {fadd dword [eax+0x80]}
                                                                *(ebp_1[-0x26] + 0x80) = fconvert.s(
                                                                    unimplemented  {fstp dword [eax+0x80], 
                                                                    st0})
                                                                unimplemented  {fstp dword [eax+0x80], 
                                                                    st0}
                                                            
                                                            unimplemented  {fld st0, dword [eax+0x80]}
                                                            long double temp125_1 =
                                                                fconvert.t(ebp_1[-0x21])
                                                            unimplemented  {fcomp st0, dword [ebp-0x84]}
                                                                f- temp125_1
                                                            bool c0_4 = unimplemented  {fcomp st0, 
                                                                dword [ebp-0x84]} f< temp125_1
                                                            bool c2_4 = is_unordered.t(
                                                                unimplemented  {fcomp st0, dword [ebp
                                                                    -0x84]}, 
                                                                temp125_1)
                                                            bool c3_4 = unimplemented  {fcomp st0, 
                                                                dword [ebp-0x84]} f== temp125_1
                                                            unimplemented  {fcomp st0, dword [ebp-0x84]}
                                                            int16_t eax_1224 = (c0_4 ? 1 : 0) << 8
                                                                | (c2_4 ? 1 : 0) << 0xa
                                                                | (c3_4 ? 1 : 0) << 0xe
                                                                | (top & 7) << 0xb
                                                            
                                                            if (not(test_bit(eax_1224:1.b, 6))
                                                                    && not(test_bit(eax_1224:1.b, 0)))
                                                                *(ebp_1[-0x26] + 0x80) = 0
                                                            
                                                            unimplemented  {fld st0, dword [eax+0x80]}
                                                            long double temp135_1 = fconvert.t(0f)
                                                            unimplemented  {fcomp st0, dword [0x48acc0]}
                                                                f- temp135_1
                                                            bool c0_5 = unimplemented  {fcomp st0, 
                                                                dword [0x48acc0]} f< temp135_1
                                                            bool c2_5 = is_unordered.t(
                                                                unimplemented  {fcomp st0, dword [
                                                                    0x48acc0]}, 
                                                                temp135_1)
                                                            bool c3_5 = unimplemented  {fcomp st0, 
                                                                dword [0x48acc0]} f== temp135_1
                                                            unimplemented  {fcomp st0, dword [0x48acc0]}
                                                            top = top
                                                            
                                                            if (test_bit(
                                                                    ((c0_5 ? 1 : 0) << 8
                                                                        | (c2_5 ? 1 : 0) << 0xa
                                                                        | (c3_5 ? 1 : 0) << 0xe
                                                                        | (top & 7) << 0xb):1.b, 
                                                                    0))
                                                                unimplemented  {fld st0, dword [eax
                                                                    +0x80]}
                                                                unimplemented  {fadd dword [ebp-0x84]}
                                                                *(ebp_1[-0x26] + 0x80) = fconvert.s(
                                                                    unimplemented  {fstp dword [eax+0x80], 
                                                                    st0})
                                                                unimplemented  {fstp dword [eax+0x80], 
                                                                    st0}
                                                            
                                                            int32_t eax_1229 =
                                                                sx.d(*(ebp_1[-0x26] + 0xec))
                                                            int32_t edx_313 =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            int32_t eax_1230 = eax_1229 - edx_313
                                                            
                                                            if (add_overflow(eax_1229, neg.d(edx_313)))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (eax_1230 s> 0)
                                                                ebp_1[-0x27] = eax_1230
                                                                ebp_1[-7] = 1
                                                                int32_t i_2
                                                                
                                                                do
                                                                    int32_t eax_1231 = ebp_1[-7]
                                                                    
                                                                    if (add_overflow(eax_1231, 0xffffffff))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    bool o_246 =
                                                                        unimplemented  {imul eax, eax, 0x18}
                                                                    
                                                                    if (o_246)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x29] = (eax_1231 - 1) * 0x18
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0xa4]}
                                                                    unimplemented  {fmul st0, dword [eax
                                                                        +0x84]}
                                                                    unimplemented  {fld st0, tword [0x48acc4
                                                                        ]}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fmulp st1, st0}
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x18]}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {faddp st1, st0}
                                                                    unimplemented  {fadd dword [0x48acd0]}
                                                                    unimplemented  {fsub st0, dword [eax
                                                                        +0x80]}
                                                                    ebp_1[-0x20] = fconvert.s(unimplemented
                                                                          {fstp dword [ebp-0x80], st0})
                                                                    unimplemented  {fstp dword [ebp-0x80], 
                                                                        st0}
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x18]}
                                                                    unimplemented  {fsubr st0, dword [ebp
                                                                        -0x80]}
                                                                    long double temp227_1 = fconvert.t(0f)
                                                                    unimplemented  {fcomp st0, dword [
                                                                        0x48acc0]} f- temp227_1
                                                                    bool c0_6 = unimplemented  {fcomp st0, 
                                                                        dword [0x48acc0]} f< temp227_1
                                                                    bool c2_6 = is_unordered.t(
                                                                        unimplemented  {fcomp st0, dword [
                                                                            0x48acc0]}, 
                                                                        temp227_1)
                                                                    bool c3_6 = unimplemented  {fcomp st0, 
                                                                        dword [0x48acc0]} f== temp227_1
                                                                    unimplemented  {fcomp st0, dword [
                                                                        0x48acc0]}
                                                                    
                                                                    if (test_bit(
                                                                            ((c0_6 ? 1 : 0) << 8
                                                                                | (c2_6 ? 1 : 0) << 0xa
                                                                                | (c3_6 ? 1 : 0) << 0xe
                                                                                | (top & 7) << 0xb):1.b, 
                                                                            0))
                                                                        unimplemented  {fld st0, dword [ebp
                                                                            -0x80]}
                                                                        unimplemented  {fadd dword [ebp-0x84]}
                                                                        ebp_1[-0x20] = fconvert.s(unimplemented
                                                                              {fstp dword [ebp-0x80], st0})
                                                                        unimplemented  {fstp dword [ebp-0x80], 
                                                                            st0}
                                                                    
                                                                    ebp_1[-0x22] = *(ebp_1[-0x26] + 0x110)
                                                                    unimplemented  {fild st0, dword [ebp
                                                                        -0x18]}
                                                                    unimplemented  {fsubr st0, dword [ebp
                                                                        -0x80]}
                                                                    long double temp235_1 = fconvert.t(0f)
                                                                    unimplemented  {fcomp st0, dword [
                                                                        0x48acc0]} f- temp235_1
                                                                    bool c0_7 = unimplemented  {fcomp st0, 
                                                                        dword [0x48acc0]} f< temp235_1
                                                                    bool c2_7 = is_unordered.t(
                                                                        unimplemented  {fcomp st0, dword [
                                                                            0x48acc0]}, 
                                                                        temp235_1)
                                                                    bool c3_7 = unimplemented  {fcomp st0, 
                                                                        dword [0x48acc0]} f== temp235_1
                                                                    unimplemented  {fcomp st0, dword [
                                                                        0x48acc0]}
                                                                    top = top
                                                                    int32_t eax_1236
                                                                    eax_1236.w = (c0_7 ? 1 : 0) << 8
                                                                        | (c2_7 ? 1 : 0) << 0xa
                                                                        | (c3_7 ? 1 : 0) << 0xe
                                                                        | (top & 7) << 0xb
                                                                    
                                                                    if (not(test_bit(eax_1236:1.b, 6))
                                                                            && not(test_bit(eax_1236:1.b, 0)))
                                                                        unimplemented  {fild st0, dword [ebp
                                                                            -0x18]}
                                                                        unimplemented  {fsubr st0, dword [ebp
                                                                            -0x80]}
                                                                        long double temp245_1 = fconvert.t(100f)
                                                                        unimplemented  {fcomp st0, dword [
                                                                            0x48acd4]} f- temp245_1
                                                                        bool c0_8 = unimplemented  {fcomp st0, 
                                                                            dword [0x48acd4]} f< temp245_1
                                                                        bool c2_8 = is_unordered.t(
                                                                            unimplemented  {fcomp st0, dword [
                                                                                0x48acd4]}, 
                                                                            temp245_1)
                                                                        bool c3_8 = unimplemented  {fcomp st0, 
                                                                            dword [0x48acd4]} f== temp245_1
                                                                        unimplemented  {fcomp st0, dword [
                                                                            0x48acd4]}
                                                                        eax_1236.w = (c0_8 ? 1 : 0) << 8
                                                                            | (c2_8 ? 1 : 0) << 0xa
                                                                            | (c3_8 ? 1 : 0) << 0xe
                                                                            | (top & 7) << 0xb
                                                                        int16_t top_221
                                                                        
                                                                        if (not(test_bit(eax_1236:1.b, 0)))
                                                                            int32_t eax_1238 =
                                                                                *(ebp_1[-0x26] + 0x60)
                                                                            
                                                                            if (add_overflow(eax_1238, 0xffffff9c))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x29] = eax_1238 - 0x64
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0xa4]}
                                                                            long double temp256_1 =
                                                                                fconvert.t(ebp_1[-0x20])
                                                                            unimplemented  {fcomp st0, dword [ebp
                                                                                -0x80]} f- temp256_1
                                                                            bool c0_9 = unimplemented  {fcomp st0, 
                                                                                dword [ebp-0x80]} f< temp256_1
                                                                            bool c2_9 = is_unordered.t(
                                                                                unimplemented  {fcomp st0, dword [ebp
                                                                                    -0x80]}, 
                                                                                temp256_1)
                                                                            bool c3_9 = unimplemented  {fcomp st0, 
                                                                                dword [ebp-0x80]} f== temp256_1
                                                                            unimplemented  {fcomp st0, dword [ebp
                                                                                -0x80]}
                                                                            top_221 = top
                                                                            int32_t eax_1239
                                                                            eax_1239.w = (c0_9 ? 1 : 0) << 8
                                                                                | (c2_9 ? 1 : 0) << 0xa
                                                                                | (c3_9 ? 1 : 0) << 0xe
                                                                                | (top_221 & 7) << 0xb
                                                                            
                                                                            if (test_bit(eax_1239:1.b, 6)
                                                                                    || test_bit(eax_1239:1.b, 0))
                                                                                unimplemented  {fild st0, dword [eax
                                                                                    +0x60]}
                                                                                unimplemented  {fsub st0, dword [ebp
                                                                                    -0x80]}
                                                                                unimplemented  {fdiv st0, dword [
                                                                                    0x48acd8]}
                                                                                unimplemented  {fdiv st0, dword [
                                                                                    0x48abbc]}
                                                                                unimplemented  {fmul st0, dword [eax
                                                                                    +0x110]}
                                                                                ebp_1[-0x22] = fconvert.s(unimplemented
                                                                                      {fstp dword [ebp-0x88], st0})
                                                                                unimplemented  {fstp dword [ebp-0x88], 
                                                                                    st0}
                                                                        else
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0x18]}
                                                                            unimplemented  {fsubr st0, dword [ebp
                                                                                -0x80]}
                                                                            unimplemented  {fdiv st0, dword [
                                                                                0x48acd8]}
                                                                            unimplemented  {fdiv st0, dword [
                                                                                0x48abbc]}
                                                                            unimplemented  {fmul st0, dword [eax
                                                                                +0x110]}
                                                                            ebp_1[-0x22] = fconvert.s(unimplemented
                                                                                  {fstp dword [ebp-0x88], st0})
                                                                            unimplemented  {fstp dword [ebp-0x88], 
                                                                                st0}
                                                                            top_221 = top
                                                                        
                                                                        *(esp_14 - 4) = esi
                                                                        *(esp_14 - 8) = ebp_1[-3]
                                                                        int32_t eax_1242 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x74))
                                                                        
                                                                        if (add_overflow(eax_1242, ebp_1[-7]))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        *(esp_14 - 0xc) = eax_1242 + ebp_1[-7]
                                                                        *(esp_14 - 0x10) = &ebp_1[-0xad]
                                                                        int32_t ecx_123
                                                                        void* ebp_7
                                                                        ecx_123, ebx, ebp_7 =
                                                                            sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                        sub_40401c(ecx_123, ebp_7 - 0x2b4)
                                                                        char* eax_1248
                                                                        eax_1248, ebp_1 =
                                                                            sub_479f44(nullptr, *(ebp_7 - 0x360))
                                                                        sub_402e28(ebx + 0xac8, eax_1248)
                                                                        ebp_1[-0x13] = ebp_1[-5]
                                                                        ebp_1[-0x12] = *(ebp_1[-0x26] + 0x5c)
                                                                        *(esp_14 - 4) = &ebp_1[-0xad]
                                                                        sub_40287c(1, 1, ebx + 0xac8)
                                                                        int32_t ecx_125
                                                                        ecx_125.b = ebp_1[-0xad].b
                                                                        int32_t eax_1256
                                                                        int32_t ecx_127
                                                                        eax_1256, ecx_127 = sub_402c90(
                                                                            &ebp_1[-0xad], 0x48acdc, ecx_125 + 1)
                                                                        
                                                                        if (ecx_125 == 0xffffffff)
                                                                            int32_t ecx_128 =
                                                                                sub_4028c0(ebx + 0xac8, 1, 1)
                                                                            
                                                                            if (ebp_1[-7] != 1)
                                                                                sub_40401c(ecx_128, ebx + 0xac8)
                                                                                ecx_127, ebp_1 =
                                                                                    sub_46fd7c(ebx, ebp_1[-0xda])
                                                                                unimplemented  {fmul st0, dword [
                                                                                    0x48ac20]}
                                                                                unimplemented  {fmul st0, dword [eax
                                                                                    +0x84]}
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0x48]}
                                                                                unimplemented  {fsubrp st1, st0}
                                                                                unimplemented  {fsubrp st1, st0}
                                                                                unimplemented  {fdiv st0, dword [
                                                                                    0x48abbc]}
                                                                                int32_t eax_1267
                                                                                int32_t edx_326
                                                                                eax_1267, edx_326 = sub_402b4c(st0)
                                                                                top_221 += 1
                                                                                *(esp_14 - 4) = edx_326
                                                                                *(esp_14 - 8) = eax_1267
                                                                                int32_t eax_1269
                                                                                int32_t edx_327
                                                                                edx_327:eax_1269 = sx.q(ebp_1[-0x13])
                                                                                int32_t eax_1270 =
                                                                                    eax_1269 + *(esp_14 - 8)
                                                                                int32_t edx_328 = adc.d(edx_327, 
                                                                                    *(esp_14 - 4), 
                                                                                    eax_1269 + *(esp_14 - 8) u< eax_1269)
                                                                                bool o_250 = unimplemented  {adc edx, 
                                                                                    dword [esp+0x4]}
                                                                                
                                                                                if (o_250)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(esp_14 - 4) = eax_1270
                                                                                
                                                                                if (eax_1270 s>> 0x1f != edx_328)
                                                                                    sub_403008()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0x13] = *(esp_14 - 4)
                                                                            else
                                                                                sub_40401c(ecx_128, ebx + 0xac8)
                                                                                ecx_127, ebp_1 =
                                                                                    sub_46fd7c(ebx, ebp_1[-0xd9])
                                                                                unimplemented  {fmul st0, dword [
                                                                                    0x48ac20]}
                                                                                unimplemented  {fmul st0, dword [
                                                                                    0x48ac68]}
                                                                                unimplemented  {fmul st0, dword [eax
                                                                                    +0x84]}
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0x48]}
                                                                                unimplemented  {fsubrp st1, st0}
                                                                                unimplemented  {fsubrp st1, st0}
                                                                                unimplemented  {fdiv st0, dword [
                                                                                    0x48abbc]}
                                                                                int32_t eax_1260
                                                                                int32_t edx_321
                                                                                eax_1260, edx_321 = sub_402b4c(st0)
                                                                                top_221 += 1
                                                                                *(esp_14 - 4) = edx_321
                                                                                *(esp_14 - 8) = eax_1260
                                                                                int32_t eax_1262
                                                                                int32_t edx_322
                                                                                edx_322:eax_1262 = sx.q(ebp_1[-0x13])
                                                                                int32_t eax_1263 =
                                                                                    eax_1262 + *(esp_14 - 8)
                                                                                int32_t edx_323 = adc.d(edx_322, 
                                                                                    *(esp_14 - 4), 
                                                                                    eax_1262 + *(esp_14 - 8) u< eax_1262)
                                                                                bool o_249 = unimplemented  {adc edx, 
                                                                                    dword [esp+0x4]}
                                                                                
                                                                                if (o_249)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                *(esp_14 - 4) = eax_1263
                                                                                
                                                                                if (eax_1263 s>> 0x1f != edx_323)
                                                                                    sub_403008()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0x13] = *(esp_14 - 4)
                                                                        
                                                                        unimplemented  {fld st0, dword [ebp
                                                                            -0x88]}
                                                                        long double temp280_1 = fconvert.t(0f)
                                                                        unimplemented  {fcomp st0, dword [
                                                                            0x48acc0]} f- temp280_1
                                                                        bool c0_10 = unimplemented  {fcomp st0, 
                                                                            dword [0x48acc0]} f< temp280_1
                                                                        bool c2_10 = is_unordered.t(
                                                                            unimplemented  {fcomp st0, dword [
                                                                                0x48acc0]}, 
                                                                            temp280_1)
                                                                        bool c3_10 = unimplemented  {fcomp st0, 
                                                                            dword [0x48acc0]} f== temp280_1
                                                                        unimplemented  {fcomp st0, dword [
                                                                            0x48acc0]}
                                                                        top = top_221
                                                                        eax_1256.w = (c0_10 ? 1 : 0) << 8
                                                                            | (c2_10 ? 1 : 0) << 0xa
                                                                            | (c3_10 ? 1 : 0) << 0xe
                                                                            | (top & 7) << 0xb
                                                                        
                                                                        if (not(test_bit(eax_1256:1.b, 6))
                                                                                && not(test_bit(eax_1256:1.b, 0)))
                                                                            int16_t top_234
                                                                            
                                                                            if (*(ebx + 0x10c8) != 3)
                                                                                int32_t eax_1272 = ebp_1[-0x13]
                                                                                
                                                                                if (add_overflow(eax_1272, 0xfffffffb))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0x29] = eax_1272 - 5
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0xa4]}
                                                                                ebp_1[-0x16] = fconvert.s(unimplemented
                                                                                      {fstp dword [ebp-0x58], st0})
                                                                                unimplemented  {fstp dword [ebp-0x58], 
                                                                                    st0}
                                                                                top_234 = top
                                                                            else
                                                                                unimplemented  {fild st0, word [eax+0x4]
                                                                                    }
                                                                                unimplemented  {fadd dword [ebp-0x80]}
                                                                                unimplemented  {fdiv st0, dword [
                                                                                    0x48aba8]}
                                                                                unimplemented  {fld st0, tword [0x48abac
                                                                                    ]}
                                                                                unimplemented  {fmulp st1, st0}
                                                                                unimplemented  {fmulp st1, st0}
                                                                                st0 = sub_402b3c(st0)
                                                                                unimplemented  {call 0x402b3c}
                                                                                unimplemented  {fmul st0, dword [
                                                                                    0x48abb8]}
                                                                                unimplemented  {fild st0, dword [ebp
                                                                                    -0x4c]}
                                                                                unimplemented  {fsubrp st1, st0}
                                                                                unimplemented  {fsubrp st1, st0}
                                                                                unimplemented  {fadd dword [0x48ace0]}
                                                                                ebp_1[-0x16] = fconvert.s(unimplemented
                                                                                      {fstp dword [ebp-0x58], st0})
                                                                                unimplemented  {fstp dword [ebp-0x58], 
                                                                                    st0}
                                                                                top_234 = top
                                                                            
                                                                            if (ebp_1[-7] != 1)
                                                                                *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                unimplemented  {fld st0, dword [ebp
                                                                                    -0x58]}
                                                                                unimplemented  {fadd dword [0x48ace4]}
                                                                                *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                      {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                top = top_234
                                                                                *(esp_14 - 0xc) = ebp_1[-0x20]
                                                                                *(esp_14 - 0x10) = 0
                                                                                *(esp_14 - 0x14) = 9
                                                                                *(esp_14 - 0x18) = 0
                                                                                *(esp_14 - 0x1c) = ebp_1[-0x22]
                                                                                *(esp_14 - 0x20) = 0
                                                                                *(esp_14 - 0x24) = 0
                                                                                *(esp_14 - 0x28) = 0
                                                                                *(esp_14 - 0x2c) = &ebp_1[-0xdd]
                                                                                sub_40401c(ecx_127, ebx + 0xac8)
                                                                                ebp_1[-0xb]
                                                                                sub_48c290(ebx, ebp_1[-0xde])
                                                                            else
                                                                                unimplemented  {fld st0, dword [eax
                                                                                    +0x84]}
                                                                                unimplemented  {fmul st0, dword [
                                                                                    0x48ac68]}
                                                                                *(esp_14 - 4) = fconvert.s(unimplemented
                                                                                      {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                unimplemented  {fld st0, dword [ebp
                                                                                    -0x58]}
                                                                                unimplemented  {fadd dword [0x48ace4]}
                                                                                *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                      {fstp dword [esp], st0})
                                                                                unimplemented  {fstp dword [esp], st0}
                                                                                top = top_234
                                                                                *(esp_14 - 0xc) = ebp_1[-0x20]
                                                                                *(esp_14 - 0x10) = 0
                                                                                *(esp_14 - 0x14) = 9
                                                                                *(esp_14 - 0x18) = 0
                                                                                *(esp_14 - 0x1c) = ebp_1[-0x22]
                                                                                *(esp_14 - 0x20) = 0
                                                                                *(esp_14 - 0x24) = 0
                                                                                *(esp_14 - 0x28) = 0
                                                                                *(esp_14 - 0x2c) = &ebp_1[-0xdb]
                                                                                sub_40401c(ecx_127, ebx + 0xac8)
                                                                                ebp_1[-0xb]
                                                                                sub_48c290(ebx, ebp_1[-0xdc])
                                                                    
                                                                    ebp_1[-7] += 1
                                                                    i_2 = ebp_1[-0x27]
                                                                    ebp_1[-0x27] -= 1
                                                                while (i_2 != 1)
                                                        else if (*(ebp_1[-0x26] + 0x7e) s> 1)
                                                            int32_t eax_1283 =
                                                                sx.d(*(ebp_1[-0x26] + 0xec))
                                                            int32_t edx_334 =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            int32_t eax_1284 = eax_1283 - edx_334
                                                            
                                                            if (add_overflow(eax_1283, neg.d(edx_334)))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (eax_1284 s> 0)
                                                                ebp_1[-0x27] = eax_1284
                                                                ebp_1[-7] = 1
                                                                int32_t i_3
                                                                
                                                                do
                                                                    ebp_1[-7]
                                                                    bool o_253 =
                                                                        unimplemented  {imul dword [ebp-0x1c]}
                                                                    
                                                                    if (o_253)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (
                                                                            sx.d(*(ebp_1[-0x26] + 0x5a)) * ebp_1[-7]
                                                                            s< *(ebp_1[-0x26] + 0x60))
                                                                        int32_t eax_1289 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x7c))
                                                                        
                                                                        if (add_overflow(eax_1289, 0xfffffffb))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t temp0_3 = divs.dp.d(
                                                                            sx.q(eax_1289 - 5), 
                                                                            sx.d(*(ebp_1[-0x26] + 0x5a)))
                                                                        
                                                                        if (add_overflow(temp0_3, 1))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (temp0_3 + 1 != ebp_1[-7])
                                                                            ebp_1[-0xb] = 0
                                                                        else
                                                                            ebp_1[-0xb] =
                                                                                sx.d(*(ebp_1[-0x26] + 0x56))
                                                                        
                                                                        if (*(ebp_1[-0x26] + 6) == 0)
                                                                            ebp_1[-0xb] = 3
                                                                        
                                                                        int32_t eax_1298 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x72))
                                                                        int32_t edx_341 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x74))
                                                                        
                                                                        if (add_overflow(eax_1298, 
                                                                                neg.d(edx_341)))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (eax_1298 - edx_341 == ebp_1[-7]
                                                                                && *(ebp_1[-0x26] + 0x5a) != 0x13)
                                                                            int32_t eax_1301 = ebp_1[-7]
                                                                            
                                                                            if (add_overflow(eax_1301, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1303 = (eax_1301 - 1)
                                                                                * sx.d(*(ebp_1[-0x26] + 0x5a))
                                                                            bool o_258 = unimplemented  {imul edx}
                                                                            
                                                                            if (o_258)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1304 = eax_1303 + ebp_1[-6]
                                                                            
                                                                            if (add_overflow(eax_1303, ebp_1[-6]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1304, 4))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1304 + 4, 
                                                                                    0xfffffffe))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 4) = eax_1304 + 2
                                                                            int32_t eax_1308 =
                                                                                *(ebp_1[-0x26] + 0x5c)
                                                                            
                                                                            if (add_overflow(eax_1308, 0xfffffff8))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 8) = eax_1308 - 8
                                                                            *(esp_14 - 0xc) =
                                                                                sx.d(*(ebp_1[-0x26] + 0x5a))
                                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                            *(esp_14 - 0x14) = 0
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x20) = 1
                                                                            *(esp_14 - 0x24) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0x28) = 0x3f800000
                                                                            int32_t ecx_132 = ebp_1[-5]
                                                                            
                                                                            if (add_overflow(ecx_132, 2))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            sub_48156c(ecx_132 + 2, 0xfffffffd, ebx)
                                                                        
                                                                        int32_t eax_1317 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x7e))
                                                                        
                                                                        if (eax_1317 s> 0)
                                                                            ebp_1[-0x28] = eax_1317
                                                                            void* edi_17 = 1
                                                                            int32_t j
                                                                            
                                                                            do
                                                                                if (edi_17 s> 2)
                                                                                    ebp_1[-0xc] = 0x96
                                                                                else
                                                                                    ebp_1[-0xc] = 0xc8
                                                                                
                                                                                int32_t eax_1318 = ebp_1[-5]
                                                                                
                                                                                if (add_overflow(eax_1318, 4))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (add_overflow(edi_17, 0xffffffff))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-0xc]
                                                                                int32_t edx_347 =
                                                                                    (edi_17 - 1) * ebp_1[-0xc]
                                                                                bool o_266 = unimplemented  {imul edx, 
                                                                                    dword [ebp-0x30]}
                                                                                
                                                                                if (o_266)
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (add_overflow(eax_1318 + 4, edx_347))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                ebp_1[-8] = eax_1318 + 4 + edx_347
                                                                                
                                                                                if (edi_17 s> 2)
                                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0x20]}
                                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                          {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    int32_t eax_1344 = ebp_1[-7]
                                                                                    
                                                                                    if (add_overflow(eax_1344, 0xffffffff))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t eax_1346 = (eax_1344 - 1)
                                                                                        * sx.d(*(ebp_1[-0x26] + 0x5a))
                                                                                    bool o_275 = unimplemented  {imul edx}
                                                                                    
                                                                                    if (o_275)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t eax_1347 = eax_1346 + ebp_1[-6]
                                                                                    
                                                                                    if (add_overflow(eax_1346, ebp_1[-6]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_1347, 5))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x29] = eax_1347 + 5
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0xa4]}
                                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                                        unimplemented  {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    *(esp_14 - 0x10) =
                                                                                        *(ebp_1[-0x26] + 0x68)
                                                                                    *(esp_14 - 0x14) = 2
                                                                                    *(esp_14 - 0x18) = 0
                                                                                    *(esp_14 - 0x1c) =
                                                                                        *(ebp_1[-0x26] + 0x110)
                                                                                    int32_t eax_1351 = ebp_1[-8]
                                                                                    
                                                                                    if (add_overflow(eax_1351, 0xd7))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(esp_14 - 0x20) = eax_1351 + 0xd7
                                                                                    *(esp_14 - 0x24) = 0
                                                                                    *(esp_14 - 0x28) = &data_48acf0
                                                                                    *(esp_14 - 0x2c) = &ebp_1[-0xe2]
                                                                                    *(esp_14 - 0x30) = esi
                                                                                    *(esp_14 - 0x34) = ebp_1[-3]
                                                                                    int32_t eax_1356 =
                                                                                        sx.d(*(ebp_1[-0x26] + 0x74))
                                                                                    
                                                                                    if (add_overflow(eax_1356, ebp_1[-7]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(esp_14 - 0x38) = eax_1356 + ebp_1[-7]
                                                                                    *(esp_14 - 0x3c) = &ebp_1[-0xad]
                                                                                    int32_t ecx_140
                                                                                    void* ebp_9
                                                                                    ecx_140, ebx, ebp_9 =
                                                                                        sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                                    sub_40401c(ecx_140, ebp_9 - 0x2b4)
                                                                                    void** eax_1362
                                                                                    int32_t ecx_142
                                                                                    eax_1362, ecx_142, ebp_1 =
                                                                                        sub_479f44(edi_17, *(ebp_9 - 0x390))
                                                                                    sub_403fb0(ecx_142, eax_1362)
                                                                                    ebp_1[-0xb]
                                                                                    sub_48c290(ebx, ebp_1[-0xe3])
                                                                                else
                                                                                    *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0x20]}
                                                                                    *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                          {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    int32_t eax_1322 = ebp_1[-7]
                                                                                    
                                                                                    if (add_overflow(eax_1322, 0xffffffff))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t eax_1324 = (eax_1322 - 1)
                                                                                        * sx.d(*(ebp_1[-0x26] + 0x5a))
                                                                                    bool o_269 = unimplemented  {imul edx}
                                                                                    
                                                                                    if (o_269)
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t eax_1325 = eax_1324 + ebp_1[-6]
                                                                                    
                                                                                    if (add_overflow(eax_1324, ebp_1[-6]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    if (add_overflow(eax_1325, 5))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    ebp_1[-0x29] = eax_1325 + 5
                                                                                    unimplemented  {fild st0, dword [ebp
                                                                                        -0xa4]}
                                                                                    *(esp_14 - 0xc) = fconvert.s(
                                                                                        unimplemented  {fstp dword [esp], st0})
                                                                                    unimplemented  {fstp dword [esp], st0}
                                                                                    *(esp_14 - 0x10) =
                                                                                        *(ebp_1[-0x26] + 0x68)
                                                                                    *(esp_14 - 0x14) = 2
                                                                                    *(esp_14 - 0x18) = 0
                                                                                    *(esp_14 - 0x1c) =
                                                                                        *(ebp_1[-0x26] + 0x110)
                                                                                    int32_t eax_1329 = ebp_1[-8]
                                                                                    
                                                                                    if (add_overflow(eax_1329, 0xbe))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(esp_14 - 0x20) = eax_1329 + 0xbe
                                                                                    *(esp_14 - 0x24) = 0
                                                                                    *(esp_14 - 0x28) = &data_48acf0
                                                                                    *(esp_14 - 0x2c) = &ebp_1[-0xdf]
                                                                                    *(esp_14 - 0x30) = esi
                                                                                    *(esp_14 - 0x34) = ebp_1[-3]
                                                                                    int32_t eax_1334 =
                                                                                        sx.d(*(ebp_1[-0x26] + 0x74))
                                                                                    
                                                                                    if (add_overflow(eax_1334, ebp_1[-7]))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    *(esp_14 - 0x38) = eax_1334 + ebp_1[-7]
                                                                                    *(esp_14 - 0x3c) = &ebp_1[-0xad]
                                                                                    int32_t ecx_135
                                                                                    void* ebp_8
                                                                                    ecx_135, ebx, ebp_8 =
                                                                                        sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                                    sub_40401c(ecx_135, ebp_8 - 0x2b4)
                                                                                    void** eax_1340
                                                                                    int32_t ecx_137
                                                                                    eax_1340, ecx_137, ebp_1 =
                                                                                        sub_479f44(edi_17, *(ebp_8 - 0x384))
                                                                                    sub_403fb0(ecx_137, eax_1340)
                                                                                    ebp_1[-0xb]
                                                                                    sub_48c290(ebx, ebp_1[-0xe0])
                                                                                
                                                                                edi_17 += 1
                                                                                j = ebp_1[-0x28]
                                                                                ebp_1[-0x28] -= 1
                                                                            while (j != 1)
                                                                    
                                                                    ebp_1[-7] += 1
                                                                    i_3 = ebp_1[-0x27]
                                                                    ebp_1[-0x27] -= 1
                                                                while (i_3 != 1)
                                                        else if (*ebp_1[-0x26] != 0x11)
                                                            int32_t eax_1367 =
                                                                sx.d(*(ebp_1[-0x26] + 0xec))
                                                            int32_t edx_363 =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            int32_t eax_1368 = eax_1367 - edx_363
                                                            
                                                            if (add_overflow(eax_1367, neg.d(edx_363)))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (eax_1368 s> 0)
                                                                ebp_1[-0x27] = eax_1368
                                                                ebp_1[-7] = 1
                                                                int32_t i_4
                                                                
                                                                do
                                                                    ebp_1[-7]
                                                                    bool o_281 =
                                                                        unimplemented  {imul dword [ebp-0x1c]}
                                                                    
                                                                    if (o_281)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (
                                                                            sx.d(*(ebp_1[-0x26] + 0x5a)) * ebp_1[-7]
                                                                            s< *(ebp_1[-0x26] + 0x60))
                                                                        int32_t eax_1373 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x7c))
                                                                        
                                                                        if (add_overflow(eax_1373, 0xfffffffb))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t temp0_4 = divs.dp.d(
                                                                            sx.q(eax_1373 - 5), 
                                                                            sx.d(*(ebp_1[-0x26] + 0x5a)))
                                                                        
                                                                        if (add_overflow(temp0_4, 1))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (temp0_4 + 1 != ebp_1[-7])
                                                                            ebp_1[-0xb] = 0
                                                                        else
                                                                            ebp_1[-0xb] =
                                                                                sx.d(*(ebp_1[-0x26] + 0x56))
                                                                        
                                                                        if (*(ebp_1[-0x26] + 6) == 0)
                                                                            ebp_1[-0xb] = 3
                                                                        
                                                                        int32_t eax_1382 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x72))
                                                                        int32_t edx_370 =
                                                                            sx.d(*(ebp_1[-0x26] + 0x74))
                                                                        
                                                                        if (add_overflow(eax_1382, 
                                                                                neg.d(edx_370)))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (eax_1382 - edx_370 == ebp_1[-7]
                                                                                && *(ebp_1[-0x26] + 0x5a) != 0x13)
                                                                            int32_t eax_1385 = ebp_1[-7]
                                                                            
                                                                            if (add_overflow(eax_1385, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1387 = (eax_1385 - 1)
                                                                                * sx.d(*(ebp_1[-0x26] + 0x5a))
                                                                            bool o_286 = unimplemented  {imul edx}
                                                                            
                                                                            if (o_286)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1388 = eax_1387 + ebp_1[-6]
                                                                            
                                                                            if (add_overflow(eax_1387, ebp_1[-6]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1388, 4))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1388 + 4, 
                                                                                    0xfffffffe))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 4) = eax_1388 + 2
                                                                            int32_t eax_1392 =
                                                                                *(ebp_1[-0x26] + 0x5c)
                                                                            
                                                                            if (add_overflow(eax_1392, 0xfffffff8))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 8) = eax_1392 - 8
                                                                            *(esp_14 - 0xc) =
                                                                                sx.d(*(ebp_1[-0x26] + 0x5a))
                                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                            *(esp_14 - 0x14) = 0
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x20) = 1
                                                                            *(esp_14 - 0x24) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0x28) = 0x3f800000
                                                                            int32_t ecx_145 = ebp_1[-5]
                                                                            
                                                                            if (add_overflow(ecx_145, 2))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            sub_48156c(ecx_145 + 2, 0xfffffffd, ebx)
                                                                        
                                                                        if (ebp_1[-0x1f] == 0)
                                                                            *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                                            int32_t eax_1437 = ebp_1[-5]
                                                                            
                                                                            if (add_overflow(eax_1437, 4))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x29] = eax_1437 + 4
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0xa4]}
                                                                            *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            int32_t eax_1439 = ebp_1[-7]
                                                                            
                                                                            if (add_overflow(eax_1439, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1441 = (eax_1439 - 1)
                                                                                * sx.d(*(ebp_1[-0x26] + 0x5a))
                                                                            bool o_302 = unimplemented  {imul edx}
                                                                            
                                                                            if (o_302)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1442 = eax_1441 + ebp_1[-6]
                                                                            
                                                                            if (add_overflow(eax_1441, ebp_1[-6]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1442, 5))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            ebp_1[-0x5a] = eax_1442 + 5
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0x168]}
                                                                            *(esp_14 - 0xc) = fconvert.s(
                                                                                unimplemented  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            *(esp_14 - 0x10) =
                                                                                *(ebp_1[-0x26] + 0x68)
                                                                            *(esp_14 - 0x14) = 2
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(ebp_1[-0x26] + 0x110)
                                                                            *(esp_14 - 0x20) = 0
                                                                            *(esp_14 - 0x24) = 0
                                                                            *(esp_14 - 0x28) = 0
                                                                            *(esp_14 - 0x2c) = &ebp_1[-0xea]
                                                                            *(esp_14 - 0x30) = esi
                                                                            *(esp_14 - 0x34) = ebp_1[-3]
                                                                            int32_t eax_1449 =
                                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                                            
                                                                            if (add_overflow(eax_1449, ebp_1[-7]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 0x38) = eax_1449 + ebp_1[-7]
                                                                            *(esp_14 - 0x3c) = &ebp_1[-0xad]
                                                                            int32_t ecx_155
                                                                            void* ebp_13
                                                                            ecx_155, ebx, ebp_13 =
                                                                                sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                            sub_40401c(ecx_155, ebp_13 - 0x2b4)
                                                                            void** eax_1455
                                                                            int32_t ecx_156
                                                                            eax_1455, ecx_156, ebp_1 =
                                                                                sub_479f44(nullptr, *(ebp_13 - 0x3b0))
                                                                            sub_403fb0(ecx_156, eax_1455)
                                                                            ebp_1[-0xb]
                                                                            sub_48c290(ebx, ebp_1[-0xeb])
                                                                        else
                                                                            if (add_overflow(esi, 0x3e8))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 4) = esi + 0x3e8
                                                                            *(esp_14 - 8) = ebp_1[-3]
                                                                            int32_t eax_1404 =
                                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                                            
                                                                            if (add_overflow(eax_1404, ebp_1[-7]))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 0xc) = eax_1404 + ebp_1[-7]
                                                                            *(esp_14 - 0x10) = &ebp_1[-0xad]
                                                                            int32_t ecx_148
                                                                            void* ebx_1
                                                                            void* ebp_10
                                                                            ecx_148, ebx_1, ebp_10 =
                                                                                sub_469d58(ebx, ebx + 0xac8, 0xff)
                                                                            sub_40401c(ecx_148, ebp_10 - 0x2b4)
                                                                            void** eax_1410
                                                                            void* ebp_11
                                                                            eax_1410, ebp_11 =
                                                                                sub_479f44(nullptr, *(ebp_10 - 0x394))
                                                                            int32_t ecx_149 =
                                                                                sub_402e28(ebx_1 + 0xbc8, eax_1410)
                                                                            *(esp_14 - 4) =
                                                                                *(*(ebp_11 - 0x98) + 0x84)
                                                                            int32_t eax_1413 = *(ebp_11 - 0x14)
                                                                            
                                                                            if (add_overflow(eax_1413, 4))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(ebp_11 - 0xa4) = eax_1413 + 4
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0xa4]}
                                                                            *(esp_14 - 8) = fconvert.s(unimplemented
                                                                                  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            int32_t eax_1415 = *(ebp_11 - 0x1c)
                                                                            
                                                                            if (add_overflow(eax_1415, 0xffffffff))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1417 = (eax_1415 - 1)
                                                                                * sx.d(*(*(ebp_11 - 0x98) + 0x5a))
                                                                            bool o_296 = unimplemented  {imul edx}
                                                                            
                                                                            if (o_296)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t eax_1418 =
                                                                                eax_1417 + *(ebp_11 - 0x18)
                                                                            
                                                                            if (add_overflow(eax_1417, 
                                                                                    *(ebp_11 - 0x18)))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (add_overflow(eax_1418, 5))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(ebp_11 - 0x168) = eax_1418 + 5
                                                                            unimplemented  {fild st0, dword [ebp
                                                                                -0x168]}
                                                                            *(esp_14 - 0xc) = fconvert.s(
                                                                                unimplemented  {fstp dword [esp], st0})
                                                                            unimplemented  {fstp dword [esp], st0}
                                                                            *(esp_14 - 0x10) =
                                                                                *(*(ebp_11 - 0x98) + 0x68)
                                                                            *(esp_14 - 0x14) = 2
                                                                            *(esp_14 - 0x18) = 0
                                                                            *(esp_14 - 0x1c) =
                                                                                *(*(ebp_11 - 0x98) + 0x110)
                                                                            *(esp_14 - 0x20) = 0
                                                                            *(esp_14 - 0x24) = 0
                                                                            sub_40401c(ecx_149, ebx_1 + 0xbc8)
                                                                            *(esp_14 - 0x28) = *(ebp_11 - 0x39c)
                                                                            *(esp_14 - 0x2c) = ebp_11 - 0x398
                                                                            *(esp_14 - 0x30) = esi
                                                                            *(esp_14 - 0x34) = *(ebp_11 - 0xc)
                                                                            int32_t eax_1427 =
                                                                                sx.d(*(*(ebp_11 - 0x98) + 0x74))
                                                                            
                                                                            if (add_overflow(eax_1427, 
                                                                                    *(ebp_11 - 0x1c)))
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            *(esp_14 - 0x38) =
                                                                                eax_1427 + *(ebp_11 - 0x1c)
                                                                            *(esp_14 - 0x3c) = ebp_11 - 0x2b4
                                                                            int32_t ecx_151
                                                                            void* ebp_12
                                                                            ecx_151, ebx, ebp_12 =
                                                                                sub_469d58(ebx_1, ebx_1 + 0xac8, 0xff)
                                                                            sub_40401c(ecx_151, ebp_12 - 0x2b4)
                                                                            void** eax_1433
                                                                            int32_t ecx_152
                                                                            eax_1433, ecx_152, ebp_1 =
                                                                                sub_479f44(nullptr, *(ebp_12 - 0x3a4))
                                                                            sub_403fb0(ecx_152, eax_1433)
                                                                            ebp_1[-0xb]
                                                                            sub_48c290(ebx, ebp_1[-0xe8])
                                                                    
                                                                    ebp_1[-7] += 1
                                                                    i_4 = ebp_1[-0x27]
                                                                    ebp_1[-0x27] -= 1
                                                                while (i_4 != 1)
                                                    
                                                    if (*ebp_1[-0x26] == 7)
                                                        int32_t eax_1461 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (eax_1461 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_306 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_306)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(ebp_1[-0x24] + (eax_1461 + 1) * 0x118
                                                                - 0xf2) != 0)
                                                            int32_t eax_1466 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (eax_1466 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_307 =
                                                                unimplemented  {imul eax, eax, 0x23}
                                                            
                                                            if (o_307)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_1468
                                                            eax_1468.w = *(ebp_1[-0x24]
                                                                + (eax_1466 + 1) * 0x118 - 0x82)
                                                            int32_t edx_397 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (edx_397 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_308 =
                                                                unimplemented  {imul edx, edx, 0x23}
                                                            
                                                            if (o_308)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            eax_1468.b = eax_1468.w s< *(ebp_1[-0x24]
                                                                + (edx_397 + 1) * 0x118 - 0xc)
                                                            *(ebp_1[-0x26] + 6) = eax_1468.b
                                                        
                                                        int32_t eax_1471 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (eax_1471 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_309 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_309)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(ebp_1[-0x24] + (eax_1471 + 1) * 0x118
                                                                - 0xf8) == 0x11)
                                                            int32_t eax_1476 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (eax_1476 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_310 =
                                                                unimplemented  {imul eax, eax, 0x23}
                                                            
                                                            if (o_310)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(ebp_1[-0x24] + (eax_1476 + 1) * 0x118
                                                                    - 0xf2) != 0)
                                                                *(ebp_1[-0x26] + 6) = 1
                                                        
                                                        int32_t eax_1482 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (eax_1482 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_311 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_311)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_1484
                                                        eax_1484.w = *(ebp_1[-0x24]
                                                            + (eax_1482 + 1) * 0x118 - 0x82)
                                                        int32_t edx_406 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (edx_406 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_312 =
                                                            unimplemented  {imul edx, edx, 0x23}
                                                        
                                                        if (o_312)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (eax_1484.w s< *(ebp_1[-0x24]
                                                                + (edx_406 + 1) * 0x118 - 0xc))
                                                            int32_t eax_1487 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (eax_1487 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_313 =
                                                                unimplemented  {imul eax, eax, 0x23}
                                                            
                                                            if (o_313)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t edi_18
                                                            
                                                            if (*(ebp_1[-0x24] + (eax_1487 + 1) * 0x118
                                                                - 0xf8) != 0x11)
                                                            label_489eb6:
                                                                int32_t eax_1498 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                
                                                                if (eax_1498 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_315 =
                                                                    unimplemented  {imul eax, eax, 0x23}
                                                                
                                                                if (o_315)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (*(ebp_1[-0x24]
                                                                        + (eax_1498 + 1) * 0x118 - 0xf8)
                                                                        != 0x11)
                                                                    if (*(ebp_1[-0x26] + 0x70) == 0)
                                                                        edi_18 = *(ebx + 0x8d8)
                                                                    else
                                                                        edi_18 = *(ebx + 0x8dc)
                                                                else if (*(ebp_1[-0x26] + 0x70) == 0)
                                                                    edi_18 = *(ebx + 0x8e0)
                                                                else
                                                                    edi_18 = *(ebx + 0x8e4)
                                                            else
                                                                int32_t eax_1492 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                
                                                                if (eax_1492 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_314 =
                                                                    unimplemented  {imul eax, eax, 0x23}
                                                                
                                                                if (o_314)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (*(ebp_1[-0x24]
                                                                        + (eax_1492 + 1) * 0x118 - 0xa) s>= 0)
                                                                    goto label_489eb6
                                                                
                                                                if (*(ebp_1[-0x26] + 0x70) == 0)
                                                                    edi_18 = *(ebx + 0x918)
                                                                else
                                                                    edi_18 = *(ebx + 0x914)
                                                            
                                                            *(esp_14 - 4) = ebp_1[-6]
                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                            *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                            *(esp_14 - 0x14) = 0
                                                            *(esp_14 - 0x18) = 0
                                                            *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x68)
                                                            *(esp_14 - 0x20) = 1
                                                            *(esp_14 - 0x24) = *(ebp_1[-0x26] + 0x110)
                                                            *(esp_14 - 0x28) = 0x3f800000
                                                            int32_t ecx_160 = ebp_1[-5]
                                                            
                                                            if (add_overflow(ecx_160, 2))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            sub_48156c(ecx_160 + 2, edi_18, ebx)
                                                            void* eax_1512
                                                            eax_1512.w = *(ebp_1[-0x26] + 0x56)
                                                            
                                                            if (eax_1512.w - 1 u< 2)
                                                                *(esp_14 - 4) = ebp_1[-6]
                                                                *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                                *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                                *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                *(esp_14 - 0x14) = 0
                                                                *(esp_14 - 0x18) = 0
                                                                *(esp_14 - 0x1c) =
                                                                    *(ebp_1[-0x26] + 0x68)
                                                                *(esp_14 - 0x20) = 1
                                                                unimplemented  {fld st0, dword [ebx
                                                                    +0xa6c]}
                                                                unimplemented  {fdiv st0, dword [
                                                                    0x48abe4]}
                                                                unimplemented  {fld st0, tword [0x48abac
                                                                    ]}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x48abbc]}
                                                                st0 = sub_402b3c(st0)
                                                                unimplemented  {call 0x402b3c}
                                                                unimplemented  {fld st0, tword [0x48abe8
                                                                    ]}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fld st0, tword [0x48abf4
                                                                    ]}
                                                                unimplemented  {faddp st1, st0}
                                                                unimplemented  {faddp st1, st0}
                                                                unimplemented  {fmul st0, dword [eax
                                                                    +0x110]}
                                                                *(esp_14 - 0x24) = fconvert.s(
                                                                    unimplemented  {fstp dword [esp], st0})
                                                                unimplemented  {fstp dword [esp], st0}
                                                                *(esp_14 - 0x28) = 0x3f800000
                                                                int32_t ecx_162 = ebp_1[-5]
                                                                
                                                                if (add_overflow(ecx_162, 2))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                sub_48156c(ecx_162 + 2, 0xfffffffe, ebx)
                                                    else if (*ebp_1[-0x26] == 9)
                                                        int32_t eax_1525 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (eax_1525 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_318 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_318)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(ebp_1[-0x24] + (eax_1525 + 1) * 0x118
                                                                - 0xf8) == 0x11)
                                                            *(ebp_1[-0x26] + 6) = 1
                                                        
                                                        unimplemented  {fild st0, dword [eax+0x5c]}
                                                        
                                                        if (sx.d(*(ebp_1[-0x26] + 0x88)) - 1 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_319 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_319)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        unimplemented  {fild st0, word [edx+eax*8-0x14]}
                                                        unimplemented  {fdivp st1, st0}
                                                        unimplemented  {fdivp st1, st0}
                                                        int32_t eax_1533
                                                        int32_t edx_415
                                                        eax_1533, edx_415 = sub_402b4c(st0)
                                                        *(esp_14 - 4) = eax_1533
                                                        
                                                        if (eax_1533 s>> 0x1f != edx_415)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        *(ebp_1[-0x26] + 0x64) = *(esp_14 - 4)
                                                        *(esp_14 - 4) = ebp_1[-6]
                                                        *(esp_14 - 8) = *(ebp_1[-0x26] + 0x64)
                                                        int32_t eax_1540 = *(ebp_1[-0x26] + 0x60)
                                                        
                                                        if (add_overflow(eax_1540, 0xfffffffe))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        *(esp_14 - 0xc) = eax_1540 - 2
                                                        *(esp_14 - 0x10) = ebp_1[-0xb]
                                                        *(esp_14 - 0x14) = 0
                                                        *(esp_14 - 0x18) = *(ebp_1[-0x26] + 0x110)
                                                        int32_t ecx_164 = ebp_1[-5]
                                                        
                                                        if (add_overflow(ecx_164, 2))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_1545 = sx.d(*(ebp_1[-0x26] + 0x74))
                                                        
                                                        if (add_overflow(ecx_164 + 2, eax_1545))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        sub_482828(ecx_164 + 2 + eax_1545, 
                                                            *(ebx + 0x8f0), ebx)
                                                        void* eax_1547
                                                        eax_1547.w = *(ebp_1[-0x26] + 0x56)
                                                        
                                                        if (eax_1547.w - 1 u< 2)
                                                            *(esp_14 - 4) = ebp_1[-6]
                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x64)
                                                            int32_t eax_1553 = *(ebp_1[-0x26] + 0x60)
                                                            
                                                            if (add_overflow(eax_1553, 0xfffffffe))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_14 - 0xc) = eax_1553 - 2
                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                            *(esp_14 - 0x14) = 0
                                                            *(esp_14 - 0x18) = 0
                                                            unimplemented  {fld st0, dword [eax+0x68]}
                                                            unimplemented  {fmul st0, dword [0x48acc0]}
                                                            *(esp_14 - 0x1c) = fconvert.s(unimplemented
                                                                  {fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            *(esp_14 - 0x20) = 1
                                                            unimplemented  {fld st0, dword [ebx+0xa6c]}
                                                            unimplemented  {fdiv st0, dword [0x48abe4]}
                                                            unimplemented  {fld st0, tword [0x48abac]}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmul st0, dword [0x48abbc]}
                                                            st0 = sub_402b3c(st0)
                                                            unimplemented  {call 0x402b3c}
                                                            unimplemented  {fld st0, tword [0x48abe8]}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fld st0, tword [0x48abf4]}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {fmul st0, dword [eax+0x110]}
                                                            *(esp_14 - 0x24) = fconvert.s(unimplemented
                                                                  {fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            *(esp_14 - 0x28) = 0x3f800000
                                                            int32_t ecx_167 = ebp_1[-5]
                                                            
                                                            if (add_overflow(ecx_167, 2))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_1557 =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            
                                                            if (add_overflow(ecx_167 + 2, eax_1557))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            sub_48156c(ecx_167 + 2 + eax_1557, 
                                                                0xfffffffe, ebx)
                                                    else if (*ebp_1[-0x26] == 8)
                                                        int32_t eax_1562 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (eax_1562 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_326 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_326)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(ebp_1[-0x24] + (eax_1562 + 1) * 0x118
                                                                - 0xf2) != 0)
                                                            int32_t eax_1567 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (eax_1567 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_327 =
                                                                unimplemented  {imul eax, eax, 0x23}
                                                            
                                                            if (o_327)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_1569
                                                            eax_1569.w = *(ebp_1[-0x24]
                                                                + (eax_1567 + 1) * 0x118 - 0x82)
                                                            int32_t edx_423 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (edx_423 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_328 =
                                                                unimplemented  {imul edx, edx, 0x23}
                                                            
                                                            if (o_328)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            eax_1569.b = eax_1569.w s< *(ebp_1[-0x24]
                                                                + (edx_423 + 1) * 0x118 - 0xc)
                                                            *(ebp_1[-0x26] + 6) = eax_1569.b
                                                        
                                                        int32_t eax_1572 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (eax_1572 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_329 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_329)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (*(ebp_1[-0x24] + (eax_1572 + 1) * 0x118
                                                                - 0xf8) == 0x11)
                                                            *(ebp_1[-0x26] + 6) = 1
                                                        
                                                        int32_t eax_1578 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (eax_1578 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_330 =
                                                            unimplemented  {imul eax, eax, 0x23}
                                                        
                                                        if (o_330)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t eax_1580
                                                        eax_1580.w = *(ebp_1[-0x24]
                                                            + (eax_1578 + 1) * 0x118 - 0x82)
                                                        int32_t edx_431 =
                                                            sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                        
                                                        if (edx_431 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        bool o_331 =
                                                            unimplemented  {imul edx, edx, 0x23}
                                                        
                                                        if (o_331)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (eax_1580.w s< *(ebp_1[-0x24]
                                                                + (edx_431 + 1) * 0x118 - 0xc))
                                                            int32_t eax_1583 =
                                                                sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                            
                                                            if (eax_1583 u> 0x75)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            bool o_332 =
                                                                unimplemented  {imul eax, eax, 0x23}
                                                            
                                                            if (o_332)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            if (*(ebp_1[-0x24] + (eax_1583 + 1) * 0x118
                                                                    - 0xc) s> 0 && *(ebp_1[-0x26] + 7) != 0)
                                                                int32_t eax_1589 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                
                                                                if (eax_1589 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_333 =
                                                                    unimplemented  {imul eax, eax, 0x23}
                                                                
                                                                if (o_333)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t eax_1592 = *(ebp_1[-0x24]
                                                                    + (eax_1589 + 1) * 0x118 - 0x98)
                                                                
                                                                if (add_overflow(eax_1592, 0xffffffc6))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t edx_438 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                
                                                                if (edx_438 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_335 =
                                                                    unimplemented  {imul edx, edx, 0x23}
                                                                
                                                                if (o_335)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                bool o_336 = unimplemented  {imul edx}
                                                                
                                                                if (o_336)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x29] = (eax_1592 - 0x3a) * sx.d(
                                                                    *(ebp_1[-0x24] + (edx_438 + 1) * 0x118
                                                                    - 0x82))
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0xa4]}
                                                                
                                                                if (sx.d(*(ebp_1[-0x26] + 0x88)) - 1
                                                                        u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_337 =
                                                                    unimplemented  {imul eax, eax, 0x23}
                                                                
                                                                if (o_337)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                unimplemented  {fild st0, word [edx
                                                                    +eax*8-0xc]}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fdivp st1, st0}
                                                                int32_t eax_1599
                                                                int32_t edx_442
                                                                eax_1599, edx_442 = sub_402b4c(st0)
                                                                *(esp_14 - 4) = eax_1599
                                                                
                                                                if (eax_1599 s>> 0x1f != edx_442)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                *(ebp_1[-0x26] + 0x64) = *(esp_14 - 4)
                                                            
                                                            int32_t eax_1603 =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            
                                                            if (add_overflow(eax_1603, ebp_1[-6]))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_14 - 4) = eax_1603 + ebp_1[-6]
                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                            *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x64)
                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                            *(esp_14 - 0x14) = 0
                                                            *(esp_14 - 0x18) = *(ebp_1[-0x26] + 0x110)
                                                            int32_t ecx_173 = ebp_1[-5]
                                                            
                                                            if (add_overflow(ecx_173, 0))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            sub_482828(ecx_173, *(ebx + 0x8f0), ebx)
                                                            void* eax_1612
                                                            eax_1612.w = *(ebp_1[-0x26] + 0x56)
                                                            
                                                            if (eax_1612.w - 1 u< 2)
                                                                int32_t eax_1615 =
                                                                    sx.d(*(ebp_1[-0x26] + 0x74))
                                                                
                                                                if (add_overflow(eax_1615, ebp_1[-6]))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                *(esp_14 - 4) = eax_1615 + ebp_1[-6]
                                                                *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                                *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x64)
                                                                *(esp_14 - 0x10) = ebp_1[-0xb]
                                                                *(esp_14 - 0x14) = 0
                                                                *(esp_14 - 0x18) = 0
                                                                unimplemented  {fld st0, dword [eax
                                                                    +0x68]}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x48acc0]}
                                                                *(esp_14 - 0x1c) = fconvert.s(
                                                                    unimplemented  {fstp dword [esp], st0})
                                                                unimplemented  {fstp dword [esp], st0}
                                                                *(esp_14 - 0x20) = 1
                                                                unimplemented  {fld st0, dword [ebx
                                                                    +0xa6c]}
                                                                unimplemented  {fdiv st0, dword [
                                                                    0x48abe4]}
                                                                unimplemented  {fld st0, tword [0x48abac
                                                                    ]}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x48abbc]}
                                                                st0 = sub_402b3c(st0)
                                                                unimplemented  {call 0x402b3c}
                                                                unimplemented  {fld st0, tword [0x48abe8
                                                                    ]}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fld st0, tword [0x48abf4
                                                                    ]}
                                                                unimplemented  {faddp st1, st0}
                                                                unimplemented  {faddp st1, st0}
                                                                unimplemented  {fmul st0, dword [eax
                                                                    +0x110]}
                                                                *(esp_14 - 0x24) = fconvert.s(
                                                                    unimplemented  {fstp dword [esp], st0})
                                                                unimplemented  {fstp dword [esp], st0}
                                                                *(esp_14 - 0x28) = 0x3f800000
                                                                int32_t ecx_175 = ebp_1[-5]
                                                                
                                                                if (add_overflow(ecx_175, 0))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                sub_48156c(ecx_175, 0xfffffffb, ebx)
                                                    
                                                    if (*ebp_1[-0x26] == 0xc)
                                                        *(esp_14 - 4) = ebp_1[-6]
                                                        *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                        *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                        *(esp_14 - 0x10) = ebp_1[-0xb]
                                                        *(esp_14 - 0x14) = 0
                                                        *(esp_14 - 0x18) = *(ebp_1[-0x26] + 0x68)
                                                        *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x110)
                                                        sub_4822b4(ebp_1[-5], *(ebx + 0x8b4), ebx)
                                                        void* eax_1633
                                                        eax_1633.w = *(ebp_1[-0x26] + 0x56)
                                                        
                                                        if (eax_1633.w - 1 u< 2
                                                                || *(ebp_1[-0x26] + 0x71) != 0)
                                                            *(esp_14 - 4) = ebp_1[-6]
                                                            *(esp_14 - 8) = *(ebp_1[-0x26] + 0x5c)
                                                            *(esp_14 - 0xc) = *(ebp_1[-0x26] + 0x60)
                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                            *(esp_14 - 0x14) = 0
                                                            *(esp_14 - 0x18) = 0
                                                            *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x68)
                                                            *(esp_14 - 0x20) = 1
                                                            unimplemented  {fld st0, dword [ebx+0xa6c]}
                                                            unimplemented  {fdiv st0, dword [0x48abe4]}
                                                            unimplemented  {fld st0, tword [0x48abac]}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmul st0, dword [0x48abbc]}
                                                            st0 = sub_402b3c(st0)
                                                            unimplemented  {call 0x402b3c}
                                                            unimplemented  {fld st0, tword [0x48abe8]}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fld st0, tword [0x48abf4]}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {fmul st0, dword [eax+0x110]}
                                                            *(esp_14 - 0x24) = fconvert.s(unimplemented
                                                                  {fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            *(esp_14 - 0x28) = 0x3f800000
                                                            sub_48156c(ebp_1[-5], 0xfffffffe, ebx)
                                                        
                                                        if (*(ebp_1[-0x26] + 0x74) s> 0)
                                                            int32_t temp136_1 = ebp_1[-5]
                                                            ebp_1[-5] += 4
                                                            
                                                            if (add_overflow(temp136_1, 4))
                                                                sub_403010()
                                                                noreturn
                                                        
                                                        void* eax_1645
                                                        eax_1645.w = *(ebp_1[-0x26] + 0x56)
                                                        
                                                        if ((eax_1645.w - 1 u< 2
                                                                || *(ebp_1[-0x26] + 0x71) != 0)
                                                                && *(ebx + 0x990) != 0
                                                                && *(ebp_1[-0x26] + 0x71) != 0)
                                                            int32_t eax_1649 = ebp_1[-6]
                                                            
                                                            if (add_overflow(eax_1649, 6))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_14 - 4) = eax_1649 + 6
                                                            *(esp_14 - 8) = 4
                                                            *(esp_14 - 0xc) = 0x12
                                                            *(esp_14 - 0x10) = ebp_1[-0xb]
                                                            *(esp_14 - 0x14) = 0
                                                            *(esp_14 - 0x18) = 0
                                                            *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x68)
                                                            *(esp_14 - 0x20) = 1
                                                            *(esp_14 - 0x24) = *(ebp_1[-0x26] + 0x110)
                                                            *(esp_14 - 0x28) = 0x3f800000
                                                            *(esp_14 - 0x2c) = &ebp_1[-0xed]
                                                            int32_t ecx_179 =
                                                                sx.d(*(ebp_1[-0x26] + 0x72))
                                                            int32_t eax_1657 =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            
                                                            if (add_overflow(ecx_179, neg.d(eax_1657)))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t edx_448 =
                                                                sx.d(*(ebp_1[-0x26] + 0x74))
                                                            
                                                            if (add_overflow(edx_448, 1))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            sub_404280(ecx_179 - eax_1657, edx_448 + 1, 
                                                                ebp_1[-0x1e])
                                                            ebp_1 = sub_46fd7c(ebx, ebp_1[-0xed])
                                                            unimplemented  {fld st0, tword [0x48acf4]}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmulp st1, st0}
                                                            unimplemented  {fmul st0, dword [ebx+0xe4c]}
                                                            unimplemented  {fild st0, dword [ebp-0x14]}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {faddp st1, st0}
                                                            int32_t eax_1661
                                                            int32_t edx_451
                                                            eax_1661, edx_451 = sub_402b4c(st0)
                                                            top += 1
                                                            bool o_346 = unimplemented  {adc edx, 0x0}
                                                            
                                                            if (o_346)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            *(esp_14 - 0x2c) = eax_1661 + 3
                                                            
                                                            if ((eax_1661 + 3) s>> 0x1f != adc.d(
                                                                    edx_451, 0, eax_1661 u>= 0xfffffffd))
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            sub_48156c(*(esp_14 - 0x2c), 0xfffffffc, 
                                                                ebx)
                                                        
                                                        *(ebp_1[-0x26] + 0x71)
                                                        sub_403e90(&ebp_1[-0x10], ebp_1[-0x1e])
                                                        
                                                        if (sub_404078(ebp_1[-0x10])
                                                                s> sx.d(*(ebp_1[-0x26] + 0x78)))
                                                            ebp_1[-7] = 0
                                                        
                                                        int32_t eax_1671 = sub_404078(ebp_1[-0x10])
                                                        int32_t edx_458 = sx.d(*(ebp_1[-0x26] + 0x74))
                                                        
                                                        if (add_overflow(edx_458, 1))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t ecx_183 = sx.d(*(ebp_1[-0x26] + 0x7a))
                                                        
                                                        if (add_overflow(edx_458 + 1, ecx_183))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        if (eax_1671 s>= edx_458 + 1 + ecx_183)
                                                            ebp_1[-7] = 1
                                                        
                                                        if (sub_404078(ebp_1[-0x10])
                                                                s< sx.d(*(ebp_1[-0x26] + 0x74)))
                                                            int32_t eax_1676 =
                                                                sub_404078(ebp_1[-0x10]) + 0x8000
                                                            
                                                            if (eax_1676 u> 0xffff)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            *(ebp_1[-0x26] + 0x74) = eax_1676.w - 0x8000
                                                        
                                                        *(esp_14 - 4) = &ebp_1[-0x10]
                                                        int32_t edx_464 = sx.d(*(ebp_1[-0x26] + 0x74))
                                                        
                                                        if (add_overflow(edx_464, 1))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        sub_404280(sx.d(*(ebp_1[-0x26] + 0x7a)), 
                                                            edx_464 + 1, ebp_1[-0x10])
                                                        
                                                        while (true)
                                                            int32_t edi_21
                                                            ebp_1, edi_21 =
                                                                sub_46fd7c(ebx, ebp_1[-0x10])
                                                            unimplemented  {fmul st0, dword [0x48ac20]}
                                                            unimplemented  {fadd dword [0x48ad00]}
                                                            ebp_1[-0x29] = edi_21
                                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {fadd dword [0x48ad04]}
                                                            unimplemented  {fild st0, dword [eax+0x5c]}
                                                            unimplemented  {fcompp }
                                                                f- unimplemented  {fcompp }
                                                            bool c0_11 = unimplemented  {fcompp }
                                                                f< unimplemented  {fcompp }
                                                            bool c2_11 = is_unordered.t(
                                                                unimplemented  {fcompp }, 
                                                                unimplemented  {fcompp })
                                                            bool c3_11 = unimplemented  {fcompp }
                                                                f== unimplemented  {fcompp }
                                                            unimplemented  {fcompp }
                                                            unimplemented  {fcompp }
                                                            top += 1
                                                            
                                                            if (not(test_bit(
                                                                    ((c0_11 ? 1 : 0) << 8
                                                                        | (c2_11 ? 1 : 0) << 0xa
                                                                        | (c3_11 ? 1 : 0) << 0xe
                                                                        | (top & 7) << 0xb):1.b, 
                                                                    0)))
                                                                break
                                                            
                                                            sub_4042c0(&ebp_1[-0x10], 
                                                                sub_404078(ebp_1[-0x10]), 1)
                                                            ebp_1[-7] = 1
                                                        
                                                        *(esp_14 - 4) = *(ebp_1[-0x26] + 0x84)
                                                        unimplemented  {fild st0, dword [ebp-0x14]}
                                                        *(esp_14 - 8) = fconvert.s(unimplemented  {fstp 
                                                            dword [esp], st0})
                                                        unimplemented  {fstp dword [esp], st0}
                                                        int32_t eax_1688 = ebp_1[-6]
                                                        
                                                        if (add_overflow(eax_1688, 6))
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        ebp_1[-0x29] = eax_1688 + 6
                                                        unimplemented  {fild st0, dword [ebp-0xa4]}
                                                        *(esp_14 - 0xc) = fconvert.s(unimplemented  {
                                                            fstp dword [esp], st0})
                                                        unimplemented  {fstp dword [esp], st0}
                                                        *(esp_14 - 0x10) = *(ebp_1[-0x26] + 0x68)
                                                        *(esp_14 - 0x14) = 2
                                                        *(esp_14 - 0x18) = 0
                                                        *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x110)
                                                        *(esp_14 - 0x20) = 0
                                                        *(esp_14 - 0x24) = 0
                                                        *(esp_14 - 0x28) = 0
                                                        *(esp_14 - 0x2c) = &ebp_1[-0xee]
                                                        ebp_1[-0xb]
                                                        sub_48c290(ebx, ebp_1[-0x10])
                                                        esp_14 = esp_14
                                                        
                                                        if (ebp_1[-7] == 1)
                                                            unimplemented  {fld st0, tword [0x48ad08]}
                                                            unimplemented  {fmul st0, dword [eax+0x84]}
                                                            *(esp_14 - 4) = fconvert.s(unimplemented  {
                                                                fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            ebp_1 = sub_46fd7c(ebx, ebp_1[-0x10])
                                                            unimplemented  {fmul st0, dword [0x48ac20]}
                                                            unimplemented  {fild st0, dword [ebp-0x14]}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {faddp st1, st0}
                                                            unimplemented  {fadd dword [0x48ac78]}
                                                            *(esp_14 - 8) = fconvert.s(unimplemented  {
                                                                fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            unimplemented  {fld st0, dword [eax+0x84]}
                                                            unimplemented  {fmul st0, dword [0x48ad14]}
                                                            int32_t eax_1695
                                                            int32_t edx_470
                                                            eax_1695, edx_470 = sub_402b4c(st0)
                                                            *(esp_14 - 0xc) = edx_470
                                                            *(esp_14 - 0x10) = eax_1695
                                                            int32_t eax_1696 = ebp_1[-6]
                                                            
                                                            if (add_overflow(eax_1696, 6))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_1698
                                                            int32_t edx_471
                                                            edx_471:eax_1698 = sx.q(eax_1696 + 6)
                                                            int32_t edx_472 = adc.d(edx_471, 
                                                                *(esp_14 - 0xc), 
                                                                eax_1698 + *(esp_14 - 0x10) u< eax_1698)
                                                            bool o_352 = unimplemented  {adc edx, 
                                                                dword [esp+0x4]}
                                                            
                                                            if (o_352)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-0x5e] = eax_1698 + *(esp_14 - 0x10)
                                                            ebp_1[-0x5d] = edx_472
                                                            unimplemented  {fild st0, qword [ebp-0x178]}
                                                            *(esp_14 - 0xc) = fconvert.s(unimplemented  
                                                                {fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            top += 1
                                                            *(esp_14 - 0x10) = *(ebp_1[-0x26] + 0x68)
                                                            *(esp_14 - 0x14) = 2
                                                            *(esp_14 - 0x18) = 0
                                                            *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x110)
                                                            *(esp_14 - 0x20) = 0
                                                            *(esp_14 - 0x24) = 0
                                                            *(esp_14 - 0x28) = 0
                                                            *(esp_14 - 0x2c) = &ebp_1[-0xef]
                                                            ebp_1[-0xb]
                                                            sub_48c290(ebx, &data_48ad20)
                                                        
                                                        if (*(ebp_1[-0x26] + 0x74) s> 0)
                                                            unimplemented  {fld st0, tword [0x48ad08]}
                                                            unimplemented  {fmul st0, dword [eax+0x84]}
                                                            *(esp_14 - 4) = fconvert.s(unimplemented  {
                                                                fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            int32_t eax_1705 = ebp_1[-5]
                                                            
                                                            if (add_overflow(eax_1705, 0xfffffffc))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-0x29] = eax_1705 - 4
                                                            unimplemented  {fild st0, dword [ebp-0xa4]}
                                                            *(esp_14 - 8) = fconvert.s(unimplemented  {
                                                                fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            unimplemented  {fld st0, dword [eax+0x84]}
                                                            unimplemented  {fmul st0, dword [0x48ad14]}
                                                            int32_t eax_1707
                                                            int32_t edx_474
                                                            eax_1707, edx_474 = sub_402b4c(st0)
                                                            *(esp_14 - 0xc) = edx_474
                                                            *(esp_14 - 0x10) = eax_1707
                                                            int32_t eax_1708 = ebp_1[-6]
                                                            
                                                            if (add_overflow(eax_1708, 6))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_1710
                                                            int32_t edx_475
                                                            edx_475:eax_1710 = sx.q(eax_1708 + 6)
                                                            int32_t edx_476 = adc.d(edx_475, 
                                                                *(esp_14 - 0xc), 
                                                                eax_1710 + *(esp_14 - 0x10) u< eax_1710)
                                                            bool o_355 = unimplemented  {adc edx, 
                                                                dword [esp+0x4]}
                                                            
                                                            if (o_355)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-0x5e] = eax_1710 + *(esp_14 - 0x10)
                                                            ebp_1[-0x5d] = edx_476
                                                            unimplemented  {fild st0, qword [ebp-0x178]}
                                                            *(esp_14 - 0xc) = fconvert.s(unimplemented  
                                                                {fstp dword [esp], st0})
                                                            unimplemented  {fstp dword [esp], st0}
                                                            *(esp_14 - 0x10) = *(ebp_1[-0x26] + 0x68)
                                                            *(esp_14 - 0x14) = 2
                                                            *(esp_14 - 0x18) = 0
                                                            *(esp_14 - 0x1c) = *(ebp_1[-0x26] + 0x110)
                                                            *(esp_14 - 0x20) = 0
                                                            *(esp_14 - 0x24) = 0
                                                            *(esp_14 - 0x28) = 0
                                                            *(esp_14 - 0x2c) = &ebp_1[-0xf0]
                                                            ebp_1[-0xb]
                                                            sub_48c290(ebx, &data_48ad20)
                                                else
                                                    if (ebp_1[-3] - 1 u> 0x75)
                                                        sub_403008()
                                                        noreturn
                                                    
                                                    char eax_205
                                                    eax_205, ecx_18 = sub_484dfc(ecx_18, 
                                                        ebp_1[-0x24] + (edi_4 << 3) + 8)
                                                    
                                                    if (eax_205 != 0)
                                                        goto label_4858d2
                                        
                                        ebp_1[-3] += 1
                                        int32_t temp12_1 = ebp_1[-0x25]
                                        ebp_1[-0x25] -= 1
                                        
                                        if (temp12_1 == 1)
                                            break
                                
                                *(ebx + 0x9cc) = 0
                        else
                            bool o_5 = unimplemented  {imul eax, esi, 0x1038}
                            
                            if (o_5)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_15
                            eax_15.b = *(*(ebx + 0xab0) + esi * 0x81c0 + 0x8139)
                            
                            if (eax_15.b == 0)
                                goto label_484ffd
                            
                            bool o_6 = unimplemented  {imul eax, esi, 0x1038}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            char eax_18
                            eax_18, ecx_2 = sub_484dfc(ecx_2, *(ebx + 0xab0) + esi * 0x81c0 + 0x81a8)
                            
                            if (eax_18 != 0)
                                goto label_484ffd
                    else
                        bool o_4 = unimplemented  {imul eax, esi, 0x1038}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        char eax_14
                        eax_14, ecx_2 = sub_484dfc(ecx_2, *(ebx + 0xab0) + esi * 0x81c0 + 0x81a8)
                        
                        if (eax_14 != 0)
                            goto label_484fae
                
                esi += 1
                int32_t temp5_1 = ebp_1[-0x23]
                ebp_1[-0x23] -= 1
                
                if (temp5_1 == 1)
                    break
        
        ebp_1[-2] += 1
        
        if (ebp_1[-2] == 4)
            break
    
    if (*(ebx + 0x89c) != 0)
        *(esp_14 - 4) = 0x32d
        *(esp_14 - 8) = 0x261
        *(esp_14 - 0xc) = 1
        *(esp_14 - 0x10) = 0
        *(esp_14 - 0x14) = 1
        *(esp_14 - 0x18) = 0x3f800000
        sub_48b3d8(0xffffffff, 0xfffffffe, ebx)
    
    *(esp_14 - 4) = 0x203
    (*data_53051c)()
    *(esp_14 + 8)
    fsbase->NtTib.ExceptionList = *esp_14
    *(esp_14 + 8) = 0x48ab6f
    sub_403e1c(&ebp_1[-0xf0], 0x43)
    sub_403e1c(&ebp_1[-0x6d], 0xf)
    sub_403e1c(&ebp_1[-0x5c], 2)
    sub_403e1c(&ebp_1[-0x59], 7)
    sub_403e1c(&ebp_1[-0x1f], 3)
    sub_403df8(&ebp_1[-0x18])
    sub_403df8(&ebp_1[-0x10])
    return &ebp_1[-0x10]
}
