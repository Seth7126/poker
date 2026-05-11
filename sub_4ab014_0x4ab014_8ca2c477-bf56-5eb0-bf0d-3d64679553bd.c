// ============================================================
// 函数名称: sub_4ab014
// 虚拟地址: 0x4ab014
// WARP GUID: 8ca2c477-bf56-5eb0-bf0d-3d64679553bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a90cc, sub_4ab224
// [被调用的父级函数]: 无
// ============================================================

int32_t* __stdcallsub_4ab014(int32_t* arg1 @ eax, int32_t arg2, int32_t arg3, struct _EXCEPTION_REGISTRATION_RECORD* arg4, int32_t arg5, char* arg6)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg4
    void* edx
    sub_4a90cc(arg1, edx, ecx, arg2, arg3, ExceptionList, arg5, arg6)
    (*(*arg1 + 0x5c))()
    int32_t __saved_ebp
    int32_t* var_18_1 = &__saved_ebp
    int32_t (* var_1c_1)() = j_sub_403668
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4ab224()
    fsbase->NtTib.ExceptionList = ExceptionList
    
    if (arg1[0x2c].b != 0)
        return arg1
    
    return (*(*arg1 + 0x74))()
}
