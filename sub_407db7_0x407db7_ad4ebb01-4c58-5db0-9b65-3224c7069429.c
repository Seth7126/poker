// ============================================================
// 函数名称: sub_407db7
// 虚拟地址: 0x407db7
// WARP GUID: ad4ebb01-4c58-5db0-9b65-3224c7069429
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_407ca8
// ============================================================

int32_t __convention("regparm")sub_407db7(char* arg1, uint16_t arg2, char arg3, int32_t arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12)
{
    // 第一条实际指令: *arg1 += arg2.b
    *arg1 += arg2.b
    *arg1 += arg1.b
    char temp1 = arg1.b
    char* entry_ebx
    arg1.b += entry_ebx.b
    TEB* fsbase
    
    if (temp1 s>= neg.b(entry_ebx.b))
        arg1:1.b += arg2:1.b
        arg1.b ^= *arg1
        *entry_ebx += arg2:1.b
        *(entry_ebx + arg5) += (&arg1[1]).b
        arg1[2] += arg3
        char* eax_2 = &arg1[2] ^ *(arg1 + 2)
        eax_2.b ^= *eax_2
        *(fsbase + eax_2) ^= eax_2.b
        arg5[0x30c00040]
        *arg5 += arg3
        
        if (add_overflow(&eax_2[1], 0xffffffff))
            jump(0x407e2c)
        
        jump(0x407de7)
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg5[arg6 << 1] += entry_ebx:1.b
    arg1[1] += arg2.b
    arg1[1] += (&arg1[1]).b
    *(arg4 + (arg6 << 1) + 0x32f40040) += arg2.b
    arg1[2] += (&arg1[2]).b
    void* eax_7
    eax_7.b = (&arg1[2] ^ *(arg1 + 2)).b + 0x33
    *(eax_7 + 1) += arg3
    char* eax_9 = (eax_7 + 1) ^ *(eax_7 + 1)
    eax_9.b ^= *eax_9
    *(fsbase + eax_9) ^= eax_9.b
    arg5[0x30c00040]
    char temp2 = *((&eax_9[1] << 1) + 0x4f74754f)
    *((&eax_9[1] << 1) + 0x4f74754f) += arg3
    arg4.w -= 1
    int32_t eflags
    int16_t* edi_1
    int16_t temp0
    temp0, edi_1 = __insd(arg6, arg2, eflags)
    *edi_1 = temp0
    __outsd(arg2, *arg5, arg5, eflags)
    
    if (temp2 + arg3 u>= temp2)
        jump(0x407e49)
    
    eax_9[1] += (&eax_9[1]).b
    undefined
}
