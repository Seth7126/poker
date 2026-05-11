// ============================================================
// 函数名称: sub_515d34
// 虚拟地址: 0x515d34
// WARP GUID: f962fc22-9411-546c-999c-50324f659fb5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50d2f4, sub_515920, sub_402bdc, sub_50d52c
// [被调用的父级函数]: sub_51682b
// ============================================================

int32_t __convention("regparm")sub_515d34(void* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: void var_88
    void var_88
    sub_50d52c(arg3, &var_88)
    int32_t __saved_ebp
    int32_t* var_98 = &__saved_ebp
    int32_t (* var_9c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_84 = 1
    char var_82 = 4
    char var_83 = 5
    void var_64
    sub_402bdc(&var_64, arg1 + 0x31, 0x40)
    char var_80 = arg2
    char var_7d = (*(*data_530304 + 0x1358)).b
    char var_77 = arg3.b
    
    if (sub_50d2f4() != 0)
        int32_t var_6c_1 = *(*data_530454 + 4)
        int32_t var_68_1 = *(*data_530454 + 8)
    
    int32_t result = sub_515920(arg1, &var_88, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
