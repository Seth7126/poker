// ============================================================
// 函数名称: sub_41452d
// 虚拟地址: 0x41452d
// WARP GUID: 2e580725-e3bc-5a21-82e8-0f2d54181ca2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403e90, sub_403248, sub_40b5a8, sub_40401c, sub_40301c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_41452d(char* arg1, int16_t arg2, void* arg3 @ ebp) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    *(arg3 - 4) = 0
    void* var_12c = arg3
    int32_t (* var_130)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg3 - 4)
    
    if (sub_403248(*(*(arg3 + 8) - 4), &data_40f80c) != 0)
        sub_403e90(arg3 - 4, *(*(*(arg3 + 8) - 4) + 8))
    
    if (*(arg3 - 4) == 0)
        sub_40401c(sub_40301c(**(*(arg3 + 8) - 4), arg3 - 0x104), arg3 - 0x104)
    
    *(arg3 - 0x124) = *(arg3 - 4)
    *(arg3 - 0x120) = 0xb
    *(arg3 - 0x11c) = *data_53030c
    *(arg3 - 0x118) = 0xb
    *(arg3 - 0x114) = *(*(arg3 + 8) - 8)
    *(arg3 - 0x110) = 0xb
    *(arg3 - 0x10c) = *(arg1 + 4)
    *(arg3 - 0x108) = 0xb
    void** const edx
    edx.b = 1
    sub_40b5a8(sub_40e812+6, edx, data_5308fc, 3, arg3 - 0x124)
    sub_403828()
    noreturn
}
