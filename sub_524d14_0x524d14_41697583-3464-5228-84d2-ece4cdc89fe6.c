// ============================================================
// 函数名称: sub_524d14
// 虚拟地址: 0x524d14
// WARP GUID: 41697583-3464-5228-84d2-ece4cdc89fe6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409040, sub_406010, sub_404138, sub_402824, sub_40401c, sub_4062e1, sub_405e46, sub_403e1c, sub_403010, sub_51b810, sub_51e1c0, sub_4c9488, sub_5244dc, sub_40422c, sub_4040c4, sub_5223e8, sub_403df8, sub_46f4fc, sub_405f4c, sub_40287c
// [被调用的父级函数]: sub_4e6659, sub_4ed7a0, sub_4e649b, sub_4ed040
// ============================================================

int32_t __convention("regparm")sub_524d14(int32_t arg1, char* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg1
    int32_t* esp_1 = &var_8
    int32_t i_6 = 0x2a
    int32_t i
    
    do
        esp_1[-0x400] = i_6
        esp_1 = &esp_1[-0x400]
        i = i_6
        i_6 -= 1
    while (i != 1)
    int32_t eax = var_8
    int32_t entry_ebx
    esp_1[-0x172] = entry_ebx
    esp_1[-0x173] = arg3
    esp_1[-0x174] = arg4
    int32_t var_2a5cc = 0
    int32_t var_2a594 = 0
    char* var_10 = nullptr
    int32_t var_14 = 0
    char* var_c = arg2
    var_8 = eax
    sub_40422c(var_c)
    void* edi = data_5301f4
    esp_1[-0x175] = &var_4
    esp_1[-0x176] = j_sub_4037f0
    TEB* fsbase
    esp_1[-0x177] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[-0x177]
    esp_1[-0x178] = &var_4
    esp_1[-0x179] = j_sub_40353c
    esp_1[-0x17a] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[-0x17a]
    esp_1[-0x17b] = var_c
    esp_1[-0x17c] = &data_525580
    char var_2a5c8[0x34]
    esp_1[-0x17d] = &var_2a5c8
    bool o = unimplemented  {imul eax, eax, 0x33}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_40401c(sub_40287c(3, 1, data_530834 + zx.d(*(*edi + 4)) * 0x33), &var_2a5c8)
    esp_1[-0x17d] = var_2a594
    sub_404138(&var_10, 3)
    sub_4040c4(&var_14, var_c, ".scc")
    esp_1[-0x17b] = var_c
    esp_1[-0x17c] = &data_52559c
    esp_1[-0x17d] = &var_2a5c8
    bool o_1 = unimplemented  {imul eax, eax, 0x33}
    
    if (o_1)
        sub_403010()
        noreturn
    
    sub_40401c(sub_40287c(3, 1, data_530834 + zx.d(*(*edi + 4)) * 0x33), &var_2a5c8)
    void* esp_21
    *esp_21 = var_2a5cc
    sub_404138(&var_c, 3)
    void var_164
    sub_405e46(&var_164, var_c)
    sub_402824(sub_4062e1())
    uint8_t var_2a590[0x4578]
    sub_402824(sub_406010(&var_164, &var_2a590))
    sub_402824(sub_405f4c(&var_164))
    int32_t eax_19 = *edi
    *(esp_21 + 8) = edi
    void var_26018
    __builtin_memcpy(eax_19 + 0x457c, &var_26018, 0x25cc8)
    int32_t* edi_2 = *(esp_21 + 8)
    int32_t eax_20 = *edi_2
    *(esp_21 + 8) = edi_2
    __builtin_memcpy(eax_20 + 4, &var_2a590, 0x4578)
    void* eax_21 = data_53099c
    *(esp_21 + 8) = *(esp_21 + 8)
    void var_350
    __builtin_memcpy(eax_21, &var_350, 0xa0)
    int32_t* edi_6 = *(esp_21 + 8)
    int32_t i_1 = 1
    void* var_18 = data_5301b0
    void* esi = data_5302e4
    
    do
        bool o_2 = unimplemented  {imul eax, ebx, 0xa9}
        
        if (o_2)
            sub_403010()
            noreturn
        
        sub_5244dc(*edi_6 + i_1 * 0x2a4 + 8, var_18)
        bool o_3 = unimplemented  {imul eax, ebx, 0xa9}
        
        if (o_3)
            sub_403010()
            noreturn
        
        sub_5244dc(*edi_6 + i_1 * 0x2a4 + 8, esi)
        i_1 += 1
        esi += 0x8d14
        var_18 += 0x8d14
    while (i_1 != 0x15)
    
    void* ebp_1 = sub_46f4fc(*data_530304, *data_530a74, var_10)
    void* eax_30 = *edi_6 + 0x457c
    int32_t edx_17 = *data_5302c4
    *(esp_21 + 8) = edi_6
    __builtin_memcpy(edx_17 + 4, eax_30 + 0xcc90, 0xa8)
    int32_t edx_19 = *data_5302c4
    *(esp_21 + 8) = *(esp_21 + 8)
    __builtin_memcpy(edx_19 + 0xac, eax_30 + 0xcd38, 0xa80)
    int32_t* edi_10 = *(esp_21 + 8)
    void* esp_34 = esp_21 + 0xc
    
    for (int32_t i_2 = 0; i_2 != 0x15; i_2 += 1)
        bool o_4 = unimplemented  {imul edx, ebx, 0x112}
        
        if (o_4)
            sub_403010()
            noreturn
        
        bool o_5 = unimplemented  {imul ecx, ebx, 0x112}
        
        if (o_5)
            sub_403010()
            noreturn
        
        int32_t esi_4 = *data_5302c4
        *(esp_34 - 4) = edi_10
        __builtin_memcpy(esi_4 + i_2 * 0x890 + 0xb2c, eax_30 + i_2 * 0x890 + 0xd7b8, 0x890)
        edi_10 = *(esp_34 - 4)
    
    *(*data_5302c4 + 0xbefc) = *(eax_30 + 0x18b88)
    *(*data_5302c4 + 0xbf00) = *(eax_30 + 0x18b8c)
    *(*data_52ffd0 + 0x3cf4) = *(*edi_10 + 0x24e98)
    int32_t i_3
    
    for (i_3 = 1; i_3 != 0x3d; i_3 += 1)
        int32_t eax_34 = i_3 * 0x41
        bool o_6 = unimplemented  {imul eax, ebx, 0x41}
        
        if (o_6)
            sub_403010()
            noreturn
        
        int32_t edx_26 = *edi_10
        int32_t ecx_9 = *data_52ffd0
        *(esp_34 - 4) = edi_10
        __builtin_memcpy(ecx_9 + (eax_34 << 2) - 0x100, edx_26 + (eax_34 << 2) + 0x210a4, 0x104)
        edi_10 = *(esp_34 - 4)
    
    *(*data_52ffd0 + 0x3cf8) = *(*edi_10 + 0x24e9c)
    *(*data_52ffd0 + 0x3cfc) = *(*edi_10 + 0x24ea0)
    void* eax_39
    eax_39.b = *(*edi_10 + 0x24ea4)
    *(*data_52ffd0 + 0x3d00) = eax_39.b
    void* eax_40
    eax_40.b = *(*edi_10 + 0x24ea5)
    *(*data_52ffd0 + 0x3d01) = eax_40.b
    *(*data_52ffd0 + 0x3d04) = *(*edi_10 + 0x24ea8)
    *(*data_52ffd0 + 0x3d08) = *(*edi_10 + 0x24eac)
    *(*data_52ffd0 + 0x3d0c) = *(*edi_10 + 0x24eb0)
    *(*data_52ffd0 + 0x3d10) = *(*edi_10 + 0x24eb4)
    *(*data_52ffd0 + 0x3d14) = *(*edi_10 + 0x24eb8)
    int32_t eax_51 = *edi_10
    int32_t edx_46 = *data_52ffd0
    *(esp_34 - 4) = edi_10
    int16_t* esi_8
    int16_t* edi_14
    edi_14, esi_8 = __builtin_memcpy(edx_46 + 0x4672, eax_51 + 0x25816, 0x318)
    *edi_14 = *esi_8
    int32_t* edi_16 = *(esp_34 - 4)
    int32_t eax_52 = *edi_16
    int32_t edx_48 = *data_52ffd0
    *(esp_34 - 4) = edi_16
    int16_t* esi_11
    int16_t* edi_18
    edi_18, esi_11 = __builtin_memcpy(edx_48 + 0x4358, eax_52 + 0x254fc, 0x318)
    *edi_18 = *esi_11
    int32_t* edi_20 = *(esp_34 - 4)
    *(*data_52ffd0 + 0x3d18) = *(*edi_20 + 0x24ebc)
    *(*data_52ffd0 + 0x3d1c) = *(*edi_20 + 0x24ec0)
    *(*data_52ffd0 + 0x3d20) = *(*edi_20 + 0x24ec4)
    int32_t eax_59 = *edi_20
    int32_t edx_56 = *data_52ffd0
    *(esp_34 - 4) = edi_20
    int16_t* esi_14
    int16_t* edi_22
    edi_22, esi_14 = __builtin_memcpy(edx_56 + 0x3d24, eax_59 + 0x24ec8, 0x318)
    *edi_22 = *esi_14
    int32_t* edi_24 = *(esp_34 - 4)
    int32_t eax_60 = *edi_24
    int32_t edx_58 = *data_52ffd0
    *(esp_34 - 4) = edi_24
    int16_t* esi_17
    int16_t* edi_26
    edi_26, esi_17 = __builtin_memcpy(edx_58 + 0x403e, eax_60 + 0x251e2, 0x318)
    *edi_26 = *esi_17
    void* esi_18 = &esi_17[1]
    int32_t* edi_59 = *(esp_34 - 4)
    
    if (*(*edi_59 + 0x4580) != 0)
        sub_51b810(*data_52ffd0)
    
    int32_t ecx_11 = sub_4c9488()
    
    if (*(*edi_59 + 4) == 1)
        int32_t eax_65 = *edi_59
        void* edx_59 = data_530708
        *(esp_34 - 4) = edi_59
        int16_t* esi_20
        int16_t* edi_29
        edi_29, esi_20 = __builtin_memcpy(edx_59, eax_65 + 0x1d3f2, 0x318)
        *edi_29 = *esi_20
        int32_t* edi_31 = *(esp_34 - 4)
        int32_t eax_66 = *edi_31
        void* edx_60 = data_530408
        *(esp_34 - 4) = edi_31
        int16_t* esi_23
        int16_t* edi_33
        edi_33, esi_23 = __builtin_memcpy(edx_60, eax_66 + 0x1d70c, 0x318)
        *edi_33 = *esi_23
        int32_t* edi_35 = *(esp_34 - 4)
        int32_t eax_67 = *edi_35
        void* edx_61 = data_53019c
        *(esp_34 - 4) = edi_35
        int16_t* esi_26
        int16_t* edi_37
        edi_37, esi_26 = __builtin_memcpy(edx_61, eax_67 + 0x1da26, 0x318)
        *edi_37 = *esi_26
        int32_t* edi_39 = *(esp_34 - 4)
        int32_t eax_68 = *edi_39
        void* edx_62 = data_530218
        *(esp_34 - 4) = edi_39
        int16_t* esi_29
        int16_t* edi_41
        edi_41, esi_29 = __builtin_memcpy(edx_62, eax_68 + 0x1dd40, 0x318)
        *edi_41 = *esi_29
        int32_t* edi_43 = *(esp_34 - 4)
        int32_t eax_69 = *edi_43
        void* edx_63 = data_5307d0
        *(esp_34 - 4) = edi_43
        int16_t* esi_32
        int16_t* edi_45
        edi_45, esi_32 = __builtin_memcpy(edx_63, eax_69 + 0x1e05a, 0x318)
        *edi_45 = *esi_32
        int32_t* edi_47 = *(esp_34 - 4)
        int32_t eax_70 = *edi_47
        void* edx_64 = data_5300b8
        *(esp_34 - 4) = edi_47
        int16_t* esi_35
        int16_t* edi_49
        edi_49, esi_35 = __builtin_memcpy(edx_64, eax_70 + 0x1efdc, 0x318)
        *edi_49 = *esi_35
        int32_t* edi_51 = *(esp_34 - 4)
        int32_t eax_71 = *edi_51
        void* edx_65 = data_530580
        *(esp_34 - 4) = edi_51
        int16_t* esi_38
        int16_t* edi_53
        edi_53, esi_38 = __builtin_memcpy(edx_65, eax_71 + 0x1ecc2, 0x318)
        *edi_53 = *esi_38
        int32_t* edi_55 = *(esp_34 - 4)
        int32_t eax_72 = *edi_55
        void* edx_66 = data_530a78
        *(esp_34 - 4) = edi_55
        int32_t ecx_10
        int16_t* esi_41
        int16_t* edi_57
        edi_57, esi_41, ecx_10 = __builtin_memcpy(edx_66, eax_72 + 0x1f2f6, 0x318)
        *edi_57 = *esi_41
        edi_59 = *(esp_34 - 4)
        void* eax_73
        eax_73.b = *(*edi_59 + 0x1f610)
        *data_53009c = eax_73.b
        data_5308b4
        sub_40401c(ecx_10, *edi_59 + 0x1f611)
        int32_t i_4 = 1
        void* esi_43 = data_5306ac
        
        do
            bool o_7 = unimplemented  {imul eax, ebx, 0x18d}
            
            if (o_7)
                sub_403010()
                noreturn
            
            int32_t edx_70 = *edi_59
            *(esp_34 - 4) = esi_43
            *(esp_34 - 8) = edi_59
            int16_t* esi_45
            int16_t* edi_61
            edi_61, esi_45 = __builtin_memcpy(esi_43, edx_70 + i_4 * 0x31a + 0x1e05a, 0x318)
            *edi_61 = *esi_45
            edi_59 = *(esp_34 - 8)
            i_4 += 1
            esi_43 = *(esp_34 - 4) + 0x31a
        while (i_4 != 4)
        
        i_3 = 1
        esi_18 = data_530018
        
        do
            bool o_8 = unimplemented  {imul eax, ebx, 0x18d}
            
            if (o_8)
                sub_403010()
                noreturn
            
            int32_t edx_71 = *edi_59
            *(esp_34 - 4) = esi_18
            *(esp_34 - 8) = edi_59
            int16_t* esi_49
            int16_t* edi_64
            edi_64, esi_49, ecx_11 = __builtin_memcpy(esi_18, edx_71 + i_3 * 0x31a + 0x1f3f8, 0x318)
            *edi_64 = *esi_49
            edi_59 = *(esp_34 - 8)
            i_3 += 1
            esi_18 = *(esp_34 - 4) + 0x31a
        while (i_3 != 4)
        
        *data_52fed0 = *edi_59 + 0x1d114
        *data_530614 = *edi_59 + 0x1d32c
    
    void* eax_81
    eax_81.b = *(*edi_59 + 0x4568)
    *data_53041c = eax_81.b
    *(ebp_1 - 4)
    void* ebp_2 = sub_51e1c0(ecx_11, 0, esi_18, edi_59)
    int32_t eax_83 = *edi_59
    *(esp_34 - 4) = edi_59
    int32_t ecx_12
    int32_t esi_53
    esi_53, ecx_12 = __builtin_memcpy(eax_83 + 0x457c, ebp_2 - 0x26014, 0x25cc8)
    int32_t* edi_67 = *(esp_34 - 4)
    *data_5300d0 = *(*edi_67 + 0x456c)
    
    if (*(*edi_67 + 0xffec) == 5)
        *(*edi_67 + 0x1026f) = 0
        void* eax_88 = data_530244
        *eax_88
        bool o_9 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_9)
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_88 * 0x81c0 + 1) = 0
        void* eax_90 = data_530934
        *eax_90
        bool o_10 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_10)
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_90 * 0x81c0 + 1) = 0
        void* eax_92 = data_530658
        *eax_92
        bool o_11 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_11)
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_92 * 0x81c0 + 1) = 0
        *data_530144 = 2
        *data_530a3c = 0
        ecx_12.b = 1
        sub_5223e8(*(ebp_2 - 4), data_530a3c, ecx_12, esi_53, edi_67)
    
    if (sub_409040(*(ebp_2 - 0x10)) == 0)
        *(*edi_67 + 0x305a4) = 0
    else
        sub_405e46(ebp_2 - 0x2ac, *(ebp_2 - 0x10))
        sub_402824(sub_4062e1())
        sub_402824(sub_406010(ebp_2 - 0x2ac, *edi_67 + 0x305a4))
        sub_402824(sub_405f4c(ebp_2 - 0x2ac))
        *(*data_53067c + 0x1660) = *(*edi_67 + 0x305a4)
        
        for (int32_t i_5 = 0; i_5 != 0xb; i_5 += 1)
            int32_t edx_91 = i_5 * 5
            bool o_12 = unimplemented  {imul edx, eax, 0x5}
            
            if (o_12)
                sub_403010()
                noreturn
            
            int32_t ecx_14 = *data_53067c
            i_3 = *edi_67
            *(ecx_14 + (edx_91 << 1) + 0x844) = *(i_3 + (edx_91 << 1) + 0x305a8)
            *(ecx_14 + (edx_91 << 1) + 0x848) = *(i_3 + (edx_91 << 1) + 0x305ac)
            int32_t esi_55
            esi_55.w = *(i_3 + (edx_91 << 1) + 0x305b0)
            *(ecx_14 + (edx_91 << 1) + 0x84c) = esi_55.w
    
    i_3.b = 1
    *(esp_34 + 8)
    fsbase->NtTib.ExceptionList = *esp_34
    *(esp_34 + 0x14)
    fsbase->NtTib.ExceptionList = *(esp_34 + 0xc)
    *(esp_34 + 0x14) = sub_52556d
    sub_403df8(ebp_2 - 0x2a5c8)
    sub_403df8(ebp_2 - 0x2a590)
    return sub_403e1c(ebp_2 - 0x10, 3)
}
