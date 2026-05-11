// ============================================================
// 函数名称: sub_4ac37a
// 虚拟地址: 0x4ac37a
// WARP GUID: c7f7c276-f25a-5613-81b4-2f3ae3499ac1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ac37a(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg5 += arg3.b
    *arg5 += arg3.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg1 * 2) += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    arg1[arg2 + 0xc0003f] += entry_ebx:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[arg2 + 0xd8003f] += entry_ebx:1.b
    *arg1 += arg1.b
    arg1.b |= 0x54
    *0xd000400c = 0xd0004010
    *0xd0004008 = arg1
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, (arg2 - 1).w, eflags)
    *edi = temp0
    int32_t esp_1 = *(arg4 + 0x6e) * 0xc3b89074
    *edi += arg1.b
    arg1.b |= 0x54
    *(esp_1 - 4) = esp_1
    *(esp_1 - 8) = arg1
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, (arg2 - 2).w, eflags)
    *edi_1 = temp0_1
    int32_t esp_3 = *(arg4 + 0x6e) * 0x4ac2e074
    arg1:1.b += (entry_ebx + 4):1.b
    int16_t* edi_2
    int16_t temp0_2
    temp0_2, edi_2 = __insd(edi_1, (arg2 - 2).w, eflags)
    *edi_2 = temp0_2
    *(arg1 * 2) += (arg2 - 3).b
    *(arg3 + 0x62)
    *(esp_3 - 4) = esp_3
    *(esp_3 - 8) = arg1
    uint8_t* edi_3
    uint8_t temp0_3
    temp0_3, edi_3 = __insb(edi_2, (arg2 - 3).w, eflags)
    *edi_3 = temp0_3
    *(arg4 + 0x6e)
    int32_t esp_5 = *(arg4 + 0x6e) * 0xbc000574
    bool c = unimplemented  {imul esp, dword [ebp+0x6e], 0xbc000574}
    *arg1 = adc.b(*arg1, arg1.b, c)
    arg1.b = 0
    int32_t ebx_5
    ebx_5:1.b = (entry_ebx + 6):1.b * 2
    arg1.b = 0
    ebx_5:1.b *= 2
    *arg1 = &arg1[*arg1]
    *arg1 = *arg1
    *arg1 = *arg1
    char temp2 = arg1[0x80000000]
    arg1[0x80000000] = arg1[0x80000000]
    int0_t ldtr
    *edi_3 = __sldt_memw(ldtr)
    uint16_t* esi = __outsd((arg2 - 2).w, *arg5, arg5, eflags)
    
    if (arg2 == 2)
        *(esp_5 - 4) = arg1
        *(esp_5 - 8) = esp_5 - 4
        *arg1 = adc.b(*arg1, 0, temp2 u< temp2)
        arg1:1.b = 0
        ebx_5:1.b *= 2
        arg1:1.b = 0
        ebx_5:1.b *= 2
        *arg1 = &arg1[*arg1]
        *arg1 = *arg1
        *arg1 = *arg1
        char temp6 = *arg1
        *arg1 = *arg1
        *arg1 = adc.b(*arg1, 0, temp6 u< temp6)
        int32_t temp7 = *(arg2 + 0x6d) | arg1
        *(arg2 + 0x6d) = temp7
        
        if (temp7 != 0)
            undefined
        
        jump("dPort")
    
    void* eax
    eax:1.b = (&arg1[1]):1.b + (arg2 - 2).b
    *eax += eax.b
    *(eax * 2 + 0x1fe00) -= 1
    *eax += eax.b
    *eax += eax.b
    char temp4 = *(eax - 0x80000000)
    *(eax - 0x80000000) += eax.b
    void* eax_1 = adc.d(eax, *eax, temp4 + eax.b u< temp4)
    char temp5 = eax_1.b
    eax_1.b += 0x50
    int32_t esi_1 = __outsd((arg2 - 2).w, *esi, esi, eflags)
    TEB* fsbase
    
    if (temp5 u< 0xb0)
        *(esp_5 - 4) = arg4
        *(esp_5 - 0x18) = ebx_5
        *(esp_5 - 0x1c) = esi_1
        *(esp_5 - 0x20) = edi_3
        *(esp_5 - 0xc) = 0
        *(esp_5 - 8) = eax_1
        *(esp_5 - 0x24) = esp_5 - 4
        *(esp_5 - 0x28) = j_sub_4037f0
        *(esp_5 - 0x2c) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_5 - 0x2c
        
        if (*(*(esp_5 - 8) + 0x74) == 0)
            jump(0x4ac4e1)
        
        jump(0x4ac4b3)
    
    void* eax_3 = *(eax_1 + 0x74)
    void* edx_3 = *(arg4 - 4)
    *(eax_3 + 0x28) = *(edx_3 + 0x28)
    *(eax_3 + 0x2c) = *(edx_3 + 0x2c)
    *(*(arg4 - 4) + 0x68) = 1
    *(esp_5 - 4) = arg4
    *(esp_5 - 8) = j_sub_40353c
    *(esp_5 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_5 - 0xc
    (*(**(*(arg4 - 4) + 0x74) + 0x4c))()
    (*(**(arg4 - 4) + 0x40))()
    *(esp_5 - 4) = *(*(arg4 - 4) + 0xb0)
    *(esp_5 - 8) = *(*(arg4 - 4) + 0xb4)
    *(esp_5 - 0xc) = *(*(arg4 - 4) + 0xbc)
    *(esp_5 - 0x10) = *(*(arg4 - 4) + 0xb8)
    *(esp_5 - 0x14) = esi_1
    *(*(arg4 - 4) + 0xd4)
    *(*(arg4 - 4) + 0xc0)
    (*(**(*(arg4 - 4) + 0x74) + 0x44))()
    
    if (*(*(arg4 - 4) + 0x70) == 0)
        jump(0x4ac58f)
    
    jump(0x4ac587)
}
