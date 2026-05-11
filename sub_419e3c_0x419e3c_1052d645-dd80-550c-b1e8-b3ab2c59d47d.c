// ============================================================
// 函数名称: sub_419e3c
// 虚拟地址: 0x419e3c
// WARP GUID: 1052d645-dd80-550c-b1e8-b3ab2c59d47d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0
// [被调用的父级函数]: sub_41a720, sub_41a978, sub_419e90
// ============================================================

voidsub_419e3c() __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_c = &var_4
    int32_t var_10 = 0x419e86
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405ae8(data_530044, &var_8)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4b0(sub_40eacb+0x21, edx_1, var_8)
    sub_403828()
    noreturn
}
