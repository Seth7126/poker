// ============================================================
// 函数名称: sub_4155c8
// 虚拟地址: 0x4155c8
// WARP GUID: 0deae318-7827-5c81-a842-a2841c5038f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403e90, sub_40b5a8, sub_41622c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_4155c8(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    void* var_c = nullptr
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e90(&var_c, arg2)
    void* var_8 = nullptr
    void* esi_2 = *(arg1 + 0x1c)
    
    if (esi_2 != 0)
        var_8 = sub_41622c(esi_2, var_c)
    
    if (var_8 == 0)
        if (*(arg1 + 0x52) != 0)
            *(arg1 + 0x54)
            (*(arg1 + 0x50))(&var_8, arg3)
        
        if (var_8 == 0)
            void* var_14 = var_c
            char var_10 = 0xb
            void* edx_1
            edx_1.b = 1
            sub_40b5a8(sub_40e812+6, edx_1, data_530280, 0, &var_14)
            sub_403828()
            noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_415674
    void** result = &var_c
    sub_403df8(result)
    return result
}
