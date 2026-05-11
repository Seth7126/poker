// ============================================================
// 函数名称: sub_43909f
// 虚拟地址: 0x43909f
// WARP GUID: c9234192-aa05-5bbd-985b-749ff9066dbf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42f140, sub_439178
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_43909f(char* arg1, char* arg2, int32_t* arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: arg1:1.b += arg2:1.b
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_result
    *entry_result += arg2:1.b
    *(entry_result + arg5) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    void* eax_5
    void** esp
    int32_t eflags
    
    if (temp1 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *(arg3 + 0x80043)
        char temp2_1 = *eax_2
        *eax_2 += eax_2.b
        *eax_2 = adc.b(*eax_2, eax_2.b, temp2_1 + eax_2.b u< temp2_1)
        arg2 = &arg2[1]
        eax_2:1.b += arg2:1.b
        eax_2.b ^= *eax_2
        *entry_result += arg2:1.b
        *(entry_result + arg5) += (&eax_2[1]).b
        eax_2[2] += arg3.b
        eax_5 = &eax_2[2] ^ *(eax_2 + 2)
        eax_5.b ^= *eax_5
        char temp3_1 = *(fsbase + eax_5) ^ eax_5.b
        *(fsbase + eax_5) = temp3_1
        
        if (temp3_1 s>= 0)
            char* eax_9
            eax_9:1.b = (eax_5 + 1):1.b + (eax_5 + 1).b
            *arg2 += eax_9.b
            *arg3 -= eax_9.b
            *eax_9 += arg3.b
            *(arg2 + 1) = &eax_9[*(arg2 + 1)]
            trap(0xd)
        
        int32_t eflags_3
        char temp0_5
        char temp1_2
        temp0_5, temp1_2, eflags_3 = __aaa(eax_5.b, eax_5:1.b, eflags)
        eax_5.b = temp0_5
        eax_5:1.b = temp1_2
    else
        eax_2[0x4c004104] += arg3:1.b
        arg3 += 1
        void* eax_4
        eax_4:1.b = (&eax_2[0x7880042]):1.b + entry_result:1.b
        eax_5 = eax_4 + *arg3
        
        if (eax_4 + *arg3 s>= 0)
            arg3 += 1
            arg3[entry_result * 2].b += arg2:1.b
        
        entry_result = &entry_result[1]
        char temp6_1 = *arg2
        *arg2 += arg3.b
        bool o_1 = add_overflow(temp6_1, arg3.b)
        void* const* var_4 = &__return_addr
        void* var_8 = eax_5
        esp = &var_8
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        
        if (not(o_1))
            if (not(o_1))
                *(entry_result + 0x74)
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
                *eax_5 += entry_result:1.b
                *arg3 += eax_5.b
                *arg3 += arg3.b
                *arg3 += arg2.b
                *arg2 += arg3.b
                trap(0xd)
            
            char* result
            int16_t es
            result, es = __les_gprz_memp(*eax_5)
            *result += arg3:1.b
            *(arg2 + 1) = &result[*(arg2 + 1)]
            *arg3 |= result.b
            result:1.b += (&arg2[2]):1.b
            arg2[2] += result.b
            int16_t cs
            uint32_t var_c = zx.d(cs)
            uint32_t* var_10 = &var_c
            uint16_t* gsbase
            char* result_1 = __outsb((&arg2[2]).w, *(gsbase + arg5), arg5, eflags)
            
            if (arg4 != 1)
                if (entry_result != 0)
                    sub_42f140(entry_result, nullptr.b)
                    result_1 = entry_result
                
                result = result_1
            else if (arg4 != 1)
                int32_t* edi
                int32_t temp0_2
                temp0_2, edi = __insd(arg6, (&arg2[2]).w, eflags)
                *edi = temp0_2
                char* entry_result_1 = entry_result
                
                if (arg4 != 1)
                    int32_t eflags_1
                    int16_t temp0_3
                    temp0_3, eflags_1 = __arpl_memw_gpr16(*(entry_result - 0x70), arg4.w - 1)
                    *(entry_result - 0x70) = temp0_3
                    undefined
            
            return result
        
        *arg3 += arg2:1.b
        arg2:1.b ^= *entry_result
        eax_5.b ^= 0x35
        int32_t eflags_2
        char temp0_4
        char temp1_1
        temp0_4, temp1_1, eflags_2 = __aaa(eax_5.b, eax_5:1.b, eflags)
        eax_5.b = temp0_4
        eax_5:1.b = temp1_1
    *arg3
    *(arg3 + 0x42) ^= eax_5.b
    *(esp - 4) = eax_5 - 1
    *(esp - 8) = arg3 - 1
    *(esp - 0xc) = arg2 - 1
    *(esp - 0x10) = entry_result
    *(esp - 0x14) = esp - 0x10
    *(esp - 0x18) = arg4
    *(esp - 0x1c) = arg5
    *(esp - 0x20) = arg6
    char* eax_11 = *(esp - 0x20)
    *(esp - 0x1c)
    *(esp - 0x18)
    *eax_11 += eax_11.b
    *eax_11 += eax_11.b
    return sub_439178(eax_11) __tailcall
}
