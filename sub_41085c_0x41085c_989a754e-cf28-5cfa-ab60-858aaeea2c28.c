// ============================================================
// 函数名称: sub_41085c
// 虚拟地址: 0x41085c
// WARP GUID: 989a754e-cf28-5cfa-ab60-858aaeea2c28
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_410948, sub_4104b0, sub_4108e4, sub_410580
// [被调用的父级函数]: sub_4138b8, sub_40ff80, sub_41920c, sub_41cf54
// ============================================================

int32_t __convention("regparm")sub_41085c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    sub_4108e4(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4
    
    if (*(arg1 + 0x20) != 1)
        eax_4 = sub_410580(*(arg1 + 4), arg2)
    
    if (*(arg1 + 0x20) == 1 || eax_4 == 0xffffffff)
        sub_4103c8(*(arg1 + 4), arg2)
    else if (*(arg1 + 0x20) == 2)
        **(arg1 + 4)
        sub_4104b0(arg2, data_530394)
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4108df
    return sub_410948(arg1)
}
