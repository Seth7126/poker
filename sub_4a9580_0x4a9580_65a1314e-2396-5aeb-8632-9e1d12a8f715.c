// ============================================================
// 函数名称: sub_4a9580
// 虚拟地址: 0x4a9580
// WARP GUID: 65a1314e-2396-5aeb-8632-9e1d12a8f715
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49adb4, sub_415cac
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4a9580(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_20 = &__saved_ebp
    int32_t (* var_24)() = j_sub_403668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_2 = (*(**(arg1 + 0x30) + 0x20))(1, ExceptionList, var_24, var_20)
    int32_t var_10 = 0x2719
    int32_t var_c = 0x2736
    sub_49adb4(&var_10, eax_2, *data_5308e0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_415cac(arg1)
    return arg1
}
