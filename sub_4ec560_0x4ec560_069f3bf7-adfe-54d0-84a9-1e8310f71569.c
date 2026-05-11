// ============================================================
// 函数名称: sub_4ec560
// 虚拟地址: 0x4ec560
// WARP GUID: 069f3bf7-adfe-54d0-84a9-1e8310f71569
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_495888, sub_4040c4, sub_404138, sub_44cde0, sub_49574c, sub_4957d4, sub_4956c0, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4ec560()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_c
    sub_49574c(*(data_61c9f0 + 0x8dc), &var_c)
    int32_t var_8
    sub_4040c4(&var_8, "LocalHost: ", var_c)
    int32_t var_28 = var_8
    void* const var_2c = "\rLocalAddr: "
    int32_t var_10
    sub_4956c0(*(data_61c9f0 + 0x8dc), &var_10)
    int32_t var_30 = var_10
    sub_404138(&var_8, 3)
    int32_t var_28_1 = var_8
    void* const var_2c_1 = "\rRemoteHost: "
    int32_t var_14
    sub_4957d4(*(data_61c9f0 + 0x8dc), &var_14)
    int32_t var_30_1 = var_14
    sub_404138(&var_8, 3)
    int32_t var_28_2 = var_8
    void* const var_2c_2 = &data_4ec698
    sub_495888(*(data_61c9f0 + 0x8dc), &var_18)
    int32_t var_30_2 = var_18
    sub_404138(&var_8, 3)
    sub_44cde0()
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_1c_1)(int32_t* arg1 @ ebp) = sub_4ec646
    return sub_403e1c(&var_18, 5)
}
