// ============================================================
// 函数名称: sub_4402f2
// 虚拟地址: 0x4402f2
// WARP GUID: 7c6a82a8-48ec-5dd3-b07c-bb352943dfd2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4402f2(char* arg1, int16_t arg2, char arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    arg1[0xb8ff0000] += entry_ebx:1.b
    *arg1 += arg1.b
    int32_t var_4 = *(entry_ebx + arg6 + 0x44)
    int32_t var_7
    void* esp_1 = &var_7:3
    arg1[0x80000000] += arg1.b
    char temp1 = *entry_ebx
    *entry_ebx += arg3
    int32_t eflags
    uint16_t* esi = __outsb(arg2 - 1, *arg5, arg5, eflags)
    uint16_t* esi_1 = __outsd(arg2 - 1, *esi, esi, eflags)
    
    if (arg4 == 1)
        esp_1 = &var_4:1
        esi_1 = __outsd(arg2 - 1, *esi_1, esi_1, eflags)
        
        if (&var_7:3 == 0xffffffff || temp1 + arg3 u< temp1)
            entry_ebx[0x42] = entry_ebx[0x42]
            *arg1 = rol.b(*arg1, 0)
            arg1[1] += (&arg1[1]).b
            var_7 = *(entry_ebx + arg6 - 1 + 0x44)
            arg1[0x80000001] += (&arg1[1]).b
            *(entry_ebx - 1) += arg3
            uint16_t* esi_2 = __outsb(arg2 - 1, *esi_1, esi_1, eflags)
            __outsd(arg2 - 1, *esi_2, esi_2, eflags)
            
            if (arg4 != 2)
                jump(0x4403a9)
            
            jump("eMove")
    
    uint8_t* edi_2
    uint8_t temp0
    temp0, edi_2 = __insb(arg6 - 1, arg2 - 1, eflags)
    *edi_2 = temp0
    *0xd0004278 -= 0x2fffbd88
    int32_t* eax_1
    int32_t* ecx
    int16_t edx_1
    eax_1, edx_1, ecx = 0xd0004278()
    *eax_1 += eax_1
    *ecx += 1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    char temp3 = *(eax_1 + 0x4f10004e)
    *(eax_1 + 0x4f10004e) += eax_1.b
    bool c_1 = temp3 + eax_1.b u< temp3
    uint16_t* esi_4 = __outsb(edx_1, *esi_1, esi_1, eflags)
    bool p = unimplemented  {dec ebp}
    bool z_2 = arg4 == 2
    uint16_t* esi_5 = __outsd(edx_1, *esi_4, esi_4, eflags)
    
    if (not(z_2))
        if (not(c_1))
            if (z_2)
                jump(sub_4404b4+0x18)
            
            jump("ockTvB")
        
        if (p)
            jump("artDockTvB")
    else
        *(esp_1 - 4) = edi_2
        *(esp_1 - 8) = 0x446c6565
        esp_1 -= 8
        esi_5 = __outsd(edx_1, *esi_5, esi_5, eflags)
        
        if (z_2 || c_1)
            *0xd8004278 -= 0x27ffbd88
            undefined
    
    ecx:1.b += edx_1:1.b
    *(eax_1 - 0x5700fffe) += ecx:1.b
    eax_1.b += *eax_1
    *ecx += 1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 = *eax_1
    char temp7 = *(eax_1 + 0x4f0a0052)
    *(eax_1 + 0x4f0a0052) += eax_1.b
    __outsb(edx_1, *esi_5, esi_5, eflags)
    *(esp_1 - 4) = &entry_ebx[1]
    *(esp_1 - 8) = 0x4374726f
    
    if (temp7 != neg.b(eax_1.b))
        jump(sub_4404b4+4)
    
    jump(&data_440444)
}
