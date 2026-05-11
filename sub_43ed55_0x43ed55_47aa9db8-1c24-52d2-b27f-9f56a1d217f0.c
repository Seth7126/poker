// ============================================================
// 函数名称: sub_43ed55
// 虚拟地址: 0x43ed55
// WARP GUID: 47aa9db8-1c24-52d2-b27f-9f56a1d217f0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __thiscallsub_43ed55(char* arg1, char* arg2 @ eax, void* arg3, int32_t arg4, char* arg5, char* arg6, int16_t arg7)
{
    // 第一条实际指令: *arg1 += 1
    *arg1 += 1
    *arg2 += arg2.b
    *arg2 += arg2.b
    *arg2 += arg2.b
    *arg1 = *arg1
    char temp0 = *arg2
    *arg2 += arg2.b
    bool c = temp0 + arg2.b u< temp0
    char temp1 = arg2.b
    char temp2 = *arg2
    arg2.b = sbb.b(temp1, temp2, c)
    bool c_1 = unimplemented  {sbb al, byte [eax]}
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    int32_t eflags
    
    if (not(c_1))
        __outsb(arg4.w, *var_4, var_4, eflags)
        
        if (sbb.b(temp1, temp2, c) == 0)
            *arg6 += arg6.b
            *(arg6 * 2) += arg3.b
            
            if ((arg4 | *(arg6 + 0x61)) u< 0)
                jump(0x43ee1d)
            
            jump("ntCtl3D")
        
        *(arg5 + (__return_addr << 1) + 0x4d)
        char* eax_1 = *(arg5 + (__return_addr << 1) + 0x4d) * 0x65646f
        bool c_2 = unimplemented  {imul eax, dword [ecx+ebp*2+0x4d], 0x65646f}
        *eax_1 = adc.b(*eax_1, eax_1.b, c_2)
        *eax_1 += eax_1.b
        undefined
    
    *arg6 += arg6.b
    *arg6 += arg6.b
    *arg5 = *arg5
    char temp3 = *arg6
    *arg6 += arg6.b
    bool c_3 = temp3 + arg6.b u< temp3
    char* eax_2 = sbb.d(arg6, 0x61500a00, c_3)
    bool c_4 = unimplemented  {sbb eax, 0x61500a00}
    
    if (not(c_4))
        __outsb(arg4.w, *var_4, var_4, eflags)
        
        if (sbb.d(arg6, 0x61500a00, c_3) == 0)
            jump("\tPopupMenu")
        
        jump(0x43ede1)
    
    eax_2[0x80000000] += eax_2.b
    *eax_2 &= eax_2.b
    char temp5 = *(arg3 + 0x68) | arg4.b
    *(arg3 + 0x68) = temp5
    void* esi_3 = __outsd(arg4.w, *var_4, var_4, eflags)
    
    if (temp5 u<= 0)
        *(esi_3 + 0x74)
        *(esi_3 + 0x74)
        bool c_5 = unimplemented  {imul ebp, dword [esi+0x74], 0x427150}
        TEB* fsbase
        eax_2.b = sbb.b(eax_2.b, *(fsbase + arg3), c_5)
        eax_2.b = __in_al_immb(0x1a, eflags)
        *arg5 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        undefined
    
    *eax_2 += arg4.b
    *arg2 += (&eax_2[1]).b
    void* ebx
    ebx:1.b = arg3:1.b * 2
    int32_t edx
    edx:1.b = 0x42
    eax_2[0xffffffd5] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    *arg5 = *arg5
    eax_2[1] += (&eax_2[1]).b
    arg6 = esi_3
    *(ebx + 0x69)
    bool c_6 = unimplemented  {imul esi, dword [ebx+0x69], 0x6c656c62}
    
    if ((&eax_2[1] & *(eax_2 + 1)) != 0 && not(c_6))
        jump(0x43ef00)
    
    return sub_43eebe(&eax_2[1] & *(eax_2 + 1), edx + 1, arg5, *(ebx + 0x69) * 0x6c656c62) __tailcall
}
