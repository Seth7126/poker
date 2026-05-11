// ============================================================
// 函数名称: sub_50e4b0
// 虚拟地址: 0x50e4b0
// WARP GUID: 21a58bb9-4c8e-594d-b6e7-1c4464bffe4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a180, sub_47b488, sub_47a1c0, sub_404138, sub_483950, sub_47b304, sub_4836b0, sub_40401c, sub_402bc0, sub_402b90, sub_46910c, sub_47b650, sub_403df8, sub_403e1c, sub_47b2ac, sub_403010
// [被调用的父级函数]: sub_50b624, sub_50d82b, sub_50e11c, sub_50e22c, sub_50d838
// ============================================================

void* __convention("regparm")sub_50e4b0(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_390 = ebx
    int32_t esi
    int32_t var_394 = esi
    int32_t edi
    int32_t var_398 = edi
    int32_t var_38c = 0
    int32_t var_388 = 0
    int32_t var_380 = 0
    int32_t var_384 = 0
    int32_t var_10 = 0
    int32_t* var_39c = &var_4
    int32_t (* var_3a0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x1b1f6) u>= 2)
        sub_4836b0(*data_530304, *data_5307d8)
        
        if (*(arg1 + 0x1215c) != 0)
            int32_t var_3a8_1 = 1
            sub_47a180(*data_5308d8, *data_5307d8, *data_530304, 1)
            sub_47b488(*data_5308d8, *data_5307d8, *data_530304, arg2)
            struct _EXCEPTION_REGISTRATION_RECORD** esp_2 = &ExceptionList
            sub_483950(*data_530304, *data_5307d8)
            int32_t i_2 = *(arg1 + 0x90e0)
            
            if (add_overflow(i_2, 0xffffffff))
                sub_403010()
                noreturn
            
            if (i_2 - 1 s>= 0)
                int32_t i_1 = i_2
                int32_t var_c_1 = 0
                int32_t i
                
                do
                    bool o_2 = unimplemented  {imul eax, dword [ebp-0x8], 0x17}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    char var_54[0x44]
                    
                    if (*(arg1 + var_c_1 * 0xb8 + 0x9188) == 0)
                        sub_402bc0(&var_54, arg1 + var_c_1 * 0xb8 + 0x90f4)
                        sub_402b90(&var_54, 0x50e88c, 0x41)
                        char var_2e4[0x94]
                        sub_402bc0(&var_2e4, &var_54)
                        sub_402b90(&var_2e4, arg1 + var_c_1 * 0xb8 + 0x9135, 0x93)
                        char var_37c[0x98]
                        sub_402bc0(&var_37c, &var_2e4)
                        sub_40401c(sub_402b90(&var_37c, 0x50e890, 0x95), &var_37c)
                    else
                        sub_402bc0(&var_54, arg1 + var_c_1 * 0xb8 + 0x90f4)
                        sub_402b90(&var_54, 0x50e88c, 0x41)
                        char var_a8[0x54]
                        sub_402bc0(&var_a8, &var_54)
                        sub_402b90(&var_a8, arg1 + var_c_1 * 0xb8 + 0x9188, 0x53)
                        char var_100[0x58]
                        sub_402bc0(&var_100, &var_a8)
                        sub_402b90(&var_100, 0x50e88c, 0x54)
                        char var_1a8[0xa8]
                        sub_402bc0(&var_1a8, &var_100)
                        sub_402b90(&var_1a8, arg1 + var_c_1 * 0xb8 + 0x9135, 0xa6)
                        char var_250[0xa8]
                        sub_402bc0(&var_250, &var_1a8)
                        sub_40401c(sub_402b90(&var_250, 0x50e88c, 0xa7), &var_250)
                    *(esp_2 - 4) = 0
                    esp_2 -= 4
                    sub_47b650(*data_530304, *data_5308d8, var_10)
                    var_c_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            void* ebp_2
            void* esi_2
            ebp_2, esi_2 = sub_46910c(*data_530304, "f_raeume", &var_384)
            *(esp_2 - 4) = *(ebp_2 - 0x380)
            *(esp_2 - 8) = *(esi_2 + 0x3c)
            *(esp_2 - 0xc) = &data_50e8b0
            sub_404138(ebp_2 - 0x37c, 3)
            esp_2[0xe6] = *(ebp_2 - 0x37c)
            int80_t x87_r0
            sub_47ab08(*data_530304, *data_5307d8, *data_5302ac, x87_r0)
            void* ebp_3 = sub_46910c(*data_530304, "f_raumbetreten", ebp_2 - 0x384)
            esp_2[0xe6] = *(ebp_3 - 0x384)
            sub_47ab08(*data_530304, *data_5307d8, *data_5307d4, x87_r0)
            esp_2[0xe6] = 1
            sub_47a180(*data_5307d4, *data_5307d8, *data_530304)
            void* esp_12 = &esp_2[0xe7]
            
            if (*(ebp_3 - 1) != 0)
                *(esp_12 - 4) = 1
                sub_47b2ac(*data_5308d8, *data_5307d8, *data_530304)
                *(esp_12 - 4) = 0
                sub_47b304(*data_5308d8, *data_5307d8, *data_530304)
            
            *(esp_12 - 4) = 0
            sub_47a1c0(*data_53082c, *data_5307d8, *data_530304)
            ebp_1 = sub_46910c(*data_530304, "f_aktualisieren", ebp_3 - 0x388)
            *(esp_12 - 4) = ebp_1[-0xe2]
            sub_47ab08(*data_530304, *data_5307d8, *data_530450, x87_r0)
            *(esp_12 - 4) = 1
            sub_47a1c0(*data_530450, *data_5307d8, *data_530304)
            esp_1 = esp_12
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_50e87f
    sub_403e1c(&ebp_1[-0xe2], 4)
    sub_403df8(&ebp_1[-3])
    return &ebp_1[-3]
}
