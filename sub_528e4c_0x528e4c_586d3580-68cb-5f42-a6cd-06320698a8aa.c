// ============================================================
// 函数名称: sub_528e4c
// 虚拟地址: 0x528e4c
// WARP GUID: 586d3580-68cb-5f42-a6cd-06320698a8aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5286dc, sub_404138, sub_408e1c, sub_404080, sub_5289d0, sub_40401c, sub_4cda5c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_528e4c(void* arg1, struct _EXCEPTION_REGISTRATION_RECORD** arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_cc4 = ebx
    int32_t esi
    int32_t var_cc8 = esi
    int32_t edi
    int32_t var_ccc = edi
    int32_t var_cc0
    __builtin_memset(&var_cc0, 0, 0x18)
    int32_t* var_cd0 = &var_4
    int32_t (* var_cd4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5289d0(arg1)
    int32_t var_c = sub_5286dc(arg1)
    void var_ca8
    void var_33c
    __builtin_memcpy(&var_33c, &var_ca8, 0x324)
    void var_984
    void var_660
    __builtin_memcpy(&var_660, &var_984, 0x324)
    sub_403df8(arg2)
    int32_t i = 0
    void* edi_1 = &var_33c
    void* var_14 = &var_660
    
    do
        if (i s< ebp_1[-2])
            struct _EXCEPTION_REGISTRATION_RECORD* var_cdc_1 = *arg2
            
            if (add_overflow(i, 1))
                sub_403010()
                noreturn
            
            sub_408e1c(i + 1, &ebp_1[-0x32a])
            int32_t var_ce0_1 = ebp_1[-0x32a]
            void* const var_ce4_1 = &data_529130
            *edi_1
            bool o_2 = unimplemented  {imul edx, dword [edi], 0x112}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t edx_3 = ebp_1[-1] + *edi_1 * 0x890
            int32_t* edx_4 = ebp_1[-4]
            *edx_4
            bool o_3 = unimplemented  {imul edx, dword [edx], 0x22}
            
            if (o_3)
                sub_403010()
                noreturn
            
            sub_40401c(edx_3, edx_3 + *edx_4 * 0x110 + 0xa20)
            int32_t var_ce8_2 = ebp_1[-0x32b]
            sub_404138(arg2, 4)
            struct _EXCEPTION_REGISTRATION_RECORD* var_cdc_2 = *arg2
            void* const var_ce0_2 = &data_52913c
            *edi_1
            bool o_4 = unimplemented  {imul eax, dword [edi], 0x112}
            
            if (o_4)
                sub_403010()
                noreturn
            
            int32_t* edx_8 = ebp_1[-4]
            *edx_8
            bool o_5 = unimplemented  {imul edx, dword [edx], 0x22}
            
            if (o_5)
                sub_403010()
                noreturn
            
            ebp_1, edi_1 =
                sub_4cda5c(*(ebp_1[-1] + *edi_1 * 0x890 + *edx_8 * 0x110 + 0xa1c), 0, &ebp_1[-0x32c])
            int32_t var_ce4_2 = ebp_1[-0x32c]
            void* const var_ce8_3 = &data_529148
            sub_404138(arg2, 4)
            sub_404080(arg2, "\n\r")
        
        i += 1
        ebp_1[-4] += 4
        edi_1 += 4
    while (i != 5)
    
    struct _EXCEPTION_REGISTRATION_RECORD* var_cdc_3 = *arg2
    void* const var_ce0_3 = &data_529160
    void* const var_ce4_3 = &data_529154
    sub_404138(arg2, 3)
    int32_t esi_1 = ebp_1[-2]
    int32_t esi_2 = esi_1 - 5
    
    if (add_overflow(esi_1, 0xfffffffb))
        sub_403010()
        noreturn
    
    int32_t eax_14 = ebp_1[-2]
    
    if (add_overflow(eax_14, 0xffffffff))
        sub_403010()
        noreturn
    
    if (eax_14 - 1 s>= esi_2)
        ebp_1[-3] = eax_14 - 1 - esi_2 + 1
        void* edi_2 = &ebp_1[esi_2 - 0xce]
        ebp_1[-5] = &ebp_1[esi_2 - 0x197]
        int32_t i_1
        
        do
            if (esi_2 s< ebp_1[-2])
                ExceptionList = *arg2
                
                if (add_overflow(esi_2, 1))
                    sub_403010()
                    noreturn
                
                sub_408e1c(esi_2 + 1, &ebp_1[-0x32d])
                int32_t var_cdc_4 = ebp_1[-0x32d]
                void* const var_ce0_4 = &data_529130
                *edi_2
                bool o_9 = unimplemented  {imul edx, dword [edi], 0x112}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                int32_t edx_12 = ebp_1[-1] + *edi_2 * 0x890
                int32_t* edx_13 = ebp_1[-5]
                *edx_13
                bool o_10 = unimplemented  {imul edx, dword [edx], 0x22}
                
                if (o_10)
                    sub_403010()
                    noreturn
                
                sub_40401c(edx_12, edx_12 + *edx_13 * 0x110 + 0xa20)
                int32_t var_ce4_5 = ebp_1[-0x32e]
                sub_404138(arg2, 4)
                ExceptionList = *arg2
                void* const var_cdc_5 = &data_52916c
                *edi_2
                bool o_11 = unimplemented  {imul eax, dword [edi], 0x112}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                int32_t* edx_17 = ebp_1[-5]
                *edx_17
                bool o_12 = unimplemented  {imul edx, dword [edx], 0x22}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                ebp_1, edi_2 = sub_4cda5c(*(ebp_1[-1] + *edi_2 * 0x890 + *edx_17 * 0x110 + 0xa1c), 0, 
                    &ebp_1[-0x32f])
                int32_t var_ce0_5 = ebp_1[-0x32f]
                int32_t var_ce4_6 = 0
                sub_404138(arg2, 4)
                sub_404080(arg2, "\n\r")
            
            esi_2 += 1
            ebp_1[-5] += 4
            edi_2 += 4
            i_1 = ebp_1[-3]
            ebp_1[-3] -= 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = var_cd4
    int32_t (* var_ccc_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_52911e
    return sub_403e1c(&ebp_1[-0x32f], 6)
}
