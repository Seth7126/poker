// ============================================================
// 函数名称: sub_40880c
// 虚拟地址: 0x40880c
// WARP GUID: 5a7d735a-e9e9-5c76-851e-c65935b9de9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4ec
// [被调用的父级函数]: sub_409608, sub_408e80
// ============================================================

void __convention("regparm")sub_40880c(char** arg1, int32_t arg2, int32_t arg3) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_18 = &var_4
    int32_t var_1c = 0x40885e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_24 = arg2
    sub_405ae8(arg1, &var_8)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4ec(0x40837c, edx_1, var_8, arg3)
    sub_403828()
    noreturn
}
