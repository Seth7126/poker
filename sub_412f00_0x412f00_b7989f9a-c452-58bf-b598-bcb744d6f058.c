// ============================================================
// 函数名称: sub_412f00
// 虚拟地址: 0x412f00
// WARP GUID: b7989f9a-c452-58bf-b598-bcb744d6f058
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4ec
// [被调用的父级函数]: sub_412f70
// ============================================================

voidsub_412f00(void* arg1) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_10 = nullptr
    int32_t* var_14 = &var_4
    int32_t var_18 = 0x412f63
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = *(arg1 - 4)
    char var_8 = 6
    int32_t* var_20 = &var_c
    sub_405ae8(data_530464, &var_10)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4ec(sub_40e8c2+0x62, edx_1, var_10, 0)
    sub_403828()
    noreturn
}
