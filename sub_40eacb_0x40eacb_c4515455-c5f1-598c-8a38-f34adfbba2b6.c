// ============================================================
// 函数名称: sub_40eacb
// 虚拟地址: 0x40eacb
// WARP GUID: c4515455-c5f1-598c-8a38-f34adfbba2b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40eacb(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, char* arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: arg1:1.b += arg2:1.b
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    *(fsbase + eax_2) ^= eax_2.b
    arg5[0x18600020].b
    void* eax_3 = &eax_2[1]
    char temp1 = *arg6
    *arg6 += arg3.b
    
    if (arg6 != 1)
    label_40eb65:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
    label_40eb6b:
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *(eax_3 + 0x100040eb) += entry_ebx:1.b
    else
        int16_t var_2 = arg2.w
        int16_t* esp_1 = &var_2
        
        if (temp1 + arg3.b u< temp1)
            if (arg6 != 2)
                goto label_40eb6b
            
            int32_t eflags_1
            int16_t temp0_1
            temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg4 + 0x74), &var_2)
            *(arg4 + 0x74) = temp0_1
            *(eax_3 + 0x2f) += entry_ebx:1.b
            void* eax_5
            eax_5.b = eax_3.b * 2
            *eax_5
            *eax_5 ^= eax_5.b
            int32_t temp6_1 = *(arg4 + 0x4a)
            *(arg4 + 0x4a) = adc.d(temp6_1, eax_5, false)
            bool c_1 = adc.d(temp6_1, eax_5, false) u< temp6_1
            bool z_1 = adc.d(temp6_1, eax_5, false) == 0
            
            while (true)
                arg5 = __outsb(arg2.w, *arg5, arg5, eflags_1)
                
                if (not(z_1) && not(c_1))
                    uint8_t* edi_2
                    uint8_t temp0_2
                    temp0_2, edi_2 = __insb(arg6 - 2, arg2.w, eflags_1)
                    *edi_2 = temp0_2
                    *(edi_2 + (arg3 << 1) + 0x70)
                    *(edi_2 + 0x6e)
                    eax_3 = eax_5 + 1
                    *eax_3 += eax_3.b
                    *eax_3 += eax_3.b
                    *eax_3 += eax_3.b
                    break
                
                eax_5:1.b += entry_ebx:1.b
                void* temp7_1 = eax_5
                eax_5 += *arg3
                
                if (temp7_1 + *arg3 s< 0)
                    void var_3
                    esp_1 = &var_3
                    arg5 = *(entry_ebx + 0x74) * 0xec0cc08b
                    eax_5 += 1
                else
                    arg3 += 1
                    char temp9_1 = *0x73694c54
                    *0x73694c54 += eax_5.b
                    c_1 = temp9_1 + eax_5.b u< temp9_1
                    
                    if (temp9_1 == neg.b(eax_5.b))
                        int32_t* temp11_1 = arg3
                        arg3 -= 1
                        z_1 = temp11_1 == 1
                        continue
                    else
                        (&var_2)[(arg4 + 1) * 4].b = ror.b((&var_2)[(arg4 + 1) * 4].b, 0x40)
                
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                *eax_5 += eax_5.b
                esp_1[(arg4 + 1) * 4].b += arg3.b
                *((eax_5 + 1) * 2) += (eax_5 + 1):1.b
                *(eax_5 + 1) += (eax_5 + 1).b
                arg7 f- fconvert.t(*(eax_5 + 1))
                void* eax_7
                eax_7:1.b = (eax_5 + 2):1.b + arg2:1.b
                eax_7.b ^= *eax_7
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (eax_7 + 1).b
                *(eax_7 + 2) += arg3.b
                char* eax_10 = (eax_7 + 2) ^ *(eax_7 + 2)
                eax_10.b ^= *eax_10
                char temp10 = *(fsbase + eax_10) ^ eax_10.b
                *(fsbase + eax_10) = temp10
                
                if (temp10 s>= 0)
                    eax_10.b = (&eax_10[1]).b + (&eax_10[1]):1.b
                    *esp_1
                    arg3 += 1
                    *entry_ebx += arg3.b
                    *(esp_1 - 2) = &esp_1[1]
                    *(esp_1 - 6) = esp_1 - 2
                    *(esp_1 - 0xa) = 0x64616572
                    arg5 = *(entry_ebx + 0x74) * 0x40ec64
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                    *eax_10 += eax_10.b
                
                *eax_10 += eax_10.b
                eax_10.b = __in_al_dx(arg2.w, eflags_1)
                *(&eax_10[1] * 2) += arg3.b
                eax_10[1] += (&eax_10[1]).b
                arg7 f- fconvert.t(*(eax_10 + 1))
                void* eax_12
                eax_12:1.b = (&eax_10[2]):1.b + arg2:1.b
                eax_12.b ^= *eax_12
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (eax_12 + 1).b
                *(eax_12 + 2) += arg3.b
                char* eax_15 = (eax_12 + 2) ^ *(eax_12 + 2)
                eax_15.b ^= *eax_15
                char temp12 = *(fsbase + eax_15) ^ eax_15.b
                *(fsbase + eax_15) = temp12
                
                if (temp12 s>= 0)
                    *(arg3 * 2 + 0x41) += arg2.b
                    char temp14 = *0x74694254
                    *0x74694254 += eax_15.b + 1
                    
                    if (temp14 + eax_15.b + 1 u>= temp14)
                        jump(0x40ebf6)
                    
                    jump(0x40ec6b)
                
                *(&eax_15[1] * 2) += (&eax_15[1]).b
                eax_15[1] += (&eax_15[1]).b
                arg7 f- fconvert.t(*(eax_15 + 1))
                void* eax_18
                eax_18:1.b = (&eax_15[2]):1.b + arg2:1.b
                eax_18.b ^= *eax_18
                *entry_ebx += arg2:1.b
                *(entry_ebx + arg5) += (eax_18 + 1).b
                *(eax_18 + 2) += arg3.b
                char* eax_21 = (eax_18 + 2) ^ *(eax_18 + 2)
                eax_21.b ^= *eax_21
                char temp13 = *(fsbase + eax_21) ^ eax_21.b
                *(fsbase + eax_21) = temp13
                
                if (temp13 s< 0)
                    *(arg6 - 2) += (&eax_21[1]).b
                    
                    if ((arg2 | *(eax_21 + 1 + (arg2 << 1) + 0x65)) u< 0)
                        jump(sub_40ecca+0x94)
                    
                    jump("istent")
                
                char* eax_22
                eax_22.b = (&eax_21[1]).b + arg2:1.b
                eax_22.b |= *arg3
                *(arg3 + (eax_22 << 1)) += arg3.b
                *eax_22 += arg3.b
                eax_22.b |= 0x41
                *(entry_ebx + arg3) += entry_ebx.b
                *arg2 += eax_22.b
                entry_ebx:1.b *= 2
                undefined
            
            goto label_40eb65
        
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        eax_3 = 0x100040eb
    
    *eax_3 += eax_3.b
    char temp4 = eax_3.b
    eax_3.b += entry_ebx.b
    *eax_3 = adc.b(*eax_3, eax_3.b, temp4 + entry_ebx.b u< temp4)
    trap(0xd)
}
