// ============================================================
// 函数名称: sub_528e43
// 虚拟地址: 0x528e43
// WARP GUID: 108ccf13-951b-581f-8c40-91d119229d58
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5286dc, sub_404138, sub_408e1c, sub_404080, sub_5289d0, sub_40401c, sub_4cda5c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_528e43(char* arg1, int16_t arg2, int32_t* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg3 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t ebx
    int32_t var_cc0 = ebx
    int32_t esi
    int32_t var_cc4 = esi
    int32_t edi
    int32_t var_cc8 = edi
    __builtin_memset(arg4 - 0xcbc, 0, 0x18)
    *(arg4 - 4) = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = *(arg4 + 8)
    void* var_ccc = arg4
    int32_t (* var_cd0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5289d0(*(arg4 - 4))
    *(arg4 - 8) = sub_5286dc(*(arg4 - 4))
    __builtin_memcpy(arg4 - 0x338, arg4 - 0xca4, 0x324)
    __builtin_memcpy(arg4 - 0x65c, arg4 - 0x980, 0x324)
    sub_403df8(ebx_1)
    int32_t i = 0
    void* edi_3 = arg4 - 0x338
    *(arg4 - 0x10) = arg4 - 0x65c
    
    do
        if (i s< *(arg4 - 8))
            struct _EXCEPTION_REGISTRATION_RECORD* var_cd8_1 = *ebx_1
            
            if (add_overflow(i, 1))
                sub_403010()
                noreturn
            
            sub_408e1c(i + 1, arg4 - 0xca8)
            int32_t var_cdc_1 = *(arg4 - 0xca8)
            void* const var_ce0_1 = &data_529130
            *edi_3
            bool o_2 = unimplemented  {imul edx, dword [edi], 0x112}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t edx_3 = *(arg4 - 4) + *edi_3 * 0x890
            int32_t* edx_4 = *(arg4 - 0x10)
            *edx_4
            bool o_3 = unimplemented  {imul edx, dword [edx], 0x22}
            
            if (o_3)
                sub_403010()
                noreturn
            
            sub_40401c(edx_3, edx_3 + *edx_4 * 0x110 + 0xa20)
            int32_t var_ce4_2 = *(arg4 - 0xcac)
            sub_404138(ebx_1, 4)
            struct _EXCEPTION_REGISTRATION_RECORD* var_cd8_2 = *ebx_1
            void* const var_cdc_2 = &data_52913c
            *edi_3
            bool o_4 = unimplemented  {imul eax, dword [edi], 0x112}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t* edx_8 = *(arg4 - 0x10)
            *edx_8
            bool o_5 = unimplemented  {imul edx, dword [edx], 0x22}
            
            if (o_5)
                sub_403010()
                noreturn
            
            arg4, edi_3 =
                sub_4cda5c(*(*(arg4 - 4) + *edi_3 * 0x890 + *edx_8 * 0x110 + 0xa1c), 0, arg4 - 0xcb0)
            int32_t var_ce0_2 = *(arg4 - 0xcb0)
            void* const var_ce4_3 = &data_529148
            sub_404138(ebx_1, 4)
            sub_404080(ebx_1, "\n\r")
        
        i += 1
        *(arg4 - 0x10) += 4
        edi_3 += 4
    while (i != 5)
    
    struct _EXCEPTION_REGISTRATION_RECORD* var_cd8_3 = *ebx_1
    void* const var_cdc_3 = &data_529160
    void* const var_ce0_3 = &data_529154
    sub_404138(ebx_1, 3)
    int32_t esi_3 = *(arg4 - 8)
    int32_t esi_4 = esi_3 - 5
    
    if (add_overflow(esi_3, 0xfffffffb))
        sub_403010()
        noreturn
    
    int32_t eax_15 = *(arg4 - 8)
    
    if (add_overflow(eax_15, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_15 - 1 s>= esi_4)
        *(arg4 - 0xc) = eax_15 - 1 - esi_4 + 1
        void* edi_4 = arg4 + (esi_4 << 2) - 0x338
        *(arg4 - 0x14) = arg4 + (esi_4 << 2) - 0x65c
        int32_t i_1
        
        do
            if (esi_4 s< *(arg4 - 8))
                ExceptionList = *ebx_1
                
                if (add_overflow(esi_4, 1))
                    sub_403010()
                    noreturn
                
                sub_408e1c(esi_4 + 1, arg4 - 0xcb4)
                int32_t var_cd8_4 = *(arg4 - 0xcb4)
                void* const var_cdc_4 = &data_529130
                *edi_4
                bool o_9 = unimplemented  {imul edx, dword [edi], 0x112}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                int32_t edx_12 = *(arg4 - 4) + *edi_4 * 0x890
                int32_t* edx_13 = *(arg4 - 0x14)
                *edx_13
                bool o_10 = unimplemented  {imul edx, dword [edx], 0x22}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                sub_40401c(edx_12, edx_12 + *edx_13 * 0x110 + 0xa20)
                int32_t var_ce0_5 = *(arg4 - 0xcb8)
                sub_404138(ebx_1, 4)
                ExceptionList = *ebx_1
                void* const var_cd8_5 = &data_52916c
                *edi_4
                bool o_11 = unimplemented  {imul eax, dword [edi], 0x112}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                int32_t* edx_17 = *(arg4 - 0x14)
                *edx_17
                bool o_12 = unimplemented  {imul edx, dword [edx], 0x22}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                arg4, edi_4 = sub_4cda5c(*(*(arg4 - 4) + *edi_4 * 0x890 + *edx_17 * 0x110 + 0xa1c), 0, 
                    arg4 - 0xcbc)
                int32_t var_cdc_5 = *(arg4 - 0xcbc)
                int32_t var_ce0_6 = 0
                sub_404138(ebx_1, 4)
                sub_404080(ebx_1, "\n\r")
            
            esi_4 += 1
            *(arg4 - 0x14) += 4
            edi_4 += 4
            i_1 = *(arg4 - 0xc)
            *(arg4 - 0xc) -= 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = var_cd0
    int32_t (* var_cc8_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_52911e
    return sub_403e1c(arg4 - 0xcbc, 6)
}
