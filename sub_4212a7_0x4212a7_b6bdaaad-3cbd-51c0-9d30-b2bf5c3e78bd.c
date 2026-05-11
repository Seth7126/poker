// ============================================================
// 函数名称: sub_4212a7
// 虚拟地址: 0x4212a7
// WARP GUID: b6bdaaad-3cbd-51c0-9d30-b2bf5c3e78bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4211cc
// ============================================================

int32_t __convention("regparm")sub_4212a7(char* arg1, int32_t arg2, char* arg3, uint16_t arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: *arg3 += arg1.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    *arg1 += arg1.b
    *arg1 |= arg1
    *(arg3 + 0x6c) |= arg1
    int16_t* esp_1 = *(arg6 + 0x6e) * 0x746e656d
    arg1:1.b = 0x71
    *arg3 += (arg2 + 2).b
    char* entry_ebx
    entry_ebx:1.b *= 2
    entry_ebx[0xac6c0042] u>>= 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *entry_ebx = *entry_ebx
    *arg1 += arg1.b
    arg1.b |= *arg1
    *esp_1
    int32_t eflags
    uint16_t* esi = __outsb((arg2 + 3).w, *arg5, arg5, eflags)
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg1 + 0x6f), arg4)
    *(arg1 + 0x6f) = temp0
    
    if (arg1.b u>= 0)
        *arg1 += (arg2 + 3).b
        *0x8cff0001 += (&arg3[1]):1.b
        arg1[1] += (&arg1[1]).b
        arg3[1] += 1
        arg1[1] += (&arg1[1]).b
        arg1[1] += (&arg1[1]).b
        arg1[1] += (&arg1[1]).b
        arg3[1] = arg3[1]
        arg1[1] += (&arg1[1]).b
        char temp2 = arg3[0x76] | (&arg1[1]).b | (*(arg1 + 1)).b
        arg3[0x76] = temp2
        
        if (temp2 == 0)
            jump(sub_4211cc+0x1a5)
        
        jump(sub_4211cc+0x136)
    
    *arg1 += 0x71
    arg1[0x80000005] += arg1.b
    int16_t cs
    *(esp_1 - 2) = zx.d(cs)
    char temp1 = *0x6f6c6f43
    *0x6f6c6f43 += arg1.b
    
    if (temp1 + arg1.b u>= temp1)
        jump(0x42136c)
    
    char temp3 = *arg1
    *arg1 += arg1.b
    *arg1 = adc.d(*arg1, arg1, temp3 + arg1.b u< temp3)
    *(arg2 + 3 + (esi << 1) + 0x61) |= arg1.b
    *(esi + 0x64)
    *arg1 += arg1.b
    int32_t* eax_2
    char ecx_2
    int32_t edx_2
    eax_2, edx_2, ecx_2 = (*arg1)()
    edx_2:1.b += (entry_ebx.w - 1):1.b
    *eax_2 += eax_2
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    char temp4 = *eax_2
    *eax_2 += eax_2.b
    eax_2.b = adc.b(eax_2.b, *eax_2, temp4 + eax_2.b u< temp4)
    *(edx_2 + (esi << 1) + 0x61) |= eax_2.b
    __outsd(edx_2.w, *esi, esi, eflags_1)
    char* gsbase
    *(gsbase + eax_2) += edx_2.b
    *((eax_2 + 1) * 2) += ecx_2
    undefined
}
