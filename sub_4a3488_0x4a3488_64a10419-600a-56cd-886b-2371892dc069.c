// ============================================================
// 函数名称: sub_4a3488
// 虚拟地址: 0x4a3488
// WARP GUID: 64a10419-600a-56cd-886b-2371892dc069
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_409ae0, sub_403010
// [被调用的父级函数]: sub_4afaf8, sub_4a90cc, sub_4a3478
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4a3488(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
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
    int32_t var_14 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x2a) != 0)
        if (add_overflow(arg4, 1))
            sub_403010()
            noreturn
        
        if (arg4 != 0xffffffff)
            int32_t eax_6
            eax_6.b = arg2.b
            sub_409ae0(arg4, arg3, *((eax_6 << 2) + &data_52fbfc), &var_14)
            *(arg1 + 0x2c)
            (*(arg1 + 0x28))(var_14)
            esp = &var_8
        else
            int32_t var_10 = 0
            char var_c_1 = 0xb
            int32_t eax_2
            eax_2.b = arg2.b
            sub_409ae0(0, &var_10, *((eax_2 << 2) + &data_52fbfc), &var_8)
            *(arg1 + 0x2c)
            (*(arg1 + 0x28))(var_8)
            esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4a3543
    sub_403df8(&var_14)
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
