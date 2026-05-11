// ============================================================
// 函数名称: sub_4b50d0
// 虚拟地址: 0x4b50d0
// WARP GUID: a426511f-f334-5c09-bd22-d2d46e115a9b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_402b0c, sub_409ae0
// [被调用的父级函数]: sub_4d951f, sub_4d954c, sub_4d9378
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4b50d0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_1 = sub_402b0c(arg2)
    char* eax_2
    eax_2.b = *arg1[0x8e]
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    
    if (eax_1 != sub_402b0c(eax_2.b))
        char var_10 = arg2
        char var_c_1 = 2
        sub_409ae0(0, &var_10, "%s:", &var_8)
        (*(*arg1 + 0xcc))()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b514d
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
