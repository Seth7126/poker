// ============================================================
// 函数名称: sub_449678
// 虚拟地址: 0x449678
// WARP GUID: 478527a4-f335-5f61-a435-62ac3036e078
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_409180, sub_402c0c, sub_402e28, sub_404080, sub_448eec, sub_40423c, sub_403df8, sub_449520
// [被调用的父级函数]: sub_449490, sub_496eec
// ============================================================

void** __convention("regparm")sub_449678(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_110 = ebx
    int32_t esi
    int32_t var_114 = esi
    int32_t var_10c = 0
    void* var_8 = nullptr
    int32_t* var_118 = &var_4
    int32_t (* var_11c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e90(&var_8, *(arg2 + 4))
    void* temp0 = var_8
    
    if (temp0 != 0)
        char var_108[0x100]
        sub_402e28(&var_108, sub_409180(var_8))
        sub_402c0c(&var_108, 0x449740)
        
        if (temp0 u> 0)
            sub_404080(&var_8, U".")
    
    sub_448eec(arg1, &var_10c)
    PSTR eax_8 = sub_40423c(var_10c)
    sub_449520(arg1, sub_40423c(var_8), eax_8, MB_ICONHAND)
    fsbase->NtTib.ExceptionList = 0x10
    int32_t (* var_11c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_44973a
    sub_403df8(&var_10c)
    void** result = &var_8
    sub_403df8(result)
    return result
}
