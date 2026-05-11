// ============================================================
// 函数名称: sub_4493c8
// 虚拟地址: 0x4493c8
// WARP GUID: d8bb8c96-4832-5777-812f-d19a510e86af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_448d20, sub_4088b8, sub_444050, sub_449234, sub_4431dc
// [被调用的父级函数]: sub_52de46, _start
// ============================================================

BOOL __convention("regparm")sub_4493c8(BOOL arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    *(arg1 + 0x95) = 1
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4088b8(sub_4408d0)
    int32_t* eax_2 = *(arg1 + 0x38)
    
    if (eax_2 != 0)
        int32_t edx_2 = *data_5305a0
        
        if (edx_2 == 3)
            int32_t edx_3
            edx_3.b = 2
            sub_444050(eax_2, edx_3.b)
        else if (edx_2 == 7)
            *(eax_2 + 0x213) = 1
        
        if (*(arg1 + 0x4b) != 0)
            int32_t* eax_5 = *(arg1 + 0x38)
            
            if (*(eax_5 + 0x213) != 1)
                sub_4431dc(eax_5, 1)
            else
                sub_448d20(arg1)
        
        do
            sub_449234(arg1)
        while (*(arg1 + 0x8c) == 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_449479
    *(arg1 + 0x95) = 0
    return arg1
}
