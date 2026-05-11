// ============================================================
// 函数名称: sub_4428f8
// 虚拟地址: 0x4428f8
// WARP GUID: 2dd4325a-6958-565f-879b-53c0d8510e2b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* const __convention("regparm")sub_4428f8(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* const result = arg1
    
    if (*(result + 0x2c2) != 0)
        int32_t __saved_ebp
        int32_t* var_18_1 = &__saved_ebp
        int32_t (* var_1c_1)() = j_sub_40353c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(arg1 + 0x2c4)
        (*(arg1 + 0x2c0))(ExceptionList, var_1c_1, var_18_1)
        result = nullptr
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return result
}
