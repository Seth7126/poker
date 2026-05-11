// ============================================================
// 函数名称: sub_424f04
// 虚拟地址: 0x424f04
// WARP GUID: c717142b-3ff3-5ff1-b80a-b14eec6f88c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424f04(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    char eax_1 = (*(*arg1 + 0x24))()
    
    if (eax_1 == 0)
        return eax_1
    
    int32_t* eax_3 = arg1[0xa]
    eax_3[0x7c].b = 1
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*eax_3 + 0xb8))(ExceptionList, var_14, var_10)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_424f61
    void* eax_5 = arg1[0xa]
    *(eax_5 + 0x1f0) = 0
    return eax_5
}
