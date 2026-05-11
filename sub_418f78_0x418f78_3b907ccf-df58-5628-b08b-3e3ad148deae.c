// ============================================================
// 函数名称: sub_418f78
// 虚拟地址: 0x418f78
// WARP GUID: 3b907ccf-df58-5628-b08b-3e3ad148deae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418470, sub_417f50, sub_403248, sub_410b1c, sub_418480
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_418f78(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    
    if (sub_403248(arg2, 0x4174a8) == 0)
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
    sub_417f50(data_5316a8, arg1, arg2[4])
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_20_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_418ff2
    return sub_418480(arg2)
}
