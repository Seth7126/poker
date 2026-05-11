// ============================================================
// 函数名称: sub_4a21b4
// 虚拟地址: 0x4a21b4
// WARP GUID: 24d2a17e-527a-5f94-8a0e-e21647370217
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_49f714, sub_4a0d34, sub_404078
// [被调用的父级函数]: sub_4b1304
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4a21b4(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* edi_1 = arg2
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_1 = *(arg1 + 4)
    
    if (esi_1 != 0)
        (*(*esi_1 + 0x24))()
        esp = &var_8
        
        if (sub_404078(var_8) s> 0)
            sub_49f714(edi_1, "Proxy-Authorization", var_8)
    else if (*(arg1 + 0x18) != 0)
        arg2.b = 1
        int32_t* eax_4 = sub_4a0d34(sub_4a07dd+0x23, arg2)
        *(arg1 + 4) = eax_4
        sub_49f714(eax_4[3], "Username", *(arg1 + 0x14))
        sub_49f714(eax_4[3], sub_4a22af+5, *(arg1 + 8))
        (*(*eax_4 + 0x24))()
        esp = &var_8
        
        if (sub_404078(var_8) s> 0)
            sub_49f714(edi_1, "Proxy-Authorization", var_8)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4a2275
    struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
    sub_403df8(result)
    return result
}
