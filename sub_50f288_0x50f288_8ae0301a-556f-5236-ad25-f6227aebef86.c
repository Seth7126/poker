// ============================================================
// 函数名称: sub_50f288
// 虚拟地址: 0x50f288
// WARP GUID: 8ae0301a-556f-5236-ad25-f6227aebef86
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c, sub_50f300
// [被调用的父级函数]: sub_50dbd4, sub_50e9c0
// ============================================================

void* __fastcallsub_50f288(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t __saved_eax
    int32_t __saved_eax_1 = __saved_eax
    sub_40422c(arg2)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0)
        ebp_1 = sub_50f300(arg1, arg2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_50f2d6
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
