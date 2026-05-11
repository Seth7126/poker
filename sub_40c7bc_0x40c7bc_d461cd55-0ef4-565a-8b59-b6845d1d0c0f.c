// ============================================================
// 函数名称: sub_40c7bc
// 虚拟地址: 0x40c7bc
// WARP GUID: d461cd55-0ef4-565a-8b59-b6845d1d0c0f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError
// [内部子函数调用]: sub_40b56c, sub_40b5a8, sub_403828, sub_40ac70
// [被调用的父级函数]: sub_452f08, sub_42ecf4, sub_41e6c8, sub_42eac0, sub_40c854, sub_452db8
// ============================================================

voidsub_40c7bc() __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_18 = nullptr
    int32_t* var_20 = &var_4
    int32_t var_24 = 0x40c846
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    enum WIN32_ERROR eax
    int32_t edx
    eax, edx = GetLastError()
    enum WIN32_ERROR ebx = eax
    int32_t* eax_3
    
    if (ebx == NO_ERROR)
        edx.b = 1
        eax_3 = sub_40b56c(sub_408670+0x48, edx, data_53025c)
    else
        enum WIN32_ERROR var_14 = ebx
        char var_10_1 = 0
        sub_40ac70(ebx, &var_18)
        char* var_c_1 = var_18
        char var_8_1 = 0xb
        int32_t edx_2
        edx_2.b = 1
        eax_3, ebx = sub_40b5a8(sub_408670+0x48, edx_2, data_52ffb4, 1, &var_14)
    
    eax_3[3] = ebx
    sub_403828()
    noreturn
}
