// ============================================================
// 函数名称: sub_51974c
// 虚拟地址: 0x51974c
// WARP GUID: e92251ab-9bf2-5927-9138-3deb25f44040
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_4042c0, sub_403e4c, sub_404080, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_5197fb, sub_519804
// ============================================================

char** __convention("regparm")sub_51974c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg1)
    void* eax_2 = sub_40c024(sub_5197fb+5, *(arg2 - 4))
    
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
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_5197f3
    char** result = &var_8
    sub_403df8(result)
    return result
}
