// ============================================================
// 函数名称: sub_4aca53
// 虚拟地址: 0x4aca53
// WARP GUID: bc3d2cfb-efdc-59af-846e-b431851c066d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4aca76
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aca53(char* arg1, int32_t arg2, char* arg3, char* arg4 @ esi, char* arg5 @ edi, long double arg6 @ st0)
{
    // 第一条实际指令: *(arg1 * 2) += arg3.b
    *(arg1 * 2) += arg3.b
    *(arg3 * 9 + 0x4a) += arg1.b
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg4) += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp0 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp0
    
    if (temp0 s>= 0)
        int32_t ebp
        return sub_4aca76(eax_2, arg2, arg3, ebp, arg4) __tailcall
    
    char temp1 = eax_2.b
    char temp2 = eax_2.b
    eax_2.b *= 2
    bool p = unimplemented  {add al, al}
    bool a = unimplemented  {add al, al}
    *(arg2 - 1)
    int32_t var_4 = (add_overflow(temp1, temp2) ? 1 : 0) << 0xb | (temp1 + temp2 s< 0 ? 1 : 0) << 7
        | (temp1 == neg.b(temp2) ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
        | (temp1 + temp2 u< temp1 ? 1 : 0)
    int32_t eflags
    int32_t eflags_1
    int32_t eip
    eip, eflags_1 = __into(eflags)
    *arg4 += arg3.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(arg2 - 2) += eax_2.b
    *eax_2 += eax_2.b
    *(eax_2 + arg2 - 2 + &__dos_stub) += entry_ebx:1.b
    char temp3 = *eax_2
    *eax_2 += eax_2.b
    eax_2.b = sbb.b(eax_2.b, 0xca, temp3 + eax_2.b u< temp3)
    *eax_2 += arg3.b
    char temp4 = *eax_2
    *eax_2 += eax_2.b
    *(arg3 * 3 + 0x64) = adc.b(*(arg3 * 3 + 0x64), ((arg2 - 2).w - 1).b, temp4 + eax_2.b u< temp4)
    uint16_t* esi = __outsd((arg2 - 2).w - 1, *arg4, arg4, eflags_1)
    uint16_t* esi_2 = __outsd((arg2 - 2).w - 1, *esi, esi, eflags_1) + 1
    int16_t ebx_1
    ebx_1:1.b = (entry_ebx.w + 2):1.b ^ *arg3
    int32_t eax_3 = eax_2 ^ 0x4acae090
    char temp5 = *arg5
    *arg5 += eax_3.b
    *(arg3 * 3 + 0x64) = adc.b(*(arg3 * 3 + 0x64), ((arg2 - 2).w - 1).b, temp5 + eax_3.b u< temp5)
    uint16_t* esi_3 = __outsd((arg2 - 2).w - 1, *esi_2, esi_2, eflags_1)
    __outsd((arg2 - 2).w - 1, *esi_3, esi_3, eflags_1)
    *(arg3 + 0x65)
    int16_t ebx_3
    ebx_3:1.b = (ebx_1 + 2):1.b ^ *arg3
    undefined
}
