// ============================================================
// 函数名称: sub_493edf
// 虚拟地址: 0x493edf
// WARP GUID: 45ca3334-ffb1-5bf4-a48f-050c701318c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_493edf(int32_t arg1, int16_t arg2, void* arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi)
{
    // 第一条实际指令: int32_t eflags_1
    int32_t eflags_1
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg3 + 0x6c), &__return_addr)
    *(arg3 + 0x6c) = temp0_1
    int32_t ebx
    int32_t var_4 = ebx
    int32_t eflags
    int32_t gsbase
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(gsbase + arg3 + (arg4 << 1) + 0x6f), arg5.w)
    *(gsbase + arg3 + (arg4 << 1) + 0x6f) = temp0
    __outsb(arg2, *arg5, arg5, eflags)
    return arg1
}
