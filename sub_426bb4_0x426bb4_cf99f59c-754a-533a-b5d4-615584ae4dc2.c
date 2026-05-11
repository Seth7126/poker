// ============================================================
// 函数名称: sub_426bb4
// 虚拟地址: 0x426bb4
// WARP GUID: cf99f59c-754a-533a-b5d4-615584ae4dc2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_426bb4(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    void* const* var_4 = &__return_addr
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    void arg_3e
    *(&arg_3e + (arg4 << 1)) += arg1.b
    arg1[0x2c000000] += arg1.b
    int32_t* entry_ebx
    __bound_gprv_mema32(arg1, *entry_ebx)
    var_4.b += &var_4
    char* eax
    eax.b = __in_al_dx((arg2 + 1).w, eflags)
    void* ebp = *arg1
    *eax += (arg3 + 2).b
    char* eax_1 = eax ^ *eax
    eax_1.b ^= *eax_1
    TEB* fsbase
    char temp1 = *(fsbase + eax_1) ^ eax_1.b
    *(fsbase + eax_1) = temp1
    
    if (temp1 s>= 0)
        *entry_ebx
        int32_t eax_2
        eax_2.b = *0x1c004160
        
        if ((eax_2 | *(arg3 + 2)) s< 0)
            jump(0x426c6b)
        
        jump(0x426c0a)
    
    eax_1[0x400426c] += entry_ebx.b
    eax_1[0x6c004166] += (arg2 + 1):1.b
    int32_t ecx_3
    ecx_3.w = (arg3 + 4).w + 1
    *(arg5 + 0x41) += (arg2 + 1):1.b
    eax_1[0x66] += (arg2 + 1):1.b
    *(ebp + 0x540b0043) += entry_ebx.b
    *(arg5 + 0x74)
    uint16_t* esi = __outsd((arg2 + 1).w, *arg5, arg5, eflags)
    uint16_t* esi_1 = __outsb((arg2 + 1).w, *esi, esi, eflags)
    *arg1 = &arg1[4]
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(edi, (arg2 + 1).w, eflags)
    *edi_1 = temp0_2
    *edi_1 += (eax_1 - 1).b
    int32_t edx_2 = (arg2 + 2) | *(eax_1 - 1 + ((ecx_3 + 1) << 1) + 0x69)
    __outsb(edx_2.w, *esi_1, esi_1, eflags)
    
    if (edx_2 != 0)
        jump("ction")
    
    entry_ebx[0xaba3c31].b |= (eax_1 - 1).b
    undefined
}
