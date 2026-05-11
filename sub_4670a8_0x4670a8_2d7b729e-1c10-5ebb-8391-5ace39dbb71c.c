// ============================================================
// 函数名称: sub_4670a8
// 虚拟地址: 0x4670a8
// WARP GUID: 2d7b729e-1c10-5ebb-8391-5ace39dbb71c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegOpenKeyExA
// [内部子函数调用]: sub_467094, sub_403e90, sub_467070, sub_404138, sub_4042c0, sub_466f68, sub_40423c, sub_403df8
// [被调用的父级函数]: sub_4e5e3c
// ============================================================

char** __convention("regparm")sub_4670a8(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    char* var_10 = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e90(&var_10, arg2)
    char eax_2 = sub_466f68(var_10)
    
    if (eax_2 == 0)
        sub_4042c0(&var_10, 1, 1)
    
    HKEY phkResult = nullptr
    PSTR lpSubKey = sub_40423c(var_10)
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    
    if (RegOpenKeyExA(sub_467094(arg1, eax_2), lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR)
        *(arg1 + 0x18) = 0x20019
        enum WIN32_ERROR eax_7
        eax_7.b = *(arg1 + 4) != 0
        
        if ((eax_7.b & eax_2) != 0)
            int32_t var_28_1 = *(arg1 + 0x10)
            void* const var_2c_1 = &data_46718c
            char* var_30_1 = var_10
            sub_404138(&var_10, 3)
            void var_8
            esp = &var_8
        
        sub_467070(arg1, phkResult, var_10)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_467179
    char** result = &var_10
    sub_403df8(result)
    return result
}
