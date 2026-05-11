// ============================================================
// 函数名称: sub_4b7714
// 虚拟地址: 0x4b7714
// WARP GUID: 26632b8f-26d9-58ef-a22a-8bd2308370c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409040, sub_40422c, sub_406010, sub_402824, sub_4062e1, sub_403df8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_4b8ae4
// ============================================================

char** __convention("regparm")sub_4b7714(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_15c = ebx
    char* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_160 = &var_4
    int32_t (* var_164)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    char var_9 = 0
    void var_158
    sub_405e46(&var_158, var_8)
    
    if (sub_409040(var_8) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t (* var_160_1)(int32_t* arg1 @ ebp) = sub_4b77d6
        char** eax_9 = &var_8
        sub_403df8(eax_9)
        return eax_9
    
    int32_t* var_16c = &var_4
    int32_t (* var_170)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_402824(sub_4062e1())
    sub_402824(sub_406010(&var_158, arg1 + 0x7ec))
    char var_9_1 = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_16c_1 = 0x4b77b9
    int32_t eax_8 = sub_405f4c(&var_158)
    sub_402824(eax_8)
    return eax_8
}
