// ============================================================
// 函数名称: sub_419e90
// 虚拟地址: 0x419e90
// WARP GUID: 974b952f-3342-5a47-9516-79a70e0eee72
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, FormatMessageA
// [内部子函数调用]: sub_403828, sub_419e3c, sub_40b4b0, sub_404028
// [被调用的父级函数]: sub_419f48, sub_41aa68, sub_41ca88, sub_41d214, sub_41dfd0, sub_419f38
// ============================================================

voidsub_419e90() __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_108 = nullptr
    int32_t* var_110 = &var_4
    int32_t var_114 = 0x419f2c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    enum WIN32_ERROR dwMessageId = GetLastError()
    void buffer
    
    if (dwMessageId != NO_ERROR && FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, nullptr, dwMessageId, 
            0x400, &buffer, 0x100, nullptr) != 0)
        sub_404028(&var_108, &buffer, 0x100)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_40eacb+0x21, edx_1, var_108)
        sub_403828()
        noreturn
    
    sub_419e3c()
    noreturn
}
