// ============================================================
// 函数名称: sub_40faf0
// 虚拟地址: 0x40faf0
// WARP GUID: cf2007bf-7ba6-5ce8-ad33-066e4348be00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4ec
// [被调用的父级函数]: sub_40fc0c, sub_4156c0
// ============================================================

void __convention("regparm")sub_40faf0(int32_t arg1) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_10 = nullptr
    int32_t* var_18 = &var_4
    int32_t var_1c = 0x40fb50
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = arg1
    char var_8 = 0xb
    int32_t* var_24 = &var_c
    sub_405ae8(data_5308c0, &var_10)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4ec(sub_40e8c2+6, edx_1, var_10, 0)
    sub_403828()
    noreturn
}
