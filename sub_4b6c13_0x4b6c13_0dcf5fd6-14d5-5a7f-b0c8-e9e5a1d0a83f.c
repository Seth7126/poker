// ============================================================
// 函数名称: sub_4b6c13
// 虚拟地址: 0x4b6c13
// WARP GUID: 0dcf5fd6-14d5-5a7f-b0c8-e9e5a1d0a83f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8, sub_4b6a84
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b6c13(int32_t* arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi) __noreturn
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    *arg1 += arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b *= 2
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_10 = &var_4
    int32_t var_14 = 0x4b6c63
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405ae8(data_52ff4c, &var_8)
    sub_4b6a84(var_8)
    noreturn
}
