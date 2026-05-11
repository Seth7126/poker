// ============================================================
// 函数名称: sub_49c794
// 虚拟地址: 0x49c794
// WARP GUID: 0110ca9a-895b-51a9-bc72-3c20370d8337
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_49c794(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 s< 0 || arg2 s>= *(arg1 + 4))
        sub_405ae8(data_52fff4, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_49aac0+0x26c, edx_1, var_8)
        sub_403828()
        noreturn
    
    *(arg1 + (arg2 << 2) + 8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_49c7f5
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
