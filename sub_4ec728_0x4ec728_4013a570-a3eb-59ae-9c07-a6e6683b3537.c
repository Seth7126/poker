// ============================================================
// 函数名称: sub_4ec728
// 虚拟地址: 0x4ec728
// WARP GUID: 4013a570-a3eb-59ae-9c07-a6e6683b3537
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_510ba4
// [被调用的父级函数]: 无
// ============================================================

int32_t*sub_4ec728()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp_1 = sub_510ba4(data_7a6e5c, nullptr, &var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_4ec767
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
