// ============================================================
// 函数名称: sub_437af8
// 虚拟地址: 0x437af8
// WARP GUID: f192b045-c128-52b8-b284-f8bc99d6afd6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_403df8
// [被调用的父级函数]: sub_4372a0
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_437af8(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0)
        int32_t eax_1 = (*(*arg2 + 0x20))()
        esp = &var_8
        int32_t eax_3
        
        if (eax_1 s>= *(arg1 + 0x24))
            eax_3 = (*(*arg2 + 0x2c))()
        
        if (eax_1 s< *(arg1 + 0x24) || eax_3 s< *(arg1 + 0x28))
            sub_405ae8(data_5301cc, &var_8)
            int32_t edx_3
            edx_3.b = 1
            sub_40b4b0(sub_40eacb+0x7d, edx_3, var_8)
            sub_403828()
            noreturn
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_437b6b
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
