// ============================================================
// 函数名称: sub_51859c
// 虚拟地址: 0x51859c
// WARP GUID: 57f8ac9a-ca25-52ff-b99b-7f12985caccd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a1c0, sub_403010
// [被调用的父级函数]: sub_5223e8, sub_4c5eb0
// ============================================================

int32_t __convention("regparm")sub_51859c(char* arg1, int32_t arg2, char* arg3, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: int16_t cs
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    char* edx = arg2 | *(arg6 + (arg1 << 1) + 0x61)
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg6, edx.w, eflags)
    *edi = temp0
    char* var_8 = edx
    int32_t* esp_1 = &var_8
    
    if (edx u>= 0)
        goto label_51861c
    
    uint8_t temp0_1
    temp0_1, edi = __insb(edi, edx.w, eflags)
    *edi = temp0_1
    char* entry_ebx
    
    if (edx != 0)
        *arg1 += arg1.b
        *edx += arg1.b
        *arg1 += arg1.b
        *(arg1 + edx + 0x380040) += entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg4 - 0x79efffc0) += arg3.b
        *0x3c00400c = arg3
        esp_1 = 0x3c00400c
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
        char temp2_1 = *arg1
        *arg1 += edx.b
        bool c_1 = temp2_1 + edx.b u< temp2_1
        char temp0_2 = *arg3
        *arg3 = edx.b
        edx.b = temp0_2
        *arg5 = sbb.b(*arg5, arg1.b, c_1)
    
    void* eax = &arg1[*arg1]
    arg7 f- fconvert.t(*eax)
    void* eax_1
    eax_1:1.b = (eax + 1):1.b + edx:1.b
    eax_1.b ^= *eax_1
    *entry_ebx += edx:1.b
    *(entry_ebx + arg5) += (eax_1 + 1).b
    *(eax_1 + 2) += arg3.b
    arg1 = (eax_1 + 2) ^ *(eax_1 + 2)
    arg1.b ^= *arg1
    TEB* fsbase
    char temp5_1 = *(fsbase + arg1) ^ arg1.b
    *(fsbase + arg1) = temp5_1
    
    if (temp5_1 s>= 0)
        arg1.b = (&arg1[1]).b * 2
        *arg1 ^= arg1.b
        edx = &edx[*(entry_ebx + (arg1 << 1) + 0x47)]
        *(esp_1 - 4) = arg1
        *(esp_1 - 8) = arg3
        *(esp_1 - 0xc) = edx
        *(esp_1 - 0x10) = entry_ebx
        *(esp_1 - 0x14) = esp_1 - 0x10
        *(esp_1 - 0x18) = arg4
        *(esp_1 - 0x1c) = arg5
        *(esp_1 - 0x20) = edi
        esp_1 -= 0x20
        char temp0_3 = *arg3
        *arg3 = edx.b
        edx.b = temp0_3
        *arg1 += arg1.b
        *arg1 += arg1.b
    label_51861c:
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
        *(esp_1 - 4) = arg1
        *(esp_1 - 8) = arg3
        *(esp_1 - 0xc) = edx
        *(esp_1 - 0x10) = entry_ebx
        *(esp_1 - 0x14) = esp_1 - 0x10
        *(esp_1 - 0x18) = arg4
        *(esp_1 - 0x1c) = arg5
        *(esp_1 - 0x20) = edi
        esp_1 -= 0x20
        char temp0_4 = *arg3
        *arg3 = edx.b
        edx.b = temp0_4
        arg1.b = 0xb6
    
    *arg1 = &arg1[*arg1]
    arg7 f- fconvert.t(*arg1)
    char* eax_4
    eax_4:1.b = (&arg1[1]):1.b + edx:1.b
    eax_4.b ^= *eax_4
    *entry_ebx += edx:1.b
    *(entry_ebx + arg5) += (&eax_4[1]).b
    eax_4[2] += arg3.b
    char** eax_7 = &eax_4[2] ^ *(eax_4 + 2)
    eax_7.b ^= *eax_7
    char temp1_1 = *(fsbase + eax_7) ^ eax_7.b
    *(fsbase + eax_7) = temp1_1
    
    if (temp1_1 s>= 0)
        void* eax_8
        eax_8.b = (eax_7 + 1).b * 2
        *eax_8 ^= eax_8.b
        *(entry_ebx + (edx << 1) + 0x43)
        *(entry_ebx + (edx << 1) + 0x43) |= edx
        *(esp_1 - 4) = edx
        *(esp_1 - 4)
        *esp_1
        arg4 = esp_1[1]
        entry_ebx = esp_1[3]
        esp_1[4]
        esp_1[5]
        esp_1[6]
        esp_1 = &esp_1[7]
        *(arg4 - 0x75) = rlc.b(*(arg4 - 0x75), 0xec, false)
        *(esp_1 - 4) = entry_ebx
        esp_1 -= 4
        eax_7 = data_530304
        edx = data_5302c8
        *edx
        arg3 = *edx * 0x1038
        bool o_1 = unimplemented  {imul ecx, dword [edx], 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        entry_ebx = *eax_7
    
    *(*(entry_ebx + 0xab0) + (arg3 << 3) + 0x27) = 1
    *edx
    bool o_2 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    void* ebx_3 = data_53098c
    *ebx_3
    bool o_3 = unimplemented  {imul ebx, dword [ebx], 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + *ebx_3 * 0x118 - 0xa) = 0
    *edx
    bool o_4 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + 6) = 0x280
    *edx
    bool o_5 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_5)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + 2) = 0x50
    *edx
    bool o_6 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_6)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + 8) = 0x1f4
    *edx
    bool o_7 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_7)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + 4) = 0x32
    *edx
    bool o_8 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_8)
        sub_403010()
        noreturn
    
    void* ebx_15 = data_53098c
    *ebx_15
    bool o_9 = unimplemented  {imul ebx, dword [ebx], 0x23}
    
    if (o_9)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + *ebx_15 * 0x118 - 0x9c) = 0x244
    *edx
    bool o_10 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_10)
        sub_403010()
        noreturn
    
    void* ebx_19 = data_53098c
    *ebx_19
    bool o_11 = unimplemented  {imul ebx, dword [ebx], 0x23}
    
    if (o_11)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + *ebx_19 * 0x118 - 0x98) = 0xb4
    *edx
    bool o_12 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_12)
        sub_403010()
        noreturn
    
    void* ebx_23 = data_530964
    *ebx_23
    bool o_13 = unimplemented  {imul ebx, dword [ebx], 0x23}
    
    if (o_13)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + *ebx_23 * 0x118 - 0xf4) = 0x181
    *edx
    bool o_14 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_14)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + 0x13c) = 0x1b8
    *edx
    bool o_15 = unimplemented  {imul ecx, dword [edx], 0x1038}
    
    if (o_15)
        sub_403010()
        noreturn
    
    *(*(*eax_7 + 0xab0) + *edx * 0x81c0 + 0x13a) = 0xe6
    *(esp_1 - 4) = 1
    int32_t result = sub_47a1c0(*data_52fffc, *edx, *eax_7)
    *esp_1
    esp_1[1]
    return result
}
