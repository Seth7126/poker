// ============================================================
// 函数名称: sub_49452c
// 虚拟地址: 0x49452c
// WARP GUID: 952e8ef0-9f34-52d2-90ef-bd37b3e9042e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_49452c(int32_t arg1 @ ebp, char* arg2 @ esi, int32_t arg3 @ edi, uint32_t arg4[0x4] @ xmm0)
{
    // 第一条实际指令: char* var_8 = arg2
    char* var_8 = arg2
    int32_t eax
    char* eax_1
    int32_t* ecx
    char* edx
    eax_1, edx, ecx = eax(arg1, var_8, arg3)
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg3, edx.w, eflags)
    *edi = temp0
    *((arg1 << 1) + 0x6d540049) += edx:1.b
    eax_1:1.b *= 2
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, edx.w, eflags)
    *edi_1 = temp0_1
    *((arg1 << 1) + 0x6d740049) += eax_1.b
    int32_t ecx_7 = *(*(*ecx * 0xfffffff0) * 0xffffff90) * 0x10 - 4
    char temp1 = *eax_1
    *eax_1 += edx.b
    bool c = temp1 + edx.b u< temp1
    char* entry_ebx
    var_8 = entry_ebx
    int32_t* esp = &var_8
    bool c_2
    void* ecx_10
    void* ecx_20
    TEB* fsbase
    
    if (c)
        arg2[0x49] &= eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += entry_ebx:1.b
        arg2 = &arg2[1]
        ecx_10 = ecx_7 - 1
        *eax_1 += ecx_10.b
        char temp2_1 = *eax_1
        *eax_1 += eax_1.b
        eax_1.b = sbb.b(eax_1.b, 0xf7, temp2_1 + eax_1.b u< temp2_1)
        void* eax_7
        eax_7:1.b = (&eax_1[1]):1.b + edx:1.b
        eax_7.b ^= *eax_7
        *entry_ebx += edx:1.b
        eax_1 = eax_7 + 1
        *(entry_ebx + arg2) += eax_1.b
    label_49460b:
        eax_1[1] += ecx_10.b
        char* eax_9 = &eax_1[1] ^ *(eax_1 + 1)
        eax_9.b ^= *eax_9
        char temp3_1 = *(fsbase + eax_9) ^ eax_9.b
        *(fsbase + eax_9) = temp3_1
        void* ecx_11
        
        if (temp3_1 s< 0)
            int32_t edi_2 = *esp
            char* esi = esp[1]
            esp[2]
            entry_ebx = esp[4]
            edx = esp[5]
            char* ecx_12 = esp[6]
            int16_t eax_10 = (esp[7]).w
            esp = &esp[8]
            eax_1 = sx.d(eax_10)
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            eax_1:1.b += edx.b
            *(edi_2 + (eax_1 << 1)) += (ecx_12 - 2).b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            edx:1.b *= 2
            arg2 = &esi[3]
            ecx_11 = ecx_12 - 4
            *eax_1 += entry_ebx:1.b
            *eax_1 += eax_1.b
            eax_1.b *= 2
            *eax_1
            *entry_ebx += edx:1.b
        label_49467f:
            char* eax_11
            eax_11:1.b = (&eax_1[1]):1.b + ecx_11:1.b
            int32_t ebp_3 = *esp
            void* ecx_16 = ecx_11 + 1
            *eax_11 += ecx_16.b
            eax_1 = eax_11 ^ *eax_11
            eax_1.b ^= *eax_1
            char temp7_1 = *(fsbase + eax_1) ^ eax_1.b
            *(fsbase + eax_1) = temp7_1
            
            if (temp7_1 s>= 0)
                *(ebp_3 + (entry_ebx << 1) + 0x41) += (&eax_1[1]):1.b
                eax_1[1] += (&eax_1[1]).b
                void* eax_12
                eax_12.b = (&eax_1[1]).b | 0x41
                *(eax_12 + 0x1c004160) += eax_12:1.b
                *ecx_16
                eax_1.b = adc.b((eax_12 | *ecx_16).b, 0x72, false)
                eax_1[0x41] += eax_1.b
                *(ecx_16 + 0x627c0040) += eax_1.b
                *(esp + 0x61940045) += ecx_16:1.b
                ecx_16 += 1
                *(ecx_16 + 0x64b40041) += ecx_16.b
            
            ecx_20 = ecx_16 + 1
            *eax_1 += entry_ebx.b
            arg1 = esp[1]
        label_4946c7:
            entry_ebx[arg1 + 0x40] += edx:1.b
            entry_ebx[arg1 + 0x40] += edx:1.b
            entry_ebx[arg1 + 0x40] += edx:1.b
            *arg2 += (ecx_20 + 1).b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *entry_ebx += eax_1.b
            *eax_1 += eax_1.b
            *(eax_1 + edx + 0x2c0040) += entry_ebx:1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *(eax_1 + edx + 0x340040) += entry_ebx:1.b
            char temp15 = *eax_1
            *eax_1 += eax_1.b
            bool c_4 = temp15 + eax_1.b u< temp15
            __andps_xmmxud_memxud(arg4, *(ecx_20 + 0x63))
            
            if (c_4)
                if (c_4)
                    jump(&data_49475c:3)
                
                jump(0x4946fe)
            
            eax_1.b ^= *eax_1
            char temp16 = *(fsbase + eax_1) ^ eax_1.b
            *(fsbase + eax_1) = temp16
            
            if (temp16 s< 0)
                jump(&data_4947a8:2)
            
            jump(0x49477a)
        
        eax_1 = &eax_9[1]
        eax_1[0x6e] += entry_ebx:1.b
        ecx_11 = ecx_10 - 1
        edi_1[(arg1 << 1) + 0x49] += eax_1.b
        char temp5_1 = *eax_1
        *eax_1 += entry_ebx.b
        
        if (add_overflow(temp5_1, entry_ebx.b))
            *eax_1
            *eax_1 += eax_1.b
        label_494674:
            entry_ebx:1.b <<= 0x40
            *(esp + 0x33000041) += edx.b
            goto label_49467f
        
        char temp8_1 = eax_1.b
        char temp9_1 = eax_1.b
        eax_1.b *= 2
        
        if (add_overflow(temp8_1, temp9_1))
            goto label_494674
        
        edi_1[(arg1 << 1) + 0x6f9c0049] += ecx_11.b
        ecx_10 = ecx_11 - 1
        char temp14_1 = eax_1[0x1300496f]
        eax_1[0x1300496f] += edx:1.b
        c_2 = temp14_1 + edx:1.b u< temp14_1
        *(esp - 4) = esp
        *(esp - 8) = entry_ebx
        esp -= 8
        
        if (c_2)
            goto label_4946b4
    else
        if (not(c))
            void* ebp = *(arg2 + 0x53) * 0x656b636f
            void* eax_2
            int32_t ecx_8
            
            if (temp1 == neg.b(edx.b))
                eax_1[0x5d] += edx:1.b
                *(eax_1 + arg2 + 0x40) += eax_1:1.b
                eax_1[0x30] += entry_ebx:1.b
                eax_2.b = (&eax_1[1]).b + edx:1.b
                *(eax_2 + (ebp << 1)) += (ecx_7 - 2):1.b
                eax_2.b += entry_ebx.b
                char* var_c_2 = entry_ebx
                char temp6_1 = *eax_2
                *eax_2 += edx:1.b
                ecx_8 = *(ecx_7 - 4) * sub_496100 - 1
                
                if (temp6_1 == neg.b(edx:1.b) || ecx_8 == 0)
                    *(eax_2 + 0x6a) += (ecx_8 - 1).b
                    *(ecx_8 - 2) += (ecx_8 - 2).b
                    char* ecx_28
                    ecx_28:1.b = (ecx_8 - 2):1.b + entry_ebx:1.b
                    undefined
                
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *eax_2 += eax_2.b
                *(ebp + 0x49) = rol.b(*(ebp + 0x49), 0)
                eax_2.b = eax_2.b
            else
                eax_1[0x4946] += entry_ebx:1.b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_1[1] += (&eax_1[1]).b
                eax_2.b = (&eax_1[1]).b * 2
                ecx_8 = ecx_7 - 1
                *(eax_2 * 2) += edx:1.b
            
            char temp10 = *eax_2
            *eax_2 += eax_2.b
            eax_2.b = sbb.b(eax_2.b, 0xf7, temp10 + eax_2.b u< temp10)
            void* eax_3
            eax_3:1.b = (eax_2 + 1):1.b + edx:1.b
            eax_3.b ^= *eax_3
            *entry_ebx += edx:1.b
            *(entry_ebx + arg2) += (eax_3 + 1).b
            *(eax_3 + 2) += ecx_8.b
            char* eax_6 = (eax_3 + 2) ^ *(eax_3 + 2)
            eax_6.b ^= *eax_6
            char temp11 = *(fsbase + eax_6) ^ eax_6.b
            *(fsbase + eax_6) = temp11
            
            if (temp11 s< 0)
                jump(0x4945e2)
            
            jump(0x4945b2)
        
        eax_1.b -= 0x5c
        eax_1:1.b *= 2
        int16_t temp0_2
        temp0_2, edi_1 = __insd(edi_1, edx.w, eflags)
        *edi_1 = temp0_2
        ecx_10 = ecx_7
        char temp4_1 = *entry_ebx
        *entry_ebx += edx.b
        c_2 = temp4_1 + edx.b u< temp4_1
        char** var_c_1 = &var_8
        char* var_10 = entry_ebx
        esp = &var_10
        
        if (not(c_2))
            if (c_2)
                goto label_49460b
            
            int32_t eflags_1
            int16_t temp0_3
            temp0_3, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x65), &var_10)
            *(entry_ebx + 0x65) = temp0_3
            
            if (add_overflow(temp4_1, edx.b))
                jump("ientThread")
            
            jump("Thread FI")
        
        if (c_2)
        label_4946b4:
            eax_1.b = *arg2
            arg2 = &arg2[1]
            *(ecx_10 + 0x618c0042) += edx.b
            ecx_20 = ecx_10 + 2
            *(esp + 0x5d180041) += edx:1.b
            goto label_4946c7
    
    if (c_2)
        jump(0x494684)
    
    jump("lientThread")
}
