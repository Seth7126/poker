// ============================================================
// 函数名称: sub_401ac0
// 虚拟地址: 0x401ac0
// WARP GUID: 19a9b6fd-13d2-5065-8b82-a06a6725b534
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, InitializeCriticalSection, LocalAlloc, EnterCriticalSection
// [内部子函数调用]: sub_401484
// [被调用的父级函数]: sub_40231c, sub_402194, sub_402690
// ============================================================

int32_tsub_401ac0()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = &var_4
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    InitializeCriticalSection(&data_531438)
    
    if (data_531049 != 0)
        EnterCriticalSection(&data_531438)
    
    sub_401484(&data_531458)
    sub_401484(&data_531468)
    sub_401484(&data_531494)
    data_531490 = LocalAlloc(LMEM_FIXED, 0xff8)
    
    if (data_531490 != 0)
        for (int32_t i = 3; i != 0x401; i += 1)
            *(data_531490 + (i << 2) - 0xc) = 0
        
        data_53147c = &data_531478
        data_531478 = &data_531478
        data_531484 = &data_531478
        data_531430 = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_8_1)() = sub_401b7d
    
    if (data_531049 == 0)
        return 0
    
    return LeaveCriticalSection(&data_531438)
}
