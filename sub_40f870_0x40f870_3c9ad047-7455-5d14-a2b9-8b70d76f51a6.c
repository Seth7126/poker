// ============================================================
// 函数名称: sub_40f870
// 虚拟地址: 0x40f870
// WARP GUID: 3c9ad047-7455-5d14-a2b9-8b70d76f51a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a9a
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40f870(char* arg1, int16_t arg2, void* arg3, int80_t arg4 @ st0, int16_t arg5, char* arg6, void* arg7, char* arg8, int32_t arg9, uint16_t* arg10, int32_t arg11, void* arg12, char* arg13, int32_t** arg14, int32_t arg15, int32_t arg16, int32_t arg17, int32_t arg18, char arg19)
{
    // 第一条实际指令: *(arg3 + 1) += arg2:1.b
    *(arg3 + 1) += arg2:1.b
    int16_t entry_ebx
    *arg1 += entry_ebx:1.b
    arg8[0x61] += arg6.b
    *(arg7 + 0x43) += arg6.b
    *(arg7 + 0x43) += arg5.b
    arg8[0x61] += arg8:1.b
    *(arg7 + 0x44) += (arg7 + 3):1.b
    *arg6 += arg6.b
    *arg8 += (arg7 + 4):1.b
    __bound_gprv_mema32(arg8, *(arg7 + 4))
    arg8[0x61] += arg5.b
    *(arg7 + 6) += arg5:1.b
    *arg8 += ((arg7 + 6).w + 1):1.b
    int32_t* arg_3d
    char* eax_1 = arg_3d
    arg19 += (arg14.w + 1):1.b
    *arg13 += (arg14.w + 1).b
    int32_t arg_41
    arg_3d = &arg_41
    int32_t eflags
    uint16_t* esi_1 = __outsd(arg13.w, *arg10, arg10, eflags)
    int16_t* edi_1
    int16_t temp0
    temp0, edi_1 = __insd(arg9, arg13.w, eflags)
    *edi_1 = temp0
    int16_t ecx_9
    
    if (not(add_overflow(arg12, 1)))
        int32_t esi_2 = __outsb(arg13.w, *esi_1, esi_1, eflags)
        uint16_t* gsbase
        __outsb(arg13.w, *(gsbase + esi_2), esi_2, eflags)
        
        if (arg12 == 0xffffffff)
            *eax_1 += eax_1.b
            eax_1[0xfffffff7] += (arg12 + 1):1.b
            eax_1[1] += (arg14.w + 1).b
            eax_1[1] += (&eax_1[1]).b
            *edi_1 += (arg14.w + 1).b
            ecx_9:1.b = (arg14.w + 1):1.b + (arg12 + 1):1.b
            undefined
        
        jump(0x40f8b6)
    
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
    ecx_9.b = (arg12 + 1):1.b
    *(&eax_1[1] * 2) += arg13.b
    eax_1[1] += (&eax_1[1]).b
    arg4 f- fconvert.t(*(eax_1 + 1))
    void* eax_3
    eax_3:1.b = (&eax_1[2]):1.b + arg13:1.b
    eax_3.b ^= *eax_3
    *(arg12 + 1) += arg13:1.b
    *(arg12 + 1 + esi_1) += (eax_3 + 1).b
    *(eax_3 + 2) += ecx_9.b
    char* eax_6 = (eax_3 + 2) ^ *(eax_3 + 2)
    eax_6.b ^= *eax_6
    TEB* fsbase
    char temp2 = *(fsbase + eax_6) ^ eax_6.b
    *(fsbase + eax_6) = temp2
    
    if (temp2 s>= 0)
        *0x65380041 += (arg12 + 1):1.b
        eax_6[0x66] += arg13:1.b
        void* eax_7
        eax_7:1.b = (&eax_6[1]):1.b + (&eax_6[1]).b
        *(eax_7 - 0x37ffbe9b) += (arg12 + 1).b
        eax_7:1.b += arg13:1.b
        *(eax_7 - 0x2fffbe9b) += ecx_9.b + 5
        char temp4 = *eax_7
        *eax_7 += arg13.b
        arg14 = &arg_3d
        
        if (temp4 + arg13.b u>= temp4)
            jump(&data_40f9f4:3)
        
        jump("cActionLin")
    
    *(edi_1 + 0x6e)
    char* eax_10
    int16_t ecx_16
    int32_t edx_3
    eax_10, ecx_16, edx_3 = sub_413a9a(ecx_9)
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *(edx_3 + (edi_1 << 3) + 0x40) += ecx_16.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += eax_10.b
    *eax_10 += edx_3:1.b
    int32_t eflags_1 = __cli(eflags)
    eax_10[1] += (arg12 + 1):1.b
    __cli(eflags_1)
    *(&eax_10[2] * 2) += (&eax_10[2]).b
    void* eax_12
    eax_12.b = (&eax_10[2]).b * 2
    *eax_12
    *(arg12 + 1) += edx_3:1.b
    void* eax_13
    eax_13:1.b = (eax_12 + 1):1.b + ecx_16:1.b
    *eax_13 += ecx_16.b + 1
    char* eax_14 = eax_13 ^ *eax_13
    eax_14.b ^= *eax_14
    char temp3 = *(fsbase + eax_14) ^ eax_14.b
    *(fsbase + eax_14) = temp3
    
    if (temp3 s< 0)
        jump(&data_40fa10:2)
    
    jump(0x40f9e2)
}
