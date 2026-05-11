// ============================================================
// 函数名称: sub_426ee9
// 虚拟地址: 0x426ee9
// WARP GUID: c3ec61da-da1b-553e-ad6c-cf66b31074df
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_426e74
// ============================================================

int32_t __convention("regparm")sub_426ee9(char* arg1, void** arg2, char* arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    uint16_t* esi = __outsd(arg2.w, *arg5, arg5, eflags)
    uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
    char* eax_2
    void* edx_1
    void* entry_ebx
    void* esp
    void arg_4
    
    if (entry_ebx == 0xffffffff)
        *arg2 = __return_addr
        esp = &arg_4
        *arg3 += arg3.b
        eax_2 = arg1
        edx_1 = arg2 + 2
        *(edx_1 * 5) += (entry_ebx + 1):1.b
    else
        uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
        uint8_t* edi
        uint8_t temp0
        temp0, edi = __insb(arg6, arg2.w, eflags)
        *edi = temp0
        arg6 = edi - 1
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
        int16_t temp0_1
        temp0_1, eflags = __arpl_memw_gpr16(*(arg1 + (arg2 << 2) + 0x44), esi_2.w)
        *(arg1 + (arg2 << 2) + 0x44) = temp0_1
        esi_1 = __outsd(arg2.w, *esi_2, esi_2, eflags)
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
        *arg1 += arg1.b
        *(arg6 + (arg4 << 1) + 0x42) += (entry_ebx + 1):1.b
        *arg1 += (arg2 + 1):1.b
        *arg1 += arg1.b
        arg1.b = __in_al_immb(0x6d, eflags)
        edx_1 = arg2 + 2
        arg1:1.b += edx_1:1.b
        arg1.b ^= *arg1
        *(entry_ebx + 1) += edx_1:1.b
        *(entry_ebx + 1 + esi_1) += (&arg1[1]).b
        arg1[2] += arg3.b
        eax_2 = &arg1[2] ^ *(arg1 + 2)
        eax_2.b ^= *eax_2
        TEB* fsbase
        char temp2_1 = *(fsbase + eax_2) ^ eax_2.b
        *(fsbase + eax_2) = temp2_1
        
        if (temp2_1 s>= 0)
            arg3[(edx_1 << 2) + 0x42] += (&eax_2[1]):1.b
            eax_2[0xffffff91] += arg3:1.b
            void* eax_3
            eax_3:1.b = (&eax_2[1]):1.b * 2
            void* eax_4
            eax_4.b = (edx_1 + 1).b + arg3.b
            *(eax_3 + 1) = __return_addr
            esi_1[&arg_4 * 2 - 0x380dffdf].b += (entry_ebx + 1).b
            *(eax_3 + 3) = *eax_4
            undefined
    *((edx_1 + 1) * 5 - 0x6d2fffbe) += (entry_ebx + 1):1.b
    eax_2.b += (edx_1 + 2):1.b
    char temp3 = *arg6
    *arg6 += arg3.b
    *(esp - 4) = esp
    
    if (temp3 + arg3.b u< temp3)
        *(esp - 3 + ((entry_ebx + 1) << 2) - 0x6377ffbf) += (entry_ebx + 1).b
        *(edx_1 + 2) += (&eax_2[1]):1.b
        *arg6 = *esi_1
        void* esi_5 = esi_1 + 1
        *esi_5 += arg3.b + 2
        *(esp - 7) = esp - 3
        uint16_t* esi_6 = __outsd((&eax_2[1]).w + 1, *esi_5, esi_5, eflags)
        __outsb((&eax_2[1]).w + 1, *esi_6, esi_6, eflags)
        
        if (entry_ebx == 0xfffffffe)
            jump(sub_426fb7+0xb2)
        
        jump(sub_426fb7+0x40)
    
    uint16_t* esi_3 = __outsd((&eax_2[1]).w, *esi_1, esi_1, eflags)
    int32_t eflags_1
    int16_t temp0_8
    temp0_8, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x50), arg4.w)
    *(entry_ebx + 0x50) = temp0_8
    __bound_gprv_mema32(arg4, *(eax_2 + 0x66))
    int32_t eflags_2
    int16_t temp0_9
    temp0_9, eflags_2 = __arpl_memw_gpr16(*(edx_1 + 2 + ((entry_ebx + 1) << 3) + 0x6f), esi_3.w)
    *(edx_1 + 2 + ((entry_ebx + 1) << 3) + 0x6f) = temp0_9
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    (edx_1 + 2)[esi_3 << 1] += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    *(edx_1 + 2) += (edx_1 + 2).b
    char* eax_7
    eax_7.b = (edx_1 + 2).b + (&eax_2[3]):1.b
    int32_t esi_4 = __outsd((&eax_2[3]).w, *esi_3, esi_3, eflags_2)
    *(eax_7 * 2) += eax_7:1.b
    char temp4 = *eax_7
    *eax_7 += eax_7:1.b
    
    if (temp4 != neg.b(eax_7:1.b))
        jump(sub_426fb7+0x41)
    
    return sub_426fb7(eax_7, &eax_2[4], arg3, arg4, esi_4, arg6) __tailcall
}
