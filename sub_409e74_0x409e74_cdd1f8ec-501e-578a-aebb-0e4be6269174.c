// ============================================================
// 函数名称: sub_409e74
// 虚拟地址: 0x409e74
// WARP GUID: cdd1f8ec-501e-578a-aebb-0e4be6269174
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409dac, sub_405ae8, sub_403df8, sub_4087f4
// [被调用的父级函数]: sub_40a074, sub_49d4fc
// ============================================================

char** __convention("regparm")sub_409e74(int16_t arg1, int16_t arg2, int16_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    char* var_10 = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_c
    
    if (sub_409dac(arg3, arg2, arg1, &var_c) == 0)
        sub_405ae8(data_5306e8, &var_10)
        sub_4087f4(var_10)
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    long double (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_409edb
    char** result = &var_10
    sub_403df8(result)
    return result
}
