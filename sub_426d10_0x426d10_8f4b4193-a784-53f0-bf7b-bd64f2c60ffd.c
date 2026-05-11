// ============================================================
// 函数名称: sub_426d10
// 虚拟地址: 0x426d10
// WARP GUID: 8f4b4193-a784-53f0-bf7b-bd64f2c60ffd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435eac
// ============================================================

int32_t __convention("regparm")sub_426d10(char* arg1, int16_t* arg2, char arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t* arg6 @ edi, long double arg7 @ st0)
{
    // 第一条实际指令: int32_t temp1 = *arg6
    int32_t temp1 = *arg6
    *arg6 = &arg1[*arg6]
    bool c_1 = &arg1[temp1] u< temp1
    void* const* var_4 = &__return_addr
    void* const** esp = &var_4
    void* entry_ebx
    
    if (entry_ebx != 0xffffffff)
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg7 = fconvert.t(*(arg4 + 0x42)) - arg7
    else
        if (c_1)
            if (c_1)
                undefined
            
            jump(0x426d1a)
        
        *arg1 += arg1.b
        *arg1 += arg1.b
        arg1.b += (entry_ebx + 1).b
        int32_t eflags
        int16_t temp0_1
        temp0_1, arg6 = __insd(arg6, arg2.w, eflags)
        *arg6 = temp0_1
        arg2 += 1
    
    *(arg1 * 2) += arg2:1.b
    *arg1 += arg1.b
    arg7 - fconvert.t(*arg1)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    *(entry_ebx + 1) += arg2:1.b
    (entry_ebx + 1)[arg5] += (eax + 1).b
    *(eax + 2) += arg3
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp3 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp3
    
    if (temp3 s>= 0)
        void* eax_4
        eax_4.b = (&eax_3[1]).b * 2
        *eax_4 ^= eax_4.b
        *arg2
        breakpoint
    
    int32_t eflags_1
    int16_t temp0_2
    temp0_2, eflags_1 = __arpl_memw_gpr16(*(eax_3 + arg5 + 0x6e), arg5.w)
    *(eax_3 + arg5 + 0x6e) = temp0_2
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
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    eax_3[0x6e] += (entry_ebx + 1).b
    *(eax_3 * 2) += (entry_ebx + 1):1.b
    *eax_3 += eax_3.b
    uint8_t* edi
    uint8_t temp0_3
    temp0_3, edi = __insb(arg6, (&arg2[1]).w, eflags_1)
    *edi = temp0_3
    int16_t* edi_1
    int16_t temp0_4
    temp0_4, edi_1 = __insd(edi, (&arg2[1]).w, eflags_1)
    *edi_1 = temp0_4
    eax_3:1.b += (arg2 + 3):1.b
    eax_3.b ^= *eax_3
    *(entry_ebx + 1) += (arg2 + 3):1.b
    (entry_ebx + 1)[arg5] += (&eax_3[1]).b
    eax_3[2] += arg3
    char* eax_7 = &eax_3[2] ^ *(eax_3 + 2)
    eax_7.b ^= *eax_7
    char temp4 = *(fsbase + eax_7)
    *(fsbase + eax_7) ^= eax_7.b
    bool c = false
    
    if ((temp4 ^ eax_7.b) s>= 0)
        char* eax_8
        eax_8.b = (&eax_7[1]).b * 2
        *eax_8
        *eax_8 ^= eax_8.b
        *(arg2 + 3) = 0xcc004290
        void* var_8_1 = arg4
        eax_8[0x8e9c0042] = sbb.b(eax_8[0x8e9c0042], (arg2 + 3).b, false)
        eax_8:1.b *= 2
        int32_t var_4297
        *(arg2 + 4) = var_4297
        int16_t eax_9
        int32_t* edx_4
        eax_9, edx_4 = 0xf042b0dc()
        int32_t var_4293
        *edx_4 = var_4293
        char temp6_1 = eax_9:1.b
        eax_9:1.b += (edx_4 + 1):1.b
        c = temp6_1 + (edx_4 + 1):1.b u< temp6_1
        uint32_t var_428e
        *(edx_4 + 1) = var_428e
        int16_t ss
        var_428e = zx.d(ss)
        var_4293 = &var_428e
        esp = &var_4293:1
    
    *esp
    esp[1]
    esp[2]
    esp[4]
    esp[5]
    esp[6]
    esp[7]
    
    if (not(c))
        jump(sub_426e74+0x4f)
    
    jump(0x426e5e)
}
