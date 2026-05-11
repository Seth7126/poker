// ============================================================
// 函数名称: sub_4fc366
// 虚拟地址: 0x4fc366
// WARP GUID: 53111b9c-ee95-5f2e-9002-891e5d146523
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4fc366(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, char* arg5 @ edi, long double arg6 @ st0) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    *arg5 += entry_ebx:1.b
    char temp0 = entry_ebx:1.b
    entry_ebx:1.b = entry_ebx:1.b
    entry_ebx:1.b = temp0
    int32_t eflags
    int32_t eflags_1
    char temp0_1
    char temp1
    temp0_1, temp1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags)
    arg1.b = temp0_1
    arg1:1.b = temp1
    *arg1 += arg1.b
    *(arg5 + (arg3 << 2) - 0x3e) -= entry_ebx
    arg5[(arg3 << 2) - 5] -= entry_ebx.b
    int32_t eflags_2
    char temp0_2
    char temp1_1
    temp0_2, temp1_1, eflags_2 = __aas(arg1.b, arg1:1.b, eflags_1)
    arg1.b = temp0_2
    arg1:1.b = temp1_1
    *arg1 += arg1.b
    arg5[(arg3 << 2) - 0x3e] -= entry_ebx.b
    int32_t eflags_4
    char temp0_3
    char temp1_2
    temp0_3, temp1_2, eflags_4 = __aas(arg1.b, arg1:1.b, __sti(eflags_2))
    arg1.b = temp0_3
    arg1:1.b = temp1_2
    *arg1 += arg1.b
    char* eax
    char ecx
    eax, ecx = 0x99e95d30()
    long double st0
    bool c2
    st0, c2 = __fcos(arg6)
    int32_t eflags_5
    char temp0_4
    char temp1_3
    temp0_4, temp1_3, eflags_5 = __aas(eax.b, eax:1.b, eflags_4)
    eax.b = temp0_4
    eax:1.b = temp1_3
    *eax += eax.b
    arg4 ^ *entry_ebx ^ *entry_ebx ^ *entry_ebx
    *(entry_ebx + 0x3ffd)
    eax[0x999a43f8] += eax.b
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(eax)
    int32_t eax_2
    int32_t edx_2
    edx_2:eax_2 = sx.q(eax_1)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(eax_2)
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = sx.q(eax_3)
    int32_t eax_5
    int32_t edx_5
    edx_5:eax_5 = sx.q(eax_4)
    char* eax_6
    int32_t edx_6
    edx_6:eax_6 = sx.q(eax_5)
    int32_t eflags_6
    char temp0_5
    char temp1_4
    temp0_5, temp1_4, eflags_6 = __aas(eax_6.b, eax_6:1.b, eflags_5)
    eax_6.b = temp0_5
    eax_6:1.b = temp1_4
    *eax_6 += eax_6.b
    eax_6.b = 3
    __out_immb_oeax(0x8c, eax_6, eflags_6)
    breakpoint
}
