// ============================================================
// 函数名称: sub_415a3c
// 虚拟地址: 0x415a3c
// WARP GUID: 37ccee36-3afc-5cb1-8b5d-010dd131e590
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_4159b4
// [被调用的父级函数]: sub_415b58
// ============================================================

int32_tsub_415a3c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    EnterCriticalSection(&data_531634)
    int32_t* var_8_1 = &var_4
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_531650 == 0)
        data_53164c = sub_4159b4()
    
    data_531650 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_8_2)() = sub_415a8f
    return LeaveCriticalSection(&data_531634)
}
