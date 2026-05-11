// ============================================================
// 函数名称: sub_52452c
// 虚拟地址: 0x52452c
// WARP GUID: 844c4b41-b654-5541-b352-75501db98018
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_409040, sub_404138, sub_47a7ec, sub_402824, sub_40401c, sub_4062f8, sub_405e46, sub_403e1c, sub_403010, sub_4cc004, sub_409144, sub_40422c, sub_4040c4, sub_403df8, sub_405f4c, sub_52448c, sub_40634c, sub_4746a0, sub_40287c, sub_46f458
// [被调用的父级函数]: sub_4ed16c, sub_4e6659, sub_4e649b, sub_4d7b54
// ============================================================

int32_t __convention("regparm")sub_52452c(int32_t arg1, char* arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, char arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char* __saved_eax_1 = arg1
    char* __saved_eax
    char** esp_1 = &__saved_eax
    int32_t i_7 = 0x2a
    int32_t i
    
    do
        esp_1[-0x400] = i_7
        esp_1 = &esp_1[-0x400]
        i = i_7
        i_7 -= 1
    while (i != 1)
    int32_t entry_ebx
    esp_1[-0x19a] = entry_ebx
    esp_1[-0x19b] = arg4
    esp_1[-0x19c] = arg5
    int32_t var_2a66c = 0
    int32_t var_2a5c8 = 0
    int32_t var_2a590 = 0
    char* var_10 = nullptr
    int32_t var_14 = 0
    sub_40422c(arg2)
    sub_40422c(arg3)
    void* edi = data_5301f4
    esp_1[-0x19d] = &var_4
    esp_1[-0x19e] = j_sub_4037f0
    TEB* fsbase
    esp_1[-0x19f] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[-0x19f]
    esp_1[-0x1a0] = &var_4
    esp_1[-0x1a1] = j_sub_40353c
    esp_1[-0x1a2] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp_1[-0x1a2]
    void* eax_3 = *edi + 0x457c
    int32_t edx_1 = *data_5302c4
    esp_1[-0x1a3] = edi
    __builtin_memcpy(eax_3 + 0xcc90, edx_1 + 4, 0xa8)
    int32_t edx_3 = *data_5302c4
    esp_1[-0x1a3] = esp_1[-0x1a3]
    __builtin_memcpy(eax_3 + 0xcd38, edx_3 + 0xac, 0xa80)
    int32_t* edi_4 = esp_1[-0x1a3]
    void* esp_16 = &esp_1[-0x1a2]
    
    for (int32_t i_1 = 0; i_1 != 0x15; i_1 += 1)
        bool o_1 = unimplemented  {imul edx, ebx, 0x112}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(esp_16 - 4) = *data_5302c4 + i_1 * 0x890 + 0xb2c
        bool o_2 = unimplemented  {imul edx, ebx, 0x112}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t esi_2 = *(esp_16 - 4)
        *(esp_16 - 4) = edi_4
        __builtin_memcpy(eax_3 + i_1 * 0x890 + 0xd7b8, esi_2, 0x890)
        edi_4 = *(esp_16 - 4)
    
    *(eax_3 + 0x18b88) = *(*data_5302c4 + 0xbefc)
    *(eax_3 + 0x18b8c) = *(*data_5302c4 + 0xbf00)
    *(*edi_4 + 0x24e98) = *(*data_52ffd0 + 0x3cf4)
    
    for (int32_t i_2 = 1; i_2 != 0x3d; i_2 += 1)
        int32_t eax_7 = i_2 * 0x41
        bool o_3 = unimplemented  {imul eax, ebx, 0x41}
        
        if (o_3)
            sub_403010()
            noreturn
        
        int32_t edx_15 = *data_52ffd0
        int32_t ecx_2 = *edi_4
        *(esp_16 - 4) = edi_4
        __builtin_memcpy(ecx_2 + (eax_7 << 2) + 0x210a4, edx_15 + (eax_7 << 2) - 0x100, 0x104)
        edi_4 = *(esp_16 - 4)
    
    *(*edi_4 + 0x24e9c) = *(*data_52ffd0 + 0x3cf8)
    *(*edi_4 + 0x24ea0) = *(*data_52ffd0 + 0x3cfc)
    void* eax_15
    eax_15.b = *(*data_52ffd0 + 0x3d00)
    *(*edi_4 + 0x24ea4) = eax_15.b
    void* eax_17
    eax_17.b = *(*data_52ffd0 + 0x3d01)
    *(*edi_4 + 0x24ea5) = eax_17.b
    *(*edi_4 + 0x24ea8) = *(*data_52ffd0 + 0x3d04)
    *(*edi_4 + 0x24eac) = *(*data_52ffd0 + 0x3d08)
    *(*edi_4 + 0x24eb0) = *(*data_52ffd0 + 0x3d0c)
    *(*edi_4 + 0x24eb4) = *(*data_52ffd0 + 0x3d10)
    *(*edi_4 + 0x24eb8) = *(*data_52ffd0 + 0x3d14)
    int32_t eax_34 = *data_52ffd0
    int32_t edx_25 = *edi_4
    *(esp_16 - 4) = edi_4
    int16_t* esi_5
    int16_t* edi_8
    edi_8, esi_5 = __builtin_memcpy(edx_25 + 0x25816, eax_34 + 0x4672, 0x318)
    *edi_8 = *esi_5
    int32_t* edi_10 = *(esp_16 - 4)
    int32_t eax_36 = *data_52ffd0
    int32_t edx_26 = *edi_10
    *(esp_16 - 4) = edi_10
    int16_t* esi_8
    int16_t* edi_12
    edi_12, esi_8 = __builtin_memcpy(edx_26 + 0x254fc, eax_36 + 0x4358, 0x318)
    *edi_12 = *esi_8
    int32_t* edi_14 = *(esp_16 - 4)
    *(*edi_14 + 0x24ebc) = *(*data_52ffd0 + 0x3d18)
    *(*edi_14 + 0x24ec0) = *(*data_52ffd0 + 0x3d1c)
    *(*edi_14 + 0x24ec4) = *(*data_52ffd0 + 0x3d20)
    int32_t eax_47 = *data_52ffd0
    int32_t edx_30 = *edi_14
    *(esp_16 - 4) = edi_14
    int16_t* esi_11
    int16_t* edi_16
    edi_16, esi_11 = __builtin_memcpy(edx_30 + 0x24ec8, eax_47 + 0x3d24, 0x318)
    *edi_16 = *esi_11
    int32_t* edi_18 = *(esp_16 - 4)
    int32_t eax_49 = *data_52ffd0
    int32_t edx_31 = *edi_18
    *(esp_16 - 4) = edi_18
    int16_t* esi_14
    int16_t* edi_20
    edi_20, esi_14 = __builtin_memcpy(edx_31 + 0x251e2, eax_49 + 0x403e, 0x318)
    *edi_20 = *esi_14
    int32_t* edi_53 = *(esp_16 - 4)
    *(*edi_53 + 0x305a4) = *(*data_53067c + 0x1660)
    
    for (int32_t i_3 = 0; i_3 != 0xb; i_3 += 1)
        int32_t edx_33 = i_3 * 5
        bool o_4 = unimplemented  {imul edx, eax, 0x5}
        
        if (o_4)
            sub_403010()
            noreturn
        
        int32_t ecx_3 = *edi_53
        int32_t ebx_1 = *data_53067c
        *(ecx_3 + (edx_33 << 1) + 0x305a8) = *(ebx_1 + (edx_33 << 1) + 0x844)
        *(ecx_3 + (edx_33 << 1) + 0x305ac) = *(ebx_1 + (edx_33 << 1) + 0x848)
        int32_t esi_17
        esi_17.w = *(ebx_1 + (edx_33 << 1) + 0x84c)
        *(ecx_3 + (edx_33 << 1) + 0x305b0) = esi_17.w
    
    if (*(*edi_53 + 4) == 1)
        void* eax_54 = data_530708
        int32_t edx_34 = *edi_53
        *(esp_16 - 4) = edi_53
        int16_t* esi_19
        int16_t* edi_23
        edi_23, esi_19 = __builtin_memcpy(edx_34 + 0x1d3f2, eax_54, 0x318)
        *edi_23 = *esi_19
        int32_t* edi_25 = *(esp_16 - 4)
        void* eax_55 = data_530408
        int32_t edx_35 = *edi_25
        *(esp_16 - 4) = edi_25
        int16_t* esi_22
        int16_t* edi_27
        edi_27, esi_22 = __builtin_memcpy(edx_35 + 0x1d70c, eax_55, 0x318)
        *edi_27 = *esi_22
        int32_t* edi_29 = *(esp_16 - 4)
        void* eax_56 = data_53019c
        int32_t edx_36 = *edi_29
        *(esp_16 - 4) = edi_29
        int16_t* esi_25
        int16_t* edi_31
        edi_31, esi_25 = __builtin_memcpy(edx_36 + 0x1da26, eax_56, 0x318)
        *edi_31 = *esi_25
        int32_t* edi_33 = *(esp_16 - 4)
        void* eax_57 = data_530218
        int32_t edx_37 = *edi_33
        *(esp_16 - 4) = edi_33
        int16_t* esi_28
        int16_t* edi_35
        edi_35, esi_28 = __builtin_memcpy(edx_37 + 0x1dd40, eax_57, 0x318)
        *edi_35 = *esi_28
        int32_t* edi_37 = *(esp_16 - 4)
        void* eax_58 = data_5307d0
        int32_t edx_38 = *edi_37
        *(esp_16 - 4) = edi_37
        int16_t* esi_31
        int16_t* edi_39
        edi_39, esi_31 = __builtin_memcpy(edx_38 + 0x1e05a, eax_58, 0x318)
        *edi_39 = *esi_31
        int32_t* edi_41 = *(esp_16 - 4)
        void* eax_59 = data_5300b8
        int32_t edx_39 = *edi_41
        *(esp_16 - 4) = edi_41
        int16_t* esi_34
        int16_t* edi_43
        edi_43, esi_34 = __builtin_memcpy(edx_39 + 0x1efdc, eax_59, 0x318)
        *edi_43 = *esi_34
        int32_t* edi_45 = *(esp_16 - 4)
        void* eax_60 = data_530580
        int32_t edx_40 = *edi_45
        *(esp_16 - 4) = edi_45
        int16_t* esi_37
        int16_t* edi_47
        edi_47, esi_37 = __builtin_memcpy(edx_40 + 0x1ecc2, eax_60, 0x318)
        *edi_47 = *esi_37
        int32_t* edi_49 = *(esp_16 - 4)
        void* eax_61 = data_530a78
        int32_t edx_41 = *edi_49
        *(esp_16 - 4) = edi_49
        int16_t* esi_40
        int16_t* edi_51
        edi_51, esi_40 = __builtin_memcpy(edx_41 + 0x1f2f6, eax_61, 0x318)
        *edi_51 = *esi_40
        edi_53 = *(esp_16 - 4)
        void* eax_62
        eax_62.b = *data_53009c
        *(*edi_53 + 0x1f610) = eax_62.b
        sub_404054(*edi_53 + 0x1f611, *data_5308b4, 0xff)
        int32_t i_4 = 1
        void* esi_42 = data_5306ac
        
        do
            bool o_5 = unimplemented  {imul eax, ebx, 0x18d}
            
            if (o_5)
                sub_403010()
                noreturn
            
            int32_t edx_45 = *edi_53
            *(esp_16 - 4) = esi_42
            *(esp_16 - 8) = edi_53
            int16_t* esi_43
            int16_t* edi_55
            edi_55, esi_43 = __builtin_memcpy(edx_45 + i_4 * 0x31a + 0x1e05a, esi_42, 0x318)
            *edi_55 = *esi_43
            edi_53 = *(esp_16 - 8)
            i_4 += 1
            esi_42 = *(esp_16 - 4) + 0x31a
        while (i_4 != 4)
        
        int32_t i_5 = 1
        void* esi_46 = data_530018
        
        do
            bool o_6 = unimplemented  {imul eax, ebx, 0x18d}
            
            if (o_6)
                sub_403010()
                noreturn
            
            int32_t edx_46 = *edi_53
            *(esp_16 - 4) = esi_46
            *(esp_16 - 8) = edi_53
            int16_t* esi_47
            int16_t* edi_58
            edi_58, esi_47 = __builtin_memcpy(edx_46 + i_5 * 0x31a + 0x1f3f8, esi_46, 0x318)
            *edi_58 = *esi_47
            edi_53 = *(esp_16 - 8)
            i_5 += 1
            esi_46 = *(esp_16 - 4) + 0x31a
        while (i_5 != 4)
    
    *(esp_16 - 4) = arg2
    *(esp_16 - 8) = &data_524cf0
    char var_2a5c4[0x34]
    *(esp_16 - 0xc) = &var_2a5c4
    bool o_7 = unimplemented  {imul eax, eax, 0x33}
    
    if (o_7)
        sub_403010()
        noreturn
    
    sub_40401c(sub_40287c(3, 1, data_530834 + zx.d(*(*edi_53 + 4)) * 0x33), &var_2a5c4)
    *(esp_16 - 0xc) = var_2a590
    sub_404138(&var_10, 3)
    sub_4040c4(&var_14, arg2, ".scc")
    *(esp_16 - 4) = arg2
    *(esp_16 - 8) = &data_524d0c
    *(esp_16 - 0xc) = &var_2a5c4
    bool o_8 = unimplemented  {imul eax, eax, 0x33}
    
    if (o_8)
        sub_403010()
        noreturn
    
    sub_40401c(sub_40287c(3, 1, data_530834 + zx.d(*(*edi_53 + 4)) * 0x33), &var_2a5c4)
    *(esp_16 - 0xc) = 0
    sub_404138(&__saved_eax, 3)
    int32_t eax_79
    
    if (sub_409040(arg2).b == 0 || arg6 != 0)
        eax_79.b = 1
    else
        *(esp_16 - 4) = 0
        *(esp_16 - 8) = 0x524d10
        *(esp_16 - 0xc) = 0x524d10
        eax_79.b = sub_4746a0(arg3, 7, *data_530304) == 6
    
    if (eax_79.b != 0)
        sub_409144(arg2)
        void var_160
        sub_405e46(&var_160, arg2)
        sub_402824(sub_4062f8())
        int32_t i_6 = 1
        void* esi_50 = data_5301b0
        
        do
            bool o_9 = unimplemented  {imul eax, ebx, 0xa9}
            
            if (o_9)
                sub_403010()
                noreturn
            
            sub_52448c(*edi_53 + i_6 * 0x2a4 + 8, esi_50)
            i_6 += 1
            esi_50 += 0x8d14
        while (i_6 != 0x15)
        
        ebp_1 = sub_46f458(*data_530304, *data_530a74, var_10)
        void* eax_89
        eax_89.b = *data_53041c
        *(*edi_53 + 0x4568) = eax_89.b
        int32_t eax_90 = *edi_53
        *(esp_16 - 4) = edi_53
        __builtin_memcpy(&ebp_1[-0x9804], eax_90 + 0x457c, 0x25cc8)
        int32_t* edi_61 = *(esp_16 - 4)
        int32_t eax_91 = *edi_61
        *(esp_16 - 4) = edi_61
        __builtin_memcpy(&ebp_1[-0xa962], eax_91 + 4, 0x4578)
        int32_t edi_63 = *(esp_16 - 4)
        sub_4cc004(&ebp_1[-0xa999])
        *(esp_16 - 4) = edi_63
        __builtin_memcpy(&ebp_1[-0xd2], &ebp_1[-0xa999], 0xa0)
        int32_t* edi_65 = *(esp_16 - 4)
        sub_40634c(&ebp_1[-0x57], &ebp_1[-0xa962])
        sub_402824(&ebp_1[-0x57])
        sub_402824(sub_405f4c(&ebp_1[-0x57]))
        sub_409144(ebp_1[-4])
        sub_405e46(&ebp_1[-0xaa], ebp_1[-4])
        sub_402824(sub_4062f8())
        sub_40634c(&ebp_1[-0xaa], *edi_65 + 0x305a4)
        sub_402824(&ebp_1[-0xaa])
        sub_402824(sub_405f4c(&ebp_1[-0xaa]))
        
        if (ebp_1[2].b == 0)
            *(esp_16 - 4) = 0
            *(esp_16 - 8) = 0x524d10
            *(esp_16 - 0xc) = 0x524d10
            *(esp_16 - 0x10) = 0
            *(esp_16 - 0x14) = &ebp_1[-0xa99a]
            *data_5302c0
            *data_530304
            ebp_1 = sub_47a7ec(*data_5307a8)
            sub_4746a0(ebp_1[-0xa99a], 8, *data_530304)
    
    *(esp_16 + 8)
    fsbase->NtTib.ExceptionList = *esp_16
    *(esp_16 + 0x14)
    fsbase->NtTib.ExceptionList = *(esp_16 + 0xc)
    *(esp_16 + 0x14) = sub_524cdb
    sub_403df8(&ebp_1[-0xa99a])
    sub_403df8(&ebp_1[-0xa971])
    sub_403df8(&ebp_1[-0xa963])
    return sub_403e1c(&ebp_1[-4], 4)
}
