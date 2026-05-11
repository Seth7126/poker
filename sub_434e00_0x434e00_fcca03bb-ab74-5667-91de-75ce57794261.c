// ============================================================
// 函数名称: sub_434e00
// 虚拟地址: 0x434e00
// WARP GUID: fcca03bb-ab74-5667-91de-75ce57794261
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4335b8, sub_403df8, sub_434e00, sub_434d88
// [被调用的父级函数]: sub_434fab, sub_434e00
// ============================================================

void* __convention("regparm")sub_434e00(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    char* var_c = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(**(arg3 - 4) + 8))(ExceptionList, var_1c, var_18)
    (*(**(arg3 - 4) + 8))(var_c, arg2)
    (*(**(arg3 - 4) + 8))()
    void* var_10_1 = arg3
    void* edx_3 = sub_4335b8(arg1, &var_c)
    void* ebp_1 = sub_434d88(var_c, edx_3)
    
    if (*(arg1 + 8) != 0)
        var_c = *(ebp_1 + 8)
        *(ebp_1 - 4)
        sub_434e00(var_c)
    
    if (*(arg1 + 0xc) != 0)
        var_c = *(ebp_1 + 8)
        *(ebp_1 - 4)
        sub_434e00(var_c)
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_434eb6
    sub_403df8(ebp_1 - 8)
    return ebp_1 - 8
}
