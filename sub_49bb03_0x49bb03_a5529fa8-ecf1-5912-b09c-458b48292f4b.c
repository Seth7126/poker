// ============================================================
// 函数名称: sub_49bb03
// 虚拟地址: 0x49bb03
// WARP GUID: a5529fa8-ecf1-5912-b09c-458b48292f4b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_49bb03(char* arg1, int32_t arg2, int32_t* arg3, void* arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg5 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t ebx
    int32_t var_20 = ebx
    *(arg4 - 0x1c) = 0
    *(arg4 - 4) = arg3
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg4 - 8) = 0x10
    (*data_5300e0)(arg2, arg4 - 0x18, arg4 - 8, ExceptionList, var_2c, arg4, arg5)
    (*(*arg1 + 0x7c))()
    sub_403e4c(*(arg4 - 4), *(arg4 - 0x1c))
    int32_t eax_7
    eax_7.w = *(arg4 - 0x16)
    **(arg4 + 8) = zx.d((*data_5302f4)(eax_7))
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49bb92
    sub_403df8(arg4 - 0x1c)
    return arg4 - 0x1c
}
