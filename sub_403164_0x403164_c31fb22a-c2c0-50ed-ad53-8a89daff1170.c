// ============================================================
// 函数名称: sub_403164
// 虚拟地址: 0x403164
// WARP GUID: c31fb22a-c2c0-50ed-ad53-8a89daff1170
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403134, sub_403204, sub_405b40, sub_405b58
// [被调用的父级函数]: sub_4164b4, sub_405bd8
// ============================================================

int32_t** __convention("regparm")sub_403164(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, void** arg3)
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
    int32_t* var_c = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_1 = sub_403204(*arg1, var_8)
    
    if (eax_1 == 0)
        *arg3 = nullptr
    else
        int32_t eax_2 = *(eax_1 + 0x14)
        
        if (eax_2 == 0)
            sub_403134(arg1, *(eax_1 + 0x18), &var_c)
            sub_405b58(arg3, var_c)
        else
            *arg3 = arg1 + eax_2
        
        if (*arg3 != 0)
            if (*(eax_1 + 0x14) != 0)
                void* eax_5 = *arg3
                (*(*eax_5 + 4))(eax_5)
                esp = &var_8
            
            void* ebx_1
            ebx_1.b = 1
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4031f9
    int32_t** result = &var_c
    sub_405b40(result)
    return result
}
