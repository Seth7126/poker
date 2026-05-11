// ============================================================
// 函数名称: sub_496768
// 虚拟地址: 0x496768
// WARP GUID: 9224b6fd-2466-5ebb-b803-15964ba49e43
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_494050, sub_494048, sub_4106bc
// [被调用的父级函数]: sub_496f44
// ============================================================

int32_t __convention("regparm")sub_496768(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_edx
    int32_t __saved_edx_1 = __saved_edx
    sub_494048(*(arg1 + 0x68))
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4106bc(*(arg1 + 0x64))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4967b8
    return sub_494050(*(arg1 + 0x68))
}
