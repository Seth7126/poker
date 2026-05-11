// ============================================================
// 函数名称: sub_42dc00
// 虚拟地址: 0x42dc00
// WARP GUID: 00bd974e-851b-57e2-af71-04a9e9ffdf79
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e3a0, sub_42acb8, sub_42e3a8
// [被调用的父级函数]: sub_442aa0
// ============================================================

int32_t __convention("regparm")sub_42dc00(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    sub_42e3a0(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42acb8(arg1, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t* (__stdcall* var_10_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42dc47
    return sub_42e3a8(arg1)
}
