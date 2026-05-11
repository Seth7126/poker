// ============================================================
// 函数名称: sub_52a8cc
// 虚拟地址: 0x52a8cc
// WARP GUID: 651fe620-8597-54c0-b988-1491498b31a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409040, sub_40422c, sub_406010, sub_402824, sub_4062e1, sub_403df8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_5223e8, sub_4e548c
// ============================================================

char** __convention("regparm")sub_52a8cc(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_c = arg2
    sub_40422c(var_c)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    if (sub_409040(var_c) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t (* var_14_1)(int32_t* arg1 @ ebp) = sub_52a98e
        char** eax_14 = &var_c
        sub_403df8(eax_14)
        return eax_14
    
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_405e46(arg1 + 0xbf04, var_c)
    sub_402824(sub_4062e1())
    sub_402824(sub_406010(arg1 + 0xbf04, arg1 + 0xac))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_20_1 = 0x52a971
    int32_t eax_13 = sub_405f4c(arg1 + 0xbf04)
    sub_402824(eax_13)
    return eax_13
}
