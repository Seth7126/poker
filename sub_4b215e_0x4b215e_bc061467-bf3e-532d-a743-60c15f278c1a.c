// ============================================================
// 函数名称: sub_4b215e
// 虚拟地址: 0x4b215e
// WARP GUID: bc061467-bf3e-532d-a743-60c15f278c1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b21f8
// [被调用的父级函数]: sub_4b20c4, sub_4b213c
// ============================================================

int32_t __fastcallsub_4b215e(int32_t arg1, void* arg2, int32_t arg3 @ eax, char* arg4, int32_t arg5, char* arg6, int32_t* arg7, char* arg8, int32_t* arg9)
{
    // 第一条实际指令: void arg_6d
    void arg_6d
    int32_t* eax_6 = arg3 ^ *(&arg_6d + arg1)
    *(arg2 + 1) += arg1:1.b
    *eax_6 += eax_6
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    eax_6[-3].b += eax_6.b
    int32_t eax = eax_6 | 0x72440a00
    
    if (arg5 != 0xffffffff)
        jump(*(arg8 * 2))
    
    int32_t ebx_1
    
    if (eax u>= 0)
        ebx_1:1.b = (arg5 + 1):1.b * 2
        TEB* fsbase
        *(fsbase + arg8) += arg8.b
        return sub_4b21f8(arg8, arg6, arg7, __return_addr) __tailcall
    
    if (eax u>= 0)
        if (not(add_overflow(arg5, 1)))
            jump(0x4b21ca)
        
        jump(0x4b2188)
    
    *arg4 += arg7.b
    ebx_1:1.b = (arg5 + 1):1.b * 2
    *arg9 += arg9.b
    *arg7 += 1
    *arg9 += arg9.b
    *arg9 += arg9.b
    *arg9 += arg9.b
    *arg9 = *arg9
    char temp2 = *arg9
    *arg9 += arg9.b
    int0_t tr
    *arg9 = __str_memw(tr)
    
    if (temp2 + arg9.b u>= temp2)
        int32_t eflags
        __outsd((&arg6[1]).w, *__return_addr, __return_addr, eflags)
        char* gsbase
        *(gsbase + arg9) += (&arg6[1]).b
        *((arg9 + 1) * 2) += arg7.b
        undefined
    
    *arg9 += arg9
    char temp3 = *arg9
    *arg9 += arg9.b
    int32_t* eax_2
    eax_2.b = adc.b(arg9.b, *arg9, temp3 + arg9.b u< temp3)
    *(arg7 + (arg4 << 1) + 0x6e) |= arg7.b
    arg9 = ebx_1
    *(arg6 + 0x66)
    arg6[1] |= eax_2.b
    ebx_1:1.b *= 2
    *(ebx_1 + (arg7 << 1))
    *arg7 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    arg6[1] = arg6[1]
    *eax_2
    *eax_2 += eax_2.b
    *eax_2
    *(arg4 + 0x61)
    
    if (arg7 + *(arg4 + 0x61) s< 0)
        jump(0x4b22a9)
    
    jump(0x4b2255)
}
