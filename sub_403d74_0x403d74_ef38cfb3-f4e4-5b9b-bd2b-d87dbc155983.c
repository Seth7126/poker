// ============================================================
// 函数名称: sub_403d74
// 虚拟地址: 0x403d74
// WARP GUID: ef38cfb3-f4e4-5b9b-bd2b-d87dbc155983
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40276c, sub_402ffc
// [被调用的父级函数]: sub_403dac
// ============================================================

int32_t __stdcallsub_403d74(int32_t* arg1)
{
    // 第一条实际指令: sub_402ffc()
    sub_402ffc()
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t var_c = 0x40398c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx_1 = *arg1
    int32_t var_14 = arg1[1]
    sub_40276c(arg1)
    int32_t result = edx_1(ExceptionList, var_c, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
