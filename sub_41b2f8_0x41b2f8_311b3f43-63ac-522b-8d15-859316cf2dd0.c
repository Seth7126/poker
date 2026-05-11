// ============================================================
// 函数名称: sub_41b2f8
// 虚拟地址: 0x41b2f8
// WARP GUID: 311b3f43-63ac-522b-8d15-859316cf2dd0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412ac8, sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41b2f8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t esi
    int32_t var_c = esi
    int32_t ecx_1 = arg2
    arg2.b = 1
    int32_t* eax = sub_412ac8(ecx_1, arg2, sub_40f1d9+0xcf, 0x20)
    int32_t* var_10_1 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x50))(ExceptionList, var_14, var_10_1)
    fsbase->NtTib.ExceptionList = eax
    __return_addr = sub_41b347
    return sub_4030d0(eax)
}
