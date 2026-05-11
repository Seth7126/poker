// ============================================================
// 函数名称: sub_491635
// 虚拟地址: 0x491635
// WARP GUID: d3e3256a-5ef9-5e23-aa6c-424b965c620d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_491635(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t* arg6 @ edi, uint16_t* arg7, int32_t arg8, int32_t arg9, int16_t arg10, int32_t arg11, void* arg12, void* arg13, int32_t arg14, int32_t* arg15, void* arg16, int32_t arg17, int32_t arg18, char* arg19)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp0 = arg1[0x430b0011]
    arg1[0x430b0011] += arg1.b
    bool c = temp0 + arg1.b u< temp0
    int32_t eflags
    uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
    void* esi_1 = __outsb(arg2, *esi, esi, eflags)
    
    if (c)
        if (not(c))
            void* ebp = *(esi_1 + 0x74) * 0x4911d473
            void* entry_ebx
            arg1:1.b += entry_ebx.b
            arg1.b += *arg1
            char* eax
            char* edx
            eax, edx = (*(arg1 + 0x1004936))()
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            char temp8 = *eax
            *eax += eax.b
            eax.b = adc.b(eax.b, *eax, temp8 + eax.b u< temp8)
            eax.b |= *(ebp + 0x76)
            *(entry_ebx + 0x65)
            int32_t eax_1 = sx.d(eax.w)
            *edx -= 0xc
            eax_1.b += *eax_1
            undefined
        
        arg1[0x46080014] += arg1.b
        *(arg4 + 0x4e)
        *(arg4 + 0x4e)
        bool c_2 = unimplemented  {imul ebp, dword [ebp+0x4e], 0x656d61}
        *arg1 = adc.b(*arg1, arg1.b, c_2)
    
    void* eax_2 = &arg1[*arg1]
    *arg6 += 1
    void* eax_3 = eax_2 + *eax_2
    *arg3 += 1
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 = *eax_3
    char temp1 = *eax_3
    *eax_3 += eax_3.b
    bool c_3 = temp1 + eax_3.b u< temp1
    bool c_4 = adc.d(eax_3, 0x68530900, c_3) u< eax_3 || (c_3 && adc.d(eax_3, 0x68530900, c_3) == eax_3)
    void* eax_4 = arg12
    
    if (c_4)
        char temp3 = *(eax_4 + 0x53080018)
        *(eax_4 + 0x53080018) += eax_4.b
        __builtin_strncpy(&arg12, "owHi", 4)
        __outsb(arg10, *arg7, arg7, eflags)
        
        if (temp3 == neg.b(eax_4.b))
            jump(0x4917b9)
        
        jump(0x49174d)
    
    __bound_gprv_mema32(arg15, *arg15)
    *arg19 = adc.b(*arg19, arg19.b, c_4)
    *arg19 += arg19.b
    char* eax_6
    char* ecx_2
    eax_6, ecx_2 = (*(arg19 + 0x400042b6))()
    int32_t eflags_1
    char temp0_1
    char temp1_1
    temp0_1, temp1_1, eflags_1 = __aam_immb(0x42, eax_6.b)
    eax_6.b = temp0_1
    eax_6:1.b = temp1_1
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *ecx_2 = *ecx_2
    *eax_6 += eax_6.b
    int16_t ss
    arg19 = zx.d(ss)
    *(arg13 + 1) += eax_6.b
    arg18 = arg14
    *(arg16 + 0x69)
    *(arg16 + 0x69)
    bool c_5 = unimplemented  {imul esi, dword [ebx+0x69], 0x656c62}
    *eax_6 = adc.b(*eax_6, eax_6.b, c_5)
    eax_6.b = *eax_6
    void* ebx_1
    ebx_1:1.b = arg16:1.b * 2
    
    if (arg16:1.b != neg.b(arg16:1.b) && ecx_2 != 1)
        jump(0x4916c2)
    
    jump(0x49170a)
}
