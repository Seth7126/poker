// ============================================================
// 函数名称: sub_40a218
// 虚拟地址: 0x40a218
// WARP GUID: 390bac10-6459-5bbe-8fbe-d7cf6d48314e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetThreadLocale, GetDateFormatA
// [内部子函数调用]: sub_403e90, sub_40be00, sub_404028, sub_404078, sub_403ee0, sub_40bf50, sub_40423c, sub_40beec, sub_403fb0, sub_403df8, sub_404280
// [被调用的父级函数]: sub_40a48c
// ============================================================

int32_t* __convention("regparm")sub_40a218(int32_t arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_120 = ebx
    int32_t esi
    int32_t var_124 = esi
    void* var_11c = nullptr
    int32_t var_8 = 0
    int32_t* var_128 = &var_4
    int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_4037f0
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
    sub_403e90(&var_8, 0x40a380)
    PSTR lpFormat = sub_40423c(var_8)
    void dateStr
    
    if (GetDateFormatA(GetThreadLocale(), 4, &date, lpFormat, &dateStr, 0x100) != 0)
        sub_404028(arg2, &dateStr, 0x100)
        
        if (arg1 == 1)
            int32_t* eax_8
            eax_8.w = data_5315b8
            int16_t temp1_1 = eax_8.w
            eax_8.w -= 4
            
            if (temp1_1 != 4)
                int16_t temp2_1 = eax_8.w
                eax_8.w -= 0xd
                
                if (temp2_1 == 0xd)
                    sub_404280(sub_40bf50(*arg2, 1), 1, *arg2, arg2)
            else if (data_5315ba == 1)
                int32_t eax_13 = sub_404078(*arg2)
                
                if (sub_40be00(*arg2, eax_13) == 4)
                    int32_t eax_17
                    int32_t ecx_2
                    eax_17, ecx_2 = sub_40beec(*arg2, 3)
                    sub_403fb0(ecx_2, eax_17 + &dateStr - 1)
                    sub_403ee0(arg2, eax_17 + &dateStr - 1, sub_40bf50(var_11c, 2))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_128_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_40a371
    sub_403df8(&var_11c)
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
