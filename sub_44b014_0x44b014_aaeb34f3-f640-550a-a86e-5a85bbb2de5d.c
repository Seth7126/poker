// ============================================================
// 函数名称: sub_44b014
// 虚拟地址: 0x44b014
// WARP GUID: aaeb34f3-f640-550a-a86e-5a85bbb2de5d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44b099
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44b014(int32_t* arg1, int32_t arg2, char* arg3, uint16_t* arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: *arg1 += arg1
    *arg1 += arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = *arg1
    *arg1 += arg1.b
    *arg1 = adc.d(*arg1, arg1, temp1 + arg1.b u< temp1)
    char* eax = arg1 | *(arg2 + 0x6f)
    int32_t eflags
    int32_t entry_ebx
    bool c_4
    
    if (eax u< 0)
        char temp2_1 = *eax
        *eax += eax.b
        bool c_3 = temp2_1 + eax.b u< temp2_1
        char temp3_1 = *(eax * 2)
        *(eax * 2) = adc.b(temp3_1, 5, c_3)
        c_4 = adc.b(temp3_1, 5, c_3) u< temp3_1 || (c_3 && adc.b(temp3_1, 5, c_3) == temp3_1)
        entry_ebx += 1
        uint16_t* esi = __outsd(arg2.w, *arg4, arg4, eflags)
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg5, arg2.w, eflags)
        *edi = temp0_1
        arg4 = __outsd(arg2.w, *esi, esi, eflags)
    else
        if (eax u>= 0)
            void arg_68
            *(&arg_68 + (arg4 << 1))
            eax.b += 2
            entry_ebx:1.b *= 2
            *arg3 += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax = *eax
            char temp6 = *eax
            *eax += eax.b
            eax.b = adc.b(eax.b, *eax, temp6 + eax.b u< temp6)
            
            if ((eax | *(arg2 + 0x6f)) u< 0)
                jump("Constraints")
            
            jump("erStylehqB")
        
        *eax += eax:1.b
        char temp4_1 = eax[0x8000000f]
        eax[0x8000000f] += eax.b
        eax.b = adc.b(eax.b, 0, temp4_1 + eax.b u< temp4_1)
        char* temp5_1 = eax
        eax = &eax[0x6f6c6f43]
        c_4 = temp5_1 u>= 0x909390bd
    
    if (not(c_4))
        if (c_4)
            jump(0x44b0db)
        
        return sub_44b099(eax) __tailcall
    
    if (c_4)
        jump("DockManager")
    
    char temp7 = *eax
    *eax += eax.b
    eax.b = sbb.b(eax.b, *eax, temp7 + eax.b u< temp7)
    *(arg2 + (arg4 << 1) + 0x61) |= eax.b
    *(arg4 + 0x64)
    *eax += eax.b
    int32_t* eax_3
    char ecx_1
    int32_t edx_1
    eax_3, edx_1, ecx_1 = (*eax)()
    edx_1:1.b += (entry_ebx.w - 1):1.b
    *eax_3 += eax_3
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    char temp8 = *eax_3
    *eax_3 += eax_3.b
    void* eax_4 = sbb.d(eax_3, *eax_3, temp8 + eax_3.b u< temp8)
    *(edx_1 + (arg4 << 1) + 0x61) |= eax_4.b
    __outsd(edx_1.w, *arg4, arg4, eflags)
    char* gsbase
    *(gsbase + eax_4) += edx_1.b
    *((eax_4 + 1) * 2) += ecx_1
    undefined
}
