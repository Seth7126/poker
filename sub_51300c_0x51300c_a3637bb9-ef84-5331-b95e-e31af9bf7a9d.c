// ============================================================
// 函数名称: sub_51300c
// 虚拟地址: 0x51300c
// WARP GUID: a3637bb9-ef84-5331-b95e-e31af9bf7a9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4040c4, sub_404138, sub_408e1c, sub_404080, sub_40401c, sub_40287c, sub_402b90, sub_403df8, sub_403e1c, sub_402bc0
// [被调用的父级函数]: sub_51621b, sub_515de8, sub_515920
// ============================================================

int32_t __fastcallsub_51300c(int32_t arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t i_2 = arg1
    int32_t* esp_1 = &i_2
    int32_t i_1 = 0x80
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg3
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = i_3
    void var_80
    __builtin_memcpy(&var_80, arg2, 0x7c)
    char* ecx_2 = *(esp_1 - 0x10)
    char* esi_1 = ecx_2
    void* edi = &var_80
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_10 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_10
    char var_7c
    entry_ebx.b = var_7c
    
    switch (entry_ebx.b)
        case 0
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = &var_80
            int32_t* edi_1 = esi_1
            *edi_1 = 0x41484307
            edi_1[1] = data_5138e0.d
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 1
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            int32_t* edi_4 = esi_1
            *edi_4 = 0x494f4a07
            edi_4[1] = data_5138e8.d
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 2
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            int32_t* edi_7 = esi_1
            *edi_7 = 0x494f4a08
            void* edi_8 = &edi_7[1]
            void* const esi_6 = "NRESP"
            *edi_8 = *esi_6
            *(edi_8 + 4) = *(esi_6 + 4)
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 3
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            int32_t* edi_11 = esi_1
            *edi_11 = 0x49474307
            edi_11[1] = data_5138fc.d
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
            sub_40401c(ecx_2, esi_1)
            void* var_84
            sub_404080(&var_84, U"[")
            sub_40401c(sub_404054(esi_1, var_84, 0xff), esi_1)
            void* var_88
            sub_404080(&var_88, U"]")
            ecx_2 = sub_404054(esi_1, var_88, 0xff)
        case 4
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            __builtin_strncpy(esi_1, "\tSTA", 4)
            void* edi_15 = &esi_1[4]
            void* const esi_11 = "TUSREQ"
            *edi_15 = *esi_11
            *(edi_15 + 4) = *(esi_11 + 4)
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 5
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            __builtin_strncpy(esi_1, "\nSTA", 4)
            void* edi_19 = &esi_1[4]
            void* const esi_14 = "TUSRESP"
            *edi_19 = *esi_14
            void* edi_20 = edi_19 + 4
            void* esi_15 = esi_14 + 4
            *edi_20 = *esi_15
            *(edi_20 + 2) = *(esi_15 + 2)
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 6
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            __builtin_strncpy(esi_1, "\nSTA", 4)
            void* edi_24 = &esi_1[4]
            void* const esi_18 = "TUSPUSH"
            *edi_24 = *esi_18
            void* edi_25 = edi_24 + 4
            void* esi_19 = esi_18 + 4
            *edi_25 = *esi_19
            *(edi_25 + 2) = *(esi_19 + 2)
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 7
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            *esi_1 = 0x464e4908
            void* edi_29 = &esi_1[4]
            void* const esi_22 = "OPUSH"
            *edi_29 = *esi_22
            *(edi_29 + 4) = *(esi_22 + 4)
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 8
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            *esi_1 = 0x4e59530b
            void* edi_33 = &esi_1[4]
            void* const esi_25 = &data_51394c
            *edi_33 = *esi_25
            *(edi_33 + 4) = *(esi_25 + 4)
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 9
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            *esi_1 = 0x46455207
            *(esi_1 + 4) = *"RESH\rTRANSFERERROR"
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
        case 0xb
            *(esp_10 - 4) = esi_1
            *(esp_10 - 8) = edi
            *esi_1 = 0x504d4505
            *(esi_1 + 4) = data_513958.w
            edi = *(esp_10 - 8)
            esi_1 = *(esp_10 - 4)
    
    if (*esi_1 == 0)
        *(esp_10 - 4) = esi_1
        *(esp_10 - 8) = edi
        int16_t* esi_32
        int16_t* edi_43
        edi_43, esi_32, ecx_2 = __builtin_strncpy(esi_1, "\rTRANSFERERROR", 0xc)
        *edi_43 = *esi_32
        edi = *(esp_10 - 8)
        esi_1 = *(esp_10 - 4)
    
    sub_40401c(ecx_2, esi_1)
    int32_t var_90
    *(esp_10 - 4) = var_90
    *(esp_10 - 8) = &data_51397c
    int32_t var_94
    sub_408e1c(sx.d(*(edi + 8)), &var_94)
    *(esp_10 - 0xc) = var_94
    char* var_8c
    sub_404138(&var_8c, 3)
    sub_40401c(sub_404054(esi_1, var_8c, 0xff), esi_1)
    int32_t var_9c
    *(esp_10 - 4) = var_9c
    *(esp_10 - 8) = &data_51398c
    int32_t var_a0
    sub_408e1c(*(edi + 0x1c), &var_a0)
    *(esp_10 - 0xc) = var_a0
    char* var_98
    sub_404138(&var_98, 3)
    sub_40401c(sub_404054(esi_1, var_98, 0xff), esi_1)
    int32_t var_a8
    *(esp_10 - 4) = var_a8
    *(esp_10 - 8) = ",  i^:"
    int32_t var_ac
    sub_408e1c(*(edi + 0x20), &var_ac)
    *(esp_10 - 0xc) = var_ac
    char* var_a4
    sub_404138(&var_a4, 3)
    void* esp_58 = esp_10
    int32_t ecx_5 = sub_404054(esi_1, var_a4, 0xff)
    
    if (*(edi + 0x24) != 0)
        int32_t ecx_6 = sub_40401c(ecx_5, esi_1)
        int32_t var_b4
        *(esp_58 - 4) = var_b4
        *(esp_58 - 8) = ",  s:"
        sub_40401c(ecx_6, edi + 0x24)
        int32_t var_b8
        *(esp_58 - 0xc) = var_b8
        char* var_b0
        sub_404138(&var_b0, 3)
        ecx_5 = sub_404054(esi_1, var_b0, 0xff)
    
    if (*(edi + 0x65) != 0)
        int32_t ecx_7 = sub_40401c(ecx_5, esi_1)
        int32_t var_c0
        *(esp_58 - 4) = var_c0
        *(esp_58 - 8) = ",  sht:"
        sub_40401c(ecx_7, edi + 0x65)
        int32_t var_c4
        *(esp_58 - 0xc) = var_c4
        char* var_bc
        sub_404138(&var_bc, 3)
        sub_404054(esi_1, var_bc, 0xff)
    
    int32_t var_230
    char var_168[0x50]
    char var_118[0x1c]
    int32_t var_cc
    
    if (*(edi + 4) == 7 && *(edi + 7) == 8)
        sub_402bc0(&var_118, 0x5139c4)
        sub_402b90(&var_118, edi + 0x24, 0x4b)
        sub_402bc0(&var_168, &var_118)
        sub_402b90(&var_168, 0x5139d0, 0x4d)
        char var_1c8[0x60]
        sub_402bc0(&var_1c8, &var_168)
        sub_402b90(&var_1c8, edi + 0x65, 0x5f)
        char var_22c[0x64]
        sub_402bc0(&var_22c, &var_1c8)
        sub_40401c(sub_402b90(&var_22c, 0x5139d4, 0x61), &var_22c)
        *(esp_58 - 4) = var_cc
        sub_408e1c(sx.d(*(edi + 8)), &var_230)
        *(esp_58 - 8) = var_230
        *(esp_58 - 0xc) = &data_5139e0
        char* var_c8
        sub_404138(&var_c8, 3)
        sub_404054(esi_1, var_c8, 0xff)
    
    if (*(edi + 4) == 7 && *(edi + 7) == 9)
        *(esp_58 - 4) = esi_1
        *(esp_58 - 8) = edi
        __builtin_strncpy(esi_1, "\t_BL", 4)
        void* edi_46 = &esi_1[4]
        void* const esi_34 = "OCKMSG"
        *edi_46 = *esi_34
        *(edi_46 + 4) = *(esi_34 + 4)
        edi = *(esp_58 - 8)
        esi_1 = *(esp_58 - 4)
    
    char var_280[0x50]
    
    if (*(edi + 4) == 7 && *(edi + 7) == 2)
        sub_402bc0(&var_168, "\r_PLAYERINFO: ")
        sub_402b90(&var_168, edi + 0x24, 0x4d)
        sub_402bc0(&var_280, &var_168)
        sub_402b90(&var_280, 0x513a00, 0x4e)
        char var_2e4[0x64]
        sub_402bc0(&var_2e4, &var_280)
        sub_402b90(&var_2e4, edi + 0x65, 0x60)
        sub_402bc0(esi_1, &var_2e4)
    
    char var_378[0x44]
    char var_334[0x50]
    
    if (*(edi + 4) == 7 && *(edi + 7) == 1)
        sub_402bc0(&var_334, 0x513a04)
        *(esp_58 - 4) = &var_378
        sub_40287c(0xc, 1, edi + 0x24)
        sub_402b90(&var_334, &var_378, 0x4c)
        sub_402bc0(&var_280, &var_334)
        sub_402b90(&var_280, 0x513a14, 0x4e)
        sub_402bc0(esi_1, &var_280)
    
    if (*(edi + 4) == 6 && *(edi + 7) == 2)
        sub_402bc0(&var_334, 0x513a18)
        *(esp_58 - 4) = &var_378
        sub_40287c(0xc, 1, edi + 0x24)
        sub_402b90(&var_334, &var_378, 0x4c)
        sub_402bc0(&var_280, &var_334)
        sub_402b90(&var_280, 0x513a14, 0x4e)
        sub_402bc0(esi_1, &var_280)
    
    if (*(edi + 4) == 8 && *(edi + 7) == 1)
        *(esp_58 - 4) = "_STATE("
        int32_t var_380
        sub_408e1c(*(edi + 0x1c), &var_380)
        *(esp_58 - 8) = var_380
        *(esp_58 - 0xc) = &data_513a40
        int32_t var_384
        sub_408e1c(sx.d(*(edi + *(edi + 0x1c) + 8)), &var_384)
        *(esp_58 - 0x10) = var_384
        *(esp_58 - 0x14) = " alls:"
        char* var_37c
        sub_404138(&var_37c, 5)
        int32_t ecx_22 = sub_404054(esi_1, var_37c, 0xff)
        int32_t ecx_23
        
        if (*(edi + *(edi + 0x1c) + 0x11) == 0)
            sub_40401c(ecx_22, esi_1)
            void* var_38c
            sub_404080(&var_38c, "FALSE")
            ecx_23 = sub_404054(esi_1, var_38c, 0xff)
        else
            sub_40401c(ecx_22, esi_1)
            void* var_388
            sub_404080(&var_388, "TRUE")
            ecx_23 = sub_404054(esi_1, var_388, 0xff)
        
        int32_t ecx_24 = sub_40401c(ecx_23, esi_1)
        int32_t var_394
        *(esp_58 - 0xc) = var_394
        *(esp_58 - 0x10) = " cs:"
        sub_40401c(ecx_24, edi + 0x24)
        int32_t var_398
        *(esp_58 - 0x14) = var_398
        char* var_390
        sub_404138(&var_390, 3)
        esp_58 -= 8
        sub_404054(esi_1, var_390, 0xff)
    
    if (*(edi + 4) == 7 && *(edi + 7) == 3)
        *(esp_58 - 4) = "_STAPEL("
        int32_t var_3a0
        sub_408e1c(*(edi + 0x1c), &var_3a0)
        *(esp_58 - 8) = var_3a0
        *(esp_58 - 0xc) = &data_513a40
        *(esp_58 - 0x10) = &var_378
        sub_40401c(sub_40287c(0xc, 1, edi + 0x24), &var_378)
        int32_t var_3a4
        *(esp_58 - 0x10) = var_3a4
        *(esp_58 - 0x14) = &data_513aa0
        char* var_39c
        sub_404138(&var_39c, 5)
        esp_58 -= 8
        sub_404054(esi_1, var_39c, 0xff)
    
    if (*(edi + 4) == 7 && *(edi + 7) == 5)
        char* var_3ac
        sub_408e1c(sx.d(*(edi + 8)), &var_3ac)
        int32_t var_3a8
        sub_4040c4(&var_3a8, "_TL:", var_3ac)
        sub_404054(esi_1, var_3a8, 0xff)
    
    char* var_3b4
    
    if (*(edi + 4) == 7 && *(edi + 7) == 6)
        sub_408e1c(sx.d(*(edi + 8)), &var_3b4)
        int32_t var_3b0
        sub_4040c4(&var_3b0, "_KICK:", var_3b4)
        sub_404054(esi_1, var_3b0, 0xff)
    
    if (*(edi + 4) == 7 && *(edi + 7) == 7)
        char var_400[0x4c]
        sub_402bc0(&var_400, "\t_UNIINFO:")
        *(esp_58 - 4) = &var_378
        sub_40287c(0xc, 1, edi + 0x24)
        sub_402b90(&var_400, &var_378, 0x49)
        sub_402bc0(&var_118, &var_400)
        sub_402b90(&var_118, 0x513a14, 0x4b)
        sub_402bc0(esi_1, &var_118)
    
    int32_t var_408
    
    if (*(edi + 4) == 6 && *(edi + 7) == 5)
        *(esp_58 - 4) = "_DISCONECT("
        sub_408e1c(*(edi + 0x1c), &var_408)
        *(esp_58 - 8) = var_408
        *(esp_58 - 0xc) = &data_5139e0
        char* var_404
        sub_404138(&var_404, 3)
        sub_404054(esi_1, var_404, 0xff)
    
    *(esp_58 + 8)
    fsbase->NtTib.ExceptionList = *esp_58
    *(esp_58 + 8) = sub_5138d3
    sub_403e1c(&var_408, 2)
    sub_403e1c(&var_3b4, 0xf)
    sub_403df8(&var_230)
    return sub_403e1c(&var_cc, 0x13)
}
