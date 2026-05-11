// ============================================================
// 函数名称: sub_49dd18
// 虚拟地址: 0x49dd18
// WARP GUID: bd656722-5f7b-5e3a-9356-050bb93f5ede
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTimeZoneInformation
// [内部子函数调用]: sub_403828, sub_409c9c, sub_405ae8, sub_40b4b0, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_49e52c, sub_49d978
// ============================================================

int32_tsub_49dd18(long double arg1 @ st0)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_c4 = ebx
    int32_t esi
    int32_t var_c8 = esi
    char* var_c0 = nullptr
    char* var_bc = nullptr
    int32_t* var_cc = &var_4
    int32_t (* var_d0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    TIME_ZONE_INFORMATION timeZoneInformation
    uint32_t eax = GetTimeZoneInformation(&timeZoneInformation)
    
    if (eax == 0xffffffff)
        sub_405ae8(data_5309c8, &var_bc)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_49d2b9+0xe7, edx_1, var_bc)
        sub_403828()
        noreturn
    
    int32_t Bias
    
    if (eax == 0)
        Bias = timeZoneInformation.Bias
    else if (eax == 1)
        int32_t Bias_2 = timeZoneInformation.Bias
        Bias = Bias_2 + timeZoneInformation.StandardBias
        
        if (add_overflow(Bias_2, timeZoneInformation.StandardBias))
            sub_403010()
            noreturn
    else
        if (eax != 2)
            sub_405ae8(data_5309c8, &var_c0)
            int32_t edx_3
            edx_3.b = 1
            sub_40b4b0(sub_49d2b9+0xe7, edx_3, var_c0)
            sub_403828()
            noreturn
        
        int32_t Bias_1 = timeZoneInformation.Bias
        Bias = Bias_1 + timeZoneInformation.DaylightBias
        
        if (add_overflow(Bias_1, timeZoneInformation.DaylightBias))
            sub_403010()
            noreturn
    
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(Bias)
    int32_t eax_9 = eax_8 ^ edx_4
    int32_t eax_10 = eax_9 - edx_4
    
    if (add_overflow(eax_9, neg.d(edx_4)))
        sub_403010()
        noreturn
    
    int32_t eax_14
    int32_t edx_7
    edx_7:eax_14 = sx.q(Bias)
    
    if (add_overflow(eax_14 ^ edx_7, neg.d(edx_7)))
        sub_403010()
        noreturn
    
    int32_t ebx_1
    void* ebp_1
    ebx_1, ebp_1 = sub_409c9c(divs.dp.d(sx.q(eax_10), 0x3c), (mods.dp.d(sx.q(eax_10), 0x3c)).w, 0, 0)
    *(ebp_1 - 8) = fconvert.d(arg1)
    
    if (ebx_1 s> 0)
        *(ebp_1 - 8) = fconvert.d(fconvert.t(0f) - fconvert.t(*(ebp_1 - 8)))
    
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49de4e
    return sub_403e1c(ebp_1 - 0xbc, 2)
}
