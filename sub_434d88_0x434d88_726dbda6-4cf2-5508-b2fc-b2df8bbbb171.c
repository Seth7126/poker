// ============================================================
// 函数名称: sub_434d88
// 虚拟地址: 0x434d88
// WARP GUID: 726dbda6-4cf2-5508-b2fc-b2df8bbbb171
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c, sub_404078
// [被调用的父级函数]: sub_434ebc, sub_434e00
// ============================================================

void** __convention("regparm")sub_434d88(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    void* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_2 = sub_404078(var_8)
    (*(**(arg2 - 4) + 8))(ExceptionList, var_18, var_14)
    
    if (eax_2 s> 0)
        (*(**(arg2 - 4) + 8))()
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_434dfa
    void** result = &var_8
    sub_403df8(result)
    return result
}
