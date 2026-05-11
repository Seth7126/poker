// ============================================================
// 函数名称: sub_4a75b4
// 虚拟地址: 0x4a75b4
// WARP GUID: 89088a54-bf3f-54c7-b5e9-e4d3b59aebac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a75b4(void* arg1, int32_t* arg2) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_14 = &var_4
    int32_t var_18 = 0x4a7602
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(**(*(arg1 + 0x78) + 0x10) + 0x1c))(ExceptionList, var_18, var_14)
    int32_t edx
    edx.b = 1
    sub_40b4b0(arg2, edx, var_8)
    sub_403828()
    noreturn
}
