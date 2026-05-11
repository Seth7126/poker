// ============================================================
// 函数名称: sub_4a8878
// 虚拟地址: 0x4a8878
// WARP GUID: e4557b95-a12f-5934-bbbb-2dfabac45967
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_402980, sub_4128c0, sub_405ae8, sub_412c38, sub_403df8, sub_40b4b0, sub_403010
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4a8878(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 s> sub_4128c0(arg1))
        sub_405ae8(data_5300fc, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_4a6faf+0xf9, edx_1, var_8)
        sub_403828()
        noreturn
    
    if (arg2 != sub_4128c0(arg1))
        int32_t eax_7 = sub_4128c0(arg1)
        
        if (add_overflow(eax_7, neg.d(arg2)))
            sub_403010()
            noreturn
        
        int32_t edi_1 = arg1[1]
        sub_402980(edi_1 + arg2, edi_1, eax_7 - arg2)
        
        if (add_overflow(sub_4128c0(arg1), neg.d(arg2)))
            sub_403010()
            noreturn
        
        (**arg1)()
    else
        sub_412c38(arg1)
    
    if (*(arg1 + 0x1a) != 0)
        arg1[7]
        arg1[6]()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4a8937
    char** result = &var_8
    sub_403df8(result)
    return result
}
