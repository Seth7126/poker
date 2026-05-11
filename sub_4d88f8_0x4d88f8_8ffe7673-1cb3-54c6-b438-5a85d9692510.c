// ============================================================
// 函数名称: sub_4d88f8
// 虚拟地址: 0x4d88f8
// WARP GUID: 8ffe7673-1cb3-54c6-b438-5a85d9692510
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_403e90, sub_47b488, sub_4040c4, sub_47a1c0, sub_483950, sub_408e1c, sub_404080, sub_5207dc, sub_40401c, sub_4046b4, sub_404780, sub_46910c, sub_47b650, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_4d88f8(void* arg1, int32_t arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_3 = arg3
    int32_t* esp_1 = &i_3
    void* i_2 = 0xb
    void* i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_3 = i_2
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg4
    *(esp_1 - 0xc) = arg5
    i_3 = arg1
    void var_1c
    sub_4046b4(&var_1c, sub_4010c0, 3)
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x18
    void var_20
    void* ebp_1
    int32_t* esi_1
    ebp_1, esi_1 = sub_46910c(i_3, "f_highscore", &var_20)
    *(esp_1 - 0x1c) = *(ebp_1 - 0x1c)
    int80_t x87_r0
    sub_47ab08(*esi_1, data_61cb24, 1, x87_r0)
    void* eax_4
    eax_4.b = *(data_780c58 + 4)
    
    switch (eax_4.b)
        case 0
            sub_403e90(ebp_1 - 0x18, "Unter 10 Runden")
            sub_403e90(ebp_1 - 0x14, 0x4d91e4)
        case 1
            sub_403e90(ebp_1 - 0x18, "ISkO")
            sub_403e90(ebp_1 - 0x14, "Nicht ISkO")
            sub_403e90(ebp_1 - 0x10, 0x4d9220)
        case 2
            sub_403e90(ebp_1 - 0x18, "Unter 10 Runden")
            sub_403e90(ebp_1 - 0x14, 0x4d91e4)
        case 3
            sub_403e90(ebp_1 - 0x18, "Unter 10 Runden")
            sub_403e90(ebp_1 - 0x14, 0x4d91e4)
        case 4
            sub_403e90(ebp_1 - 0x18, "Zweierpartei")
            sub_403e90(ebp_1 - 0x14, "Einzelspieler")
            sub_403e90(ebp_1 - 0x10, 0x4d9268)
        case 5
            sub_403e90(ebp_1 - 0x18, "Unter 10 Spiele")
            sub_403e90(ebp_1 - 0x14, "Unter 25 Spiele")
            sub_403e90(ebp_1 - 0x10, 0x4d92b0)
        case 6
            sub_403e90(ebp_1 - 0x18, "Unter 10 Spiele")
            sub_403e90(ebp_1 - 0x14, "Unter 25 Spiele")
            sub_403e90(ebp_1 - 0x10, 0x4d92b0)
        case 7
            sub_403e90(ebp_1 - 0x18, 0x4d92c8)
            sub_403e90(ebp_1 - 0x14, "Normal")
            sub_403e90(ebp_1 - 0x10, "Profi")
            arg5 = 1
            *(ebp_1 - 8) = 1
    
    sub_403df8(ebp_1 - 0xc)
    
    if (arg5 == 1)
        sub_403e90(ebp_1 - 0xc, 0x4d92c8)
    else if (arg5 == 2)
        sub_403e90(ebp_1 - 0xc, "Normal")
    else if (arg5 == 3)
        sub_403e90(ebp_1 - 0xc, "Profi")
    
    sub_403df8(ebp_1 - 0xc)
    sub_4040c4(ebp_1 - 0x20, U"!", *(ebp_1 - 0xc))
    *(esp_1 - 0x1c) = *(ebp_1 - 0x20)
    int32_t eax_34
    int32_t ebx_9
    eax_34, ebx_9 = sub_47ab08(*esi_1, data_61cb24, data_61cb60, x87_r0)
    eax_34.b = ebx_9 s> 1
    *(esp_1 - 0x1c) = eax_34
    sub_47a1c0(data_61cb64, data_61cb24, *esi_1)
    void* esp_14 = esp_1 - 0x18
    int32_t eax_36
    
    if (ebx_9 s> 1)
        *(esp_14 - 4) = *(ebp_1 - 0x18)
        eax_36, ebx_9 = sub_47ab08(*esi_1, data_61cb24, data_61cb64, x87_r0)
    
    eax_36.b = ebx_9 s>= 2
    *(esp_14 - 4) = eax_36
    sub_47a1c0(data_61cb68, data_61cb24, *esi_1)
    int32_t eax_40
    
    if (ebx_9 s>= 2)
        *(esp_14 - 4) = *(ebp_1 - 0x14)
        eax_40, ebx_9 = sub_47ab08(*esi_1, data_61cb24, data_61cb68, x87_r0)
    
    eax_40.b = ebx_9 s>= 3
    *(esp_14 - 4) = eax_40
    sub_47a1c0(data_61cb6c, data_61cb24, *esi_1)
    
    if (ebx_9 s>= 3)
        *(esp_14 - 4) = *(ebp_1 - 0x10)
        sub_47ab08(*esi_1, data_61cb24, data_61cb6c, x87_r0)
    
    *(esp_14 - 4) = 1
    sub_47b488(data_61cb5c, data_61cb24, *esi_1)
    data_61cb24
    bool o = unimplemented  {imul eax, dword [0x61cb24], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    data_61cb5c
    bool o_1 = unimplemented  {imul edx, dword [0x61cb5c], 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(*(*esi_1 + 0xab0) + data_61cb24 * 0x81c0 + data_61cb5c * 0x118 - 0x7a) = 6
    sub_483950(*esi_1, data_61cb24)
    *(esp_14 - 4) = 0
    sub_47b650(*esi_1, data_61cb5c, U"!")
    *(esp_14 - 8) = 0
    void* ebp_2
    int32_t* esi_2
    ebp_2, esi_2 = sub_46910c(*(ebp_1 - 4), "f_platz", ebp_1 - 0x24)
    sub_47b650(*esi_2, data_61cb5c, *(ebp_2 - 0x24))
    void* esp_29
    void* ebp_5
    int32_t* esi_5
    
    if (*(data_780c58 + 4) != 7)
        *(esp_14 - 0xc) = 0
        void* ebp_6
        int32_t* esi_6
        ebp_6, esi_6 = sub_46910c(*(ebp_2 - 4), "f_punkte", ebp_2 - 0x34)
        sub_47b650(*esi_6, data_61cb5c, *(ebp_6 - 0x34))
        *(esp_14 - 0x10) = 0
        sub_47b650(*esi_6, data_61cb5c, U"!")
        *(esp_14 - 0x14) = 0
        esp_29 = esp_14 - 0x14
        ebp_5, esi_5 = sub_46910c(*(ebp_6 - 4), "f_name", ebp_6 - 0x38)
        sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x38))
    else
        *(esp_14 - 0xc) = 0
        void* ebp_3
        int32_t* esi_3
        ebp_3, esi_3 = sub_46910c(*(ebp_2 - 4), "f_punkte", ebp_2 - 0x28)
        sub_47b650(*esi_3, data_61cb5c, *(ebp_3 - 0x28))
        *(esp_14 - 0x10) = 0
        void* ebp_4
        int32_t* esi_4
        ebp_4, esi_4 = sub_46910c(*(ebp_3 - 4), "f_spieler", ebp_3 - 0x2c)
        sub_47b650(*esi_4, data_61cb5c, *(ebp_4 - 0x2c))
        *(esp_14 - 0x14) = 0
        sub_47b650(*esi_4, data_61cb5c, U"!")
        *(esp_14 - 0x18) = 0
        esp_29 = esp_14 - 0x18
        ebp_5, esi_5 = sub_46910c(*(ebp_4 - 4), "f_ergebnis", ebp_4 - 0x30)
        sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x30))
    
    for (int32_t i_1 = 1; i_1 != 0xb; i_1 += 1)
        *(esp_29 - 4) = 0
        sub_47b650(*esi_5, data_61cb5c, U"!")
        *(esp_29 - 8) = 0
        sub_408e1c(i_1, ebp_5 - 0x3c)
        sub_404080(ebp_5 - 0x3c, U".")
        sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x3c))
        
        if (*(data_780c58 + 4) != 7)
            *(esp_29 - 0xc) = 0
            *(ebp_5 - 8)
            bool o_20 = unimplemented  {imul eax, dword [ebp-0x8], 0x636}
            
            if (o_20)
                sub_403010()
                noreturn
            
            bool o_21 = unimplemented  {imul edx, edi, 0x212}
            
            if (o_21)
                sub_403010()
                noreturn
            
            bool o_22 = unimplemented  {imul edx, ebx, 0x35}
            
            if (o_22)
                sub_403010()
                noreturn
            
            sub_408e1c(*(data_780c58 + *(ebp_5 - 8) * 0x31b0 + arg5 * 0x1090 + i_1 * 0xd4 + 0x25f34), 
                ebp_5 - 0x54)
            sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x54))
            *(esp_29 - 0x10) = 0
            sub_47b650(*esi_5, data_61cb5c, U"!")
            *(ebp_5 - 8)
            bool o_23 = unimplemented  {imul eax, dword [ebp-0x8], 0x636}
            
            if (o_23)
                sub_403010()
                noreturn
            
            bool o_24 = unimplemented  {imul edx, edi, 0x212}
            
            if (o_24)
                sub_403010()
                noreturn
            
            bool o_25 = unimplemented  {imul edx, ebx, 0x35}
            
            if (o_25)
                sub_403010()
                noreturn
            
            if (*(data_780c58 + *(ebp_5 - 8) * 0x31b0 + arg5 * 0x1090 + i_1 * 0xd4 + 0x25f38) != 0)
                *(esp_29 - 0x14) = 0
                *(ebp_5 - 8)
                bool o_26 = unimplemented  {imul edx, dword [ebp-0x8], 0x636}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                *(esp_29 - 0x18) = data_780c58 + *(ebp_5 - 8) * 0x31b0
                bool o_27 = unimplemented  {imul edx, edi, 0x212}
                
                if (o_27)
                    sub_403010()
                    noreturn
                
                *(esp_29 - 0x18) += arg5 * 0x1090
                bool o_28 = unimplemented  {imul edx, ebx, 0x35}
                
                if (o_28)
                    sub_403010()
                    noreturn
                
                int32_t ecx_49 = *(esp_29 - 0x18)
                esp_29 -= 0x14
                sub_40401c(ecx_49, ecx_49 + i_1 * 0xd4 + 0x25f38)
                sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x5c))
            else
                *(esp_29 - 0x14) = 0
                esp_29 -= 0x14
                ebp_5, esi_5 = sub_46910c(*esi_5, "f_leer", ebp_5 - 0x58)
                sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x58))
        else
            *(ebp_5 - 8)
            bool o_2 = unimplemented  {imul eax, dword [ebp-0x8], 0x636}
            
            if (o_2)
                sub_403010()
                noreturn
            
            bool o_3 = unimplemented  {imul edx, edi, 0x212}
            
            if (o_3)
                sub_403010()
                noreturn
            
            bool o_4 = unimplemented  {imul edx, ebx, 0x35}
            
            if (o_4)
                sub_403010()
                noreturn
            
            void* esp_34
            
            if (*(data_780c58 + *(ebp_5 - 8) * 0x31b0 + arg5 * 0x1090 + i_1 * 0xd4 + 0x25f38) != 0)
                *(ebp_5 - 8)
                bool o_5 = unimplemented  {imul eax, dword [ebp-0x8], 0x636}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                bool o_6 = unimplemented  {imul edx, edi, 0x212}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                bool o_7 = unimplemented  {imul edx, ebx, 0x35}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                if (*(data_780c58 + *(ebp_5 - 8) * 0x31b0 + arg5 * 0x1090 + i_1 * 0xd4 + 0x25f9d) == 0)
                    *(esp_29 - 0xc) = 0
                    esp_34 = esp_29 - 0xc
                    sub_47b650(*esi_5, data_61cb5c, 0)
                else
                    *(esp_29 - 0xc) = 0
                    esp_34 = esp_29 - 0xc
                    *(ebp_5 - 8)
                    bool o_8 = unimplemented  {imul eax, dword [ebp-0x8], 0x636}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    bool o_9 = unimplemented  {imul edx, edi, 0x212}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    bool o_10 = unimplemented  {imul edx, ebx, 0x35}
                    
                    if (o_10)
                        sub_403010()
                        noreturn
                    
                    sub_408e1c(
                        *(data_780c58 + *(ebp_5 - 8) * 0x31b0 + arg5 * 0x1090 + i_1 * 0xd4 + 0x25f34), 
                        ebp_5 - 0x44)
                    sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x44))
            else
                *(esp_29 - 0xc) = 0
                esp_34 = esp_29 - 0xc
                ebp_5, esi_5 = sub_46910c(*esi_5, "f_leer", ebp_5 - 0x40)
                sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x40))
            
            *(esp_34 - 4) = 0
            *(ebp_5 - 8)
            bool o_11 = unimplemented  {imul edx, dword [ebp-0x8], 0x636}
            
            if (o_11)
                sub_403010()
                noreturn
            
            *(esp_34 - 8) = data_780c58 + *(ebp_5 - 8) * 0x31b0
            bool o_12 = unimplemented  {imul edx, edi, 0x212}
            
            if (o_12)
                sub_403010()
                noreturn
            
            *(esp_34 - 8) += arg5 * 0x1090
            bool o_13 = unimplemented  {imul edx, ebx, 0x35}
            
            if (o_13)
                sub_403010()
                noreturn
            
            int32_t ecx_34 = *(esp_34 - 8)
            sub_40401c(ecx_34, ecx_34 + i_1 * 0xd4 + 0x25f38)
            *(esp_34 - 8) = *(ebp_5 - 0x4c)
            *(esp_34 - 0xc) = ebp_5 - 0x48
            int32_t ecx_35
            ecx_35.b = 1
            sub_5207dc(data_780c58, i_1, ecx_35)
            sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x48))
            *esp_34 = 0
            sub_47b650(*esi_5, data_61cb5c, U"!")
            *(ebp_5 - 8)
            bool o_14 = unimplemented  {imul eax, dword [ebp-0x8], 0x636}
            
            if (o_14)
                sub_403010()
                noreturn
            
            bool o_15 = unimplemented  {imul edx, edi, 0x212}
            
            if (o_15)
                sub_403010()
                noreturn
            
            bool o_16 = unimplemented  {imul edx, ebx, 0x35}
            
            if (o_16)
                sub_403010()
                noreturn
            
            if (*(data_780c58 + *(ebp_5 - 8) * 0x31b0 + arg5 * 0x1090 + i_1 * 0xd4 + 0x25f9d) == 0)
                *(esp_34 - 4) = 0
                esp_29 = esp_34 - 4
                sub_47b650(*esi_5, data_61cb5c, 0)
            else
                *(esp_34 - 4) = 0
                *(ebp_5 - 8)
                bool o_17 = unimplemented  {imul edx, dword [ebp-0x8], 0x636}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                *(esp_34 - 8) = data_780c58 + *(ebp_5 - 8) * 0x31b0
                bool o_18 = unimplemented  {imul edx, edi, 0x212}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                *(esp_34 - 8) += arg5 * 0x1090
                bool o_19 = unimplemented  {imul edx, ebx, 0x35}
                
                if (o_19)
                    sub_403010()
                    noreturn
                
                int32_t ecx_40 = *(esp_34 - 8)
                esp_29 = esp_34 - 4
                sub_40401c(ecx_40, ecx_40 + i_1 * 0xd4 + 0x25f9d)
                sub_47b650(*esi_5, data_61cb5c, *(ebp_5 - 0x50))
    
    *(esp_29 - 4) = 0
    sub_47b650(*esi_5, data_61cb5c, U"!")
    *(esp_29 - 8) = 0
    sub_47b650(*esi_5, data_61cb5c, U"!")
    *(esp_29 - 0xc) = 0
    sub_47b650(*esi_5, data_61cb5c, U"!")
    *(esp_29 - 0x10) = 0
    sub_47b650(*esi_5, data_61cb5c, U"!")
    *(esp_29 - 0x14) = 0
    sub_47b650(*esi_5, data_61cb5c, U"!")
    *(esp_29 - 0xc)
    fsbase->NtTib.ExceptionList = *(esp_29 - 0x14)
    *(esp_29 - 0xc) = sub_4d91a7
    sub_403e1c(ebp_5 - 0x5c, 0x11)
    sub_404780(ebp_5 - 0x18, sub_4010c0, 3)
    sub_403df8(ebp_5 - 0xc)
    return ebp_5 - 0xc
}
