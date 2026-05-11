// ============================================================
// 函数名称: sub_43fc69
// 虚拟地址: 0x43fc69
// WARP GUID: 4ed3a776-2277-5d7f-8118-d65813890ef8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43fc69(char* arg1, int16_t arg2, char* arg3, uint16_t* arg4 @ esi)
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
    *arg1 &= arg1.b
    *__return_addr
    __outsb(arg2, *arg4, arg4, eflags)
    int32_t edi = *(__return_addr + 2)
    char* esi_1 = *(__return_addr + 6)
    void* ebp = *(__return_addr + 0xa)
    int32_t ebx = *(__return_addr + 0x12)
    void* edx = *(__return_addr + 0x16)
    char* ecx = *(__return_addr + 0x1a)
    char* eax = *(__return_addr + 0x1e)
    __bound_gprv_mema32(ebp, *(ebp + 0x64))
    *eax += edx.b
    *ecx += ecx.b
    char temp1_1 = ebx:1.b
    char temp2 = ebx:1.b
    ebx:1.b *= 2
    bool p = unimplemented  {add bh, bh}
    bool a = unimplemented  {add bh, bh}
    bool d
    *(__return_addr + 0x1e) = (add_overflow(temp1_1, temp2) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (temp1_1 + temp2 s< 0 ? 1 : 0) << 7 | (temp1_1 == neg.b(temp2) ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (temp1_1 + temp2 u< temp1_1 ? 1 : 0)
    *0x10042 += 0x42
    *0x10042 += 0x42
    *0x10042 += 0x42
    *0x10042 &= 0x10042
    char temp3 = edx.b
    edx.b |= *0x100a3
    bool z_1 = (temp3 | *0x100a3) == 0
    esi_1 = __outsb(edx.w, *esi_1, esi_1, eflags)
    
    if (z_1)
        *(__return_addr + 0x1a) = __return_addr + 0x1e
        *0x10042 = adc.b(*0x10042, 0x42, false)
        ebx:1.b *= 2
        *edi
        edi += 4
        edx += 1
        *0x10042 += 0x42
        *0x10042 += 0x42
        *0x10042 = *0x10042
    else
        uint16_t* esi_2 = __outsd(edx.w, *esi_1, esi_1, eflags)
        esi_1 = __outsb(edx.w, *esi_2, esi_2, eflags)
        
        if (not(z_1))
            *0x10042 += ebx.b
            ebx:1.b *= 2
            *0xb8740042 += 0x42
            *0xb8740042 += 0x42
            *0xb8740042 = *0xb8740042
            char temp10 = *0xfe780064
            *0xfe780064 += 0x42
            uint16_t* esi_3 = __outsd(edx.w + 1, *esi_1, esi_1, eflags)
            __outsb(edx.w + 1, *esi_3, esi_3, eflags)
            
            if (temp10 != 0xbe)
                jump(0x43fcc8)
            
            *0x70e80084 += ecx.b
            undefined
    
    *0x48070047 += 0x10042
    int32_t gsbase
    *(gsbase + edi + 0x68)
    *(edx + 0x10042) += 0x10042
    ebx:1.b *= 2
    ebx:1.b *= 2
    *0x10002 += 0x10002
    *0x10002 += 2
    *0x10002 += 2
    *0x80010002 += 2
    *0x10065
    *0x10065 |= ecx.b
    uint8_t* edi_1
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, edx.w, eflags)
    *edi_1 = temp0_1
    int32_t ebp_1 = *(ebp - 0x78) * 0xf00043e5
    *0x10000 += 0x10000
    jump(*(ebp_1 + ebx + 0x3bb40044))
}
