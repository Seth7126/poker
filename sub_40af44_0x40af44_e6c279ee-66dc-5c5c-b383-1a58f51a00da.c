// ============================================================
// 函数名称: sub_40af44
// 虚拟地址: 0x40af44
// WARP GUID: e6c279ee-66dc-5c5c-b383-1a58f51a00da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnumCalendarInfoA, GetThreadLocale
// [内部子函数调用]: sub_403df8, sub_40acbc, sub_408ebc
// [被调用的父级函数]: sub_40c310
// ============================================================

int32_t*sub_40af44()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t esi
    int32_t var_c = esi
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t Calendar = sub_408ebc(sub_40acbc(U"1", 0x100b, GetThreadLocale(), &var_8), 1)
    
    if (Calendar - 3 u< 3)
        EnumCalendarInfoA(sub_40ae90, GetThreadLocale(), Calendar, 4)
        int32_t i_1 = 7
        void* eax_6 = &data_5315dc
        int32_t i
        
        do
            *eax_6 = 0xffffffff
            eax_6 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        EnumCalendarInfoA(sub_40aecc, GetThreadLocale(), Calendar, 3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_40afe2
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
