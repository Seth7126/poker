// ============================================================
// 函数名称: sub_41fd7a
// 虚拟地址: 0x41fd7a
// WARP GUID: be3734ae-5db0-5662-a2b4-5d6ea37a400a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41fb68, sub_4030d0, sub_41fb5c, sub_40276c
// [被调用的父级函数]: sub_41fd28, sub_41fd7a
// ============================================================

int32_tsub_41fd7a(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* eax = *(arg1[-3] + 4)
    int32_t* eax = *(arg1[-3] + 4)
    
    if (eax != 0)
        sub_4030d0(eax)
    
    sub_40276c(arg1[-2])
    int32_t result = *(arg1[-1] + 4)
    
    if (result == 0)
        *arg1
        return result
    
    arg1[-2] = result
    arg1[-3] = arg1[-2]
    sub_41fb5c(arg1[-1])
    int32_t* var_4 = arg1
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1[-1] + 4) = *arg1[-3]
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_4_1)() = sub_41fd7a
    return sub_41fb68(arg1[-1])
}
