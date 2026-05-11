// ============================================================
// 函数名称: sub_514290
// 虚拟地址: 0x514290
// WARP GUID: ab0b33b0-5d1b-5cb0-9650-0192fb8a7a0e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_515920, sub_50d52c
// [被调用的父级函数]: sub_5075fc
// ============================================================

int32_t __convention("regparm")sub_514290(void* arg1)
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
    char var_84 = 7
    char var_81 = 9
    int32_t var_64 = 0x4f4c4208
    void var_60
    void* edi = &var_60
    void* const esi = "CKMSG"
    *edi = *esi
    *(edi + 4) = *(esi + 4)
    
    if (*(arg1 + 0x344) == 0)
        char var_82_1 = 4
    else
        char var_82 = 0
    
    int32_t result = sub_515920(arg1, &var_88, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
