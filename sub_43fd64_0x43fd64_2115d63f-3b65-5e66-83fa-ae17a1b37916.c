// ============================================================
// 函数名称: sub_43fd64
// 虚拟地址: 0x43fd64
// WARP GUID: 2115d63f-3b65-5e66-83fa-ae17a1b37916
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43fd64(char* arg1, void* arg2, int32_t arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: *(arg1 * 2)
    *(arg1 * 2)
    *arg1 += arg1.b
    *arg1 = *arg1
    arg1[0x49040025] += arg1.b
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(arg6 + 0x6e), arg4.w)
    *(arg6 + 0x6e) = temp0
    *arg1 += arg2.b
    *0x15ff0002 += arg2.b
    void* eax
    eax.b = (&arg1[1]).b + arg1[1]
    int32_t entry_ebx
    int32_t var_4 = *(entry_ebx + arg6 + 0x44)
    *eax += eax.b
    char* es
    char temp1 = *(es + arg2)
    *(es + arg2) += arg3.b
    bool c = temp1 + arg3.b u< temp1
    bool z = entry_ebx == 1
    bool s = entry_ebx - 1 s< 0
    
    if (s)
        if (c)
            *arg5 += arg3.b
            goto label_43fdfe
        
        if (z || c)
            goto label_43fe02
        
        if (not(z) && not(c))
            jump(sub_43fc69+0xbf)
        
        jump(sub_43fd3d+0x5f)
    
    *(eax + 2) += arg3.b
    char temp3_1 = entry_ebx:1.b
    char temp4_1 = entry_ebx:1.b
    int32_t ebx_1
    ebx_1:1.b = entry_ebx:1.b * 2
    bool z_1 = temp3_1 == neg.b(temp4_1)
    arg3 -= 1
    uint16_t* esi
    
    if (not(z_1) && arg3 != 0)
        if (temp3_1 + temp4_1 u< temp3_1)
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            *eax += eax.b
            
            if (eax u>= 0x6f500800)
                *(arg5 + 0x74)
                trap(0xd)
            
            if (eax == 0x6f500800)
                jump(0x43ff0b)
            
            jump(0x43fea2)
        
        esi = __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (not(z_1))
            *(arg3 + (arg4 << 1) + 0x4d)
            char* eax_1 = *(arg3 + (arg4 << 1) + 0x4d) * 0x5465646f
            bool c_2 = unimplemented  {imul eax, dword [ecx+ebp*2+0x4d], 0x5465646f}
            *eax_1 = adc.b(*eax_1, eax_1.b, c_2)
            undefined
    else
        *(ebx_1 + arg6 + 0x44) += arg2:1.b
        *(eax - 0x80000000) += eax.b
        *eax -= eax
        int16_t cs
        uint32_t var_7_1 = zx.d(cs)
    label_43fdfe:
        z = arg6 == 1
        s = arg6 - 1 s< 0
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
    label_43fe02:
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(arg4 + (arg3 << 1) + 0x65), arg5.w)
        *(arg4 + (arg3 << 1) + 0x65) = temp0_1
        esi = __outsb(arg2.w, *arg5, arg5, eflags)
        
        if (not(z))
            if (s)
                jump(sub_43fd3d+0x17c)
            
            jump(sub_43fd3d+0x117)
        
        if (not(z))
            jump(0x43fe0b)
    
    *eax = *eax
    char temp7 = *(eax + 0x5009002c)
    *(eax + 0x5009002c) += eax.b
    __outsd(arg2.w, *esi, esi, eflags)
    
    if (add_overflow(temp7, eax.b))
        jump(sub_43fd3d+0x1b4)
    
    jump("pMenu")
}
