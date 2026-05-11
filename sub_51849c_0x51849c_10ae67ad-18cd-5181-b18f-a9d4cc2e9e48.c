// ============================================================
// 函数名称: sub_51849c
// 虚拟地址: 0x51849c
// WARP GUID: 10ae67ad-18cd-5181-b18f-a9d4cc2e9e48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_51849c(char* arg1, int16_t arg2, int32_t arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int80_t arg6 @ st0) __noreturn
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
    *arg1 += arg1.b
    int32_t eflags
    arg1.b = __in_al_immb(0x84, eflags)
    int32_t var_4 = arg3
    int32_t* esp = &var_4
    arg1:1.b += arg3.b
    *arg1 += arg1.b
    arg6 f- fconvert.t(*arg1)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += (arg3 - 1).b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp1
    void* eax_5
    int32_t* var_8
    
    if (temp1 s< 0)
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        var_8 = &var_4
        esp = &var_8
        *(arg3 - 1)
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        *eax_3 += eax_3.b
        char temp0_1 = *(arg4 + 0x17c40051)
        *(arg4 + 0x17c40051) = eax_3.b
        eax_3.b = temp0_1
    label_51852e:
        *eax_3 += eax_3.b
        arg6 f- fconvert.t(*eax_3)
        void* eax_6
        eax_6:1.b = (&eax_3[1]):1.b + arg2:1.b
        eax_6.b ^= *eax_6
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (eax_6 + 1).b
        *(eax_6 + 2) += (arg3 - 1).b
        char* eax_9 = (eax_6 + 2) ^ *(eax_6 + 2)
        eax_9.b ^= *eax_9
        char temp3_1 = *(fsbase + eax_9) ^ eax_9.b
        *(fsbase + eax_9) = temp3_1
        
        if (temp3_1 s< 0)
            breakpoint
        
        eax_5 = &eax_9[1]
    else
        void* eax_4
        eax_4.b = (&eax_3[1]).b * 2
        *eax_4 ^= eax_4.b
        eax_5 = eax_4 | 0x32316b54
        char* temp2_1 = entry_ebx
        entry_ebx = &entry_ebx[1]
        uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
        arg5 = __outsb(arg2, *esi, esi, eflags)
        
        if (temp2_1 != 0xffffffff)
            int32_t ebp = *(arg5 + 0x65) * 0xf8c08b72
            *(arg3 - 1)
            eax_3 = eax_5 | 0xe4372e02
            *eax_3 += eax_3.b
            char* gsbase
            *(gsbase + eax_3) += eax_3.b
            void var_7aabffba
            *(&var_7aabffba + (ebp << 3)) += (arg3 - 1):1.b
            var_8 = arg3 - 1
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *(ebp + (eax_3 << 2) + 0x51) += arg2.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *eax_3 += eax_3.b
            *(arg5 - 0x3bffae7b) += eax_3.b
            esp = &var_4
            goto label_51852e
    eax_5.b *= 2
    *eax_5 ^= eax_5.b
    int16_t cs
    *(esp - 4) = zx.d(cs)
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    char temp4 = *0xbc000000
    *0xbc000000 += eax_5.b
    *eax_5 = adc.b(*eax_5, eax_5.b, temp4 + eax_5.b u< temp4)
    eax_5.b = eax_5.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    eax_5:1.b += arg2:1.b
    *(arg3 - 1)
    eax_5.b = eax_5.b
    *eax_5 += eax_5.b
    breakpoint
}
