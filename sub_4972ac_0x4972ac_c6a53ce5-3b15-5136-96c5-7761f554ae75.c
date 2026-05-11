// ============================================================
// 函数名称: sub_4972ac
// 虚拟地址: 0x4972ac
// WARP GUID: c6a53ce5-3b15-5136-96c5-7761f554ae75
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40422c, sub_408988, sub_403e4c, sub_40b56c, sub_403df8
// [被调用的父级函数]: sub_497dd4, sub_516544, sub_5082d0
// ============================================================

void** __convention("regparm")sub_4972ac(void* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_408988(var_8, *(arg1 + 0x30))
    
    if (eax_2 != 0)
        if ((*(arg1 + 0x20) & 1) == 0 && *(arg1 + 0x24) != 0)
            edx_1.b = 1
            sub_40b56c(0x4940dc, edx_1, data_5305c0)
            sub_403828()
            noreturn
        
        sub_403e4c(arg1 + 0x30, var_8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_497326
    void** result = &var_8
    sub_403df8(result)
    return result
}
