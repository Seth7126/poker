// ============================================================
// 函数名称: sub_40b454
// 虚拟地址: 0x40b454
// WARP GUID: 93edf217-deb0-5fe3-b9a2-b32dd2157fb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_40b450
// [被调用的父级函数]: sub_45174d, sub_451e20, sub_495e20
// ============================================================

voidsub_40b454() __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_c = &var_4
    int32_t var_10 = 0x40b4a4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = sub_40b450(&var_4)
    sub_405ae8(data_530428, &var_8)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4b0(0x407d8c, edx_1, var_8)
    noreturn sub_403828() __tailcall
}
