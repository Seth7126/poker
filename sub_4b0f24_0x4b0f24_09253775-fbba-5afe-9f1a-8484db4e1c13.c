// ============================================================
// 函数名称: sub_4b0f24
// 虚拟地址: 0x4b0f24
// WARP GUID: 09253775-fbba-5afe-9f1a-8484db4e1c13
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ac704, sub_403df8, sub_403e4c, sub_408e1c
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4b0f24(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4ac704(arg1, arg2)
    sub_408e1c(arg2, &var_8)
    sub_403e4c(*(arg1 + 0x104) + 0x10, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4b0f7e
    char** result = &var_8
    sub_403df8(result)
    return result
}
