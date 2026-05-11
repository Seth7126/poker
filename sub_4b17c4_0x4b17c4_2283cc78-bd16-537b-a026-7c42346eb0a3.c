// ============================================================
// 函数名称: sub_4b17c4
// 虚拟地址: 0x4b17c4
// WARP GUID: 2283cc78-bd16-537b-a026-7c42346eb0a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4b0df4, sub_412d78, sub_4afaf8, sub_4af43c, sub_4b1160
// [被调用的父级函数]: sub_4b19b0
// ============================================================

voidsub_4b17c4(void* arg1) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_14 = nullptr
    int32_t* var_18 = &var_4
    int32_t var_1c = 0x4b18d7
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void* eax_2 = *(*(arg1 - 4) + 4)
    int32_t var_10 = *(eax_2 + 0x94)
    *(eax_2 + 0x94) = 0x7d0
    void* edx_1
    edx_1.b = 1
    int32_t* eax_3 = sub_412d78(&data_40f3f0, edx_1, nullptr)
    void* eax_6 = *(*(arg1 - 4) + 0xc)
    int32_t var_c = *(eax_6 + 0x78)
    *(eax_6 + 0x78) = eax_3
    int32_t* var_24 = &var_4
    int32_t var_28 = 0x4b18ba
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4afaf8(*(*(arg1 - 4) + 4), eax_6)
    sub_4b0df4(*(*(arg1 - 4) + 4), &var_14)
    char* eax_13 = var_14
    char* eax_15 = eax_3[1]
    int32_t eax_19
    int32_t edx_6
    eax_19, edx_6 = sub_4b1160(*(*(arg1 - 4) + 0xc))
    edx_6.b = 1
    sub_4af43c(eax_19, edx_6, &data_4af3f0, eax_15, eax_13)
    sub_403828()
    noreturn
}
