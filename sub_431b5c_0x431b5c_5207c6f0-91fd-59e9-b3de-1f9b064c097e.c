// ============================================================
// 函数名称: sub_431b5c
// 虚拟地址: 0x431b5c
// WARP GUID: 5207c6f0-91fd-59e9-b3de-1f9b064c097e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_405b40, sub_405b58
// [被调用的父级函数]: sub_44bddc
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_431b5c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != arg1[0x5f].b)
        arg1[0x5f].b = arg2
        
        if ((((arg1[8].b & 0x10) != 0 ^ 1) & arg2) != 0)
            ebx.w = 0xffcd
            sub_4032ac(arg1, &var_8)
            esp = &var_8
            sub_405b58(&arg1[0x52], var_8)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_431bc7
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_405b40(result)
    return result
}
