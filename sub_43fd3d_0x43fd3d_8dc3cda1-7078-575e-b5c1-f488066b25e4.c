// ============================================================
// 函数名称: sub_43fd3d
// 虚拟地址: 0x43fd3d
// WARP GUID: 8dc3cda1-7078-575e-b5c1-f488066b25e4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43fd3d(char* arg1, void* arg2, int32_t arg3, uint16_t arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi, uint16_t arg7, void* arg8, void* arg9, int32_t arg10, char* arg11)
{
    // 第一条实际指令: void* esp = &__return_addr:1
    void* esp = &__return_addr:1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp1 = arg1[0x480d0009]
    arg1[0x480d0009] += arg1.b
    bool c = temp1 + arg1.b u< temp1
    int32_t eflags
    void* const __return_addr_1 = __outsd(arg2.w, *arg5, arg5, eflags)
    void* entry_ebx
    int16_t cs
    
    if (not(c))
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg2 + 0x6f), __return_addr_1.w)
        *(arg2 + 0x6f) = temp0_1
        uint8_t* edi
        uint8_t temp0_2
        temp0_2, edi = __insb(arg6, arg2.w, eflags_1)
        *edi = temp0_2
        uint8_t* edi_1
        uint8_t temp0_3
        temp0_3, edi_1 = __insb(edi, arg2.w, eflags_1)
        *edi_1 = temp0_3
        bool cond:2_1 = arg2 s< 0xffffffff
        arg6 = entry_ebx
        __return_addr_1 = __return_addr
        arg4 = arg7
        arg2 = arg9
        arg3 = arg10
        
        if (c)
            char temp6 = arg8:1.b
            entry_ebx:1.b = arg8:1.b * 2
            char* eax = adc.d(arg11, 0xb4ff0002, temp6 + arg8:1.b u< temp6)
            *(eax * 2)
            *eax += eax.b
            *eax = *eax
            *eax += eax.b
            char* es
            char temp8 = *(es + arg2)
            *(es + arg2) += arg3.b
            
            if (entry_ebx - 1 s< 0)
                if (temp8 + arg3.b u< temp8)
                    jump(sub_43fd64+0x98)
                
                jump(sub_43fd64+0x33)
            
            eax[2] += arg3.b
            int16_t ebx_3
            ebx_3:1.b = entry_ebx.w:1.b * 2
            
            if (entry_ebx.w:1.b != neg.b(entry_ebx.w:1.b) && arg3 != 1)
                jump(sub_43fd64+0xc5)
            
            jump(sub_43fd64+0x89)
        
        if (not(cond:2_1))
            *arg11 += arg3:1.b
            arg1.b = arg11.b + *arg11
            undefined
        
        *(arg8 + 0x2300043) = cs
        entry_ebx:1.b = arg8:1.b * 2
        arg1.b = arg11.b - 0x3d
        void arg_1e
        esp = &arg_1e
        *(entry_ebx + arg6 + 0x44) += arg2:1.b
        arg1[0x80000000] += arg1.b
        char temp0_4
        temp0_4, eflags = __daa(arg1.b, eflags_1)
        arg1.b = temp0_4
        char temp14_1 = *((arg3 << 1) + &data_756e65)
        *((arg3 << 1) + &data_756e65) += arg1.b
        bool c_3 = temp14_1 + arg1.b u< temp14_1
        char temp15_1 = *arg1
        *arg1 = adc.b(temp15_1, arg1.b, c_3)
        arg1.b = sbb.b(arg1.b, 2, 
            adc.b(temp15_1, arg1.b, c_3) u< temp15_1
                || (c_3 && adc.b(temp15_1, arg1.b, c_3) == temp15_1))
        char temp16_1 = entry_ebx:1.b
        char temp17_1 = entry_ebx:1.b
        entry_ebx:1.b *= 2
        arg1.b = sbb.b(arg1.b, 2, temp16_1 + temp17_1 u< temp16_1)
        entry_ebx:1.b *= 2
        *arg1 = &arg1[*arg1]
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x80000000] += arg1.b
    char temp2 = *arg1
    *arg1 -= arg1.b
    *(esp - 4) = zx.d(cs)
    uint8_t* edi_3
    uint8_t temp0_5
    temp0_5, edi_3 = __insb(arg6 - 1, arg2.w, eflags)
    *edi_3 = temp0_5
    
    if (temp2 u>= arg1.b)
        int32_t edi_4 = *(esp - 4)
        *esp
        *(esp + 4)
        *(esp + 0xc)
        int16_t edx = (*(esp + 0x10)).w
        *(esp + 0x14)
        char* eax_1 = *(esp + 0x18)
        
        if (entry_ebx == 0xffffffff)
            *eax_1 += eax_1.b
            *eax_1 += eax_1.b
            eax_1[0x80000000] += eax_1.b
            bool cond:3 = ((eax_1 - *eax_1) | 0x65786950) u>= 0
            uint8_t* edi_7
            uint8_t temp0_6
            temp0_6, edi_7 = __insb(edi_4, edx, eflags)
            *edi_7 = temp0_6
            
            if (cond:3)
                jump(0x43fea7)
            
            jump(0x43fe57)
        
        if (temp2 u< arg1.b)
            jump(0x43fe45)
        
        jump(0x43fde1)
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    arg1[0x500d002b] += arg1.b
    *(arg1 + 0x65)
    int32_t edi_6 = *(arg1 + 0x65) * 0x6550736c
    bool c_6 = unimplemented  {imul edi, dword [eax+0x65], 0x6550736c}
    
    if (not(c_6))
        __outsb(arg2.w, *__return_addr_1, __return_addr_1, eflags)
        int32_t eflags_2
        int16_t temp0_7
        temp0_7, eflags_2 = __arpl_memw_gpr16(*(arg1 + 0x6c), arg4)
        *(arg1 + 0x6c) = temp0_7
        *(entry_ebx + 1)
        uint8_t* edi_8
        uint8_t temp0_8
        temp0_8, edi_8 = __insb(edi_6, arg2.w, eflags_2)
        *edi_8 = temp0_8
        *arg1 += arg1.b
        *(esp - 8) = *arg1
        void* ebx_1
        ebx_1:1.b = 0x42
        *(ebx_1 + edi_8 + 0x44) += arg2:1.b
        arg1[0x80000000] += arg1.b
        arg1.b = arg1.b
        *(arg1 + 0x6f)
        *(arg1 + 0x6f) |= arg2
        jump("pMenu")
    
    uint16_t* esi_2 = __outsb(arg2.w, *__return_addr_1, __return_addr_1, eflags)
    arg1.b -= 0xf4
    *0x1dff0002 += (entry_ebx + 2).b
    arg1.b += *arg1
    *(esp - 8) = *(entry_ebx + 2 + edi_6 + 0x44)
    arg1[1] += arg1.b
    char temp10 = *(cs + arg2)
    *(cs + arg2) += arg3.b
    bool z = temp10 == neg.b(arg3.b)
    *(esp - 0xc) = arg1
    
    if (temp10 + arg3.b u< temp10)
        if (z)
            jump(0x43ff80)
        
        jump("crollBar")
    
    __outsb(arg2.w, *esi_2, esi_2, eflags)
    
    if (z)
        jump(0x43ff18)
    
    jump("cale")
}
