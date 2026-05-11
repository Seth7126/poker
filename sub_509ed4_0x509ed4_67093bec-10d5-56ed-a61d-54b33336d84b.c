// ============================================================
// 函数名称: sub_509ed4
// 虚拟地址: 0x509ed4
// WARP GUID: 67093bec-10d5-56ed-a61d-54b33336d84b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_403e90, sub_47a1c0, sub_404138, sub_404188, sub_520efc, sub_408e1c, sub_47a7ec, sub_40401c, sub_402bc0, sub_402b90, sub_509d44, sub_514cc4, sub_403df8, sub_403e1c, sub_50a4e0, sub_403010
// [被调用的父级函数]: sub_5168a7, sub_511e1c, sub_516d08, sub_514ef8
// ============================================================

int32_t __convention("regparm")sub_509ed4(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_64 = ebx
    int32_t esi
    int32_t var_68 = esi
    int32_t var_60 = 0
    char* var_c = nullptr
    int32_t var_10 = 0
    int32_t var_5c = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t ebx_1 = arg1
    int32_t* var_6c = &var_4
    int32_t (* var_70)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_50a4e0(ebx_1) != 1)
        char var_34[0x24]
        sub_402bc0(&var_34, 0x50a118)
        int32_t esi_1 = ebx_1 * 0xe9
        bool o_1 = unimplemented  {imul esi, ebx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        sub_402b90(&var_34, *data_530454 + (esi_1 << 2) - 0x4f, 0x22)
        char var_58[0x24]
        sub_402bc0(&var_58, &var_34)
        sub_40401c(sub_402b90(&var_58, 0x50a128, 0x23), &var_58)
        int32_t var_78_1 = var_10
        sub_408e1c(ebx_1, &var_5c)
        int32_t var_7c_1 = var_5c
        void* const var_80_1 = &data_50a134
        sub_404138(&var_c, 3)
        sub_514cc4(*data_530454, var_c)
        *(*data_530454 + (esi_1 << 2) - 0x50) = 4
        int32_t temp1_1 = *(*data_530454 + (esi_1 << 2) + 0x18c)
        
        if (temp1_1 == 0)
            *(*data_530454 + (esi_1 << 2) + 0x18c) = sub_509d44()
        
        int32_t eax_20 = sub_50a4e0(ebx_1) * 0x41
        bool o_2 = unimplemented  {imul eax, eax, 0x41}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(*data_5301f4 + (eax_20 << 3) + 0x20090) = *(*data_530454 + (esi_1 << 2) + 0x18c)
        *(*data_530454 + (esi_1 << 2) + 0x185) = 0
        sub_403e90(&var_8, 0x50a140)
        var_c = nullptr
        int32_t* var_10_1 = &var_60
        int32_t eax_25 = sub_50a4e0(ebx_1)
        *data_530a74
        *data_530304
        ebp_1 = sub_47a7ec(*(data_52fed4 + (eax_25 << 2)), var_10_1, var_c.b)
        sub_404188(ebp_1[-0x17], 0x50a14c)
        
        if (temp1_1 == 0)
            sub_403df8(&ebp_1[-1])
        
        void* eax_29
        
        if (ebp_1[-1] != 0)
            var_c = ebp_1[-1]
            int32_t eax_32 = sub_50a4e0(ebx_1)
            long double x87_r0
            eax_29, ebx_1 =
                sub_47ab08(*data_530304, *data_530a74, *(data_52fed4 + (eax_32 << 2)), x87_r0, var_c)
        
        eax_29.b = ebp_1[-1] != 0
        var_c = eax_29
        int32_t eax_36 = sub_50a4e0(ebx_1)
        int32_t ecx_10 = sub_47a1c0(*(data_52fed4 + (eax_36 << 2)), *data_530a74, *data_530304, var_c.b)
        esp = &var_8
        void* eax_39 = data_5302c8
        *eax_39
        bool o_3 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_3)
            sub_403010()
            noreturn
        
        if (*(*(*data_530304 + 0xab0) + *eax_39 * 0x81c0 + 1) != 0)
            *data_5301f4
            int32_t edi
            sub_520efc(ecx_10, 1, esi_1, edi)
    
    ebx_1.b = 1
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50a110
    sub_403e1c(&ebp_1[-0x17], 2)
    return sub_403e1c(&ebp_1[-3], 3)
}
