// ============================================================
// 函数名称: sub_4aa478
// 虚拟地址: 0x4aa478
// WARP GUID: f44c39a1-f5e5-5c02-bf25-7c81adbd405c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aa478(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6, char* arg7, int32_t arg8, int32_t arg9, char* arg10)
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
    *(arg2 + (arg3 << 1) + 0xc00)
    *(arg2 + (arg3 << 1) + 0xc00) = *(arg2 + (arg3 << 1) + 0xc00)
    bool c = unimplemented  {shl byte [edx+ecx*2+0xc00], 0x0}
    arg1.b = adc.b(arg1.b, 0xa2, c)
    arg1:1.b += (arg2 - 1):1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += (arg2 - 1):1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    char* eax_4
    int32_t edx_1
    int32_t edi
    int32_t eflags
    
    if (temp1 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2.b &= 0xa5
        *(eax_2 * 2) += arg3.b
        char temp2_1 = *eax_2
        *eax_2 += eax_2.b
        eax_2.b = adc.b(eax_2.b, 0xa2, temp2_1 + eax_2.b u< temp2_1)
        edx_1 = arg2 - 3
        eax_2:1.b += edx_1:1.b
        eax_2.b ^= *eax_2
        *entry_ebx += edx_1:1.b
        *(entry_ebx + arg5) += (&eax_2[1]).b
        eax_2[2] += arg3.b
        eax_4 = &eax_2[2] ^ *(eax_2 + 2)
        eax_4.b ^= *eax_4
        char temp3_1 = *(fsbase + eax_4) ^ eax_4.b
        *(fsbase + eax_4) = temp3_1
        
        if (temp3_1 s>= 0)
            void* eax_7
            eax_7.b = (&eax_4[1]).b * 2
            *eax_7 ^= eax_7.b
            int16_t ss
            int32_t var_6 = zx.d(ss)
            char* var_8_1 = entry_ebx
            __outsd(edx_1.w, *arg5, arg5, eflags)
            *(fsbase + entry_ebx + 0x67)
            *(fsbase + entry_ebx + 0x67)
            bool c_3 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x4579654b}
            
            if (c_3)
                jump(sub_4aa582+0x29)
            
            jump(sub_4aa582-0x49)
    else
        void* eax_3
        eax_3.b = (&eax_2[1]).b * 2
        *eax_3 ^= eax_3.b
        char* var_2_1 = entry_ebx
        __outsd((arg2 - 1).w, *arg5, arg5, eflags)
        int32_t var_8
        edi = var_8
        arg5 = entry_ebx
        entry_ebx = arg7
        edx_1 = arg8
        arg3 = arg9
        eax_4 = arg10
        *(fsbase + arg5 + 0x67)
        bool c_1 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x74726543}
        arg4 = *(fsbase + arg5 + 0x67) * 0x74726543 + 1
        
        if (not(c_1))
            __outsd(edx_1.w, *arg5, arg5, eflags)
            
            if (c_1)
                jump(0x4aa4fd)
            
            jump(&data_4aa4d8:1)
        
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *(arg4 + 0xc004a) = eax_4:1.b
    *eax_4 += eax_4.b
    void* eax_9
    eax_9.b = 0xa1 ^ *0xf4004aa1
    *entry_ebx += edx_1:1.b
    *(entry_ebx + arg5) += (eax_9 + 1).b
    *(eax_9 + 2) += arg3.b
    char* eax_12 = (eax_9 + 2) ^ *(eax_9 + 2)
    eax_12.b ^= *eax_12
    char temp5 = *(fsbase + eax_12) ^ eax_12.b
    *(fsbase + eax_12) = temp5
    
    if (temp5 s>= 0)
        return sub_4aa582(eax_12, edx_1, arg3, arg4, arg5, edi) __tailcall
    
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    *eax_12 += eax_12.b
    undefined
}
