// ============================================================
// 函数名称: sub_4ae408
// 虚拟地址: 0x4ae408
// WARP GUID: 8d0e7a1f-7071-5eed-9f3b-1c25bcb05f3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_40422c, sub_4adcfc, sub_404078, sub_410e44, sub_4030d0, sub_403e4c, sub_4ad27c, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_4ae554, sub_4ae4e8
// ============================================================

void* __convention("regparm")sub_4ae408(int32_t* arg1, int32_t* arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t var_c = 0
    sub_40422c(arg3)
    sub_40422c(arg4)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi
    void* ebp_1 = sub_4ad27c(arg2, arg3, arg1, edi)
    
    if (sub_404078(arg2[4]) != 0)
        sub_403e90(ebp_1 - 8, arg2[4])
    else
        sub_403e90(ebp_1 - 8, *(ebp_1 + 8))
    
    sub_403e4c(&arg2[4], *(ebp_1 - 8))
    *(ebp_1 + 8)
    
    if ((*(*arg2 + 0x30))(arg3) == 0)
        sub_4030d0(arg2)
    else if ((*(*arg1 + 0x38))() == 0)
        sub_410e44(arg2, nullptr)
        sub_4030d0(arg2)
    else
        ebp_1 = sub_4adcfc(arg1[0x10], arg2)
    
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = sub_4ae4dd
    sub_403e1c(ebp_1 - 8, 2)
    sub_403df8(ebp_1 + 8)
    return ebp_1 + 8
}
