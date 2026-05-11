// ============================================================
// 函数名称: sub_401b84
// 虚拟地址: 0x401b84
// WARP GUID: a6ef14e6-6177-5850-916d-4ccf40c03fbf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnterCriticalSection, LocalFree, DeleteCriticalSection, LeaveCriticalSection, VirtualFree
// [内部子函数调用]: sub_401484
// [被调用的父级函数]: sub_406a6c
// ============================================================

voidsub_401b84()
{
    // 第一条实际指令: if (data_531430 == 0)
    if (data_531430 == 0)
        return 
    
    int32_t __saved_ebp
    int32_t* var_c = &__saved_ebp
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_531049 != 0)
        EnterCriticalSection(&data_531438)
    
    data_531430 = 0
    LocalFree(data_531490)
    data_531490 = 0
    
    for (void** i = data_531458; i != &data_531458; i = *i)
        VirtualFree(i[2], 0, MEM_RELEASE)
    
    sub_401484(&data_531458)
    sub_401484(&data_531468)
    sub_401484(&data_531494)
    
    for (int32_t* hMem = data_531450; hMem != 0; hMem = data_531450)
        data_531450 = *hMem
        LocalFree(hMem)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_c_1 = 0x401c61
    
    if (data_531049 != 0)
        LeaveCriticalSection(&data_531438)
    
    DeleteCriticalSection(&data_531438)
}
