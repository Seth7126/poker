// ============================================================
// 函数名称: sub_4158b8
// 虚拟地址: 0x4158b8
// WARP GUID: 772d7c88-9ddd-53ad-8f6a-1c42c1119e85
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection, DefWindowProcA
// [内部子函数调用]: sub_41589c
// [被调用的父级函数]: sub_4159b4
// ============================================================

LRESULT __stdcallsub_4158b8(HWND arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
    int32_t __saved_ebp
    TEB* fsbase
    
    if (arg2 == 0x8ffe)
        EnterCriticalSection(&data_531634)
        int32_t* var_18_2 = &__saved_ebp
        int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_4037f0
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        data_531650 -= 1
        
        if (data_531650 == 0)
            sub_41589c()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_18_3 = 0x41597b
        return LeaveCriticalSection(&data_531634)
    
    if (arg2 != 0x8fff)
        ExceptionList = arg2
        return DefWindowProcA(arg1, ExceptionList, arg3, arg4)
    
    LRESULT result = 0
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_40353c
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg4 + 0x28) = 0
    *(arg4 + 0x24)
    (*(arg4 + 0x20))(ExceptionList, var_1c, var_18)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
