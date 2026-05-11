// ============================================================
// 函数名称: sub_46f5a0
// 虚拟地址: 0x46f5a0
// WARP GUID: 7f6d61b9-d6d1-5888-95a6-5fde3ec51fef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406010, sub_405f88, sub_404080, sub_402824, sub_403fa0, sub_403df8
// [被调用的父级函数]: sub_46f698
// ============================================================

char** __convention("regparm")sub_46f5a0(char arg1, int32_t* arg2, void* arg3)
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
    char* var_c = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg2)
    uint32_t eax_7
    
    do
        uint32_t eax_2 = sub_405f88(arg3 - 0x14c)
        sub_402824(eax_2)
        uint8_t var_5
        
        if (eax_2.b == 0)
            void* eax_4
            int32_t edx_1
            eax_4, edx_1 = sub_406010(arg3 - 0x14c, &var_5)
            sub_402824(eax_4)
            
            if (arg1 != var_5)
                edx_1.b = var_5
                sub_403fa0()
                sub_404080(arg2, var_c)
        
        if (arg1 == var_5)
            break
        
        eax_7 = sub_405f88(arg3 - 0x14c)
        sub_402824(eax_7)
    while (eax_7.b == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_46f63b
    char** result = &var_c
    sub_403df8(result)
    return result
}
