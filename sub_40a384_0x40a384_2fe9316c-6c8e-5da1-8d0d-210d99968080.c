// ============================================================
// 函数名称: sub_40a384
// 虚拟地址: 0x40a384
// WARP GUID: 2fe9316c-6c8e-5da1-8d0d-210d99968080
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetThreadLocale, GetDateFormatA
// [内部子函数调用]: sub_403e90, sub_404078, sub_404028, sub_40423c, sub_403df8, sub_404280
// [被调用的父级函数]: sub_40a48c
// ============================================================

int32_t* __convention("regparm")sub_40a384(int32_t arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_11c = ebx
    int32_t esi
    int32_t var_120 = esi
    int32_t var_8 = 0
    int32_t* var_124 = &var_4
    int32_t (* var_128)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    void* eax_1
    eax_1.w = *(arg3 - 0xe)
    SYSTEMTIME date
    date.wYear = eax_1.w
    void* eax_2
    eax_2.w = *(arg3 - 0x10)
    date.wMonth = eax_2.w
    void* eax_3
    eax_3.w = *(arg3 - 0x12)
    date.wDay = eax_3.w
    
    if (arg1 s> 2)
        sub_403e90(&var_8, "yyyy")
    else
        sub_403e90(&var_8, 0x40a478)
    
    PSTR lpFormat = sub_40423c(var_8)
    void dateStr
    
    if (GetDateFormatA(GetThreadLocale(), 4, &date, lpFormat, &dateStr, 0x100) != 0)
        sub_404028(arg2, &dateStr, 0x100)
        
        if (arg1 == 1 && **arg2 == 0x30)
            sub_404280(sub_404078(*arg2) - 1, 2, *arg2, arg2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_124_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_40a469
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
