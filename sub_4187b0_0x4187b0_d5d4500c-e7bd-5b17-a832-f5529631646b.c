// ============================================================
// 函数名称: sub_4187b0
// 虚拟地址: 0x4187b0
// WARP GUID: d5d4500c-e7bd-5b17-a832-f5529631646b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418470, sub_417f50, sub_403248, sub_410b1c, sub_418b70, sub_4188ec, sub_418480, sub_418b8c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4187b0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    
    if (sub_403248(arg2, 0x41722c) == 0)
        return sub_410b1c(ecx, arg2)
    sub_418470(arg1)
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_418470(arg2)
    int32_t* var_20 = &__saved_ebp
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_417f50(data_5316a0, arg1, arg2[4])
    sub_4188ec(arg1, arg2[6])
    
    if (arg1[7] != arg2[7])
        sub_418b8c(arg1, sub_418b70(arg2))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_20_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_418855
    return sub_418480(arg2)
}
