// ============================================================
// 函数名称: sub_52a83c
// 虚拟地址: 0x52a83c
// WARP GUID: 56110203-85b5-5be3-b884-1aff3fb7bc67
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_40634c, sub_402824, sub_403df8, sub_4062f8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_5223e8
// ============================================================

char** __convention("regparm")sub_52a83c(void* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405e46(arg1 + 0xbf04, var_8)
    sub_402824(sub_4062f8())
    sub_40634c(arg1 + 0xbf04, arg1 + 0xac)
    sub_402824(arg1 + 0xbf04)
    sub_402824(sub_405f4c(arg1 + 0xbf04))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_52a8c3
    char** result = &var_8
    sub_403df8(result)
    return result
}
