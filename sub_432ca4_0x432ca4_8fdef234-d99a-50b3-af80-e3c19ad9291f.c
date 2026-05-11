// ============================================================
// 函数名称: sub_432ca4
// 虚拟地址: 0x432ca4
// WARP GUID: 8fdef234-d99a-50b3-af80-e3c19ad9291f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42afdc, sub_4199a0, sub_42b778, sub_42affc, sub_4199bc, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_432ca4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    void* var_c = nullptr
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx_1 = (*(*arg1 - 0x10))(ExceptionList, var_18, var_14)
    
    if (arg1[0x7e].b == 0)
        sub_42b778(ecx_1, &var_8)
        sub_42b778(sub_42afdc(arg1, sub_4199a0(arg1[0x7c], var_8) + 6), &var_c)
        sub_42affc(arg1, sub_4199bc(arg1[0x7c], var_c) + 4)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_432d36
    return sub_403e1c(&var_c, 2)
}
