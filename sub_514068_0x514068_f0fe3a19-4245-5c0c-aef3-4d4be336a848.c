// ============================================================
// 函数名称: sub_514068
// 虚拟地址: 0x514068
// WARP GUID: f0fe3a19-4245-5c0c-aef3-4d4be336a848
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_515920, sub_50a1e8, sub_50d52c
// [被调用的父级函数]: sub_527230
// ============================================================

int32_t __fastcallsub_514068(int32_t arg1, char arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void var_88
    void var_88
    int32_t edx_1 = sub_50d52c(arg1, &var_88)
    int32_t __saved_ebp
    int32_t* var_98 = &__saved_ebp
    int32_t (* var_9c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_84 = 3
    char var_81 = sub_50a1e8(arg2, edx_1)
    int32_t var_6c = arg1
    int32_t var_68 = arg4
    
    if (*(arg3 + 0x344) == 0)
        char var_82_1 = 4
    else
        char var_82 = 1
    
    char var_64 = 0
    int32_t result = sub_515920(arg3, &var_88, nullptr)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
