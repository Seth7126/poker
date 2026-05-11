// ============================================================
// 函数名称: sub_443220
// 虚拟地址: 0x443220
// WARP GUID: 70120305-07aa-5c4d-8a72-e3ec6d69f9ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_443220(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x217) == 1 && *(arg1 + 0x47) != 0)
        sub_405ae8(data_52ffe8, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_40eacb+0x7d, edx_1, var_8)
        sub_403828()
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_443280
    char** result = &var_8
    sub_403df8(result)
    return result
}
