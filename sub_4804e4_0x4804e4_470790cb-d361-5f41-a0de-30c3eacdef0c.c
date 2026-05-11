// ============================================================
// 函数名称: sub_4804e4
// 虚拟地址: 0x4804e4
// WARP GUID: 470790cb-d361-5f41-a0de-30c3eacdef0c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403df8, sub_40422c
// [被调用的父级函数]: sub_4807f4, sub_4e6659, sub_4d9a28, sub_4da10c, sub_4dc3b8, sub_4e649b
// ============================================================

char** __convention("regparm")sub_4804e4(void* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e4c(arg1 + 0xac4, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_48052f
    char** result = &var_8
    sub_403df8(result)
    return result
}
