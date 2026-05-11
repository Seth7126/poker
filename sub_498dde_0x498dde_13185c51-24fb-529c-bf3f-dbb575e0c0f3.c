// ============================================================
// 函数名称: sub_498dde
// 虚拟地址: 0x498dde
// WARP GUID: 13185c51-24fb-529c-bf3f-dbb575e0c0f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_498a24, sub_498c80, sub_498bac
// ============================================================

int32_t __convention("regparm")sub_498dde(void* arg1, void* arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi, void* arg7, char* arg8, void* arg9, void* arg10, char* arg11)
{
    // 第一条实际指令: char* eax
    char* eax
    eax.b = (arg1 + 1).b * 2
    *eax
    *eax ^= eax.b
    char* eax_1 = adc.d(eax, 0x53644945, false)
    bool o = unimplemented  {adc eax, 0x53644945}
    int32_t eflags
    void* const __return_addr_1 = __outsd(arg2.w, *arg5, arg5, eflags)
    int32_t eflags_1
    char* entry_ebx
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
    *(entry_ebx + 0x73) = temp0
    void* var_4 = arg2
    int32_t* esp = &var_4
    void* eax_8
    void* ecx_3
    TEB* fsbase
    
    if (not(o))
        ecx_3 = arg3 - 1
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
        eax_1[0xc00498e] += arg2:1.b
        *eax_1 += eax_1.b
        *((ecx_3 << 2) + 0x32f40049) += entry_ebx:1.b
        eax_1[1] += (&eax_1[1]).b
        eax_8.b = (&eax_1[1] ^ *(eax_1 + 1)).b + 0x33
    else
        if (adc.d(eax, 0x53644945, false) u>= eax)
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
        else
            arg6 = var_4
            __return_addr_1 = __return_addr
            entry_ebx = arg8
            arg2 = arg9
            void arg_1c
            esp = &arg_1c
            arg4 = *(arg7 + 0x64) * 0x8e48c08b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            *arg11 += arg11.b
            arg11[0xffffff8e] += (arg10 - 1).b
            *(arg11 * 2) += (arg10 - 2).b
            *arg11 += arg11.b
            arg3 = arg10 - 3
            char* eax_2
            eax_2:1.b = arg11:1.b + arg2:1.b
            eax_2.b ^= *eax_2
            *entry_ebx += arg2:1.b
            *(entry_ebx + __return_addr_1) += (&eax_2[1]).b
            eax_2[2] += arg3.b
            eax_1 = &eax_2[2] ^ *(eax_2 + 2)
            eax_1.b ^= *eax_1
            char temp4_1 = *(fsbase + eax_1) ^ eax_1.b
            *(fsbase + eax_1) = temp4_1
            
            if (temp4_1 s>= 0)
                void* eax_5
                eax_5.b = (&eax_1[1]).b * 2
                *eax_5
                *eax_5 ^= eax_5.b
                *(arg4 + 0x49)
                bool o_1 = unimplemented  {sbb eax, dword [ebp+0x49]}
                arg11 = entry_ebx
                __outsd(arg2.w, *__return_addr_1, __return_addr_1, eflags_1)
                int32_t eflags_2
                int16_t temp0_1
                temp0_1, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
                *(entry_ebx + 0x73) = temp0_1
                arg10 = arg2
                
                if (not(o_1))
                    jump(0x498eca)
                
                jump("estServerFailed")
        
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        *eax_1 += eax_1.b
        eax_1.b = 0x8e
        *(eax_1 * 2) += (arg3 - 1).b
        *eax_1 -= 0x72
        ecx_3 = arg3 - 2
        eax_1:1.b += arg2:1.b
        eax_1.b = 0x8e ^ *eax_1
        *entry_ebx += arg2:1.b
        eax_8 = &eax_1[1]
        *(entry_ebx + __return_addr_1) += eax_8.b
    
    *(eax_8 + 1) += ecx_3.b
    char* eax_10 = (eax_8 + 1) ^ *(eax_8 + 1)
    eax_10.b ^= *eax_10
    char temp3 = *(fsbase + eax_10) ^ eax_10.b
    *(fsbase + eax_10) = temp3
    
    if (temp3 s>= 0)
        void* eax_11
        eax_11.b = (&eax_10[1]).b * 2
        *eax_11
        *eax_11 ^= eax_11.b
        eax_11.b = sbb.b(eax_11.b, *(arg4 + 0x49), false)
        bool c_1 = unimplemented  {sbb al, byte [ebp+0x49]}
        bool o_2 = unimplemented  {sbb al, byte [ebp+0x49]}
        *(esp - 4) = entry_ebx
        int32_t esi_1 = __outsd(arg2.w, *__return_addr_1, __return_addr_1, eflags_1)
        int32_t eflags_3
        int16_t temp0_2
        temp0_2, eflags_3 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
        *(entry_ebx + 0x73) = temp0_2
        *(esp - 8) = arg2
        
        if (not(o_2))
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *eax_11 += eax_11.b
            *(arg6 + ((ecx_3 - 1) << 2) + 0x49) += entry_ebx:1.b
            *(eax_11 * 2) += (ecx_3 - 1).b
            *eax_11 += eax_11.b
            eax_11:1.b += arg2:1.b
            eax_11.b ^= *eax_11
            *entry_ebx += arg2:1.b
            entry_ebx[esi_1] += (eax_11 + 1).b
            *(eax_11 + 2) += (ecx_3 - 1).b - 1
            char* eax_18 = (eax_11 + 2) ^ *(eax_11 + 2)
            eax_18.b ^= *eax_18
            char temp16 = *(fsbase + eax_18) ^ eax_18.b
            *(fsbase + eax_18) = temp16
            
            if (temp16 s< 0)
                jump(0x498fa6)
            
            jump(0x498f76)
        
        if (not(c_1))
            jump(0x498f34)
        
        jump(0x498ec0)
    
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    char temp5 = *eax_10
    *eax_10 += eax_10.b
    *(arg6 + 0xc0049) = sbb.b(*(arg6 + 0xc0049), ecx_3.b, temp5 + eax_10.b u< temp5)
    *eax_10 += eax_10.b
    eax_10:1.b += arg2:1.b
    eax_10.b ^= *eax_10
    *entry_ebx += arg2:1.b
    *(entry_ebx + __return_addr_1) += (&eax_10[1]).b
    eax_10[2] += (ecx_3 - 1).b
    char* eax_14 = &eax_10[2] ^ *(eax_10 + 2)
    eax_14.b ^= *eax_14
    char temp6 = *(fsbase + eax_14) ^ eax_14.b
    *(fsbase + eax_14) = temp6
    
    if (temp6 s< 0)
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        char temp13 = *eax_14
        *eax_14 += eax_14.b
        
        if (temp13 s>= neg.b(eax_14.b))
            jump(0x498f52)
        
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += eax_14.b
        *eax_14 += entry_ebx.b
        undefined
    
    void* eax_15
    eax_15.b = (&eax_14[1]).b * 2
    *eax_15
    *eax_15 ^= eax_15.b
    eax_15.b = adc.b(eax_15.b, 0x45, false)
    *(esp - 4) = entry_ebx
    uint16_t* esi_2 = __outsd(arg2.w, *__return_addr_1, __return_addr_1, eflags_1)
    int32_t eflags_4
    int16_t temp0_3
    temp0_3, eflags_4 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
    *(entry_ebx + 0x73) = temp0_3
    *(esp - 8) = arg4
    uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags_4)
    *(esi_3 + 0x6f)
    *(esi_3 + 0x6f)
    bool c_3 = unimplemented  {imul ebp, dword [esi+0x6f], 0x77}
    __outsb(arg2.w, *esi_3, esi_3, eflags_4)
    
    if (c_3)
        jump(0x498f9d)
    
    jump(0x498f2b)
}
