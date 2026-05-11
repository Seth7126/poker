// ============================================================
// 函数名称: sub_49e0e8
// 虚拟地址: 0x49e0e8
// WARP GUID: e9438998-9691-579e-bb8c-8eca5378dd8e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4088f0, sub_403010, sub_403df8, sub_49e018
// [被调用的父级函数]: sub_49d4fc
// ============================================================

int32_t* __convention("regparm")sub_49e0e8(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_28 = ebx
    void* var_8 = nullptr
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4088f0(arg1, &var_8)
    void* eax_1 = var_8
    void* const var_24 = &data_49e194
    void* const var_20 = &data_49e1a0
    void* const var_1c = &data_49e1ac
    void* const var_18 = &data_49e1b8
    void* const var_14 = &data_49e1c4
    void* const var_10 = &data_49e1d0
    void* const var_c = &data_49e1dc
    int32_t* eax_3
    void* ebp_1
    eax_3, ebp_1 = sub_49e018(eax_1, &var_24, 6, 1)
    
    if (add_overflow(eax_3, 1))
        sub_403010()
        noreturn
    
    fsbase->NtTib.ExceptionList = 1
    int32_t (* var_30_1)(int32_t* arg1 @ ebp) = sub_49e183
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
