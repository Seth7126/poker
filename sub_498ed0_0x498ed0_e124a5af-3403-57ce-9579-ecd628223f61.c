// ============================================================
// 函数名称: sub_498ed0
// 虚拟地址: 0x498ed0
// WARP GUID: e124a5af-3403-57ce-9579-ecd628223f61
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_498ed0(char* arg1, int16_t arg2, int32_t arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi)
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
    char temp1 = *arg1
    *arg1 += arg1.b
    *(arg6 + 0xc0049) = sbb.b(*(arg6 + 0xc0049), arg3.b, temp1 + arg1.b u< temp1)
    *arg1 += arg1.b
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += (arg3 - 1).b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp2 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp2
    
    if (temp2 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        char temp3 = *eax_2
        *eax_2 += eax_2.b
        
        if (temp3 s>= neg.b(eax_2.b))
            jump(sub_498dde+0x174)
        
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += entry_ebx.b
        undefined
    
    void* eax_3
    eax_3.b = (&eax_2[1]).b * 2
    *eax_3
    *eax_3 ^= eax_3.b
    eax_3.b = adc.b(eax_3.b, 0x45, false)
    char* var_4 = entry_ebx
    int32_t eflags
    uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x73), arg4.w)
    *(entry_ebx + 0x73) = temp0
    int32_t var_8 = arg4
    uint16_t* esi_1 = __outsb(arg2, *esi, esi, eflags_1)
    *(esi_1 + 0x6f)
    *(esi_1 + 0x6f)
    bool c_1 = unimplemented  {imul ebp, dword [esi+0x6f], 0x77}
    __outsb(arg2, *esi_1, esi_1, eflags_1)
    
    if (c_1)
        jump(0x498f9d)
    
    jump(0x498f2b)
}
