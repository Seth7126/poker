// ============================================================
// 函数名称: sub_50928c
// 虚拟地址: 0x50928c
// WARP GUID: 656d3b3b-b0a7-52d8-afc9-7561690140e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46910c, sub_403e90, sub_4c2f1c, sub_404138, sub_402c90, sub_510e38, sub_50d318, sub_408e1c, sub_40287c, sub_514cc4, sub_4c2d7c, sub_403df8, sub_50a4e0, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_508998, sub_5091bc, sub_4e649b
// ============================================================

void*sub_50928c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_60 = ebx
    int32_t esi
    int32_t var_64 = esi
    int32_t edi
    int32_t var_68 = edi
    int32_t var_5c = 0
    int32_t var_c = 0
    void* esi_1 = data_530454
    int32_t* var_6c = &var_4
    int32_t (* var_70)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_d = 1
    
    for (int32_t i = 1; i != 9; i += 1)
        sub_403df8(&ebp_1[-2])
        bool o_1 = unimplemented  {imul eax, ebx, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(*esi_1 + i * 0x3a4 - 0x50) != 4)
            int32_t edi_1 = i * 0xe9
            bool o_2 = unimplemented  {imul edi, ebx, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t eax_5
            eax_5.b = *(*esi_1 + (edi_1 << 2) - 0x50)
            char eax_8
            
            if (eax_5.b == 0)
                eax_8 = sub_4c2d7c(sub_50a4e0(i))
            
            if (eax_5.b != 0 || eax_8 == 0)
                int32_t eax_11
                eax_11.b = *(*esi_1 + (edi_1 << 2) - 0x50)
                
                if (eax_11.b - 1 u< 2)
                    void* eax_14 = *esi_1
                    *(eax_14 + 0x350)
                    bool o_3 = unimplemented  {imul eax, dword [eax+0x350], 0xe9}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    sub_40287c(1, 2, *esi_1 + *(eax_14 + 0x350) * 0x3a4 + 0x198, &ebp_1[-0xc])
                    int32_t ecx_1
                    ecx_1.b = ebp_1[-0xc].b
                    sub_402c90(&ebp_1[-0xc], 0x509628, ecx_1 + 1)
                    
                    if (ecx_1 != 0xffffffff)
                        sub_40287c(3, 1, *esi_1 + (edi_1 << 2) + 0x198, &ebp_1[-0xc])
                        void* eax_32 = *esi_1
                        *(eax_32 + 0x350)
                        bool o_5 = unimplemented  {imul eax, dword [eax+0x350], 0xe9}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        sub_40287c(3, 1, *esi_1 + *(eax_32 + 0x350) * 0x3a4 + 0x198, &ebp_1[-0x15])
                        int32_t ecx_5
                        ecx_5.b = ebp_1[-0xc].b
                        sub_402c90(&ebp_1[-0xc], &ebp_1[-0x15], ecx_5 + 1)
                        *(ebp_1 - 0xa) = ecx_5 == 0xffffffff
                    else
                        sub_40287c(2, 1, *esi_1 + (edi_1 << 2) + 0x198, &ebp_1[-0xc])
                        void* eax_23 = *esi_1
                        *(eax_23 + 0x350)
                        bool o_4 = unimplemented  {imul eax, dword [eax+0x350], 0xe9}
                        
                        if (o_4)
                            sub_403010()
                            noreturn
                        
                        sub_40287c(2, 1, *esi_1 + *(eax_23 + 0x350) * 0x3a4 + 0x198, &ebp_1[-0x15])
                        int32_t ecx_3
                        ecx_3.b = ebp_1[-0xc].b
                        sub_402c90(&ebp_1[-0xc], &ebp_1[-0x15], ecx_3 + 1)
                        *(ebp_1 - 0xa) = ecx_3 == 0xffffffff
                    
                    if (i != *(*esi_1 + 0x350))
                        char eax_41 = sub_4c2d7c(sub_50a4e0(i))
                        char eax_44
                        
                        if (eax_41 != 0)
                            eax_44 = sub_4c2f1c(sub_50a4e0(i))
                        
                        if (eax_41 != 0 && eax_44 == 0)
                            int32_t edi_2 = i * 0xe9
                            bool o_8 = unimplemented  {imul edi, ebx, 0xe9}
                            
                            if (o_8)
                                sub_403010()
                                noreturn
                            
                            if (*(*esi_1 + (edi_2 << 2) + 0x188) != 1 || *(ebp_1 - 0xa) == 0)
                                if (*(*data_530304 + 0xce0) == 0)
                                    sub_403e90(&ebp_1[-2], 0x5096a4)
                                else
                                    int32_t var_78_6 = 0x50968c
                                    bool o_9 = unimplemented  {imul eax, ebx, 0xe9}
                                    
                                    if (o_9)
                                        sub_403010()
                                        noreturn
                                    
                                    sub_408e1c(*(*esi_1 + i * 0x3a4 + 0x188), &ebp_1[-0x16])
                                    int32_t var_7c_3 = ebp_1[-0x16]
                                    void* const var_80_1 = &data_509698
                                    sub_404138(&ebp_1[-2], 3)
                                
                                *(ebp_1 - 9) = 0
                                
                                if (*(*esi_1 + (edi_2 << 2) + 0x188) == 1)
                                    sub_514cc4(*esi_1, 0x5096b0)
                            else
                                sub_403e90(&ebp_1[-2], 0x509680)
                        else
                            ebp_1, esi_1 = sub_46910c(*data_530304, "f_ausgeschieden2", &ebp_1[-2])
                            bool o_6 = unimplemented  {imul eax, ebx, 0xe9}
                            
                            if (o_6)
                                sub_403010()
                                noreturn
                            
                            if (*(*esi_1 + i * 0x3a4 + 0x188) != 1)
                                *(ebp_1 - 9) = 0
                            
                            bool o_7 = unimplemented  {imul eax, ebx, 0xe9}
                            
                            if (o_7)
                                sub_403010()
                                noreturn
                            
                            if (*(*esi_1 + i * 0x3a4 + 0x188) == 1 && *(ebp_1 - 0xa) == 0)
                                *(ebp_1 - 9) = 0
                                sub_514cc4(*esi_1, 0x509650)
                    else
                        *(*esi_1 + (edi_1 << 2) + 0x188) = *(*esi_1 + 0x9c)
                        
                        if (*(*esi_1 + 0x9c) != 1)
                            *(ebp_1 - 9) = 0
                    
                    sub_50a4e0(i)
            else
                sub_403e90(&ebp_1[-2], "COMP")
                sub_50a4e0(i)
        else
            sub_403e90(&ebp_1[-2], 0x509614)
            sub_50a4e0(i)
    
    if ((sub_50d318(*esi_1) & *(ebp_1 - 9)) != 0 && sub_510e38(*esi_1) == 0)
        *(*esi_1 + 0x98) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_6c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_509601
    sub_403df8(&ebp_1[-0x16])
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
