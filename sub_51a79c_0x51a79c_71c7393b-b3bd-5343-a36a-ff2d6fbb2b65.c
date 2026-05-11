// ============================================================
// 函数名称: sub_51a79c
// 虚拟地址: 0x51a79c
// WARP GUID: 71c7393b-b3bd-5343-a36a-ff2d6fbb2b65
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403df8, sub_40422c, sub_51a454
// [被调用的父级函数]: sub_51a838
// ============================================================

char** __convention("regparm")sub_51a79c(void* arg1, char* arg2, char* arg3)
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
    sub_403e4c(arg1 + 0x960, var_8)
    int32_t esi
    int32_t edi
    sub_51a454(arg1, esi, edi)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_51a7ee
    char** result = &var_8
    sub_403df8(result)
    return result
}
