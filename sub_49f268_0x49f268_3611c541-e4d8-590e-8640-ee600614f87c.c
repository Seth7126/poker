// ============================================================
// 函数名称: sub_49f268
// 虚拟地址: 0x49f268
// WARP GUID: 3611c541-e4d8-590e-8640-ee600614f87c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_40422c, sub_40cc98, sub_49f368
// [被调用的父级函数]: sub_49f714
// ============================================================

int32_t __convention("regparm")sub_49f268(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t var_18 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = nullptr
    int32_t ecx
    int32_t var_c = ecx
    sub_40422c(arg2)
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_49f368(arg1, arg2)
    int32_t (* var_10)(void* arg1, void* arg2) = nullptr
    int32_t* var_c_1 = &var_4
    var_10 = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t eax_3 = (*(*var_10 + 0x14))(ExceptionList_1, var_10, var_c_1)
    
    if (add_overflow(eax_3, 0xffffffff))
        sub_403010()
        noreturn
    
    (*(*var_10 + 0xc))(arg2)
    (*(*arg1 + 0x20))()
    int32_t i = eax_3 - 2
    
    if (add_overflow(eax_3 - 1, 0xffffffff))
        sub_403010()
        noreturn
    
    while (i s> 0xffffffff)
        (*(*var_10 + 0xc))()
        (*(*arg1 + 0x54))()
        int32_t i_1 = i
        i -= 1
        
        if (add_overflow(i_1, 0xffffffff))
            sub_403010()
            noreturn
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_49f335
    return sub_40cc98(&var_10)
}
