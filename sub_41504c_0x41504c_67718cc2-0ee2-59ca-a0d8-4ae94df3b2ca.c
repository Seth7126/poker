// ============================================================
// 函数名称: sub_41504c
// 虚拟地址: 0x41504c
// WARP GUID: 67718cc2-0ee2-59ca-a0d8-4ae94df3b2ca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40dfb0, sub_413618, sub_403df8, sub_415210, sub_413600, sub_41512c
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t* __convention("regparm")sub_41504c(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t var_c = 0
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_28 = &var_4
    int32_t (* var_2c)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_1
    int32_t ecx
    eax_1, ecx = sub_415210(0)
    
    if (eax_1 != 0xb)
        sub_413600()
        noreturn
    
    **(sub_40dfb0(arg2) + 1)
    int32_t ebx_2 = 0
    
    while (true)
        sub_41512c(arg1, &var_c, ecx)
        
        if (var_c == 0)
            break
        
        int32_t eax_7
        eax_7, ecx = sub_413618()
        
        if (eax_7 u<= 0x1f)
            ebx_2 |= 1 << (eax_7 u% 0x20)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4150fd
    int32_t* result = &var_c
    sub_403df8(result)
    return result
}
