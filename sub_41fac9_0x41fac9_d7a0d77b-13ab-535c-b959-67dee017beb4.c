// ============================================================
// 函数名称: sub_41fac9
// 虚拟地址: 0x41fac9
// WARP GUID: d7a0d77b-13ab-535c-b959-67dee017beb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitializeCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_403428, sub_4033d0, sub_403420, sub_41fb68
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_41fac9(char* arg1, int64_t* arg2, int32_t arg3, int32_t arg4 @ esi, char* arg5 @ edi, int64_t arg6 @ st1, int80_t arg7 @ st0, int32_t arg8, int32_t arg9, int32_t arg10, CRITICAL_SECTION* arg11, uint16_t* arg12, int16_t arg13, int32_t arg14, int32_t* arg15, int32_t arg16, int32_t arg17, int32_t arg18, int32_t arg19, int32_t arg20, int32_t arg21)
{
    // 第一条实际指令: arg1.b ^= *arg1
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    entry_ebx[arg4] += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp0 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp0
    
    if (temp0 s< 0)
        *(entry_ebx + 0x74db84c6) -= 1
        __psubsb_mmxq_memq(arg6, *arg2)
        jump(*(arg5 + (arg3 << 2) + 5))
    
    eax_2[1] += arg2:1.b
    int32_t eflags
    int32_t eflags_1 = __sti(eflags)
    char temp1 = *arg5
    *arg5 += arg3.b + 1
    bool c = temp1 + arg3.b + 1 u< temp1
    void* const* var_4 = &__return_addr
    void* var_8 = &eax_2[1]
    
    if (temp1 == neg.b(arg3.b + 1))
        while (c)
            nop
        
        return sub_41fb68(arg11) __tailcall
    
    if (c)
        return EnterCriticalSection(arg11)
    
    __outsb(arg13, *arg12, arg12, eflags_1)
    int32_t* result_1
    int32_t* result = result_1
    
    if (c)
        *(arg15 + 7) = arg7
        return sub_403420(arg15)
    
    result_1 = arg15
    int32_t* esp_1 = &result_1
    
    if (arg18.b != 0)
        void arg_44
        esp_1 = &arg_44
        result = sub_4033d0(arg19, arg18)
    
    *(esp_1 - 4) = &result[2]
    InitializeCriticalSection()
    void* esp_3 = esp_1
    
    if (arg18.b != 0)
        sub_403428(result)
        fsbase->NtTib.ExceptionList = *esp_3
        esp_3 += 0x10
    
    *esp_3
    *(esp_3 + 4)
    return result
}
