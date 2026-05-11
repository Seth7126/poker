// ============================================================
// 函数名称: sub_4532a0
// 虚拟地址: 0x4532a0
// WARP GUID: cfa4d209-ab0c-5708-91de-f12a658e5f55
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4532a0(char* arg1, char* arg2, int32_t arg3, char* arg4 @ ebp, char* arg5 @ esi, char* arg6 @ edi, void* arg7, char* arg8, char* arg9, int32_t arg10, char* arg11)
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
    *arg1 += arg1.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    *arg4
    arg1.b ^= *arg4
    *arg1 = sbb.b(*arg1, arg1.b, false)
    *arg1 += arg1.b
    arg1.b ^= 0x78
    int32_t ecx = arg3 + 1
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += ecx.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp3 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp3
    char* eax_6
    char* __return_addr_1
    void* edi
    
    if (temp3 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *arg6 = *arg5
        edi = &arg6[1]
        __return_addr_1 = &arg5[1]
        eax_6 = (eax_2 ^ *arg4) + 1
        *eax_6 += eax_6.b
        eax_6[0xf4004176] += ecx:1.b
        goto label_453325
    
    *(arg4 + arg5 + 0x45) += arg2:1.b
    *(arg4 + arg5 + 0x54090045) += (&eax_2[1]):1.b
    edi = &eax_2[1]
    __return_addr_1 = __return_addr
    entry_ebx = arg8
    arg2 = arg9
    int32_t ecx_1 = arg10
    char* eax_4 = arg11
    void arg_1d
    void* esp_1 = &arg_1d
    int32_t var_4
    void* esp
    
    if (&var_4 == 0xffffffff)
        *(__return_addr_1 + edi + 0x45) += ecx_1.b
    label_45335b:
        *(__return_addr_1 + edi + 0x45) += ecx_1:1.b
        *eax_4 += eax_4.b
        esp = esp_1 + 1
        *(esp + (eax_4 << 1) + 0x442c0045) += arg2.b
        eax_4:1.b += arg2:1.b
        arg2.b = 0x41
    else
        void arg_1e
        esp = &arg_1e
        eax_6 = eax_4 ^ *arg7
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        eax_6:1.b = 0x33
        arg4 = arg7 + 1
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        *(entry_ebx + __return_addr_1 + 0x400045) += 0x33
        *eax_6 += eax_6.b
        ecx = ecx_1 + 1
        eax_6:1.b = 0x33 + arg2:1.b
    label_453325:
        eax_6.b ^= *eax_6
        *entry_ebx += arg2:1.b
        *(entry_ebx + __return_addr_1) += (&eax_6[1]).b
        eax_6[2] += ecx.b
        eax_4 = &eax_6[2] ^ *(eax_6 + 2)
        eax_4.b ^= *eax_4
        char temp5_1 = *(fsbase + eax_4) ^ eax_4.b
        *(fsbase + eax_4) = temp5_1
        
        if (temp5_1 s>= 0)
            *(__return_addr_1 * 2) += entry_ebx.b
            eax_4.b = (&eax_4[1]).b + (&eax_4[1]):1.b
            eax_4[0xffffffb1] += eax_4:1.b
            ecx_1 = ecx + 1
            eax_4[0x36] += eax_4:1.b
            eax_4[0xc4004535] += ecx_1:1.b
            arg4[3]
            esp_1 = esp - 1
            goto label_45335b
        
        ecx_1 = ecx + 1
    
    eax_4.b *= 2
    eax_4[0x40004545] += ecx_1.b
    eax_4[0xdc004547] += ecx_1.b
    entry_ebx.b = 0x41
    eax_4.b += eax_4:1.b
    *eax_4 += ecx_1:1.b
    void* eax_10
    eax_10.b = (eax_4 - 1).b + entry_ebx:1.b
    arg2.b = 0x41
    *(eax_10 + 0x1c0041b3) += eax_10.b
    *(edi + 2 + (eax_10 << 1)) += 0x41
    eax_10:1.b += entry_ebx:1.b
    eax_10.b += ecx_1:1.b
    *arg2 += ecx_1.b
    *(esp - 2) = esp + 2
    *(esp - 6) = eax_10
    int32_t* edi_4
    int32_t temp0_1
    temp0_1, edi_4 = __insd(edi + 3, arg2.w - 1, eflags)
    *edi_4 = temp0_1
    char* edi_5 = *(esp - 6)
    int32_t edx_1 = *(esp + 0xe)
    int32_t ecx_2 = *(esp + 0x12)
    *(esp + 0x16)
    *edi_5 += 0x33
    edx_1.b |= *(edx_1 + (ecx_2 << 1) + 0x50)
    int32_t* edi_7
    int32_t temp0_2
    temp0_2, edi_7 = __insd(&edi_5[1], edx_1.w, eflags)
    *edi_7 = temp0_2
    *(esp + 0x1a)
    int32_t esi = *(esp + 0x1e)
    int32_t ebp_4 = *(esp + 0x22)
    int32_t ebx = *(esp + 0x2a)
    int32_t edx_2 = *(esp + 0x2e)
    *(esp + 0x32)
    int32_t eax_13 = *(esp + 0x36) ^ *ebp_4
    *(esp + 0x37) = 0x4177
    char temp6 = *(edx_2 + (ebp_4 << 1))
    *(edx_2 + (ebp_4 << 1)) += eax_13.b
    
    if (not(add_overflow(temp6, eax_13.b)))
        *(ebx + esi) += eax_13.b
        return sub_4533d4() __tailcall
    
    int32_t result = (*(ebx + 4))()
    *(esp + 0x37)
    *(esp + 0x3b)
    return result
}
