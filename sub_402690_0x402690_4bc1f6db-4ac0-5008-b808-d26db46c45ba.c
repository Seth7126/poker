// ============================================================
// 函数名称: sub_402690
// 虚拟地址: 0x402690
// WARP GUID: 4bc1f6db-4ac0-5008-b808-d26db46c45ba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_402980, sub_40231c, sub_401ac0, sub_402194, sub_4024c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_402690(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    
    if (data_531430 == 0)
        char eax
        eax, ebp = sub_401ac0()
        
        if (eax == 0)
            ebp[-1] = 0
            return ebp[-1]
    
    int32_t* var_18 = ebp
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_531049 != 0)
        EnterCriticalSection(&data_531438)
    
    if (sub_4024c0(arg1, arg2) == 0)
        int32_t eax_4 = sub_402194(arg2)
        int32_t eax_9 = (*(arg1 - 4) & 0x7ffffffc) - 4
        
        if (arg2 s< eax_9)
            eax_9 = arg2
        
        if (eax_4 != 0)
            sub_402980(arg1, eax_4, eax_9)
            sub_40231c(arg1)
        
        ebp[-1] = eax_4
    else
        ebp[-1] = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_18_1 = 0x402748
    
    if (data_531049 == 0)
        return 0
    
    return LeaveCriticalSection(&data_531438)
}
