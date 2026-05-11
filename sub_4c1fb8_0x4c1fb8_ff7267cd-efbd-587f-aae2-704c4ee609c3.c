// ============================================================
// 函数名称: sub_4c1fb8
// 虚拟地址: 0x4c1fb8
// WARP GUID: ff7267cd-efbd-587f-aae2-704c4ee609c3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_525ab8, sub_47a010, sub_4d6394, sub_51e034, sub_51e1c0, sub_4c1108, sub_47a9a0, sub_4c8aa0, sub_46910c, sub_403e1c, sub_4d9f6c, sub_403010
// [被调用的父级函数]: sub_4d7f8c, sub_4e6659, sub_4e649b
// ============================================================

int32_tsub_4c1fb8()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    int32_t var_c = 0
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    void* edi_1 = data_5301f4
    void* ebx_1 = data_530304
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_47a010(*ebx_1, *data_5308d0, *data_52ff7c) == 0)
        *(*edi_1 + 0x20088) = 3
    else
        *(*edi_1 + 0x20088) = 2
    
    *(*edi_1 + 0x21120) = 2
    *(*edi_1 + 0x21124) = 2
    *ebx_1
    
    if (sub_4d6394() == 0)
        sub_47a9a0(*data_5300dc, *data_5308d0, *ebx_1, *edi_1 + 0x20084)
    
    if (*(*edi_1 + 0x111f9) != 0)
        *(*edi_1 + 0x20084) = 1
    
    if (sub_47a010(*ebx_1, *data_5308d0, *data_5307a4) == *(*edi_1 + 0x2008d))
        *(*edi_1 + 0x2008d) = sub_47a010(*ebx_1, *data_5308d0, *data_5307a4) ^ 1
    
    *(*edi_1 + 0x2008d) = 0
    void* ebp_1
    int32_t esi_1
    ebp_1, esi_1 = sub_46910c(*ebx_1, "f_kurz2", &var_c)
    long double x87_r0
    int32_t* ebx_2 = sub_47ab08(*ebx_1, *data_5308d0, *data_52ff7c, x87_r0, *(ebp_1 - 8))
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    void* eax_23
    eax_23.b = *data_530144
    
    if (eax_23.b - 1 u< 2)
        *ebx_2
        sub_4d9f6c()
        sub_4c8aa0(0)
        int32_t ecx_14 = sub_525ab8(*edi_1, 0x62, esi_1)
        esp = &var_8
        *edi_1
        ebp_1 = sub_51e1c0(ecx_14, 1, esi_1, edi_1)
        void* eax_28 = data_530658
        *eax_28
        bool o_1 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t eax_30 = *(*ebx_2 + 0xab0) + *eax_28 * 0x81c0
        sub_4c1108()
        void* eax_41 = data_5300b0
        *eax_41
        bool o_19 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_19)
            sub_403010()
            noreturn
        
        *(eax_30 + *eax_41 * 0x118 - 0x9c) = 0x50
        void* eax_43 = data_530110
        *eax_43
        bool o_20 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_20)
            sub_403010()
            noreturn
        
        *(eax_30 + *eax_43 * 0x118 - 0x9c) = 0x6e
        void* eax_45 = data_530920
        *eax_45
        bool o_21 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_21)
            sub_403010()
            noreturn
        
        *(eax_30 + *eax_45 * 0x118 - 0x9c) = 0x6e
        void* eax_47 = data_530648
        *eax_47
        bool o_22 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_22)
            sub_403010()
            noreturn
        
        *(eax_30 + *eax_47 * 0x118 - 0x9c) = 0x50
        
        if (add_overflow(0x8c, 0xffffff9c))
            sub_403010()
            noreturn
        
        if (add_overflow(0x28, 0xffffffec))
            sub_403010()
            noreturn
        
        void* edx_24 = data_5300b0
        *edx_24
        bool o_25 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_25)
            sub_403010()
            noreturn
        
        *(eax_30 + *edx_24 * 0x118 - 0xf6) = 0x14
        
        if (add_overflow(0x8c, 0xa))
            sub_403010()
            noreturn
        
        if (add_overflow(0x96, 0xffffffd8))
            sub_403010()
            noreturn
        
        void* edx_26 = data_530110
        *edx_26
        bool o_28 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_28)
            sub_403010()
            noreturn
        
        *(eax_30 + *edx_26 * 0x118 - 0xf6) = 0x6e
        
        if (add_overflow(0x8c, 0x96))
            sub_403010()
            noreturn
        
        if (add_overflow(0x122, 0xffffffc4))
            sub_403010()
            noreturn
        
        void* edx_28 = data_530920
        *edx_28
        bool o_31 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_31)
            sub_403010()
            noreturn
        
        *(eax_30 + *edx_28 * 0x118 - 0xf6) = 0xe6
        
        if (add_overflow(0x8c, 0x14a))
            sub_403010()
            noreturn
        
        if (add_overflow(0x1d6, 0xffffffb0))
            sub_403010()
            noreturn
        
        void* eax_49 = data_530648
        *eax_49
        bool o_34 = unimplemented  {imul eax, dword [eax], 0x23}
        
        if (o_34)
            sub_403010()
            noreturn
        
        *(eax_30 + *eax_49 * 0x118 - 0xf6) = 0x186
    
    *edi_1
    sub_51e034()
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4c23f0
    return sub_403e1c(ebp_1 - 8, 2)
}
