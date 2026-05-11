// ============================================================
// 函数名称: sub_48bd6c
// 虚拟地址: 0x48bd6c
// WARP GUID: 487486e4-a32d-5539-9595-19bb6cbd3506
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_40422c, sub_403e4c, sub_4054f4, sub_48be98, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4807f4, sub_4d6f10, sub_4dd1e0, sub_4dd1d7
// ============================================================

void** __convention("regparm")sub_48bd6c(void* arg1, char* arg2, int32_t arg3)
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
    char* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c
    
    if (arg3 != 0xffffffff)
        var_c = *(arg1 + 0xdc4)
        *(arg1 + 0xdc4) = arg3
    
    int32_t temp0 = *(arg1 + 0xaac)
    *(arg1 + 0xaac) += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    int32_t eax_2 = *(arg1 + 0xaac)
    
    if (add_overflow(eax_2, 1))
        sub_403010()
        noreturn
    
    int32_t var_28 = eax_2 + 1
    sub_4054f4()
    int32_t eax_5 = *(arg1 + 0xaac)
    
    if (add_overflow(eax_5, 1))
        sub_403010()
        noreturn
    
    int32_t var_28_1 = eax_5 + 1
    sub_4054f4()
    int32_t esi_1 = *(arg1 + 0xaac)
    
    if (add_overflow(esi_1, 0x3e8))
        sub_403010()
        noreturn
    
    int32_t eax_8 = *(arg1 + 0xaac)
    void* edx_2 = *(arg1 + 0xaa4)
    
    if (eax_8 u>= *(edx_2 - 4))
        sub_403008()
        noreturn
    
    sub_403e4c(edx_2 + (eax_8 << 2), var_8)
    int32_t eax_10 = *(arg1 + 0xaac)
    void* edx_4 = *(arg1 + 0xaa8)
    
    if (eax_10 u>= *(edx_4 - 4))
        sub_403008()
        noreturn
    
    *(edx_4 + (eax_10 << 2)) = esi_1 + 0x3e8
    sub_48be98(arg1, var_8, esi_1 + 0x3e8, 0)
    
    if (arg3 != 0xffffffff)
        *(arg1 + 0xdc4) = var_c
    
    fsbase->NtTib.ExceptionList = 0
    int32_t (__stdcall* var_20_1)(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_48be8c
    void** result = &var_8
    sub_403df8(result)
    return result
}
