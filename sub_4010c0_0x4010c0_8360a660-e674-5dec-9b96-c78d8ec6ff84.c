// ============================================================
// 函数名称: sub_4010c0
// 虚拟地址: 0x4010c0
// WARP GUID: 8360a660-e674-5dec-9b96-c78d8ec6ff84
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFileA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d8c4, sub_40e4c0, sub_44ce65, sub_49e018, sub_466e1b, sub_4673b7, sub_4a3628, sub_4b1dec, sub_4b65f8, sub_44cf07, sub_4d88f8, sub_518320, sub_4ade94, sub_44ceef, sub_4ec7d7, sub_49eb18
// ============================================================

int32_t __convention("regparm")sub_4010c0(void* arg1, int32_t arg2, int32_t arg3, char* arg4 @ esi, void* arg5 @ edi, int80_t arg6 @ st0, int16_t arg7)
{
    // 第一条实际指令: arg1.b |= *arg4
    arg1.b |= *arg4
    void* entry_ebx
    void* var_4 = entry_ebx
    void* var_8
    
    if (arg1.b != 0)
        void* ebp_1 = *(arg4 + 0x67) * 0x4010cc
        char* ecx = arg3 | *arg2
        var_8 = arg5
        *(ebp_1 + 0x53)
        arg1.b &= 0x11
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        ecx[arg2] += (arg1 + 1):1.b
        *((arg1 + 2) * 2) += (arg1 + 2).b
        *(arg1 + 2) += (arg1 + 2).b
        *(arg1 + 2) += (arg1 + 2).b
        *(arg1 + 2) += (arg1 + 2).b
        trap(0xd)
    
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(arg7, arg4.w)
    arg7 = temp0
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    char temp1 = *arg4
    *arg4 += (arg1 + 1).b
    var_8 = entry_ebx
    void* ebp
    
    if (temp1 + (arg1 + 1).b s< 0)
        if (temp1 != neg.b((arg1 + 1).b))
            int16_t* edi
            int16_t temp0_1
            temp0_1, edi = __insd(arg5, arg2.w, eflags)
            *edi = temp0_1
            char temp2 = *(arg1 + 1)
            *(arg1 + 1) += (arg1 + 1).b
            char* var_c = arg1 + 1
            *(arg1 + 1) = adc.d(*(arg1 + 1), arg1 + 1, temp2 + (arg1 + 1).b u< temp2)
            __invd()
            void* var_10 = ebp
            uint16_t* esi = __outsb(arg2.w, *arg4, arg4, eflags)
            *(esi + 0x6f)
            int32_t esi_1 = __outsb(arg2.w, *esi, esi, eflags)
            *(arg1 + 1) += (arg1 + 1).b
            *(arg1 + 1) += (arg1 + 1).b
            *(arg1 + 1) = &(arg1 + 1)[*(arg1 + 1)]
            *(arg1 + 1) += (arg1 + 1).b
            *(arg1 + 1) += (arg1 + 1).b
            *(arg1 + 1) += (arg1 + 1).b
            char* eax_2
            eax_2.b = (arg1 + 1).b * 2
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            *eax_2 += eax_2.b
            int16_t es
            uint32_t var_14 = zx.d(es)
            void* var_18 = entry_ebx
            
            if (esi_1 + 1 s>= 0)
                jump(0x4011e6)
            
            jump(0x401173)
        
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) = rol.b(*(arg1 + 1), 0)
        *(arg1 + 1) += (arg1 + 1).b
        *(arg1 + 1) += (arg1 + 1).b
        arg4 = &arg4[1]
    
    char* eax_3
    int32_t ecx_2
    char* edx
    eax_3, edx, ecx_2 = 0x84051d2()
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *(entry_ebx + 0x401214c0) += ecx_2.b
    arg4[0x4011] += eax_3:1.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *(edx * 2) += edx.b
    *(&eax_3[1] * 2) += ecx_2.b
    eax_3[1] += (&eax_3[1]).b
    arg6 f- fconvert.t(*(eax_3 + 1))
    void* eax_5
    eax_5:1.b = (&eax_3[2]):1.b + edx:1.b
    eax_5.b ^= *eax_5
    eax_5.b = *arg4
    void* ebx = var_8
    *(eax_5 + 0x800405c) += ebx:1.b
    char* eax_7 = (eax_5 + 1) ^ *(eax_5 + 1)
    eax_7.b ^= *eax_7
    var_8 = ebp
    
    if (eax_7.b s< 0)
        return CreateFileA() __tailcall
    
    void* eax_8
    eax_8.b = (&eax_7[1]).b * 2
    *eax_8
    *eax_8 ^= eax_8.b
    int32_t temp5 = adc.d(*(ecx_2 * 3 + 0x6e), edx, false)
    *(ecx_2 * 3 + 0x6e) = temp5
    
    if (temp5 != 0)
        jump(0x40121a)
    
    ebx:1.b s>>= 0x25
    *(ebx - 0x7da0040) += 0x7a
    *(ebx - 0xbda0040) += 0x7a
    *(ebx - 0xfda0040) += 0x7a
    *(ebx + 0x3425ffc0) += 0x7a
    *(ebx - 0x13da0040) += 0x7a
    *(ebx - 0x17da0040) += 0x7a
    *(ebx - 0x1bda0040) += 0x7a
    *(ebx + 0x3025ffc0) += 0x7a
    *(ebx - 0x1fda0040) += 0x7a
    *(ebx - 0x23da0040) += 0x7a
    *(ebx - 0x27da0040) += 0x7a
    *(ebx - 0x2bda0040) += 0x7a
    *(ebx - 0x2fda0040) += 0x7a
    *(ebx - 0x33da0040) += 0x7a
    *(ebx - 0x37da0040) += 0x7a
    *(ebx - 0x3bda0040) += 0x7a
    *(ebx - 0x3fda0040) += 0x7a
    *(ebx - 0x43da0040) += 0x7a
    *(ebx - 0x47da0040) += 0x7a
    *(ebx - 0x4bda0040) += 0x7a
    *(ebx - 0x4fda0040) += 0x7a
    *(ebx + 0x2c25ffc0) += 0x7a
    *(ebx - 0x53da0040) += 0x7a
    *(ebx - 0x57da0040) += 0x7a
    *(ebx - 0x5bda0040) += 0x7a
    *(ebx - 0x5fda0040) += 0x7a
    *(ebx + 0x4425ffc0) += 0x7a
    *(ebx + 0x4025ffc0) += 0x7a
    *(ebx + 0x3c25ffc0) += 0x7a
    *(ebx - 0x63da0040) += 0x7a
    *(ebx - 0x67da0040) += 0x7a
    *(ebx - 0x6bda0040) += 0x7a
    *(ebx + 0x6425ffc0) += 0x7a
    *(ebx + 0x6025ffc0) += 0x7a
    *(ebx + 0x5c25ffc0) += 0x7a
    *(ebx + 0x5825ffc0) += 0x7a
    *(ebx + 0x5425ffc0) += 0x7a
    *(ebx + 0x5025ffc0) += 0x7a
    *(ebx + 0x4c25ffc0) += 0x7a
    *(ebx - 0x6fda0040) += 0x7a
    *(ebx - 0x73da0040) += 0x7a
    *(ebx - 0x3b7cac40) += 0x7a
    *(eax_8 + (&var_8 << 3) + 0x39) += 0x7a
    undefined
}
