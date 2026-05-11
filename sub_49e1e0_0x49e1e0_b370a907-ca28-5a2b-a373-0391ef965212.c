// ============================================================
// 函数名称: sub_49e1e0
// 虚拟地址: 0x49e1e0
// WARP GUID: b370a907-ca28-5a2b-a373-0391ef965212
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4088f0, sub_403010, sub_403df8, sub_49e018
// [被调用的父级函数]: sub_49d474, sub_49d4fc
// ============================================================

int32_t* __convention("regparm")sub_49e1e0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_3c = ebx
    void* var_8 = nullptr
    int32_t* var_40 = &var_4
    int32_t (* var_44)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4088f0(arg1, &var_8)
    void* eax_1 = var_8
    void* const var_38 = &data_49e2b4
    void* const var_34 = &data_49e2c0
    void* const var_30 = &data_49e2cc
    void* const var_2c = &data_49e2d8
    void* const var_28 = &data_49e2e4
    void* const var_24 = &data_49e2f0
    void* const var_20 = &data_49e2fc
    void* const var_1c = &data_49e308
    void* const var_18 = &data_49e314
    void* const var_14 = &data_49e320
    void* const var_10 = &data_49e32c
    void* const var_c = &data_49e338
    int32_t* eax_3
    void* ebp_1
    eax_3, ebp_1 = sub_49e018(eax_1, &var_38, 0xb, 1)
    
    if (add_overflow(eax_3, 1))
        sub_403010()
        noreturn
    
    fsbase->NtTib.ExceptionList = 1
    int32_t (* var_44_1)(int32_t* arg1 @ ebp) = sub_49e2a3
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
