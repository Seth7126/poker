// ============================================================
// 函数名称: sub_4b7000
// 虚拟地址: 0x4b7000
// WARP GUID: b0fb6013-bae1-5542-93d6-6fe0171cfb48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2be8, sub_4c2de8, sub_4c2d7c, sub_402b4c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4b7000(char* arg1, int32_t* arg2, char* arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = *arg1
    *arg1 += arg1.b
    void* eax
    char* entry_ebx
    uint32_t* esp
    
    if (add_overflow(arg1, 0xffffffff))
        eax.b = sbb.b((arg1 - 1).b, 0x3d, temp0 + arg1.b u< temp0)
    else
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        *(arg1 - 1) += (arg1 - 1).b
        arg2[0x1c].b += entry_ebx.b
        entry_ebx -= 1
        eax:1.b = (arg1 - 1):1.b + (arg1 - 1).b
        eax.b = eax.b
        arg7 f- fconvert.t(*eax)
        void* eax_1
        eax_1:1.b = (eax + 1):1.b + arg2:1.b
        eax_1.b ^= *eax_1
        *entry_ebx += arg2:1.b
        entry_ebx[arg5] += (eax_1 + 1).b
        *(eax_1 + 2) += arg3.b
        char* eax_4 = (eax_1 + 2) ^ *(eax_1 + 2)
        eax_4.b ^= *eax_4
        TEB* fsbase
        char temp2_1 = *(fsbase + eax_4) ^ eax_4.b
        *(fsbase + eax_4) = temp2_1
        
        if (temp2_1 s< 0)
            trap(0xd)
        
        eax.b = (&eax_4[1]).b * 2
        *eax ^= eax.b
        int16_t cs
        uint32_t var_4 = zx.d(cs)
        esp = &var_4
        *eax += eax.b
        *eax += eax.b
        *arg3 += eax.b
        *eax += eax.b
        *(eax + arg2 + 0x3d1c0040) += entry_ebx:1.b
    
    eax.b = eax.b
    arg2:1.b |= entry_ebx[(eax << 1) + 0x6c]
    bool cond:1 = arg2:1.b s> 0
    int32_t edi
    
    if (arg2:1.b != 0)
        *esp
        esp = &esp[1]
    label_4b70d5:
        
        if (cond:1 || *(*data_5301f4 + 0x4584) s< 2)
        label_4b70f2:
            data_5301f4
            
            if (eax s> 0x96)
                data_5301f4
                
                if (eax s> 0xc8)
                    data_5301f4
                    
                    if (eax s> 0xfa)
                        data_5301f4
                        
                        if (eax s> 0x12c)
                            data_5301f4
                            
                            if (eax s> 0x190)
                                data_5301f4
                                
                                if (eax s> 0x1f4)
                                    data_5301f4
                                    
                                    if (eax s> 0x258)
                                        data_5301f4
                                        
                                        if (eax s> 0x2bc)
                                            data_5301f4
                                            
                                            edi = eax s> 0x320 ? 0x12 : 0x11
                                        else
                                            edi = 0x10
                                    else
                                        edi = 0xf
                                else
                                    edi = 0xe
                            else
                                edi = 0xd
                        else
                            edi = 0xb
                    else
                        edi = 9
                else
                    edi = 7
            else
                edi = 5
        else
            edi = 3
    else
        if (arg2:1.b == 0)
            *entry_ebx += arg2
        label_4b70cc:
            eax = *(*eax + 0x21128)
            cond:1 = eax s> 0x5a
            goto label_4b70d5
        
        if (arg2:1.b u< 0)
            char temp3_1 = entry_ebx[0x28808b00]
            entry_ebx[0x28808b00] += arg3.b
            *arg2 = adc.d(*arg2, eax, temp3_1 + arg3.b u< temp3_1)
            entry_ebx[0x1b7f5af8] += eax.b
            
            if (*(*data_5301f4 + 0x4584) s< 2)
                goto label_4b70f2
            
            edi = 3
        else
            if (arg2:1.b u< 0)
                data_532f38 = eax
                return eax
            
            *(arg4 - 0x75) += arg2.b
            int32_t eflags
            void* eax_5
            eax_5.b = __in_al_dx(arg2.w, eflags)
            esp[-3] = entry_ebx
            esp[-4] = arg5
            esp[-5] = arg6
            esp = &esp[-5]
            
            if (*(*data_5301f4 + 0x21128) s> 0x14 || *(*data_5301f4 + 0x4584) s< 6)
                if (*(*data_5301f4 + 0x21128) s> 0x3c || *(*data_5301f4 + 0x4584) s< 4)
                    eax = data_5301f4
                    goto label_4b70cc
                
                edi = 2
            else
                edi = 1
    
    *(arg4 - 4) = 0
    int32_t esi_1 = *data_5300d0
    
    if (esi_1 s>= 2)
        int32_t i_1 = esi_1 - 1
        int32_t ebx = 2
        int32_t i
        
        do
            if (sub_4c2d7c(ebx) != 0 && sub_4c2be8(ebx) != 0)
                int32_t temp6_1 = *(arg4 - 4)
                *(arg4 - 4) += 1
                
                if (add_overflow(temp6_1, 1))
                    sub_403010()
                    noreturn
            
            ebx += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (*(arg4 - 4) s>= 4)
        *(arg4 - 8) = edi
        edi = sub_402b4c(float.t(*(arg4 - 8)) * data_4b72b4)
    else if (*(arg4 - 4) == 3)
        *(arg4 - 8) = edi
        edi = sub_402b4c(float.t(*(arg4 - 8)) * data_4b72c0)
    else if (*(arg4 - 4) == 2)
        *(arg4 - 8) = edi
        edi = sub_402b4c(float.t(*(arg4 - 8)) * data_4b72cc)
    
    if (sub_4c2be8(1) == 0)
        *(arg4 - 8) = edi
        edi = sub_402b4c(float.t(*(arg4 - 8)) * data_4b72d8)
    
    if (sub_4c2de8(0) != 2)
        if (sub_4c2de8(0) == 3)
            *(arg4 - 8) = edi
            edi = sub_402b4c(float.t(*(arg4 - 8)) * data_4b72c0)
    else
        *(arg4 - 8) = edi
        edi = sub_402b4c(float.t(*(arg4 - 8)) * data_4b72b4)
    
    *esp
    esp[1]
    esp[2]
    esp[4]
    esp[5]
    return edi
}
