// ============================================================
// 函数名称: sub_40c688
// 虚拟地址: 0x40c688
// WARP GUID: f03d1852-5138-5d9e-8694-c827251dc1f0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_403e90, sub_404078, sub_404138, sub_408a00, sub_404080, sub_403e1c, sub_403df8, sub_404280
// [被调用的父级函数]: sub_4d8208, sub_4a0e13
// ============================================================

int32_t __convention("regparm")sub_40c688(void* arg1, void* arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_10
    char* i
    
    if ((arg4 & 2) == 0)
        sub_403e90(&i, arg1)
        sub_403e90(&var_10, arg2)
    else
        sub_408a00(arg1, &i)
        sub_408a00(arg2, &var_10)
    
    char* var_14
    sub_403e90(&var_14, arg1)
    sub_403df8(arg3)
    
    while (i != 0)
        void* eax_7 = sub_40c024(var_10, i)
        
        if (eax_7 == 0)
            sub_404080(arg3, var_14)
            break
        
        int32_t var_34_1 = *arg3
        sub_404280(eax_7 - 1, 1, var_14, &var_18)
        char* var_38_2 = var_18
        int32_t ecx
        int32_t var_3c_1 = ecx
        sub_404138(arg3, 3)
        sub_404280(0x7fffffff, sub_404078(arg2) + eax_7, var_14, &var_14)
        
        if ((arg4 & 1) == 0)
            sub_404080(arg3, var_14)
            break
        
        sub_404280(0x7fffffff, sub_404078(var_10) + eax_7, i, &i)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40c7b2
    return sub_403e1c(&var_18, 4)
}
