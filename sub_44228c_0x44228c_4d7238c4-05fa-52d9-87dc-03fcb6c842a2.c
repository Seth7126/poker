// ============================================================
// 函数名称: sub_44228c
// 虚拟地址: 0x44228c
// WARP GUID: 4d7238c4-05fa-52d9-87dc-03fcb6c842a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430cf4, sub_403248
// [被调用的父级函数]: sub_443850
// ============================================================

void* __convention("regparm")sub_44228c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t eax_1 = *(arg2 + 4)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_403248(arg1, &data_43ea44) == 0)
        *(arg2 + 4) = 1
    
    sub_430cf4(arg1, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_14_1)(int32_t* arg1 @ ebp) = sub_4422f4
    *(arg2 + 4) = eax_1
    return arg2
}
