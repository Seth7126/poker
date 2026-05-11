// ============================================================
// 函数名称: sub_405a0c
// 虚拟地址: 0x405a0c
// WARP GUID: 56644f9f-a1d1-5c18-9eae-862a259c44ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_405a78
// ============================================================

int32_t*sub_405a0c()
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t var_8 = eax
    int32_t* result = data_52e020
    
    for (int32_t* i = result; i != 0; i = result)
        int32_t __saved_ebp
        int32_t* var_1c_1 = &__saved_ebp
        int32_t (* var_20_1)() = j_sub_40353c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        i[1](ExceptionList, var_20_1, var_1c_1)
        fsbase->NtTib.ExceptionList = ExceptionList
        result = *i
    
    return result
}
