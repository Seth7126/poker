// ============================================================
// 函数名称: sub_4420f4
// 虚拟地址: 0x4420f4
// WARP GUID: b9ee9429-9272-5877-94e3-f6eecb0d01c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42fd20
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4420f4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    arg1[0x7f] += 1
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_42fd20(arg1)
    int32_t edx_1 = *(arg2 + 4)
    int32_t eax_2
    
    if (edx_1 == 1)
        eax_2.b = 1
    else if (edx_1 == 2)
        eax_2.b = 2
    (*(*arg1 + 0xbc))()
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_442165
    arg1[0x7f] -= 1
    return arg1
}
