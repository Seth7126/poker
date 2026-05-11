// ============================================================
// 函数名称: sub_48fbf4
// 虚拟地址: 0x48fbf4
// WARP GUID: 9b4f805d-3925-5e94-b80a-d31eaa3a95b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_48fbf4(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0)
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
    *(arg1 - 4) += arg1.b
    *((arg1 - 1) * 2) += (arg1 - 1).b
    *(arg1 - 1) += (arg1 - 1).b
    arg7 f- fconvert.t(*(arg1 - 1))
    void* eax_2
    eax_2:1.b = arg1:1.b + arg2:1.b
    eax_2.b ^= *eax_2
    char* entry_ebx
    *entry_ebx += arg2:1.b
    entry_ebx[arg5] += (eax_2 + 1).b
    *(eax_2 + 2) += arg3.b
    char* eax_5 = (eax_2 + 2) ^ *(eax_2 + 2)
    eax_5.b ^= *eax_5
    TEB* fsbase
    char temp1 = *(fsbase + eax_5) ^ eax_5.b
    *(fsbase + eax_5) = temp1
    char* eax_7
    
    if (temp1 s< 0)
        *eax_5 += eax_5.b
        eax_7 = sx.d(eax_5.w) - 1
        *eax_7 += arg2.b
    else
        void* eax_6
        eax_6.b = (&eax_5[1]).b * 2
        *eax_6 ^= eax_6.b
        arg2.b |= *(arg3 * 3 + 0x53)
        __bound_gprv_mema32(arg4, *(arg2 + 0x65))
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(eax_6 + (arg2 << 2) - 0x68), arg5.w)
        *(eax_6 + (arg2 << 2) - 0x68) = temp0_1
        eax_7 = eax_6 - 1
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        *eax_7 += eax_7.b
        eax_7[0x100048fc] += entry_ebx.b
    
    *eax_7 += eax_7.b
    char temp2 = eax_7.b
    eax_7.b += entry_ebx.b
    
    if (temp2 s< neg.b(entry_ebx.b))
        undefined
    
    jump(0x48fc77)
}
