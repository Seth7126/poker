// ============================================================
// 函数名称: sub_44630c
// 虚拟地址: 0x44630c
// WARP GUID: c604df59-6f4e-5fb8-bd73-3fa826da18e3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_444c90, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_44630c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x216) == 0)
        char eax_1
        
        if (*(arg1 + 0x47) != 0)
            eax_1 = (*(*arg1 + 0x4c))()
            esp = &var_8
        
        if (*(arg1 + 0x47) == 0 || eax_1 == 0)
            sub_405ae8(data_5308a8, &var_8)
            int32_t edx_3
            edx_3.b = 1
            sub_40b4b0(sub_40eacb+0x7d, edx_3, var_8)
            sub_403828()
            noreturn
        
        sub_444c90(arg1)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_446381
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
