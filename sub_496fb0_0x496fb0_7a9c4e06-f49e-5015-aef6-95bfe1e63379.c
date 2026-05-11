// ============================================================
// 函数名称: sub_496fb0
// 虚拟地址: 0x496fb0
// WARP GUID: 7a9c4e06-f49e-5015-aef6-95bfe1e63379
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b214, sub_403248, sub_415c58
// [被调用的父级函数]: 无
// ============================================================

LPARAM __convention("regparm")sub_496fb0(LPARAM arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t* eax = sub_40b214()
    *(arg1 + 0x38) = eax
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_403248(eax, 0x407d8c) == 0)
        sub_415c58(arg1, sub_496eec, arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_497012
    *(arg1 + 0x38) = 0
    return arg1
}
