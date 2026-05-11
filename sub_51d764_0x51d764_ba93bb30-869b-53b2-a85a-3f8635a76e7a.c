// ============================================================
// 函数名称: sub_51d764
// 虚拟地址: 0x51d764
// WARP GUID: ba93bb30-869b-53b2-a85a-3f8635a76e7a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_4042c0, sub_403e4c, sub_404080, sub_4d727c, sub_403e1c, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_51d840
// ============================================================

int32_t __convention("regparm")sub_51d764(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg1)
    void* eax_2 = sub_40c024(0x51d83c, *(arg2 - 4))
    
    if (eax_2 s<= 0)
        sub_403e4c(arg1, *(arg2 - 4))
        sub_403df8(arg2 - 4)
    else
        if (add_overflow(eax_2, 0xffffffff))
            sub_403010()
            noreturn
        
        sub_404280(eax_2 - 1, 1, *(arg2 - 4), &var_8)
        sub_404080(arg1, var_8)
        sub_4042c0(arg2 - 4, 1, eax_2)
    
    *data_530304
    sub_403e4c(sub_4d727c(&var_c, *arg1), var_c)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_51d82d
    return sub_403e1c(&var_c, 2)
}
