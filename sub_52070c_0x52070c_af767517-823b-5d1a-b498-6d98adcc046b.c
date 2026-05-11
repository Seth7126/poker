// ============================================================
// 函数名称: sub_52070c
// 虚拟地址: 0x52070c
// WARP GUID: af767517-823b-5d1a-b498-6d98adcc046b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4040c4, sub_40634c, sub_402824, sub_403df8, sub_4062f8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_4c4ceb, sub_4c4c9c, sub_4dd154, sub_51fdc8
// ============================================================

char** __convention("regparm")sub_52070c(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_158 = ebx
    char* var_154 = nullptr
    int32_t* var_15c = &var_4
    int32_t (* var_160)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_154, *(*data_530304 + 0xa64), "\data\settings\hs.dat")
    void var_150
    sub_405e46(&var_150, var_154)
    sub_402824(sub_4062f8())
    void* eax_5 = &var_150
    sub_40634c(eax_5, arg1 + 0x2a244)
    sub_402824(eax_5)
    sub_402824(sub_405f4c(&var_150))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_15c_1)(int32_t* arg1 @ ebp) = sub_5207b7
    char** result = &var_154
    sub_403df8(result)
    return result
}
