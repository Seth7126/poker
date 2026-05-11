// ============================================================
// 函数名称: sub_528770
// 虚拟地址: 0x528770
// WARP GUID: 17becc48-1b26-5d8d-bab8-9c08a6160dbe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc6dc, sub_404138, sub_408e1c, sub_5285a8, sub_4cda5c, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_528770(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t edi
    int32_t var_38 = edi
    int32_t var_2c
    __builtin_memset(&var_2c, 0, 0x14)
    int32_t edx
    int32_t var_8 = edx
    int32_t* var_3c = &var_4
    int32_t (* var_40)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp_1
    void* esi_2
    ebp_1, esi_2 = sub_5285a8(arg1, 0)
    sub_403df8(*(ebp_1 - 4))
    *(ebp_1 - 0x10) = 0
    *(ebp_1 - 0xc) = 0
    *(ebp_1 - 8) = 0
    int32_t eax_2 = *(esi_2 + 0xbefc)
    
    if (eax_2 s>= 0)
        *(ebp_1 - 0x14) = eax_2 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            int32_t eax_4 = ebx_1 * 0x112
            bool o_1 = unimplemented  {imul eax, ebx, 0x112}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(esi_2 + (eax_4 << 3) + 0x13b4) != 0)
                int32_t edx_1 = *(esi_2 + (eax_4 << 3) + 0x13b8)
                int32_t temp3_1 = *(ebp_1 - 8)
                *(ebp_1 - 8) += edx_1
                
                if (add_overflow(temp3_1, edx_1))
                    sub_403010()
                    noreturn
                
                int32_t j_1 = *(esi_2 + (eax_4 << 3) + 0x13ac)
                
                if (j_1 s> 0)
                    int32_t eax_5 = 1
                    int32_t j
                    
                    do
                        bool o_3 = unimplemented  {imul ecx, eax, 0x22}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        bool o_4 = unimplemented  {imul edi, ebx, 0x112}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        if (*(esi_2 + ebx_1 * 0x890 + eax_5 * 0x110 + 0xb28) != 0)
                            bool o_5 = unimplemented  {imul ecx, eax, 0x22}
                            
                            if (o_5)
                                sub_403010()
                                noreturn
                            
                            bool o_6 = unimplemented  {imul edi, ebx, 0x112}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            int32_t ecx_3 = *(esi_2 + ebx_1 * 0x890 + eax_5 * 0x110 + 0xa1c)
                            int32_t temp6_1 = *(ebp_1 - 0xc)
                            *(ebp_1 - 0xc) += ecx_3
                            
                            if (add_overflow(temp6_1, ecx_3))
                                sub_403010()
                                noreturn
                        
                        eax_5 += 1
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                int32_t temp4_1 = *(ebp_1 - 0x10)
                *(ebp_1 - 0x10) += 1
                
                if (add_overflow(temp4_1, 1))
                    sub_403010()
                    noreturn
                
                int32_t var_48_1 = **(ebp_1 - 4)
                void* const var_4c_1 = "Tisch "
                sub_408e1c(ebx_1, ebp_1 - 0x18)
                int32_t var_50_1 = *(ebp_1 - 0x18)
                void* const var_54_1 = &data_528970
                bool o_9 = unimplemented  {imul eax, ebx, 0x112}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                sub_408e1c(*(esi_2 + ebx_1 * 0x890 + 0x13b0), ebp_1 - 0x1c)
                int32_t var_58_1 = *(ebp_1 - 0x1c)
                void* const var_5c_1 = " Spieler"
                void* const var_60_1 = &data_528990
                sub_404138(*(ebp_1 - 4), 7)
            
            ebx_1 += 1
            i = *(ebp_1 - 0x14)
            *(ebp_1 - 0x14) -= 1
        while (i != 1)
    
    sub_408e1c(*(ebp_1 - 0x10), ebp_1 - 0x20)
    int32_t var_48_2 = *(ebp_1 - 0x20)
    void* const var_4c_2 = " Tische, TCash: "
    void* ebp_2 = sub_4cda5c(*(ebp_1 - 8), 0, ebp_1 - 0x24)
    int32_t var_50_2 = *(ebp_2 - 0x24)
    void* const var_54_2 = ", Cash: "
    int32_t eax_13 = sub_4cc6dc(0xa)
    
    if (add_overflow(eax_13, *(ebp_2 - 0xc)))
        sub_403010()
        noreturn
    
    void* ebp_3 = sub_4cda5c(eax_13 + *(ebp_2 - 0xc), 0, ebp_2 - 0x28)
    int32_t var_58_2 = *(ebp_3 - 0x28)
    void* const var_5c_2 = &data_5289cc
    void* const var_60_2 = &data_528990
    int32_t var_64 = **(ebp_3 - 4)
    sub_404138(*(ebp_3 - 4), 8)
    fsbase->NtTib.ExceptionList = var_48_2
    int32_t (* var_40_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_52894e
    return sub_403e1c(ebp_3 - 0x28, 5)
}
