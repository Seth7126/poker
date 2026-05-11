// ============================================================
// 函数名称: sub_5143f0
// 虚拟地址: 0x5143f0
// WARP GUID: 95d33e3d-9b80-56f5-826c-007d7d8f33ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_515920, sub_50d52c
// [被调用的父级函数]: sub_4e6659, sub_50a598, sub_509a28, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_5143f0(void* arg1, int32_t arg2)
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
    
    if (arg2 == 0)
        *(arg1 + 0x54) = 2
    
    char var_84 = 6
    char var_81 = 2
    int32_t var_6c = arg2
    char var_82 = 0
    int32_t result = sub_515920(arg1, &var_88, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
