// ============================================================
// 函数名称: sub_4ac809
// 虚拟地址: 0x4ac809
// WARP GUID: 5a86ea0b-9d37-5b5f-9f35-848fbdf43c1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ac809(void* arg1, int32_t arg2, int32_t arg3, uint16_t* arg4 @ esi, char* arg5 @ edi)
{
    // 第一条实际指令: arg1.b &= 0x41
    arg1.b &= 0x41
    *(arg1 + 0x28) += arg1:1.b
    *(arg1 + 0x28) += arg2:1.b
    *0x43644954 += (arg3 + 2).b
    int32_t eflags
    uint16_t* esi = __outsd(arg2.w, *arg4, arg4, eflags)
    __outsd(arg2.w, *esi, esi, eflags)
    void* entry_ebx
    uint16_t* esi_2 = *(entry_ebx + 0x74) * 0xc828c08b
    *arg5 += arg1.b
    uint16_t* esi_3 = __outsd((arg2 - 1).w, *esi_2, esi_2, eflags)
    __outsd((arg2 - 1).w, *esi_3, esi_3, eflags)
    uint16_t* esi_5 = *(entry_ebx + 0x74) * &data_4ac790
    __int1()
    *((arg1 | 0x43644954) + 1) += ((arg1 | 0x43644954) + 1).b
    *((arg1 | 0x43644954) + 1) += (arg3 + 2).b
    void* ebx = entry_ebx + 1
    uint16_t* esi_6 = __outsd((arg2 - 1).w, *esi_5, esi_5, eflags)
    char* esi_7 = __outsd((arg2 - 1).w, *esi_6, esi_6, eflags)
    *((arg1 | 0x43644954) + 0x4ac9) += ebx.b
    *((arg1 | 0x43644954) + 1) += ((arg1 | 0x43644954) + 1).b
    *((arg1 | 0x43644954) + 1) += ((arg1 | 0x43644954) + 1).b
    *((arg1 | 0x43644954) + 1) += ((arg1 | 0x43644954) + 1).b
    char* eax_1
    eax_1:1.b = ((arg1 | 0x43644954) + 1):1.b + (arg3 + 1).b
    unimplemented  {enter 0x4a, 0x1c}
    int32_t* ebp = *nullptr
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *esi_7 += eax_1.b
    int32_t ebp_1 = *ebp
    *(eax_1 * 2) += (arg3 + 1):1.b
    *eax_1 += eax_1.b
    char* ecx_2
    ecx_2:1.b = (arg3 + 1):1.b
    void* eax_2
    eax_2:1.b = (&eax_1[1]):1.b + (arg2 - 3):1.b
    eax_2.b ^= *eax_2
    *ebx += (arg2 - 3):1.b
    *(ebx + esi_7) += (eax_2 + 1).b
    *(eax_2 + 2) += ecx_2.b
    char* eax_5 = (eax_2 + 2) ^ *(eax_2 + 2)
    eax_5.b ^= *eax_5
    TEB* fsbase
    char temp1 = *(fsbase + eax_5) ^ eax_5.b
    *(fsbase + eax_5) = temp1
    void* edx_7
    
    if (temp1 s< 0)
        eax_5[0xffffffd1] += eax_5.b
        edx_7 = arg2 - 5
        esi_7[(ecx_2 << 3) + 0xe004a] += ebx.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        int16_t es
        *ebp = zx.d(es)
    else
        *(ebp_1 + (ecx_2 << 3) + 0x4a) += ecx_2.b
        eax_5[1] += (&eax_5[1]).b
        void* eax_6
        eax_6.b = (&eax_5[1]).b | 0x41
        *eax_6 += ecx_2.b
        eax_6.b |= 0x41
        esi_7[ecx_2 << 3] += ecx_2:1.b
        ecx_2[ebp_1 + 0x41] += eax_6:1.b
        *(esi_7 + ecx_2 + 0x41) += (arg2 - 4):1.b
        *(esi_7 + ecx_2 + 0x41) += ecx_2:1.b
        *((ecx_2 << 3) + 0xd030004a) += ecx_2.b
        arg5[(ecx_2 << 3) - 0x3017ffb6] += ebx.b
        *eax_6 += eax_6.b
        *(arg2 - 6) = ror.b(*(arg2 - 6), 1)
        eax_5 = eax_6 + 1
        int32_t temp2_1 = *(arg2 - 6)
        *(arg2 - 6) = ror.d(*(arg2 - 6), 1)
        bool c_1 = unimplemented  {ror dword [edx], 0x1}
        bool p_1 = unimplemented  {ror dword [edx], 0x1}
        bool a_1 = unimplemented  {ror dword [edx], 0x1}
        bool o_1 = unimplemented  {ror dword [edx], 0x1}
        *ebp = (o_1 ? 1 : 0) << 0xb | (ror.d(temp2_1, 1) s< 0 ? 1 : 0) << 7
            | (ror.d(temp2_1, 1) == 0 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2
            | (c_1 ? 1 : 0)
        int32_t eip_1
        eip_1, eflags = __into(eflags)
        edx_7 = arg2 - 7
        *esi_7 += ecx_2.b
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *esi_7 += eax_5.b
    
    *eax_5 += eax_5.b
    *(eax_5 + edx_7 + 0xc0040) += ebx:1.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *(eax_5 + edx_7 + 0x140040) += ebx:1.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *(eax_5 + edx_7 + 0x1c0040) += ebx:1.b
    *eax_5 += eax_5.b
    *eax_5 += eax_5.b
    *ecx_2 += edx_7.b
    *0x2400400c = 0x24004010
    void* ecx_3 = ecx_2 - 1
    void* esi_8 = esi_7 - 1
    
    if (esi_7 == 1)
        goto label_4ac981
    
    int32_t eflags_1
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(ecx_3 + 0x70), 0x400c)
    *(ecx_3 + 0x70) = temp0_1
    ebx += 1
    uint16_t* esi_9 = __outsd(edx_7.w, *esi_8, esi_8, eflags_1)
    int32_t esi_10 = __outsd(edx_7.w, *esi_9, esi_9, eflags_1)
    int32_t* ebp_2 = *(ecx_3 + 0x65) * 0x1c
    ebp_1 = *ebp_2
    edx_7 -= 1
    char temp5_1 = *arg5
    *arg5 += eax_5.b
    *(ecx_3 * 3 + 0x64) = adc.d(*(ecx_3 * 3 + 0x64), edx_7, temp5_1 + eax_5.b u< temp5_1)
    esi_8 = esi_10 - 1
    
    if (esi_10 == 1)
        eax_5.b -= 0xce
    else
        int16_t temp0_2
        temp0_2, eflags = __arpl_memw_gpr16(*(ecx_3 + 0x70), (&ebp_2[1]).w)
        *(ecx_3 + 0x70) = temp0_2
        uint16_t* esi_11 = __outsd(edx_7.w, *esi_8, esi_8, eflags)
        uint16_t* esi_12 = __outsd(edx_7.w, *esi_11, esi_11, eflags)
        unimplemented  {enter 0x4a, 0x90}
        char* eax_8 = __in_oeax_dx(edx_7.w, eflags) + 1
        *eax_8 += eax_8.b
        *eax_8 += ecx_3.b
        ecx_3 -= 1
        ebx += 2
        uint16_t* esi_13 = __outsd(edx_7.w, *esi_12, esi_12, eflags)
        esi_8 = __outsd(edx_7.w, *esi_13, esi_13, eflags)
        eax_8[0x4ac9] += edx_7.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        eax_8:1.b += eax_8.b
        eax_8:1.b += (edx_7 - 1):1.b
        int32_t* ebp_4 = **nullptr
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        void* edx_9
        edx_9:1.b = (edx_7 - 2):1.b + ebx.b
        ebp_1 = *ebp_4
        edx_7 = edx_9 - 1
        *eax_8 += eax_8.b
        *eax_8 += eax_8.b
        unimplemented  {enter 0x4a, 0xf4}
        eax_8.b ^= *eax_8
        *ebx += edx_7:1.b
        *(ebx + esi_8) += (&eax_8[1]).b
        eax_8[2] += ecx_3.b
        eax_5 = &eax_8[2] ^ *(eax_8 + 2)
    label_4ac981:
        eax_5.b ^= *eax_5
        char temp4_1 = *(fsbase + eax_5) ^ eax_5.b
        *(fsbase + eax_5) = temp4_1
        
        if (temp4_1 s< 0)
            arg5[(edx_7 - 1) << 3] += (edx_7 - 1).b
            *(esi_8 + (ecx_3 << 3) + 0xe004a) += ebx.b
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            eax_5.b += *eax_5
            *eax_5 += eax_5.b
            *eax_5 += eax_5.b
            *(eax_5 + edx_7 - 2 + 0x3c0040) += ebx:1.b
            char temp7 = *eax_5
            *eax_5 += eax_5.b
            *(ecx_3 * 3 + 0x64) = adc.b(*(ecx_3 * 3 + 0x64), (edx_7 - 2).b, temp7 + eax_5.b u< temp7)
            uint16_t* esi_14 = __outsd((edx_7 - 2).w, *esi_8, esi_8, eflags)
            __outsd((edx_7 - 2).w, *esi_14, esi_14, eflags)
            *(ecx_3 + 0x65)
            void* edx_13
            edx_13:1.b = (edx_7 - 2):1.b ^ *ecx_3
            *ecx_3 ^= (ebx.w + 2):1.b
            trap(0xd)
        
        *(ebp_1 + (ecx_3 << 3) + 0x4a) += ecx_3.b
        eax_5[1] += (&eax_5[1]).b
        eax_5.b = (&eax_5[1]).b | 0x41
        *eax_5 += ecx_3.b
        eax_5.b |= 0x41
        *(esi_8 + (ecx_3 << 3)) += ecx_3:1.b
    
    *(ebp_1 + ecx_3 + 0x41) += eax_5:1.b
    *(esi_8 + ecx_3 + 0x41) += (edx_7 - 1):1.b
    *(esi_8 + ecx_3 + 0x41) += ecx_3:1.b
    eax_5.b += ebx:1.b
    int32_t eflags_2
    char temp0_3
    char temp1_1
    temp0_3, temp1_1, eflags_2 = __aam_immb(0x4a, eax_5.b)
    eax_5.b = temp0_3
    eax_5:1.b = temp1_1
    *(esi_8 + ((edx_7 - 1) << 3)) += (edx_7 - 1).b
    *(ebp_1 + ((edx_7 - 2) << 3) + 0x4a) += eax_5.b
    eax_5.b += ecx_3:1.b
    undefined
}
