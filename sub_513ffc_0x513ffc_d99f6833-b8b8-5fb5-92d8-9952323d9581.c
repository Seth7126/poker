// ============================================================
// 函数名称: sub_513ffc
// 虚拟地址: 0x513ffc
// WARP GUID: d99f6833-b8b8-5fb5-92d8-9952323d9581
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_515920, sub_50d52c
// [被调用的父级函数]: sub_511e1c, sub_516d08
// ============================================================

int32_t __convention("regparm")sub_513ffc(void* arg1)
{
    // 第一条实际指令: void var_88
    void var_88
    int32_t ecx
    sub_50d52c(ecx, &var_88)
    int32_t __saved_ebp
    int32_t* var_98 = &__saved_ebp
    int32_t (* var_9c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_84 = 6
    char var_81 = 5
    int32_t edx
    int32_t var_6c = edx
    char var_82 = 0
    int32_t result = sub_515920(arg1, &var_88, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
