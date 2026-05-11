// ============================================================
// 函数名称: sub_50f39c
// 虚拟地址: 0x50f39c
// WARP GUID: cacae4ee-17ab-591d-9b3a-4e8370bfe9a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_4042c0, sub_403e4c, sub_404080, sub_403fa0, sub_403df8
// [被调用的父级函数]: sub_50f478
// ============================================================

int32_t* __convention("regparm")sub_50f39c(char arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg3 - 5) = 0
    sub_403df8(arg2)
    
    while (sub_404078(*(arg3 - 4)) s> 0)
        char* eax_6
        eax_6.b = **(arg3 - 4)
        char temp0_1 = eax_6.b
        eax_6.b -= 0x23
        
        if (temp0_1 == 0x23)
            break
        
        char temp1_1 = eax_6.b
        eax_6.b -= 0x59
        
        if (temp1_1 == 0x59)
            break
        
        char* edx
        edx.b = **(arg3 - 4)
        sub_403fa0()
        sub_404080(arg2, var_8)
        sub_4042c0(arg3 - 4, 1, 1)
    
    if (*(arg3 - 4) == 0 || **(arg3 - 4) == 0x23)
        *(arg3 - 5) = 1
    
    if (*(arg3 - 4) != 0)
        sub_4042c0(arg3 - 4, 1, 1)
    
    if (arg1 != 0 && *arg2 == 0)
        sub_403e4c(arg2, U"0")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_50f465
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}
