// ============================================================
// 函数名称: sub_44b19b
// 虚拟地址: 0x44b19b
// WARP GUID: 737743a4-a4ae-5080-ac41-52b6c252d0d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44b19b(char* arg1, int16_t arg2, char* arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += 1
    int32_t eflags
    char temp0
    char temp1
    temp0, temp1, eflags = __aam_immb(0x42, arg1.b)
    arg1.b = temp0
    arg1:1.b = temp1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    *arg1 += arg1.b
    *__return_addr
    __outsb(arg2, *arg4, arg4, eflags)
    int32_t edi = *(__return_addr + 2)
    void* esi_1 = *(__return_addr + 6)
    void* ebp = *(__return_addr + 0xa)
    char* ebx = *(__return_addr + 0x12)
    char* edx = *(__return_addr + 0x16)
    int32_t* ecx = *(__return_addr + 0x1a)
    char* eax = *(__return_addr + 0x1e)
    __bound_gprv_mema32(ebp, *(ebp + 0x64))
    *eax += edx.b
    *0x5ff0002 += (&eax[1]).b
    void* eax_1
    eax_1.b = (&eax[1]).b + eax[1]
    *ecx += 1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *ecx = *ecx
    char temp2 = *eax_1
    *eax_1 += eax_1.b
    bool c = temp2 + eax_1.b u< temp2
    char* eax_2 = sbb.d(eax_1, 0x75460b00, c)
    bool o = unimplemented  {sbb eax, 0x75460b00}
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, edx.w, eflags)
    *edi_1 = temp0_1
    uint8_t* edi_2
    uint8_t temp0_2
    temp0_2, edi_2 = __insb(edi_1, edx.w, eflags)
    *edi_2 = temp0_2
    *(__return_addr + 0x1e) = edx
    
    if (not(o))
        *(esi_1 + 0x74)
        char* eax_3 = *(__return_addr + 0x1e)
        *eax_3 += eax_3.b
        jump(*(eax_3 + (edi_2 << 2) + 0x42))
    
    uint16_t* gsbase
    __outsb(edx.w, *(gsbase + esi_1), esi_1, eflags)
    
    if (sbb.d(eax_1, 0x75460b00, c) != 0)
        *(ecx + (ebp << 1) + 0x4d)
        char* eax_4 = *(ecx + (ebp << 1) + 0x4d) * 0x65646f
        bool c_1 = unimplemented  {imul eax, dword [ecx+ebp*2+0x4d], 0x65646f}
        *eax_4 = adc.b(*eax_4, eax_4.b, c_1)
        *eax_4 += eax_4.b
        undefined
    
    *eax_2 += eax_2.b
    *edx += eax_2:1.b
    char temp4 = *ebx
    *ebx += ecx.b
    bool c_2 = temp4 + ecx.b u< temp4
    bool z_1 = temp4 == neg.b(ecx.b)
    *(__return_addr + 0x1a) = eax_2
    *(__return_addr + 0x1a)
    uint16_t* esi_3 = *(__return_addr + 0x1e)
    *(__return_addr + 0x22)
    *(__return_addr + 0x2a)
    int16_t edx_2 = (*(__return_addr + 0x2e)).w
    *(__return_addr + 0x32)
    char* eax_5 = *(__return_addr + 0x36)
    
    if (c_2)
        *eax_5 += eax_5.b
        eax_5[0x80000000] += eax_5.b
        __outsb(edx_2, *(gsbase + esi_3), esi_3, eflags)
        
        if ((eax_5 & 0x6f500900) != 0)
            jump(0x44b303)
        
        jump(0x44b303)
    
    __outsb(edx_2, *esi_3, esi_3, eflags)
    
    if (not(z_1))
        if (z_1)
            jump(0x44b2fa)
        
        jump(0x44b28e)
    
    int16_t cs
    *(__return_addr + 0x36) = zx.d(cs)
    *(__return_addr + 0x32) = eax_5
    *(__return_addr + 0x32)
    *(__return_addr + 0x36)
    *(__return_addr + 0x3a)
    *(__return_addr + 0x42)
    *(__return_addr + 0x46)
    *(__return_addr + 0x4a)
    *(__return_addr + 0x4e)
    
    if (c_2)
        undefined
    
    jump("ntShowHint")
}
