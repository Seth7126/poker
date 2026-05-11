// ============================================================
// 函数名称: sub_453138
// 虚拟地址: 0x453138
// WARP GUID: b3b3c98f-848a-5118-aa3b-bc8e202d3e7e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary, LoadLibraryA
// [内部子函数调用]: sub_40422c, sub_453098, sub_40423c, sub_44da3c, sub_403e1c
// [被调用的父级函数]: sub_4530e0
// ============================================================

int32_t __convention("regparm")sub_453138(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    void* var_c = arg2
    sub_40422c(arg1)
    sub_40422c(var_c)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_453098()
    data_532078 = LoadLibraryA(sub_40423c(arg1))
    data_53207c = LoadLibraryA(sub_40423c(var_c))
    
    if (data_532078 == 0 || data_53207c == 0)
        if (data_532078 != 0)
            FreeLibrary(data_532078)
        
        if (data_53207c != 0)
            FreeLibrary(data_53207c)
    else
        sub_44da3c()
        int32_t ebx_1
        ebx_1.b = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_4531f5
    return sub_403e1c(&var_c, 2)
}
