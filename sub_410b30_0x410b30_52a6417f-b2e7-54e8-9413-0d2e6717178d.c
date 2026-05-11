// ============================================================
// 函数名称: sub_410b30
// 虚拟地址: 0x410b30
// WARP GUID: 52a6417f-b2e7-54e8-9413-0d2e6717178d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403e90, sub_40b5a8, sub_40401c, sub_40301c
// [被调用的父级函数]: sub_410b1c, sub_410c00
// ============================================================

void __convention("regparm")sub_410b30(int32_t* arg1, void** arg2) __noreturn
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t* var_124 = &var_4
    int32_t var_128 = 0x410be6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_108[0x100]
    
    if (arg2 == 0)
        sub_403e90(&var_8, 0x410bfc)
    else
        sub_40401c(sub_40301c(*arg2, &var_108), &var_108)
    
    int32_t var_118 = var_8
    char var_114 = 0xb
    sub_40301c(*arg1, &var_108)
    char (* var_110)[0x100] = &var_108
    char var_10c = 4
    char (* edx_2)[0x100]
    edx_2.b = 1
    sub_40b5a8(0x40837c, edx_2, data_530414, 1, &var_118)
    sub_403828()
    noreturn
}
