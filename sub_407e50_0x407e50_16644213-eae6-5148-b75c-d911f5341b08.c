// ============================================================
// 函数名称: sub_407e50
// 虚拟地址: 0x407e50
// WARP GUID: 16644213-eae6-5148-b75c-d911f5341b08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_407e50(char* arg1, int16_t arg2, char arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
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
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = *arg1
    *arg1 += arg1.b
    int32_t eax = sx.d(arg1.w)
    char* entry_ebx
    TEB* fsbase
    
    if (temp0 s<= neg.b(arg1.b))
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
    else
        *eax += arg2.b
        *eax += eax.b
        char temp1_1 = eax.b
        eax.b += entry_ebx.b
        
        if (temp1_1 s>= neg.b(entry_ebx.b))
            eax:1.b += arg2:1.b
            eax.b ^= *eax
            *entry_ebx += arg2:1.b
            entry_ebx[arg5] += (eax + 1).b
            *(eax + 2) += arg3
            char* eax_3 = (eax + 2) ^ *(eax + 2)
            eax_3.b ^= *eax_3
            char temp3 = *(fsbase + eax_3) ^ eax_3.b
            *(fsbase + eax_3) = temp3
            
            if (temp3 s>= 0)
                jump(0x407e92)
            
            *eax_3 += eax_3.b
            undefined
    
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    char temp2 = eax.b
    eax.b += arg2:1.b
    
    if (temp2 s<= neg.b(arg2:1.b))
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
    else
        *eax += arg2.b
        *eax += eax.b
        char temp4_1 = eax.b
        eax.b += entry_ebx.b
        
        if (temp4_1 s>= neg.b(entry_ebx.b))
            eax:1.b += arg2:1.b
            eax.b ^= *eax
            *entry_ebx += arg2:1.b
            entry_ebx[arg5] += (eax + 1).b
            *(eax + 2) += arg3
            char* eax_6 = (eax + 2) ^ *(eax + 2)
            eax_6.b ^= *eax_6
            char temp6 = *(fsbase + eax_6) ^ eax_6.b
            *(fsbase + eax_6) = temp6
            
            if (temp6 s< 0)
                jump(0x407f1a)
            
            jump(0x407eea)
    
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *(eax + 0x7f) += arg3
    *(eax + 1) += arg2.b
    *(eax + 1) += (eax + 1).b
    *(arg5 + (arg6 << 1) + 0x32f40040) += (eax + 1):1.b
    *(eax + 2) += (eax + 2).b
    void* eax_9
    eax_9.b = ((eax + 2) ^ *(eax + 2)).b + 0x33
    *(eax_9 + 1) += arg3
    char* eax_11 = (eax_9 + 1) ^ *(eax_9 + 1)
    eax_11.b ^= *eax_11
    char temp5 = *(fsbase + eax_11) ^ eax_11.b
    *(fsbase + eax_11) = temp5
    
    if (temp5 s>= 0)
        void* eax_12
        eax_12.b = (&eax_11[1]).b * 2
        *eax_12
        *eax_12 ^= eax_12.b
        eax_12.b = adc.b(eax_12.b, *(arg4 + 0x45), false)
        
        if (eax_12.b s< 0)
            jump(sub_407f00+0xc1)
        
        jump(sub_407f00+0x4d)
    
    *eax_11 += eax_11.b
    *eax_11 += eax_11.b
    *eax_11 += eax_11.b
    *eax_11 += eax_11.b
    *eax_11 += eax_11.b
    eax_11[1] += arg2.b
    eax_11[1] += (&eax_11[1]).b
    *(arg5 + (arg6 << 1) + 0x32f40040) += (&eax_11[1]):1.b
    eax_11[2] += (&eax_11[2]).b
    void* eax_15
    eax_15.b = (&eax_11[2] ^ *(eax_11 + 2)).b + 0x33
    *(eax_15 + 1) += arg3
    char* eax_17 = (eax_15 + 1) ^ *(eax_15 + 1)
    eax_17.b ^= *eax_17
    char temp7 = *(fsbase + eax_17) ^ eax_17.b
    *(fsbase + eax_17) = temp7
    
    if (temp7 s< 0)
        jump(sub_407f00+0xd2)
    
    jump(sub_407f00+0xa2)
}
