// ============================================================
// 函数名称: sub_4adcfc
// 虚拟地址: 0x4adcfc
// WARP GUID: 25071994-b7dc-5289-9145-8ef1643cdfff
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4040c4, sub_4ade4c, sub_410e44, sub_4ade74, sub_4030a0
// [被调用的父级函数]: sub_4ae408
// ============================================================

int32_t __convention("regparm")sub_4adcfc(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* ebx_1 = arg2
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    arg2.b = 1
    int32_t* eax_1 = sub_4ade4c(arg1, arg2.b)
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_c, ebx_1[4], ebx_1[7])
    int32_t eax_4
    int32_t ecx_2
    int32_t edx_2
    eax_4, edx_2, ecx_2 =
        (*(*eax_1 + 0x50))(ExceptionList, var_34, var_30, ExceptionList_1, var_28, var_24)
    
    if (eax_4 == 0xffffffff)
        edx_2.b = 1
        sub_4030a0(ecx_2, edx_2)
        sub_4040c4(&var_10, ebx_1[4], ebx_1[7])
        (*(*eax_1 + 0x38))(arg1)
    
    sub_4040c4(&var_14, ebx_1[4], ebx_1[7])
    (*(*eax_1 + 0x50))(arg1)
    int32_t* eax_14 = (*(*eax_1 + 0x18))()
    ebx_1[6]
    
    if ((*(*eax_14 + 0x50))() != 0xffffffff)
        (*(*(*(*eax_14 + 0x18))() + 8))()
        sub_410e44(ebx_1, nullptr)
        sub_4030d0(ebx_1)
    else
        ebx_1[6]
        (*(*eax_14 + 0x38))()
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4addf9
    void* edx_12
    edx_12.b = 1
    return sub_4ade74(arg1, edx_12.b)
}
