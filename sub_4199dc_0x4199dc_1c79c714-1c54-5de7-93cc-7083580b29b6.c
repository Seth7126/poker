// ============================================================
// 函数名称: sub_4199dc
// 虚拟地址: 0x4199dc
// WARP GUID: 1c79c714-1c54-5de7-93cc-7083580b29b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_419794
// [被调用的父级函数]: sub_41cd24, sub_42a30f, sub_42a358, sub_42a29c
// ============================================================

int32_t __convention("regparm")sub_4199dc(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    EnterCriticalSection(&data_531688)
    int32_t* var_10_1 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    var_8:3.b = *(arg1 + 0x50) == 0
    
    if (var_8:3.b != 0)
        sub_419794(arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_419a2f
    return LeaveCriticalSection(&data_531688)
}
