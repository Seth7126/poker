// ============================================================
// 函数名称: sub_439e78
// 虚拟地址: 0x439e78
// WARP GUID: 61b4638c-3dba-544e-9f05-d3a9a5eb9b55
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4394b8, sub_415168, sub_43b998, sub_403df8
// [被调用的父级函数]: sub_43a060
// ============================================================

void** __convention("regparm")sub_439e78(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    sub_415168(arg2, &var_8, ecx)
    sub_43b998(arg1, sub_4394b8(var_8))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_439ec9
    void** result = &var_8
    sub_403df8(result)
    return result
}
