// ============================================================
// 函数名称: sub_49ae68
// 虚拟地址: 0x49ae68
// WARP GUID: 2d5e57ac-e963-5299-90a5-031de339dfa6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4994c8
// [被调用的父级函数]: sub_49adb4, sub_4a76d4, sub_49aac0, sub_4a80d4
// ============================================================

void __convention("regparm")sub_49ae68(int32_t* arg1, int32_t arg2) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_14 = &var_4
    int32_t var_18 = 0x49aeba
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x68))(ExceptionList, var_18, var_14)
    int32_t edx_1
    edx_1.b = 1
    sub_4994c8(arg2, edx_1, sub_498fba+0x4b2, var_8)
    sub_403828()
    noreturn
}
