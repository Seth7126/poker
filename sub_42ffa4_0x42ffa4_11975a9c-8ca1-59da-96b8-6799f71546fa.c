// ============================================================
// 函数名称: sub_42ffa4
// 虚拟地址: 0x42ffa4
// WARP GUID: 11975a9c-8ca1-59da-96b8-6799f71546fa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ActivateKeyboardLayout
// [内部子函数调用]: sub_4475f4, sub_435d2c, sub_4318d0, sub_408aa0, sub_403df8
// [被调用的父级函数]: sub_42fe7c
// ============================================================

void** __convention("regparm")sub_42ffa4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(data_530a80 + 8) != 0)
        if (arg1[0x56] != 0)
            sub_4475f4(*data_530a18, &var_8)
            
            if (sub_408aa0(arg1[0x56], var_8) != 0)
                ActivateKeyboardLayout(*(*data_530a18 + 0x30), KLF_ACTIVATE)
        
        if (arg1[0x55].b == 0)
            int32_t eax_9
            int32_t edx_3
            eax_9, edx_3 = sub_4318d0(arg1)
            edx_3.b = 1
            sub_435d2c(eax_9, edx_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_430035
    void** result = &var_8
    sub_403df8(result)
    return result
}
