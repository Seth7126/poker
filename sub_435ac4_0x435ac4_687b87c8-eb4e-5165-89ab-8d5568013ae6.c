// ============================================================
// 函数名称: sub_435ac4
// 虚拟地址: 0x435ac4
// WARP GUID: 687b87c8-eb4e-5165-89ab-8d5568013ae6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA, GetProcAddress, LoadLibraryA, SetErrorMode
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435eac
// ============================================================

void*sub_435ac4()
{
    // 第一条实际指令: void* result = data_530a80
    void* result = data_530a80
    
    if (*(result + 8) == 0)
        return result
    
    uint32_t uMode = SetErrorMode(SEM_NOOPENFILEERRORBOX)
    int32_t __saved_ebp
    int32_t* var_10_1 = &__saved_ebp
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_531794 == 0)
        data_531794 = GetProcAddress(GetModuleHandleA("USER32"), "WINNLSEnableIME")
    
    if (data_52e860 == 0)
        data_52e860 = LoadLibraryA("IMM32.DLL")
        
        if (data_52e860 != 0)
            data_531798 = GetProcAddress(data_52e860, "ImmGetContext")
            data_53179c = GetProcAddress(data_52e860, "ImmReleaseContext")
            data_5317a0 = GetProcAddress(data_52e860, "ImmGetConversionStatus")
            data_5317a4 = GetProcAddress(data_52e860, "ImmSetConversionStatus")
            data_5317a8 = GetProcAddress(data_52e860, "ImmSetOpenStatus")
            data_5317ac = GetProcAddress(data_52e860, "ImmSetCompositionWindow")
            data_5317b0 = GetProcAddress(data_52e860, "ImmSetCompositionFontA")
            data_5317b4 = GetProcAddress(data_52e860, "ImmGetCompositionStringA")
            data_5317b8 = GetProcAddress(data_52e860, "ImmIsIME")
            data_5317bc = GetProcAddress(data_52e860, "ImmNotifyIME")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const var_10_2 = &data_435c31
    return SetErrorMode(uMode)
}
