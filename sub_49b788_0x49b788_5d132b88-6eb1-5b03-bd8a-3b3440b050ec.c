// ============================================================
// 函数名称: sub_49b788
// 虚拟地址: 0x49b788
// WARP GUID: 5d132b88-6eb1-5b03-bd8a-3b3440b050ec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c
// [被调用的父级函数]: sub_49bc14, sub_49c048, sub_4a6308, sub_49bb9c
// ============================================================

int32_t* __convention("regparm")sub_49b788(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x80))(ExceptionList, var_18, var_14)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_49b7d7
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
