// ============================================================
// 函数名称: sub_44cd2c
// 虚拟地址: 0x44cd2c
// WARP GUID: 7685c7d8-c306-5ef2-ab7e-2df8e3c47d3d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_42afb8, sub_403e4c, sub_44c778, sub_443f38, sub_42af98
// [被调用的父级函数]: sub_44cd08, sub_44cce8
// ============================================================

int32_t __convention("regparm")sub_44cd2c(void* arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    arg2.b = arg2.b
    int16_t ecx
    int32_t* eax = sub_44c778(arg1, arg2, ecx)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    eax[0x54] = arg6
    sub_403e4c(&eax[0x89], arg3)
    
    if (arg5 s>= 0)
        sub_42af98(eax)
    
    if (arg4 s>= 0)
        sub_42afb8(eax)
    
    if (arg4 s< 0 && arg5 s< 0)
        sub_443f38(eax, 4)
    
    int32_t var_c = (*(*eax + 0xd8))()
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_44cdd3
    return sub_4030d0(eax)
}
