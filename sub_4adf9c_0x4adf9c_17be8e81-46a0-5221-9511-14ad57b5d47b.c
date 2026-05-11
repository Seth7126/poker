// ============================================================
// 函数名称: sub_4adf9c
// 虚拟地址: 0x4adf9c
// WARP GUID: 17be8e81-46a0-5221-9511-14ad57b5d47b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_415d18, sub_4adc14
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4adf9c(char* arg1, int32_t arg2, int32_t arg3, char* arg4 @ esi, char* arg5 @ edi, long double arg6 @ st0, char* arg7, int32_t arg8, char* arg9, void* arg10, char* arg11)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char* edx = arg2 - 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = *arg1
    *arg1 += arg1:1.b
    void* ecx = arg3 - 1
    char* eax_1
    void* ecx_4
    void* esp
    
    if (temp0 != neg.b(arg1:1.b) && ecx != 0)
        arg4 = arg7
        edx = arg9
        ecx_4 = arg10
        eax_1 = arg11
        void arg_20
        esp = &arg_20
        goto label_4ae006
    
    *(arg1 * 2) += arg1.b
    
    while (true)
        *arg1 += ecx:1.b
        *(esp + 0x33000041) += edx.b
        void* eax
        eax:1.b = (&arg1[1]):1.b + (ecx - 1):1.b
        *esp
        esp += 4
        void* ecx_2 = ecx
        *eax += ecx_2.b
        eax_1 = eax ^ *eax
        eax_1.b ^= *eax_1
        TEB* fsbase
        char temp1_1 = *(fsbase + eax_1) ^ eax_1.b
        *(fsbase + eax_1) = temp1_1
        int32_t eflags
        bool c_1
        bool c_2
        
        if (temp1_1 s< 0)
        label_4ae00f:
            char temp2_1 = eax_1:1.b
            eax_1:1.b += edx.b
            c_2 = temp2_1 + edx.b u< temp2_1
            
            if (temp2_1 != neg.b(edx.b) && ecx_2 != 0)
                break
            
            eax_1.b += ecx_2:1.b
            char eax_3 = __in_oeax_immb(0x4a, eflags)
            *arg4 += eax_3
            char* eax_4 = __in_oeax_immb(0x4a, eflags)
            *eax_4 += (edx.w - 1).b
            *(esp - 4) = esp
            uint16_t* esi = __outsd(edx.w - 1, *arg4, arg4, eflags)
            __outsd(edx.w - 1, *esi, esi, eflags)
            *(ecx_2 + 0x64)
            c_1 = unimplemented  {imul ebp, dword [ecx+0x65], 0x4d}
            *(esp - 4)
            uint16_t* esi_2 = *esp
            *(esp + 4)
            *(esp + 0xc)
            int16_t edx_2 = (*(esp + 0x10)).w
            *(esp + 0x14)
            *(esp + 0x18)
            esp += 0x1c
            __outsb(edx_2, *esi_2, esi_2, eflags)
            goto label_4ae02d
        
        char temp3_1 = eax_1[1]
        eax_1[1] += ecx_2:1.b
        c_1 = temp3_1 + ecx_2:1.b u< temp3_1
        ecx = ecx_2 - 1
        
        if (temp3_1 == neg.b(ecx_2:1.b) || ecx != 0)
        label_4ae02d:
            arg5 = *esp
            arg4 = *(esp + 4)
            *(esp + 8)
            char* entry_ebx = *(esp + 0x10)
            edx = *(esp + 0x14)
            ecx = *(esp + 0x18)
            arg1 = *(esp + 0x1c)
            esp += 0x20
            
            if (c_1)
                continue
            else
            label_4ae033:
                char temp5_1 = arg1[1]
                arg1[1] += entry_ebx:1.b
                void* ecx_9 = ecx - 1
                
                if (temp5_1 != neg.b(entry_ebx:1.b) && ecx_9 != 0)
                    int32_t* result = __outsb(edx.w, *arg4, arg4, eflags)
                    void* ebx_3 = &entry_ebx[1]
                    
                    if (temp5_1 + entry_ebx:1.b u>= temp5_1)
                        void* edi_4 = *esp
                        *(esp + 4)
                        *(esp + 8)
                        ebx_3 = *(esp + 0x10)
                        int16_t* edx_7 = *(esp + 0x14)
                        ecx_9 = *(esp + 0x18)
                        int32_t* result_1 = *(esp + 0x1c)
                        esp += 0x20
                        
                        if (entry_ebx != 0xffffffff)
                            *(esp - 4) = result_1
                            *edx_7 = int.w(arg6)
                            *result_1 ^= result_1.b
                            ebx_3:1.b *= 2
                            *result_1 ^= result_1.b
                            ebx_3:1.b *= 2
                            *result_1 += result_1
                            *result_1 += result_1.b
                            *result_1 += result_1.b
                            result_1[-0x20000000].b += result_1.b
                            *result_1
                            int32_t temp10 = *(edi_4 + 0x6e) | ecx_9
                            *(edi_4 + 0x6e) = temp10
                            
                            if (temp10 u>= 0)
                                jump(0x4ae11e)
                            
                            jump(0x4ae0aa)
                        
                        if (entry_ebx s>= 0xffffffff)
                            *(ebx_3 - 0x5efe4d32) -= 1
                            ebx_3.b |= ecx_9.b
                            char temp11 = result_1.b
                            result_1.b += ecx_9:1.b
                            result_1.b = adc.b(result_1.b, 0xfb, temp11 + ecx_9:1.b u< temp11)
                            undefined
                        
                        result = result_1
                        edx = nullptr
                    
                    sub_415d18(result, edx, ecx_9)
                    int32_t edx_8
                    edx_8.b = 1
                    result[0x10] = sub_4adc14(sub_4acb0c+0x48, edx_8)
                    (*(*result + 0x30))()
                    
                    if (ebx_3.b != 0)
                        sub_403428(result)
                        fsbase->NtTib.ExceptionList = *esp
                        esp += 0x10
                    
                    *esp
                    *(esp + 4)
                    *(esp + 8)
                    return result
                
                char temp8_1 = *arg5
                *arg5 += (&arg1[1]).b
                *(ecx_9 * 3 + 0x64) =
                    adc.b(*(ecx_9 * 3 + 0x64), edx.b, temp8_1 + (&arg1[1]).b u< temp8_1)
                uint16_t* esi_4 = __outsd(edx.w, *arg4, arg4, eflags)
                __outsd(edx.w, *esi_4, esi_4, eflags)
                *(ecx_9 + 0x65)
                bool c_5 = unimplemented  {imul ebp, dword [ecx+0x65], 0x4d}
                char* esi_6 = *(esp + 4)
                __outsb((*(esp + 0x14)).w, *esi_6, esi_6, eflags)
                arg5 = *(esp + 0x20)
                arg4 = *(esp + 0x24)
                *(esp + 0x28)
                entry_ebx = *(esp + 0x30)
                edx = *(esp + 0x34)
                ecx = *(esp + 0x38)
                arg1 = *(esp + 0x3c)
                esp += 0x40
                
                if (c_5)
                    if (not(c_5))
                        goto label_4ae033
                    
                    continue
                else
                    *edx = int.w(arg6)
        else
            eax_1[1] += (&eax_1[1]).b
            void* eax_2
            eax_2.b = (&eax_1[1]).b | 0x41
            *(eax_2 + 0x1c004160) += eax_2:1.b
            eax_1 = eax_2 | *ecx
            
            if (eax_1 s>= 0)
                eax_1[0x41] += eax_1.b
                *(ecx + 0x627c0042) += eax_1.b
                ecx_4 = ecx + 2
                *(esp + 0x61940041) += ecx_4:1.b
            label_4ae006:
                ecx_2 = ecx_4 + 1
                *(ecx_2 + 0x64b40041) += ecx_2.b
                goto label_4ae00f
        
        *arg5 += ecx.b
        uint16_t* esi_8 = __outsd(edx.w, *arg4, arg4, eflags)
        __outsd(edx.w, *esi_8, esi_8, eflags)
        *(ecx + 0x64)
        *(ecx + 0x64)
        c_2 = unimplemented  {imul ebp, dword [ecx+0x65], 0x4d}
    label_4ae05e:
        uint16_t* esi_10 = *(esp + 4)
        __outsb((*(esp + 0x14)).w, *esi_10, esi_10, eflags)
        *(esp + 0x20)
        *(esp + 0x24)
        *(esp + 0x28)
        *(esp + 0x30)
        int16_t ecx_11 = (*(esp + 0x38)).w
        char* eax_8 = *(esp + 0x3c)
        
        if (not(c_2))
            eax_8[0xffffffdf] += (*(esp + 0x34)).b
        
        *eax_8 += ecx_11:1.b
        *eax_8 += eax_8.b
        undefined
    
    goto label_4ae05e
}
