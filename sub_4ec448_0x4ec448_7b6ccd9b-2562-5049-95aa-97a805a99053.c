// ============================================================
// 函数名称: sub_4ec448
// 虚拟地址: 0x4ec448
// WARP GUID: 7b6ccd9b-2562-5049-95aa-97a805a99053
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_4837ec, sub_404188, sub_404080, sub_4834fc, sub_403e1c, sub_4837d0, sub_403fa0, sub_404280, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ec448(void* arg1, int32_t arg2, int16_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    void* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg3 == 0xdc)
        sub_4834fc(arg1, data_61ccac)
    
    arg2.w = *arg3
    sub_403fa0()
    sub_404080(&data_7804a4, var_8)
    int32_t eax_2 = sub_404078(data_7804a4)
    
    if (add_overflow(eax_2, 0xfffffffe))
        sub_403010()
        noreturn
    
    sub_404280(3, eax_2 - 2, data_7804a4, &var_c)
    sub_404188(var_c, sub_4ec52f+5)
    
    if (eax_2 == 2)
        data_52fe84 ^= 1
        
        if (data_52fe84 != 0)
            sub_4837ec(arg1, data_61ccec, true)
        
        if (data_52fe84 == 0)
            sub_4837d0(arg1, data_61ccec)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4ec523
    return sub_403e1c(&var_c, 2)
}
