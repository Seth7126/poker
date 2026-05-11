// ============================================================
// 函数名称: sub_4dd164
// 虚拟地址: 0x4dd164
// WARP GUID: 438b6ffb-13e9-50d4-8252-fa79227cb365
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47b650, sub_40422c, sub_403e1c, sub_4040c4
// [被调用的父级函数]: sub_4dd1e0, sub_4dd1d7
// ============================================================

int32_t __convention("regparm")sub_4dd164(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_c = nullptr
    sub_40422c(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4040c4(&var_c, sub_4dd1d7+5, arg1)
    sub_47b650(*(arg2 - 4), data_61ca20, var_c, 0)
    fsbase->NtTib.ExceptionList = 0
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_4dd1d0
    return sub_403e1c(&var_c, 2)
}
