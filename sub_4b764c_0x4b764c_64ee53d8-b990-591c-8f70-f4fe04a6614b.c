// ============================================================
// 函数名称: sub_4b764c
// 虚拟地址: 0x4b764c
// WARP GUID: 64ee53d8-b990-591c-8f70-f4fe04a6614b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteFileA
// [内部子函数调用]: sub_40422c, sub_40634c, sub_40423c, sub_402824, sub_4062f8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_4e6659, sub_4b8bb8, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4b764c(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_15c = ebx
    sub_40422c(arg2)
    int32_t* var_160 = &var_4
    int32_t (* var_164)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    DeleteFileA(sub_40423c(arg2))
    void var_158
    sub_405e46(&var_158, arg2)
    int32_t* var_16c_1 = &var_4
    int32_t (* var_170)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_402824(sub_4062f8())
    void* eax_5 = &var_158
    sub_40634c(eax_5, arg1 + 0x7ec)
    sub_402824(eax_5)
    char var_9 = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t* (* var_16c_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4b76ef
    int32_t result = sub_405f4c(&var_158)
    sub_402824(result)
    return result
}
