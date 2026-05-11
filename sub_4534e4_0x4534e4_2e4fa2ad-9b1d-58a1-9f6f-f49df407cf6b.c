// ============================================================
// 函数名称: sub_4534e4
// 虚拟地址: 0x4534e4
// WARP GUID: 2e4fa2ad-9b1d-58a1-9f6f-f49df407cf6b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4ec
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4534e4(int32_t* arg1) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_10 = nullptr
    int32_t* var_18 = &var_4
    int32_t var_1c = 0x453549
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = *(*arg1 + 0x14)
    char var_8 = 0
    int32_t* var_24 = &var_c
    sub_405ae8(data_5305c8, &var_10)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4ec(sub_453478+0x4c, edx_1, var_10, 0)
    sub_403828()
    noreturn
}
