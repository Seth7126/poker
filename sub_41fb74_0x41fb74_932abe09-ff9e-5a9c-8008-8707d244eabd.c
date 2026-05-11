// ============================================================
// 函数名称: sub_41fb74
// 虚拟地址: 0x41fb74
// WARP GUID: 932abe09-ff9e-5a9c-8008-8707d244eabd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41fc28, sub_402754, sub_41fb68, sub_41fb5c
// [被调用的父级函数]: sub_41fda0
// ============================================================

int32_t __convention("regparm")sub_41fb74(void* arg1, int32_t arg2, uint32_t arg3)
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
    sub_41fb5c(arg1)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i
    
    for (i = *(arg1 + 4); i != 0; i = *i)
        if (arg2 == i[2] && arg3 == i[3])
            break
    
    if (i == 0)
        int32_t* eax_7 = sub_402754(0x10)
        *eax_7 = *(arg1 + 4)
        eax_7[1] = sub_41fc28(arg3)
        eax_7[2] = arg2
        eax_7[3] = arg3
        *(arg1 + 4) = eax_7
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_41fc1c
    return sub_41fb68(arg1)
}
