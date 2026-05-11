// ============================================================
// 函数名称: sub_426fb7
// 虚拟地址: 0x426fb7
// WARP GUID: 1e734afd-ad00-53cb-b6af-7c7a152ba0e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_426ee9
// ============================================================

int32_t __convention("regparm")sub_426fb7(char* arg1, void* arg2, void* arg3, void* const arg4 @ ebp, char* arg5 @ esi, char* arg6 @ edi, void* arg7, void* arg8, void* arg9, void* arg10, void* arg11)
{
    // 第一条实际指令: arg1:1.b += arg2:1.b
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    void* const* var_4
    void** arg_18
    int32_t eflags
    void* edx_2
    void* ebx
    void* const** esp_1
    uint16_t* esi_2
    
    if (temp1 s< 0)
        edx_2 = arg2 + 1
        char temp2_1 = *arg6
        *arg6 += eax_2.b
        bool c_1 = temp2_1 + eax_2.b u< temp2_1
        int16_t cs
        var_4 = zx.d(cs)
        void* const** var_8 = &var_4
        esp_1 = &var_8
        ebx = &entry_ebx[1]
        uint16_t* esi_4 = __outsd(edx_2.w, *arg5, arg5, eflags)
        esi_2 = __outsb(edx_2.w, *esi_4, esi_4, eflags)
        
        if (entry_ebx != 0xffffffff)
            __outsd(edx_2.w, *esi_2, esi_2, eflags)
            uint8_t* edi_1
            uint8_t temp0_2
            temp0_2, edi_1 = __insb(arg6, edx_2.w, eflags)
            *edi_1 = temp0_2
            bool z_2 = ebx == 0xffffffff
            arg6 = var_8
            uint16_t* esi_6 = var_4
            arg4 = __return_addr
            ebx = arg8
            edx_2 = arg9
            eax_2 = arg11
            esp_1 = &arg_18
            esi_2 = __outsb(edx_2.w, *esi_6, esi_6, eflags)
            
            if (not(z_2) && not(c_1))
                if (not(c_1))
                    jump(0x426fed)
                
                jump(0x427015)
            
            arg3 = arg10 + 1
            esi_2[0x32b80021].b += edx_2.b
        
        goto label_42707f
    
    __return_addr.b += (&eax_2[1]).b
    eax_2[1] += (&eax_2[1]).b
    void* eax_3
    eax_3.b = (&eax_2[1]).b | 0x41
    *eax_3 += arg3.b
    eax_3.b |= 0x41
    *(entry_ebx + arg3) += entry_ebx.b
    char var_6377ffbf[0x6377ffb7]
    var_6377ffbf[entry_ebx << 2] += entry_ebx.b
    arg3 += 2
    *eax_3 += (arg2 + 1):1.b
    *arg6 = *arg5
    arg6 = &arg6[1]
    void* esi = &arg5[1]
    void* edx_1 = arg2 + 2
    char temp6_1 = *esi
    *esi += arg3.b
    bool c = temp6_1 + arg3.b u< temp6_1
    var_4 = &__return_addr
    esp_1 = &var_4
    ebx = &entry_ebx[1]
    uint16_t* esi_1 = __outsd(edx_1.w, *esi, esi, eflags)
    esi_2 = __outsb(edx_1.w, *esi_1, esi_1, eflags)
    
    if (entry_ebx != 0xffffffff)
        __outsd(edx_1.w, *esi_2, esi_2, eflags)
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg6, edx_1.w, eflags)
        *edi = temp0_1
        bool z_1 = ebx == 0xffffffff
        arg6 = var_4
        void* const __return_addr_1 = __return_addr
        arg4 = arg7
        ebx = arg9
        edx_1 = arg10
        arg3 = arg11
        void** eax_4 = arg_18
        void arg_1c
        esp_1 = &arg_1c
        esi_2 = __outsb(edx_1.w, *__return_addr_1, __return_addr_1, eflags)
        
        if (not(z_1) && not(c))
            if (not(c))
                jump(sub_426ee9+0xa7)
            
            jump(&data_427000)
        
        *(ebx + esi_2) += eax_4.b
        *(eax_4 + 1) += arg3.b
        eax_3 = (eax_4 + 1) ^ *(eax_4 + 1)
    
    eax_3.b ^= *eax_3
    char temp10_1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp10_1
    void* edx_3
    
    if (temp10_1 s< 0)
        edx_3 = edx_1 + 1
        *(arg3 + (arg4 << 1)) += arg3:1.b
    else
        eax_2 = eax_3 + 1
        *0xa6940041 += ebx:1.b
        edx_2 = edx_1 + 1
        eax_2[0x65] += edx_2:1.b
    label_42707f:
        eax_2[(arg4 << 2) + 0x65980042] += eax_2:1.b
        eax_2[0xffffffa9] += edx_2.b
        edx_3 = edx_2 + 1
        eax_2:1.b += edx_3:1.b
        eax_2[0xd0004165] += (arg3 + 3).b
        arg3 += 4
        eax_2[0x40042a7] += ebx.b
        eax_3.b = (*ebx * sub_42a80c).b - 0x69
    
    *(eax_3 - 0x58) += eax_3.b
    *(arg3 + (arg4 << 1) + 0x43) += (edx_3 + 1).b
    *(eax_3 + 0x69) += arg3:1.b
    *(eax_3 + (arg4 << 2) + 0x42) += (edx_3 + 1):1.b
    eax_3:1.b += arg3.b
    *(arg3 + (arg4 << 1) - 0x5713ffbd) += (edx_3 + 1).b
    *(arg3 + (arg4 << 1) - 0x56f3ffbd) += (ebx + 2).b
    *(arg3 + (arg4 << 1) + 0x69a80043) += eax_3:1.b
    *eax_3 += (edx_3 + 3):1.b
    *(edx_3 + 4) += (edx_3 + 4).b
    *(esp_1 - 4) = esp_1
    uint16_t* esi_7 = __outsd((edx_3 + 4).w, *esi_2, esi_2, eflags)
    uint16_t* esi_8 = __outsb((edx_3 + 4).w, *esi_7, esi_7, eflags)
    
    if (ebx == 0xfffffffc)
        int32_t temp8 = *(esp_1 - 4 + ((edx_3 + 4) << 1) + 0x61) | (edx_3 + 4)
        *(esp_1 - 4 + ((edx_3 + 4) << 1) + 0x61) = temp8
        __bound_gprv_mema32(arg3, *(arg6 + 0x72))
        
        if (temp8 u< 0)
            undefined
        
        jump(0x427160)
    
    uint16_t* esi_9 = __outsd((edx_3 + 4).w, *esi_8, esi_8, eflags)
    uint8_t* edi_2
    uint8_t temp0_3
    temp0_3, edi_2 = __insb(arg6, (edx_3 + 4).w, eflags)
    *edi_2 = temp0_3
    int32_t eflags_1
    int16_t temp0_4
    temp0_4, eflags_1 = __arpl_memw_gpr16(*(arg3 + 1 + (arg4 << 1) + 0x6f), esi_9.w)
    *(arg3 + 1 + (arg4 << 1) + 0x6f) = temp0_4
    __outsb((edx_3 + 4).w, *esi_9, esi_9, eflags_1)
    *(ebx + 4) += eax_3.b
    *(esp_1 - 5 + (eax_3 << 1) + 0x72) |= edx_3 + 4
    int32_t edi_3 = *(esp_1 - 5)
    uint16_t* esi_11 = *(esp_1 - 1)
    *(esp_1 + 0xb)
    int32_t edx_8 = *(esp_1 + 0xf)
    char* ecx_6 = *(esp_1 + 0x13)
    char* eax_6 = *(esp_1 + 0x17)
    int32_t ebp_1 = *(esp_1 + 3) - 1
    __outsd(edx_8.w, *esi_11, esi_11, eflags_1)
    int32_t* gsbase
    *(gsbase + eax_6) = &eax_6[*(gsbase + eax_6)]
    *eax_6 += eax_6.b
    *ecx_6 += eax_6.b
    *eax_6 += eax_6.b
    char temp9 = eax_6.b
    eax_6.b += edx_8:1.b
    
    if (add_overflow(temp9, edx_8:1.b))
        jump(sub_42710b+0x42)
    
    int80_t x87_r0
    return sub_42710b(eax_6, edx_8, ecx_6, ebp_1, edi_3, x87_r0) __tailcall
}
