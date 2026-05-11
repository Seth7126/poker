// ============================================================
// 函数名称: sub_43e2f4
// 虚拟地址: 0x43e2f4
// WARP GUID: 93d3701d-aa69-574e-b79e-42d0736b1550
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43e1f8, sub_408ad8, sub_403e1c
// [被调用的父级函数]: sub_439754
// ============================================================

int32_t __convention("regparm")sub_43e2f4(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    void* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_43e1f8(arg2, &var_8)
    char* eax_1 = var_8
    sub_43e1f8(arg1, &var_c)
    sub_408ad8(var_c, eax_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_43e354
    return sub_403e1c(&var_c, 2)
}
