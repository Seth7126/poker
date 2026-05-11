// ============================================================
// 函数名称: sub_51fdc8
// 虚拟地址: 0x51fdc8
// WARP GUID: 799b4d61-7c34-541c-a07c-2e27f25098d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4c0a50, sub_4746a0, sub_4c0cbc, sub_52070c, sub_402bdc, sub_46910c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t* __convention("regparm")sub_51fdc8(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_114 = ebx
    int32_t esi
    int32_t var_118 = esi
    int32_t edi
    int32_t var_11c = edi
    int32_t var_110 = 0
    int32_t* var_120 = &var_4
    int32_t (* var_124)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_9 = 9
    char i
    
    do
        for (int32_t j = 1; j != 3; j += 1)
            for (int32_t k = 1; k != 4; k += 1)
                for (int32_t ebx_1 = 1; ebx_1 != 0x15; ebx_1 += 1)
                    bool o_1 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    bool o_2 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    bool o_3 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + ebx_1 * 0xd4 + 0x26002) = 1
                    bool o_4 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    bool o_5 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    bool o_6 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + ebx_1 * 0xd4 + 0x25f30) = ebx_1.b
                    ebp_1, k = sub_46910c(*data_530304, "f_leer", &ebp_1[-0x43])
                    sub_404054(&ebp_1[-0x42], ebp_1[-0x43], 0xff)
                    bool o_7 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    bool o_8 = unimplemented  {imul eax, esi, 0x212}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    bool o_9 = unimplemented  {imul eax, ebx, 0x35}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_4
                    ecx_4.b = 0x64
                    sub_402bdc(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + ebx_1 * 0xd4 + 0x25f38, 
                        &ebp_1[-0x42], ecx_4.b)
                    bool o_10 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_10)
                        sub_403010()
                        noreturn
                    
                    bool o_11 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    bool o_12 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + ebx_1 * 0xd4 + 0x25f9d) = 0
                    bool o_13 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_13)
                        sub_403010()
                        noreturn
                    
                    bool o_14 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_14)
                        sub_403010()
                        noreturn
                    
                    bool o_15 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_15)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + ebx_1 * 0xd4 + 0x25f34) = 0
                
                if (*(*data_530304 + 0xce0) != 0)
                    bool o_16 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_16)
                        sub_403010()
                        noreturn
                    
                    bool o_17 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_17)
                        sub_403010()
                        noreturn
                    
                    bool o_18 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_18)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x260d6) = 0
                    bool o_19 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_19)
                        sub_403010()
                        noreturn
                    
                    bool o_20 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_20)
                        sub_403010()
                        noreturn
                    
                    bool o_21 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    int32_t* edi_1 = ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x2600c
                    *edi_1 = 0x646e4105
                    edi_1[1].w = data_5205a8.w
                    sub_4c0cbc(0x10, 0xa0, 1, k, j, &ebp_1[-0x42])
                    bool o_22 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    bool o_23 = unimplemented  {imul eax, esi, 0x212}
                    
                    if (o_23)
                        sub_403010()
                        noreturn
                    
                    bool o_24 = unimplemented  {imul eax, ebx, 0x35}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_7
                    ecx_7.b = 0x64
                    sub_402bdc(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26071, &ebp_1[-0x42], ecx_7.b)
                    int32_t eax_35 = sub_4c0a50(0x10, 0xa0, 1)
                    bool o_25 = unimplemented  {imul edx, edi, 0x636}
                    
                    if (o_25)
                        sub_403010()
                        noreturn
                    
                    bool o_26 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_26)
                        sub_403010()
                        noreturn
                    
                    bool o_27 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_27)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26008) = eax_35
                    bool o_28 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_28)
                        sub_403010()
                        noreturn
                    
                    bool o_29 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_29)
                        sub_403010()
                        noreturn
                    
                    bool o_30 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_30)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x261aa) = 0
                    bool o_31 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_31)
                        sub_403010()
                        noreturn
                    
                    bool o_32 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_32)
                        sub_403010()
                        noreturn
                    
                    bool o_33 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_33)
                        sub_403010()
                        noreturn
                    
                    int32_t* edi_5 = ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x260e0
                    *edi_5 = 0x63695606
                    void* edi_6 = &edi_5[1]
                    void* const esi_4 = &data_5205b0
                    *edi_6 = *esi_4
                    *(edi_6 + 2) = *(esi_4 + 2)
                    sub_4c0cbc(8, 0x50, 1, k, j, &ebp_1[-0x42])
                    bool o_34 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_34)
                        sub_403010()
                        noreturn
                    
                    bool o_35 = unimplemented  {imul eax, esi, 0x212}
                    
                    if (o_35)
                        sub_403010()
                        noreturn
                    
                    bool o_36 = unimplemented  {imul eax, ebx, 0x35}
                    
                    if (o_36)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_13
                    ecx_13.b = 0x64
                    sub_402bdc(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26145, &ebp_1[-0x42], ecx_13.b)
                    int32_t eax_48 = sub_4c0a50(8, 0x50, 1)
                    bool o_37 = unimplemented  {imul edx, edi, 0x636}
                    
                    if (o_37)
                        sub_403010()
                        noreturn
                    
                    bool o_38 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_38)
                        sub_403010()
                        noreturn
                    
                    bool o_39 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_39)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x260dc) = eax_48
                    bool o_40 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_40)
                        sub_403010()
                        noreturn
                    
                    bool o_41 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_41)
                        sub_403010()
                        noreturn
                    
                    bool o_42 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_42)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x2627e) = 0
                    bool o_43 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_43)
                        sub_403010()
                        noreturn
                    
                    bool o_44 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_44)
                        sub_403010()
                        noreturn
                    
                    bool o_45 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_45)
                        sub_403010()
                        noreturn
                    
                    int32_t* edi_10 = ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x261b4
                    *edi_10 = 0x6e614406
                    void* edi_11 = &edi_10[1]
                    void* const esi_8 = &data_5205b8
                    *edi_11 = *esi_8
                    *(edi_11 + 2) = *(esi_8 + 2)
                    sub_4c0cbc(1, 6, 1, k, j, &ebp_1[-0x42])
                    bool o_46 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_46)
                        sub_403010()
                        noreturn
                    
                    bool o_47 = unimplemented  {imul eax, esi, 0x212}
                    
                    if (o_47)
                        sub_403010()
                        noreturn
                    
                    bool o_48 = unimplemented  {imul eax, ebx, 0x35}
                    
                    if (o_48)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_19
                    ecx_19.b = 0x64
                    sub_402bdc(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26219, &ebp_1[-0x42], ecx_19.b)
                    int32_t eax_61 = sub_4c0a50(1, 6, 1)
                    bool o_49 = unimplemented  {imul edx, edi, 0x636}
                    
                    if (o_49)
                        sub_403010()
                        noreturn
                    
                    bool o_50 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_50)
                        sub_403010()
                        noreturn
                    
                    bool o_51 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_51)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x261b0) = eax_61
                    bool o_52 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_52)
                        sub_403010()
                        noreturn
                    
                    bool o_53 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_53)
                        sub_403010()
                        noreturn
                    
                    bool o_54 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_54)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26352) = 0
                    bool o_55 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_55)
                        sub_403010()
                        noreturn
                    
                    bool o_56 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_56)
                        sub_403010()
                        noreturn
                    
                    bool o_57 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_57)
                        sub_403010()
                        noreturn
                    
                    int32_t* edi_15 = ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26288
                    *edi_15 = 0x6e615705
                    edi_15[1].w = data_5205c0.w
                    sub_4c0cbc(2, 4, 1, k, j, &ebp_1[-0x42])
                    bool o_58 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_58)
                        sub_403010()
                        noreturn
                    
                    bool o_59 = unimplemented  {imul eax, esi, 0x212}
                    
                    if (o_59)
                        sub_403010()
                        noreturn
                    
                    bool o_60 = unimplemented  {imul eax, ebx, 0x35}
                    
                    if (o_60)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_25
                    ecx_25.b = 0x64
                    sub_402bdc(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x262ed, &ebp_1[-0x42], ecx_25.b)
                    int32_t eax_74 = sub_4c0a50(2, 4, 1)
                    bool o_61 = unimplemented  {imul edx, edi, 0x636}
                    
                    if (o_61)
                        sub_403010()
                        noreturn
                    
                    bool o_62 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_62)
                        sub_403010()
                        noreturn
                    
                    bool o_63 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_63)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26284) = eax_74
                    bool o_64 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_64)
                        sub_403010()
                        noreturn
                    
                    bool o_65 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_65)
                        sub_403010()
                        noreturn
                    
                    bool o_66 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_66)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26426) = 0
                    bool o_67 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_67)
                        sub_403010()
                        noreturn
                    
                    bool o_68 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_68)
                        sub_403010()
                        noreturn
                    
                    bool o_69 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_69)
                        sub_403010()
                        noreturn
                    
                    int32_t* edi_19 = ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x2635c
                    *edi_19 = 0x616c4104
                    edi_19[1].b = data_5205c8.b
                    sub_4c0cbc(0x4f, 0x50, 1, k, j, &ebp_1[-0x42])
                    bool o_70 = unimplemented  {imul eax, edi, 0x636}
                    
                    if (o_70)
                        sub_403010()
                        noreturn
                    
                    bool o_71 = unimplemented  {imul eax, esi, 0x212}
                    
                    if (o_71)
                        sub_403010()
                        noreturn
                    
                    bool o_72 = unimplemented  {imul eax, ebx, 0x35}
                    
                    if (o_72)
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_31
                    ecx_31.b = 0x64
                    sub_402bdc(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x263c1, &ebp_1[-0x42], ecx_31.b)
                    int32_t eax_87 = sub_4c0a50(0x4f, 0x50, 1)
                    bool o_73 = unimplemented  {imul edx, edi, 0x636}
                    
                    if (o_73)
                        sub_403010()
                        noreturn
                    
                    bool o_74 = unimplemented  {imul edx, esi, 0x212}
                    
                    if (o_74)
                        sub_403010()
                        noreturn
                    
                    bool o_75 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_75)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-1] + j * 0x31b0 + k * 0x1090 + 0x26358) = eax_87
        
        i = *(ebp_1 - 5)
        *(ebp_1 - 5) -= 1
    while (i != 1)
    void* ebp_2 = sub_52070c(*data_5301f4)
    int32_t var_c = 0
    sub_4746a0(nullptr, 6, *data_530304, &data_5205cc, &data_5205cc)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_52058b
    sub_403df8(ebp_2 - 0x10c)
    return ebp_2 - 0x10c
}
