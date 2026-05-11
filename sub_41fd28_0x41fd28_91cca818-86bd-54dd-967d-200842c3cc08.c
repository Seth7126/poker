// ============================================================
// 函数名称: sub_41fd28
// 虚拟地址: 0x41fd28
// WARP GUID: 91cca818-86bd-54dd-967d-200842c3cc08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41fb68, sub_41fb5c
// [被调用的父级函数]: sub_41fb30
// ============================================================

int32_t* __convention("regparm")sub_41fd28(void* arg1)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 4)
    int32_t* result = *(arg1 + 4)
    
    if (result == 0)
        return result
    
    sub_41fb5c(arg1)
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 4) = *result
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_14_1)(int32_t* arg1 @ ebp) = sub_41fd7a
    return sub_41fb68(arg1)
}
