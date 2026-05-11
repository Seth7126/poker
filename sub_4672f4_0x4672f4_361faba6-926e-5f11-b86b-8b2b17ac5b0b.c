// ============================================================
// 函数名称: sub_4672f4
// 虚拟地址: 0x4672f4
// WARP GUID: 361faba6-926e-5f11-b86b-8b2b17ac5b0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegOpenKeyExA
// [内部子函数调用]: sub_467094, sub_403e90, sub_4042c0, sub_466f68, sub_40423c, sub_403df8
// [被调用的父级函数]: sub_46738c
// ============================================================

char** __convention("regparm")sub_4672f4(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    char* var_c = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e90(&var_c, arg2)
    char eax_2 = sub_466f68(var_c)
    
    if (eax_2 == 0)
        sub_4042c0(&var_c, 1, 1)
    
    HKEY phkResult = nullptr
    enum REG_SAM_FLAGS samDesired = *(arg1 + 0x18)
    PSTR lpSubKey = sub_40423c(var_c)
    RegOpenKeyExA(sub_467094(arg1, eax_2), lpSubKey, 0, samDesired, &phkResult)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
        sub_467381
    char** result = &var_c
    sub_403df8(result)
    return result
}
