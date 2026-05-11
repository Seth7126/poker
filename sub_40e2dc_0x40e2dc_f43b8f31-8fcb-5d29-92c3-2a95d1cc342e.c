// ============================================================
// 函数名称: sub_40e2dc
// 虚拟地址: 0x40e2dc
// WARP GUID: f43b8f31-8fcb-5d29-92c3-2a95d1cc342e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e29c, sub_4044e8, sub_4045f0
// [被调用的父级函数]: sub_40e334
// ============================================================

PWSTR* __convention("regparm")sub_40e2dc(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    PWSTR var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint8_t* ecx
    sub_4045f0(ecx, ecx)
    sub_40e29c(arg1, arg2, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_40e32b
    PWSTR* result = &var_8
    sub_4044e8(result)
    return result
}
