// ============================================================
// 函数名称: sub_4b6b04
// 虚拟地址: 0x4b6b04
// WARP GUID: 41be7629-0748-54d7-ba4f-fb20cc6be720
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8, sub_4b6a84
// [被调用的父级函数]: 无
// ============================================================

voidsub_4b6b04() __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_c = &var_4
    int32_t var_10 = 0x4b6b42
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405ae8(data_52ff4c, &var_8)
    sub_4b6a84(var_8)
    noreturn
}
