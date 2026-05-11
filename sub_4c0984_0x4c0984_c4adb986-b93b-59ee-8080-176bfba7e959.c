// ============================================================
// 函数名称: sub_4c0984
// 虚拟地址: 0x4c0984
// WARP GUID: c4adb986-b93b-59ee-8080-176bfba7e959
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_404054, sub_4cda5c, sub_403e1c
// [被调用的父级函数]: sub_4ee360, sub_4dd1e0, sub_50c5e0, sub_4dd1d7, sub_5223e8, sub_520efc, sub_4c2418
// ============================================================

int32_t __convention("regparm")sub_4c0984(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_28 = 0x4c0a28
    void* ebp_1 = sub_4cda5c(arg1, 0, &var_c)
    int32_t var_2c = *(ebp_1 - 8)
    void* const var_30 = &data_4c0a34
    int32_t var_34 = 0x4c0a40
    void* const var_38 = &data_4c0a4c
    int32_t eax_2 = arg1 s>> 1
    bool c = unimplemented  {sar eax, 0x1}
    
    if (arg1 s>> 1 s< 0)
        eax_2 = adc.d(eax_2, 0, c)
    
    void* ebp_2 = sub_4cda5c(eax_2, 0, ebp_1 - 0xc)
    int32_t var_3c = *(ebp_2 - 0xc)
    sub_404138(ebp_2 - 4, 6)
    sub_404054(arg2, *(ebp_2 - 4), 0xff)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4c0a18
    return sub_403e1c(ebp_2 - 0xc, 3)
}
