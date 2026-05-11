// ============================================================
// 函数名称: sub_40f1d9
// 虚拟地址: 0x40f1d9
// WARP GUID: 932cafea-71c9-521f-b5cd-6d00eae6fb3d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40f30a
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40f1d9(char* arg1, int32_t arg2, char* arg3, void* const arg4 @ ebp, void* const* arg5 @ esi, char* arg6 @ edi, char* arg7, int32_t arg8, char* arg9, void* arg10)
{
    // 第一条实际指令: char temp1 = *arg3
    char temp1 = *arg3
    *arg3 -= arg1.b
    
    if (temp1 == arg1.b)
        goto label_40f209
    
    void* eax = &arg1[1]
    char* entry_ebx
    *(entry_ebx + arg4 + 0x40) += arg2:1.b
    *(entry_ebx + arg4 + 0x40) += arg2:1.b
    char temp3_1 = *arg6
    *arg6 += eax.b
    void* const* var_4_1 = &__return_addr
    char* var_8 = entry_ebx
    int32_t* esp = &var_8
    
    if (temp3_1 == neg.b(eax.b))
        goto label_40f25f
    
    arg5 = var_4_1
    arg4 = __return_addr
    entry_ebx = arg7
    arg2 = arg8
    arg3 = arg9
    void arg_18
    esp = &arg_18
    int32_t eflags
    int16_t temp0_1
    temp0_1, arg6 = __insd(var_8, arg2.w, eflags)
    *arg6 = temp0_1
    arg1 = arg10 + 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    label_40f209:
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg2 + (arg5 << 3) + 0x40) += arg3.b
    *arg1 += arg3.b
    *arg1 += arg1.b
    arg3[(arg5 << 3) + 0x32f40040] += arg3.b
    arg1[1] += (&arg1[1]).b
    void* eax_3
    eax_3.b = (&arg1[1] ^ *(arg1 + 1)).b + 0x33
    *(eax_3 + 1) += arg3.b
    char* eax_5 = (eax_3 + 1) ^ *(eax_3 + 1)
    eax_5.b ^= *eax_5
    TEB* fsbase
    char temp2_1 = *(fsbase + eax_5) ^ eax_5.b
    *(fsbase + eax_5) = temp2_1
    void* eax_14
    
    if (temp2_1 s< 0)
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
        eax = 0x80040f2
    label_40f281:
        *eax += eax.b
        eax.b += arg2:1.b
        __int1()
        void* eax_9
        eax_9:1.b = (eax + 1):1.b + arg2:1.b
        eax_9.b ^= *eax_9
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (eax_9 + 1).b
        *(eax_9 + 2) += arg3.b
        char* eax_12 = (eax_9 + 2) ^ *(eax_9 + 2)
        eax_12.b ^= *eax_12
        char temp5_1 = *(fsbase + eax_12) ^ eax_12.b
        *(fsbase + eax_12) = temp5_1
        
        if (temp5_1 s>= 0)
            eax_12[0xa800412c] += (&eax_12[1]).b
            void* eax_13
            eax_13.b = (&eax_12[1]).b - *arg3
            
            if ((&eax_12[1]).b s< *arg3)
                jump(0x40f2d8)
            
            jump(0x40f2ae)
        
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        *eax_12 += eax_12.b
        entry_ebx.b &= arg2:1.b
        eax_14 = &eax_12[1]
    else
        void* eax_6
        eax_6.b = (&eax_5[1]).b * 2
        *eax_6 ^= eax_6.b
        *(arg2 + arg4 + 0x41) += entry_ebx:1.b
        *(arg2 + arg4 + 0x2a9c0041) += (&arg3[1]).b
        arg3 = &arg3[2]
        char temp4_1 = *0x6e614854
        *0x6e614854 += arg3.b
        uint8_t* edi_1
        uint8_t temp0_2
        temp0_2, edi_1 = __insb(arg6, arg2.w, eflags)
        *edi_1 = temp0_2
        *(esp - 4) = entry_ebx
        esp -= 4
        
        if (temp4_1 != neg.b(arg3.b))
            int32_t edi_2 = *esp
            arg5 = esp[1]
            esp[2]
            entry_ebx = esp[4]
            arg2 = esp[5]
            arg3 = esp[6]
            void* eax_7 = esp[7]
            esp = &esp[8]
            int16_t* edi_3
            int16_t temp0_3
            temp0_3, edi_3 = __insd(edi_2, arg2.w, eflags)
            *edi_3 = temp0_3
            eax = eax_7 + 1
        label_40f25f:
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *(eax + 0x80040f2) += entry_ebx:1.b
            goto label_40f281
        
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6:1.b
        eax_14 = eax_6 + 1
    
    *eax_14 += arg2.b
    *eax_14 += eax_14.b
    arg3[(arg5 << 3) + 0x32f40040] += arg3.b
    *(eax_14 + 1) += (eax_14 + 1).b
    void* eax_16
    eax_16.b = ((eax_14 + 1) ^ *(eax_14 + 1)).b + 0x33
    *(eax_16 + 1) += arg3.b
    char* eax_18 = (eax_16 + 1) ^ *(eax_16 + 1)
    eax_18.b ^= *eax_18
    char temp8 = *(fsbase + eax_18) ^ eax_18.b
    *(fsbase + eax_18) = temp8
    
    if (temp8 s>= 0)
        noreturn sub_40f30a(eax_18) __tailcall
    
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *eax_18 += eax_18.b
    *((esp + 1) * 2) += arg2.b
    *(esp + 1) += (esp + 1).b
    undefined
}
