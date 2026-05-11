// ============================================================
// 函数名称: sub_4da10c
// 虚拟地址: 0x4da10c
// WARP GUID: 3934d3c6-6575-50a5-9874-48adec718074
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: BitBlt
// [内部子函数调用]: sub_409040, sub_4030d0, sub_404138, sub_41efec, sub_4804e4, sub_480534, sub_402b4c, sub_403e1c, sub_403010, sub_42affc, sub_4535a8, sub_41bac4, sub_408e1c, sub_44b7c0, sub_403df8, sub_42afdc, sub_4da034, sub_419b40, sub_44bb04
// [被调用的父级函数]: sub_4dc3b8, sub_4c9540
// ============================================================

void*sub_4da10c()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_50 = ebx
    int32_t esi
    int32_t var_54 = esi
    int32_t edi
    int32_t var_58 = edi
    int32_t var_4c
    __builtin_memset(&var_4c, 0, 0x18)
    int32_t var_2c = 0
    int32_t var_30 = 0
    int32_t var_20 = 0
    int32_t* var_5c = &var_4
    int32_t (* var_60)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_61d0fc == 0)
        data_61d0fc = 1
    
    int32_t eax = data_61d0fc
    
    if (add_overflow(eax, 0xffffffff))
        sub_403010()
        noreturn
    
    sub_408e1c(eax - 1, &var_20)
    *(data_61c8c8 + 0xcc8) = data_61d0fc
    data_61c8c8
    int32_t edx_1
    edx_1.b = 1
    int32_t* eax_3 = sub_44b7c0(&data_44a750, edx_1)
    sub_42afdc(eax_3, sub_402b4c(fconvert.t(data_61cfc4)))
    char* ecx_1 = sub_42affc(eax_3, sub_402b4c(fconvert.t(data_61cfc8)))
    void* ebp_1 = sub_4804e4(data_61c8c8, "Kartentexturen vorbereiten..", ecx_1)
    sub_480534(data_61c8c8, 0x16, 1)
    int32_t edx_4
    edx_4.b = 1
    *(ebp_1 - 8) = sub_4535a8(sub_4532a0+0xa4, edx_4)
    int32_t var_68 = *(data_61c8c8 + 0xa64)
    void* const var_6c = "\data\bilder\"
    sub_408e1c(*(data_61c8c8 + 0xdbc), ebp_1 - 0x2c)
    int32_t var_70 = *(ebp_1 - 0x2c)
    void* const var_74 = &data_4da6a8
    int32_t var_78 = *(ebp_1 - 0x1c)
    void* const var_7c = ".jpg"
    sub_404138(ebp_1 - 0x28, 6)
    void* const* esp_1 = &var_6c
    *(ebp_1 - 0x28)
    (*(**(ebp_1 - 8) + 0x48))(var_6c, var_68)
    sub_480534(data_61c8c8, 0x19, 1)
    int32_t* eax_19 = sub_41bac4(*(*(ebp_1 - 4) + 0x128))
    *(ebp_1 - 8)
    (*(*eax_19 + 8))()
    sub_480534(data_61c8c8, 0x1e, 1)
    sub_4030d0(*(ebp_1 - 8))
    *(ebp_1 - 0x30) = (*(*sub_41bac4(*(*(ebp_1 - 4) + 0x128)) + 0x2c))()
    data_61cfc4 = fconvert.s(float.t(*(ebp_1 - 0x30)) / fconvert.t(4f))
    *(ebp_1 - 0x30) = (*(*sub_41bac4(*(*(ebp_1 - 4) + 0x128)) + 0x20))()
    data_61cfc8 = fconvert.s(float.t(*(ebp_1 - 0x30)) / fconvert.t(8f))
    
    for (int32_t i = 1; i != 4; i += 1)
        *(ebp_1 - 0xc) = 1
        *(ebp_1 - 0x24) = 0x61cfd4
        
        do
            int32_t edx_10 = i * 5
            bool o_1 = unimplemented  {imul edx, edi, 0x5}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (add_overflow(edx_10, 0x1e))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_10 + 0x1e, *(ebp_1 - 0xc)))
                sub_403010()
                noreturn
            
            sub_480534(data_61c8c8, edx_10 + 0x1e + *(ebp_1 - 0xc), 1)
            
            if (add_overflow(5, neg.d(*(ebp_1 - 0xc))))
                sub_403010()
                noreturn
            
            *(ebp_1 - 0x10) = 5 - *(ebp_1 - 0xc)
            int32_t j = 1
            int32_t** esi_1 = *(ebp_1 - 0x24)
            
            do
                if ((i == 1 && j s>= 1 && j s<= 8) || (i == 2 && j s>= 9 && j s<= 0xd))
                label_4da353:
                    data_61c8c8
                    int32_t edx_13
                    edx_13.b = 1
                    *esi_1 = sub_44b7c0(&data_44a750, edx_13)
                    *(ebp_1 - 0x20) = *esi_1
                    int32_t eax_35 = sub_402b4c(fconvert.t(data_61cfc4))
                    sub_42afdc(*(ebp_1 - 0x20), eax_35)
                    int32_t eax_37 = sub_402b4c(fconvert.t(data_61cfc8))
                    sub_42affc(*(ebp_1 - 0x20), eax_37)
                    data_61cfcc = 0xb2
                    data_61cfd0 = 0x122
                    
                    if (j != 0xe && j == 9 && *(ebp_1 - 0xc) == 1)
                        *(esp_1 - 4) = *(data_61c8c8 + 0xa64)
                        *(esp_1 - 8) = "\data\bilder\"
                        sub_408e1c(*(data_61c8c8 + 0xdbc), ebp_1 - 0x38)
                        *(esp_1 - 0xc) = *(ebp_1 - 0x38)
                        *(esp_1 - 0x10) = "\kbp"
                        *(esp_1 - 0x14) = *(ebp_1 - 0x1c)
                        *(esp_1 - 0x18) = ".jpg"
                        sub_404138(ebp_1 - 0x34, 6)
                        
                        if (sub_409040(*(ebp_1 - 0x34)) == 0)
                            *(esp_1 - 0xc) = ebp_1
                            *(esp_1 - 0x10) = *(data_61c8c8 + 0xa64)
                            *(esp_1 - 0x14) = "\data\bilder\"
                            sub_408e1c(*(data_61c8c8 + 0xdbc), ebp_1 - 0x48)
                            *(esp_1 - 0x18) = *(ebp_1 - 0x48)
                            *(esp_1 - 0x1c) = &data_4da6dc
                            int32_t ecx_11
                            int32_t edx_20
                            ecx_11, edx_20 = sub_404138(ebp_1 - 0x44, 4)
                            ebp_1 = sub_4da034(*(ebp_1 - 0x44), edx_20, ecx_11)
                            *(esp_1 - 0xc)
                            esp_1 -= 8
                        else
                            *(esp_1 - 0xc) = ebp_1
                            *(esp_1 - 0x10) = *(data_61c8c8 + 0xa64)
                            *(esp_1 - 0x14) = "\data\bilder\"
                            sub_408e1c(*(data_61c8c8 + 0xdbc), ebp_1 - 0x40)
                            *(esp_1 - 0x18) = *(ebp_1 - 0x40)
                            *(esp_1 - 0x1c) = "\kbp"
                            *(esp_1 - 0x20) = *(ebp_1 - 0x1c)
                            *(esp_1 - 0x24) = ".jpg"
                            int32_t ecx_9
                            int32_t edx_18
                            ecx_9, edx_18 = sub_404138(ebp_1 - 0x3c, 6)
                            ebp_1 = sub_4da034(*(ebp_1 - 0x3c), edx_18, ecx_9)
                            *(esp_1 - 0x14)
                            esp_1 -= 0x10
                    
                    if (j s<= 8)
                        int32_t eax_55 = *(ebp_1 - 0x10)
                        
                        if (add_overflow(eax_55, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 0x30) = eax_55 - 1
                        *(ebp_1 - 0x14) = sub_402b4c(float.t(*(ebp_1 - 0x30)) * fconvert.t(data_61cfc4))
                        
                        if (add_overflow(j, 1))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(j + 1, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(j, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(j - 1, 1))
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 0x30) = j
                        *(ebp_1 - 0x18) = sub_402b4c(fconvert.t(data_61cfc8) * fconvert.t(8f)
                            - float.t(*(ebp_1 - 0x30)) * fconvert.t(data_61cfc8))
                    else if (j != 0xe)
                        int32_t eax_64 = *(ebp_1 - 0x10)
                        
                        if (add_overflow(eax_64, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 0x30) = eax_64 - 1
                        *(ebp_1 - 0x14) = sub_402b4c(float.t(*(ebp_1 - 0x30)) * fconvert.t(data_61cfc4))
                        
                        if (add_overflow(j, 1))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(j + 1, 0xfffffff7))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(j - 8, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(j - 9, 1))
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 0x30) = j - 8
                        *(ebp_1 - 0x18) = sub_402b4c(fconvert.t(data_61cfc8) * fconvert.t(5f)
                            - float.t(*(ebp_1 - 0x30)) * fconvert.t(data_61cfc8))
                    else
                        *(ebp_1 - 0x14) = 0
                        *(ebp_1 - 0x18) = 0
                    
                    *(esp_1 - 4) = 0xcc0020
                    *(esp_1 - 8) = *(ebp_1 - 0x18)
                    *(esp_1 - 0xc) = *(ebp_1 - 0x14)
                    *(esp_1 - 0x10) = sub_419b40(sub_44bb04(*(ebp_1 - 4)))
                    *(esp_1 - 0x14) = sub_402b4c(fconvert.t(data_61cfc8))
                    *(esp_1 - 0x18) = sub_402b4c(fconvert.t(data_61cfc4))
                    *(esp_1 - 0x1c) = 0
                    *(esp_1 - 0x20) = 0
                    int32_t* eax_81
                    eax_81, ebp_1 = sub_44bb04(*esi_1)
                    *(esp_1 - 0x24) = sub_419b40(eax_81)
                    BitBlt()
                    sub_41efec(sub_41bac4(*(*(ebp_1 - 0x20) + 0x128)), 6)
                else if (i == 3 && j == 0xe && *(ebp_1 - 0xc) == 1)
                    goto label_4da353
                
                j += 1
                esi_1 = &esi_1[1]
            while (j != 0xf)
            
            *(ebp_1 - 0xc) += 1
            *(ebp_1 - 0x24) += 0x38
        while (*(ebp_1 - 0xc) != 5)
    
    sub_4030d0(*(ebp_1 - 4))
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4da657
    sub_403e1c(ebp_1 - 0x48, 6)
    sub_403e1c(ebp_1 - 0x2c, 2)
    sub_403df8(ebp_1 - 0x1c)
    return ebp_1 - 0x1c
}
