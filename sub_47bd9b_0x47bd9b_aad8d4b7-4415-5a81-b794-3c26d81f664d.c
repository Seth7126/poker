// ============================================================
// 函数名称: sub_47bd9b
// 虚拟地址: 0x47bd9b
// WARP GUID: aad8d4b7-4415-5a81-b794-3c26d81f664d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4030d0, sub_40b4b0, sub_47be18, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_47bd9b(int32_t arg1, void* arg2, int32_t arg3, void* arg4 @ ebp, int32_t arg5 @ esi)
{
    // 第一条实际指令: *0x3e000000 -= 1
    *0x3e000000 -= 1
    void* const __return_addr_1 = __return_addr
    __return_addr = arg2
    *(arg1 - 1) += (arg1 - 1).b
    *(arg4 - 0x73) += arg2.b
    int32_t eflags
    char* eax
    eax.b = __in_al_dx(arg2.w, eflags)
    int32_t var_7 = arg3 - 2
    int32_t var_f = arg5 - 1
    void* const __return_addr_2 = __return_addr_1
    *(arg4 - 2) = arg2
    sub_40422c(*(arg4 - 2))
    void* var_17 = arg4 + 2
    int32_t (* var_1b)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    int32_t* eax_2 = sub_40b4b0(0x407d24, edx, *(arg4 - 2))
    void* ebp_2 = sub_47be18(eax, __return_addr_1, eax_2)
    sub_4030d0(eax_2)
    int32_t entry_ebx
    fsbase->NtTib.ExceptionList = entry_ebx - 1
    __return_addr = sub_47be12
    sub_403df8(ebp_2 - 4)
    return ebp_2 - 4
}
