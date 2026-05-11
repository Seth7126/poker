// ============================================================
// 函数名称: sub_4acd4c
// 虚拟地址: 0x4acd4c
// WARP GUID: 2253c0bb-108d-589f-977c-abc80660123e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_410cf8, sub_4ade4c, sub_4ade74, sub_403430
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4acd4c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    sub_403430(arg1, arg2)
    char var_9 = arg2.b
    void* result = arg1[1]
    
    if (result == 0)
        if (var_9 s<= 0)
            return result
        
        return sub_403420(arg1)
    
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* eax_1 = sub_4ade4c(result, 1)
    
    if (eax_1 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t var_18_1 = 0x4ace17
        struct _EXCEPTION_REGISTRATION_RECORD* edx_5
        edx_5.b = var_9
        edx_5.b &= 0xfc
        return sub_410cf8(arg1, edx_5)
    
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[4]
    
    if ((*(*eax_1 + 0x50))(ExceptionList, var_28, var_24) s> 0xffffffff)
        int32_t* eax_6 = (*(*eax_1 + 0x18))(arg1)
        arg1[6]
        
        if ((*(*eax_6 + 0x50))() s> 0xffffffff)
            (*(*eax_6 + 0x44))()
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_4acdf4
    int32_t* edx_4
    edx_4.b = 1
    return sub_4ade74(arg1[1], edx_4.b)
}
