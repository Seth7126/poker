// ============================================================
// 函数名称: sub_49a8c8
// 虚拟地址: 0x49a8c8
// WARP GUID: ca0b6bee-1681-50d3-91b0-8a34e98e8b03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, LoadLibraryA, GetProcAddress
// [内部子函数调用]: sub_403828, sub_499960, sub_405ae8, sub_403e1c, sub_409ae0
// [被调用的父级函数]: sub_49b963
// ============================================================

int32_tsub_49a8c8(int16_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_52f600 == 0)
        data_52f600 = LoadLibraryA("WS2_32.DLL")
        
        if (data_52f600 == 0)
            enum WIN32_ERROR eax_2 = GetLastError()
            sub_405ae8(data_5301dc, &var_c)
            char* eax_4 = var_c
            void* const var_14 = &data_49a9bc
            char var_10 = 0xb
            sub_409ae0(0, &var_14, eax_4, &var_8)
            int32_t edx_2
            edx_2.b = 1
            sub_499960(sub_4998ec+0x48, edx_2, var_8, eax_2)
            sub_403828()
            noreturn
        
        data_5324bc = GetProcAddress(data_52f600, sub_49a9b7+0x11)
        int32_t eax_8
        eax_8.w = arg1
        data_5324bc(eax_8, arg2)
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49a99c
    return sub_403e1c(&var_c, 2)
}
