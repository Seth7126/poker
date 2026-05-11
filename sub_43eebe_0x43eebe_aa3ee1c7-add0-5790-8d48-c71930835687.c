// ============================================================
// 函数名称: sub_43eebe
// 虚拟地址: 0x43eebe
// WARP GUID: aa3ee1c7-add0-5790-8d48-c71930835687
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43ed55
// ============================================================

int32_t __convention("regparm")sub_43eebe(char* arg1, int16_t arg2, int32_t* arg3, uint16_t* arg4 @ esi, uint16_t* arg5, void* arg6, void* arg7, char* arg8, char* arg9)
{
    // 第一条实际指令: arg1[0xa8ff0000] += arg3:1.b
    arg1[0xa8ff0000] += arg3:1.b
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp1 = arg1[0x4f0b0024]
    arg1[0x4f0b0024] += arg1.b
    int32_t eflags
    __outsb(arg2, *arg4, arg4, eflags)
    bool p = unimplemented  {inc ebx}
    void* ebp = arg6
    char* edx = arg8
    uint32_t arg_18
    int32_t* ecx = arg_18
    char* eax = arg9
    uint16_t* esi_2 = __outsb(edx.w, *arg5, arg5, eflags)
    arg9 = edx
    
    if (temp1 + arg1.b u< temp1)
        if (not(p))
            char* eax_1 = __in_oeax_immb(0x40, eflags)
            *eax_1 += ecx.b
            *eax_1 = &eax_1[*eax_1]
            *eax_1 -= 1
            *eax_1 = &eax_1[*eax_1]
            jump(*(eax_1 + 0xffffffd4))
        
        *eax += eax.b
    
    *__return_addr = 0
    int16_t cs
    arg_18 = zx.d(cs)
    uint32_t* esp_1 = &arg_18
    void* edi_1 = __return_addr - 1
    uint16_t* esi_3 = __outsb(edx.w, *esi_2, esi_2, eflags)
    void* ebx_2 = arg7 + 1
    bool o = add_overflow(arg7, 1)
    uint16_t* esi_4 = __outsd(edx.w, *esi_3, esi_3, eflags)
    uint16_t* esi_5 = __outsb(edx.w, *esi_4, esi_4, eflags)
    
    if (arg7 == 0xffffffff)
        *eax += eax.b
        goto label_43efba
    
    bool c_1
    
    while (true)
        bool z_5
        bool cond:9_1
        
        if (arg7 + 1 s< 0)
            eax.b = 0x74
            edx = &edx[1]
        label_43efcc:
            eax.b += edx.b
        label_43efce:
            *eax += eax.b
            eax, edx, ecx = eax()
            *eax += eax.b
            *ecx += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            char temp7_1 = eax[0x4f0a002b]
            eax[0x4f0a002b] += eax.b
            c_1 = temp7_1 + eax.b u< temp7_1
            esi_5 = __outsb(edx.w, *esi_5, esi_5, eflags)
            esp_1 += 1
            void* edi_2
            
            if (c_1)
            label_43f04a:
                *eax = *eax
                char temp9_1 = eax[0x4f09002e]
                eax[0x4f09002e] += eax.b
                c_1 = temp9_1 + eax.b u< temp9_1
            label_43f053:
                uint16_t* esi_7 = __outsb(edx.w, *esi_5, esi_5, eflags)
                ebp += 1
                esi_5 = __outsb(edx.w, *esi_7, esi_7, eflags)
                esp_1 += 1
            label_43f058:
                
                if (not(c_1))
                    goto label_43f05c
                
                edi_2 = edi_1 + 1
                z_5 = edi_1 == 0xffffffff
                
                if (z_5)
                    break
                
                *(ebp + 0x49)
                esi_5 = *(ebp + 0x49) * 0x1c6f666e
                c_1 = unimplemented  {imul esi, dword [ebp+0x49], 0x1c6f666e}
                
                if (c_1)
                    eax[0xb8ff0000] += ebx_2:1.b
                    *eax += eax.b
                    *ecx += 1
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax = *eax
                    char temp32_1 = eax[0x4f0b0032]
                    eax[0x4f0b0032] += eax.b
                    c_1 = temp32_1 + eax.b u< temp32_1
                label_43f0e2:
                    uint16_t* esi_9 = __outsb(edx.w, *esi_5, esi_5, eflags)
                    uint16_t* esi_10 = __outsd(edx.w, *esi_9, esi_9, eflags)
                    
                    if (ebp == 1)
                        esi_10 = __outsd(edx.w, *esi_10, esi_10, eflags)
                        
                        if (esp_1 == 0xffffffff || c_1)
                            jump(&data_43f0ec)
                    
                    uint8_t* edi_3
                    uint8_t temp0_5
                    temp0_5, edi_3 = __insb(edi_2, edx.w, eflags)
                    *edi_3 = temp0_5
                    *0xd0004278 -= 0x2fffbd88
                    int32_t* eax_5
                    int32_t* ecx_1
                    int16_t edx_2
                    eax_5, edx_2, ecx_1 = 0xd0004278()
                    *eax_5 += eax_5
                    *ecx_1 += 1
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 += eax_5.b
                    *eax_5 = *eax_5
                    *(eax_5 + 0x4f100036) += eax_5.b
                    uint16_t* esi_13 = __outsb(edx_2, *esi_10, esi_10, eflags)
                    __outsd(edx_2, *esi_13, esi_13, eflags)
                    
                    if (ebp != 2)
                        jump("StartDock")
                    
                    jump("eWheelDown")
            else
            label_43efe9:
                uint32_t* temp10_1 = esp_1
                esp_1 += 1
                
                if (not(c_1))
                    if (add_overflow(temp10_1, 1))
                        goto label_43f02f
                    
                    if (temp10_1 != 0xffffffff)
                        eax.b += ebx_2.b
                        *eax += eax.b
                        undefined
                    
                    uint32_t* temp19_1 = esp_1
                    esp_1 += 1
                    cond:9_1 = temp19_1 != 0xffffffff
                    goto label_43f034
                
            label_43f05c:
                char* eax_3 = __in_oeax_immb(0x40, eflags)
                eax_3[0x98ff0001] += ebx_2.b
                *eax_3 = &eax_3[*eax_3]
                *ecx += 1
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 += eax_3.b
                *eax_3 = *eax_3
                char temp14_1 = eax_3[0x4f07002f]
                eax_3[0x4f07002f] += eax_3.b
                c_1 = temp14_1 + eax_3.b u< temp14_1
            label_43f077:
                
                while (true)
                    uint16_t* esi_8 = __outsb(edx.w, *esi_5, esi_5, eflags)
                    void* temp16_1 = ebp
                    ebp += 1
                    esi_5 = __outsb(edx.w, *esi_8, esi_8, eflags)
                    
                    if (temp16_1 == 0xffffffff)
                        edi_2 = edi_1 - 1
                        goto label_43f0e2
                    
                label_43f07c:
                    
                    if (not(c_1))
                        eax = __in_oeax_immb(0x40, eflags)
                        eax[0xa0ff0001] += eax:1.b
                        *eax = &eax[*eax]
                        *ecx += 1
                        *eax += eax.b
                        *eax += eax.b
                        *eax += eax.b
                        *eax = *eax
                        
                        while (true)
                            char temp20_1 = eax[0x4f060030]
                            eax[0x4f060030] += eax.b
                            esi_5 = __outsb(edx.w, *esi_5, esi_5, eflags)
                            void* temp21_1 = ebp
                            ebp += 1
                            bool z_4 = temp21_1 == 0xffffffff
                            
                            if (temp21_1 + 1 s< 0)
                                *(edi_1 + 0x6e)
                                ecx |= *(edi_1 + 0x6e)
                                c_1 = false
                                void* temp29_1 = ebp
                                ebp -= 1
                                z_5 = temp29_1 == 1
                                esi_5 = __outsd(edx.w, *esi_5, esi_5, eflags)
                                break
                            
                            if (not(z_4))
                                if (z_4 || temp20_1 + eax.b u< temp20_1)
                                    jump(0x43f0e3)
                                
                                jump(0x43f0a1)
                        
                        break
                    
                    edi_1 -= 1
        else
            *(esp_1 - 4) = eax
            esp_1 -= 4
            esi_5 = __outsd(edx.w, *esi_5, esi_5, eflags)
            
            if (o)
                goto label_43efce
            
            if (o)
                continue
            
            char* eax_2 = __in_oeax_immb(0x40, eflags)
            *eax_2 += edx.b
            *eax_2 = &eax_2[*eax_2]
            eax, edx, ecx = (*eax_2)()
            *eax = &eax[*eax]
            *ecx += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            eax[0x4f0a0028] += eax.b
            esi_5 = __outsb(edx.w, *esi_5, esi_5, eflags)
            __bound_gprv_mema32(ebp, *(ebx_2 + (eax << 1) + 0x6c))
            bool z_1
            bool z_3
            
            while (true)
                esp_1 = *(ebx_2 + 0x6b) * &data_427588
                *ecx = eax.b
                ebx_2:1.b *= 2
                *ecx = eax.b
                ebx_2:1.b *= 2
                *eax = &eax[*eax]
                *eax += eax.b
                *eax += eax.b
                eax[0x80000000] += eax.b
                *eax -= eax
                *(edi_1 + 0x6e)
                ecx.b |= *(edi_1 + 0x6e)
                c_1 = false
                
                while (true)
                    uint32_t* temp15_1 = esp_1
                    esp_1 += 1
                    z_3 = temp15_1 == 0xffffffff
                    esi_5 = __outsd(edx.w, *esi_5, esi_5, eflags)
                    int16_t temp0_2
                    temp0_2, eflags = __arpl_memw_gpr16(*(ebx_2 + 0x44), ebp.w)
                    *(ebx_2 + 0x44) = temp0_2
                    
                    if (c_1)
                        goto label_43f012
                    
                    if (not(add_overflow(temp15_1, 1)))
                        break
                    
                    edx = &edx[1]
                    eax[0x88ff0001] += ecx.b
                    *eax = &eax[*eax]
                    *ecx += 1
                    *eax += eax.b
                    *eax += eax.b
                    *eax += eax.b
                    *eax = *eax
                    char temp22_1 = eax[0x4f0a0029]
                    eax[0x4f0a0029] += eax.b
                    c_1 = temp22_1 + eax.b u< temp22_1
                    esi_5 = __outsb(edx.w, *esi_5, esi_5, eflags)
                
                if (not(z_3))
                    goto label_43efe9
                
                eax[0x90ff0001] += edx.b
                *eax = &eax[*eax]
                *ecx += 1
                *eax += eax.b
                *eax += eax.b
                *eax += eax.b
                *eax = *eax
            label_43efba:
                char temp4_1 = eax[0x4f0a002a]
                eax[0x4f0a002a] += eax.b
                c_1 = temp4_1 + eax.b u< temp4_1
                uint16_t* esi_6 = __outsb(edx.w, *esi_5, esi_5, eflags)
                uint32_t* temp5_1 = esp_1
                esp_1 += 1
                z_1 = temp5_1 == 0xffffffff
                esi_5 = __outsd(edx.w, *esi_6, esi_6, eflags)
                int16_t temp0_3
                temp0_3, eflags = __arpl_memw_gpr16(*(ebx_2 + 0x4f), ebp.w)
                *(ebx_2 + 0x4f) = temp0_3
                
                if (z_1 || c_1)
                    *(edi_1 + 0x6e)
                    *(edi_1 + 0x6e) |= ecx
                    c_1 = false
                    goto label_43f030
                
                if (not(c_1))
                    break
                
                ebx_2 += 1
                uint8_t temp0_1
                temp0_1, edi_1 = __insb(edi_1, edx.w, eflags)
                *edi_1 = temp0_1
            
            if (not(z_1))
                goto label_43efcc
            
            void* temp13_1 = edi_1
            edi_1 -= 1
            z_3 = temp13_1 == 1
            
            if (z_3 || c_1)
                goto label_43f077
            
        label_43f012:
            
            if (c_1)
                char temp17_1 = *ecx
                *ecx += ecx.b
                c_1 = temp17_1 + ecx.b u< temp17_1
                edi_1 -= 1
                goto label_43f053
            
            if (not(z_3))
                goto label_43f058
            
            eax.b += edx:1.b
            *eax += eax.b
            *(esp_1 - 4) = eax
            esp_1 -= 4
            *eax += eax.b
            *ecx += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            char temp24_1 = eax[0x4f09002d]
            eax[0x4f09002d] += eax.b
            c_1 = temp24_1 + eax.b u< temp24_1
        label_43f02f:
            esi_5 = __outsb(edx.w, *esi_5, esi_5, eflags)
        label_43f030:
            ebp += 1
            esi_5 = __outsb(edx.w, *esi_5, esi_5, eflags)
            uint32_t* temp8_1 = esp_1
            esp_1 += 1
            cond:9_1 = temp8_1 != 0xffffffff
        label_43f034:
            esi_5 = __outsd(edx.w, *esi_5, esi_5, eflags)
            int16_t temp0_4
            temp0_4, eflags = __arpl_memw_gpr16(*(ebx_2 + 0x3c), ebp.w)
            *(ebx_2 + 0x3c) = temp0_4
            
            if (cond:9_1)
                goto label_43f07c
            
            *eax += eax.b
            *eax = &eax[*eax]
            *eax += 1
            *eax = &eax[*eax]
            *ecx += 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            goto label_43f04a
        
        if (not(z_5))
            *(esp_1 - 4) = 0x446c6565
            __outsd(edx.w, *esi_5, esi_5, eflags)
            
            if (not(z_5) && not(c_1))
                jump("Dock")
            
            jump(&data_43f188)
        
        void* temp33_1 = ebp
        ebp -= 1
        esi_5 = __outsd(edx.w, *esi_5, esi_5, eflags)
        
        if (temp33_1 == 1 || c_1)
            jump(0x43f177)
        
        break
    
    eax.b = sbb.b(eax.b, 0x73, c_1)
    eax.b += ecx.b
    *eax += eax.b
    *(eax - 1) += (eax - 1).b
    *ecx += 1
    *(eax - 1) += (eax - 1).b
    *(eax - 1) += (eax - 1).b
    *(eax - 1) += (eax - 1).b
    *(eax - 1) = *(eax - 1)
    eax[0x4f090033] += (eax - 1).b
    uint16_t* esi_11 = __outsb(edx.w + 1, *esi_5, esi_5, eflags)
    bool z_8 = ebp == 1
    uint16_t* esi_12 = __outsd(edx.w + 1, *esi_11, esi_11, eflags)
    
    if (not(z_8))
        __outsd(edx.w + 1, *esi_12, esi_12, eflags)
        
        if (not(z_8))
            jump(sub_43f190+0x8c)
        
        jump(sub_43f190+0x19)
    
    *(esp_1 - 4) = ebp - 1
    
    if (add_overflow(ebp, 0xffffffff))
        jump(0x43f17b)
    
    jump(0x43f137)
}
