// ============================================================
// 函数名称: sub_425374
// 虚拟地址: 0x425374
// WARP GUID: 905bafb6-1023-5d4b-b763-2408752ebe91
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403ee0, sub_411774, sub_4318d0, sub_405ae8, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_425374(void* arg1, WPARAM arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_1004 = arg1
    int32_t ebx
    int32_t var_1010 = ebx
    int32_t esi
    int32_t var_1014 = esi
    int32_t edi
    int32_t var_1018 = edi
    int32_t var_100c = 0
    int32_t* var_101c = &var_4
    int32_t (* var_1020)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void lParam
    LRESULT eax_2 = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0x189, arg2, &lParam)
    
    if (eax_2 s< 0)
        sub_405ae8(data_5307e4, &var_100c)
        sub_411774(arg2, var_100c)
        noreturn
    
    sub_403ee0(arg3, &lParam, eax_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_101c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_425411
    int32_t* result = &var_100c
    sub_403df8(result)
    return result
}
