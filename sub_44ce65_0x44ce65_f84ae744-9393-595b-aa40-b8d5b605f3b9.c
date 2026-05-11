// ============================================================
// 函数名称: sub_44ce65
// 虚拟地址: 0x44ce65
// WARP GUID: f84ae744-9393-595b-aa40-b8d5b605f3b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalDeleteAtom
// [内部子函数调用]: sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44ce65(char* arg1, uint16_t arg2, void* arg3 @ esi, int32_t arg4 @ edi, char* arg5, uint16_t* arg6, int16_t* arg7, char** arg8, char* arg9)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x6f) += arg1:1.b
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg4, arg2, eflags)
    *edi = temp0
    int16_t* edi_1
    int16_t temp0_1
    temp0_1, edi_1 = __insd(edi, arg2, eflags)
    *edi_1 = temp0_1
    uint8_t* edi_2
    uint8_t temp0_2
    temp0_2, edi_2 = __insb(edi_1, arg2, eflags)
    *edi_2 = temp0_2
    void* const __return_addr_1 = __return_addr
    __return_addr = &data_706c65
    *arg1 += arg1.b
    *(entry_ebx + 0x6f) += arg1:1.b
    int16_t* edi_3
    int16_t temp0_3
    temp0_3, edi_3 = __insd(__return_addr_1, arg2, eflags)
    *edi_3 = temp0_3
    int16_t* edi_4
    int16_t temp0_4
    temp0_4, edi_4 = __insd(edi_3, arg2, eflags)
    *edi_4 = temp0_4
    uint8_t* edi_5
    uint8_t temp0_5
    temp0_5, edi_5 = __insb(edi_4, arg2, eflags)
    *edi_5 = temp0_5
    *(arg3 + 0x65)
    bool c = unimplemented  {imul ebp, dword [esi+0x64], 0x6c706552}
    char** arg_14
    char** ebx = arg_14
    char** edx = arg8
    char* arg_1c
    char* ecx = arg_1c
    char* eax = arg9
    void arg_24
    int32_t eflags_1
    int16_t temp0_6
    temp0_6, eflags_1 = __arpl_memw_gpr16(*arg7, &arg_24)
    *arg7 = temp0_6
    arg9 = arg5
    __outsb(edx.w, *arg6, arg6, eflags_1)
    arg_1c = eax
    int32_t* esp_1 = &arg_1c
    TEB* fsbase
    
    if (c)
        *eax += eax.b
        *eax += ecx:1.b
        arg8 = &arg_1c
        arg_14 = j_sub_4037f0
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        esp_1 = &ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
    else
        int32_t eflags_2
        int16_t temp0_7
        temp0_7, eflags_2 = __arpl_memw_gpr16(*(eax + 0x74), edx.w)
        *(eax + 0x74) = temp0_7
        
        if (not(c))
            int32_t cs
            eax[0x25 + cs]
            eax[cs]
            *arg5 += ecx.b
            *eax += eax.b
            eax[0xffffffeb] += ecx.b
            arg8 = edx
            eax[0xffffffff] += eax:1.b
            arg_14 = edx
            esp_1 = &arg_14
            *eax += eax.b
            *eax += eax.b
            *(&ebx[arg7 * 2] + 0x52) += eax.b
            *(arg7 + eax + 0x53) += ebx.b
            *eax += eax.b
        
        *(ecx * 5 + 0x20) ^= (&eax[1]):1.b
    
    int32_t temp2 = data_53181c
    data_53181c += 1
    
    if (temp2 == 0xffffffff)
        if (data_52eac8 != 0)
            void* eax_1
            eax_1.w = data_52eac8
            *(esp_1 - 4) = eax_1
            GlobalDeleteAtom()
        
        sub_404780(&data_52eaf4, sub_4010c0, 0xb)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = &data_44cfb1
    return 0
}
