// ============================================================
// 函数名称: sub_509a28
// 虚拟地址: 0x509a28
// WARP GUID: fdb79b9d-761a-5058-a4b5-1a04251bdadd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_507d4c, sub_4746a0, sub_50d318, sub_5143f0, sub_403df8
// [被调用的父级函数]: sub_4e6659, sub_4d6ac0, sub_4e649b
// ============================================================

int32_t*sub_509a28()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_4
    
    if (*(*data_530454 + 0x1c8) != 0)
        eax_4 = sub_50d318(*data_530454)
    
    if (*(*data_530454 + 0x1c8) == 0 || eax_4 == 0)
        char eax_13
        
        if (*(*data_530454 + 0x1c8) != 0)
            eax_13 = sub_50d318(*data_530454)
        
        if (*(*data_530454 + 0x1c8) == 0 || eax_13 != 0)
            int32_t var_1c_1 = 0
            sub_507d4c(&var_8)
            ebx.b = sub_4746a0(var_8, 0x1f, *data_530304, 0x509af4, 0x509af4) == 6
    else
        *(*data_530454 + 0x1c8) = 0
        sub_5143f0(*data_530454, 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_509aee
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
