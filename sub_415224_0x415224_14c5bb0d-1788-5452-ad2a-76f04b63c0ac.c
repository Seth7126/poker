// ============================================================
// 函数名称: sub_415224
// 虚拟地址: 0x415224
// WARP GUID: 14c5bb0d-1788-5452-ad2a-76f04b63c0ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_41512c
// [被调用的父级函数]: sub_415370
// ============================================================

int32_t* __convention("regparm")sub_415224(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t i = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    do
        int32_t ecx = sub_41512c(arg1, &i, ecx)
    while (i != 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_415267
    int32_t* result = &i
    sub_403df8(result)
    return result
}
