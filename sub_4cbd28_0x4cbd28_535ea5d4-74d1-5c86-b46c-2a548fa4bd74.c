// ============================================================
// 函数名称: sub_4cbd28
// 虚拟地址: 0x4cbd28
// WARP GUID: 535ea5d4-74d1-5c86-b46c-2a548fa4bd74
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4040c4, sub_406010, sub_402824, sub_4062e1, sub_403df8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_4cbd26, sub_4e548c
// ============================================================

char** __convention("regparm")sub_4cbd28(char* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_15c = ebx
    int32_t esi
    int32_t var_160 = esi
    int32_t edi
    int32_t var_164 = edi
    char* var_158 = nullptr
    char* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_168 = &var_4
    int32_t (* var_16c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    ebx.b = 1
    int32_t* var_174 = &var_4
    int32_t (* var_178)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_158, var_8, "\data\pfp.txt")
    void var_154
    sub_405e46(&var_154, var_158)
    sub_402824(sub_4062e1())
    sub_402824(sub_406010(&var_154, &data_61c0d4))
    sub_402824(sub_405f4c(&var_154))
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t var_168_1 = 0x4cbe01
    sub_403df8(&var_158)
    char** result = &var_8
    sub_403df8(result)
    return result
}
