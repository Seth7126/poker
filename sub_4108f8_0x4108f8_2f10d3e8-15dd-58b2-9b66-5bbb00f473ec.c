// ============================================================
// 函数名称: sub_4108f8
// 虚拟地址: 0x4108f8
// WARP GUID: 2f10d3e8-15dd-58b2-9b66-5bbb00f473ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4106bc, sub_410948, sub_4108e4
// [被调用的父级函数]: sub_41ceb4, sub_4192d0, sub_42a4d8
// ============================================================

int32_t __convention("regparm")sub_4108f8(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_edx
    int32_t __saved_edx_1 = __saved_edx
    sub_4108e4(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4106bc(*(arg1 + 4))
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_410942
    return sub_410948(arg1)
}
