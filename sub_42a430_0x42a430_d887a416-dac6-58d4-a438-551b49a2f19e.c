// ============================================================
// 函数名称: sub_42a430
// 虚拟地址: 0x42a430
// WARP GUID: d887a416-dac6-58d4-a438-551b49a2f19e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_410948, sub_42a29c, sub_4108e4, sub_419bc0, sub_42a524, sub_419bbc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42a430(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    
    if (*(arg1 + 0x58) == 0)
        return arg1
    
    if (*(arg1 + 0x5c) != 0)
        sub_419bc0(arg1, *(arg1 + 0x5c))
        return sub_42a524(arg1)
    
    int32_t* eax_4 = sub_4108e4(data_531790)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (eax_4[2] s>= 4)
        sub_42a29c()
    
    *(arg1 + 0x5c) = (*(**(arg1 + 0x58) + 0x44))()
    sub_4103c8(eax_4, arg1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_42a4bc
    return sub_410948(data_531790)
}
