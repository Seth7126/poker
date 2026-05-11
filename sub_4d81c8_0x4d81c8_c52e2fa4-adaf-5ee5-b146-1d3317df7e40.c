// ============================================================
// 函数名称: sub_4d81c8
// 虚拟地址: 0x4d81c8
// WARP GUID: c52e2fa4-adaf-5ee5-b146-1d3317df7e40
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4836b0, sub_4d885c
// [被调用的父级函数]: sub_525ab8, sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4d81c8(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_c = &__saved_ebp
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4d885c()
    sub_4836b0(arg1, data_61cb28)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
