// ============================================================
// 函数名称: sub_444f24
// 虚拟地址: 0x444f24
// WARP GUID: ecbf00a9-994e-562d-b11c-2bb98f5dc020
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_419794, sub_419bc0
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_444f24(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    sub_419794(arg1[0x88])
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_419bc0(arg1[0x88], arg2)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[0x8e] == 0)
        int32_t ebx_1
        ebx_1.w = 0xffb0
        sub_4032ac(arg1)
    else
        (*(*arg1[0x8e] + 0x28))()
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_444fb5
    return sub_419bc0(arg1[0x88], 0)
}
