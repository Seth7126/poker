// ============================================================
// 函数名称: sub_4dc3b8
// 虚拟地址: 0x4dc3b8
// WARP GUID: 0cbe7ccb-35df-5132-acd7-1b97761d9d78
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_409040, sub_404138, sub_4804e4, sub_47a7ec, sub_480534, sub_4f2e8c, sub_4da10c, sub_402bdc, sub_402b4c, sub_403e1c, sub_403010, sub_402d20, sub_5293a8, sub_4ec9b4, sub_4d6394, sub_4dc090, sub_408e1c, sub_4f1e48, sub_48be98, sub_50d2f4, sub_4c4b34, sub_4d4f4c, sub_47a010, sub_4d9a28, sub_4d6bc8, sub_4d7e6c, sub_47a9a0, sub_4ee818, sub_50a53c, sub_4d41ec, sub_4d9f6c, sub_4c0924
// [被调用的父级函数]: sub_4e6659, sub_4d69e8, sub_50a598, sub_4c9540, sub_4e649b
// ============================================================

int32_t __fastcallsub_4dc3b8(int32_t arg1, char arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t i_4 = arg1
    int32_t* esp_1 = &i_4
    int32_t i_3 = 0x52
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    char i_5 = i_4.b
    i_4 = i_3
    int32_t entry_ebx
    *(esp_1 - 4) = entry_ebx
    *(esp_1 - 8) = arg3
    *(esp_1 - 0xc) = arg4
    i_4:3.b = i_5
    int32_t* edi = &data_61d0fc
    int32_t* esi = &data_61c8c8
    *(esp_1 - 0x10) = &var_4
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    void* esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    int32_t var_14
    
    if (sub_4c0924() != 0)
        *(esp_8 - 4) = &var_14
        sub_47a9a0(data_61c934, data_61c8f0, data_61c8c8)
        int32_t eax_2 = var_14
        
        if (add_overflow(eax_2, 1))
            sub_403010()
            noreturn
        
        *(data_780c58 + 0x456c) = eax_2 + 1
        int32_t eax_4 = var_14
        
        if (add_overflow(eax_4, 1))
            sub_403010()
            noreturn
        
        data_77e234 = eax_4 + 1
    
    if (i_4:3.b == 0)
        var_14 = 1
        
        do
            if (ebp_1[-4] == 1 || *(data_780c58 + 0x111f8) == 0)
                if (sub_4c0924() == 0)
                label_4dc492:
                    
                    if (ebp_1[-4] != 1)
                        if (sub_4c0924() == 0)
                            if (*(data_780c58 + 0x111f9) == 0)
                                data_780db4
                                ebp_1, esi, edi = sub_5293a8(ebp_1 - 0x131, 0)
                            else
                                int32_t eax_23 = ebp_1[-4] & 0x80000001
                                
                                if (eax_23 s< 0)
                                    eax_23 = ((eax_23 - 1) | 0xfffffffe) + 1
                                
                                if (eax_23 == 0)
                                    int32_t eax_30 = sub_402d20(3)
                                    ebp_1[-4]
                                    int32_t eax_31 = ebp_1[-4] * 2
                                    bool o_7 = unimplemented  {imul eax, dword [ebp-0x10], 0x2}
                                    
                                    if (o_7)
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_31, 0x1e))
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_30, eax_31 + 0x1e))
                                        sub_403010()
                                        noreturn
                                    
                                    data_780db4
                                    ebp_1, esi, edi = sub_5293a8(ebp_1 - 0x131, eax_30 + eax_31 + 0x1e)
                                else
                                    int32_t eax_26 = sub_402d20(3)
                                    ebp_1[-4]
                                    int32_t eax_27 = ebp_1[-4] * 2
                                    bool o_4 = unimplemented  {imul eax, dword [ebp-0x10], 0x2}
                                    
                                    if (o_4)
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_27, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_26, eax_27 + 1))
                                        sub_403010()
                                        noreturn
                                    
                                    data_780db4
                                    ebp_1, esi, edi = sub_5293a8(ebp_1 - 0x131, eax_26 + eax_27 + 1)
                            
                            ebp_1[-4]
                            bool o_10 = unimplemented  {imul eax, dword [ebp-0x10], 0x65}
                            
                            if (o_10)
                                sub_403010()
                                noreturn
                            
                            sub_402bdc(data_780c58 + ebp_1[-4] * 0x65 + 0x10e43, ebp_1 - 0x131, 0x64)
                    else
                        if (*(data_780c58 + 0x111f8) == 0)
                            if (sub_4c0924() == 0)
                                *(esp_8 - 4) = &ebp_1[-5]
                                sub_47a9a0(data_61cbc4, data_61cae4, *esi)
                            else
                                *(esp_8 - 4) = &ebp_1[-5]
                                sub_47a9a0(data_61cbcc, data_61caec, *esi)
                        else
                            *(esp_8 - 4) = &ebp_1[-5]
                            sub_47a9a0(data_61cbc8, data_61caec, *esi)
                        
                        *(ebp_1 - 0x31) = ebp_1[-5] == 1
                    
                    if (*(ebp_1 - 0x31) == 0)
                        int32_t eax_39 = sub_402d20(4)
                        
                        if (add_overflow(eax_39, 4))
                            sub_403010()
                            noreturn
                        
                        *(data_780c58 + (ebp_1[-4] << 2) + 0x111cc) = eax_39 + 4
                    else
                        int32_t eax_37 = sub_402d20(3)
                        
                        if (add_overflow(eax_37, 1))
                            sub_403010()
                            noreturn
                        
                        *(data_780c58 + (ebp_1[-4] << 2) + 0x111cc) = eax_37 + 1
                    
                    int32_t ecx_9
                    ecx_9.b = *(ebp_1 - 0x31)
                    *(data_780c58 + ebp_1[-4] + 0x111ef) = ecx_9.b
                else
                    int32_t eax_10 = sub_50a53c(ebp_1[-4]) * 0xe9
                    bool o_3 = unimplemented  {imul eax, eax, 0xe9}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    if (*(data_61c9f0 + (eax_10 << 2) - 0x50) == 0)
                        goto label_4dc492
            
            ebp_1[-4] += 1
        while (ebp_1[-4] != 9)
    
    void* esp_15
    void* ebp_2
    
    if (*(data_780c58 + 0x111f8) == 0)
        if (sub_4c0924() == 0)
            *(esp_8 - 4) = 0
            *(esp_8 - 8) = &ebp_1[-0x90]
            data_61cae4
            *esi
            ebp_2 = sub_47a7ec(data_61cbb4)
            esp_15 = esp_8
            sub_404054(ebp_2 - 0x234, *(ebp_2 - 0x240), 0xff)
            sub_402bdc(data_780c58 + 0x10ea8, ebp_2 - 0x234, 0x64)
        else
            *(esp_8 - 4) = 0
            *(esp_8 - 8) = &ebp_1[-0x8f]
            data_61c8f0
            *esi
            ebp_2 = sub_47a7ec(data_61c9dc)
            esp_15 = esp_8
            sub_404054(ebp_2 - 0x234, *(ebp_2 - 0x23c), 0xff)
            sub_402bdc(data_780c58 + 0x10ea8, ebp_2 - 0x234, 0x64)
    else
        *(esp_8 - 4) = 0
        *(esp_8 - 8) = &ebp_1[-0x8e]
        data_61caec
        *esi
        ebp_2 = sub_47a7ec(data_61cbb0)
        esp_15 = esp_8
        sub_404054(ebp_2 - 0x234, *(ebp_2 - 0x238), 0xff)
        sub_402bdc(data_780c58 + 0x10ea8, ebp_2 - 0x234, 0x64)
    
    *(ebp_2 - 8) = edi[0xe1]
    *(ebp_2 - 0xc) = *edi
    *esi
    sub_4d7e6c()
    *(esp_15 - 4) = &edi[0xe1]
    sub_47a9a0(data_61cbf0, data_61cab8, *esi)
    *(esp_15 - 4) = &edi[2]
    sub_47a9a0(data_61cbf4, data_61cab8, *esi)
    *edi = 1
    void* ebp_3 = sub_4d6bc8(*esi)
    edi[0xe2] = 3
    *esi
    
    if (sub_4d6394() == 0)
        *(esp_15 - 4) = &edi[5]
        sub_47a9a0(data_61cc04, data_61cab8, *esi)
        *(esp_15 - 4) = &edi[6]
        sub_47a9a0(data_61cc04, data_61cab8, *esi)
        *(esp_15 - 4) = &edi[7]
        sub_47a9a0(data_61cc0c, data_61cab8, *esi)
    
    *(esp_15 - 4) = &edi[9]
    sub_47a9a0(data_61cc14, data_61cab8, *esi)
    void* esp_30 = esp_15
    *(data_780c58 + 0x2008c) = sub_47a010(*esi, data_61cab8, data_61cc10)
    sub_4ec9b4()
    
    if (sub_4c0924() != 0)
        data_61c9f0
        
        if (sub_50d2f4() != 0)
            *(data_780c58 + 0x2008c) = 0
            
            if (edi[5] s< 3)
                edi[5] = 3
            
            if (edi[6] s< 3)
                edi[5] = 3
    
    edi[8] = 1
    edi[0xa] = 3
    edi[0xf2].b = 0
    int32_t eax_83 = edi[5]
    
    if (eax_83 == 1)
        edi[0xc] = 5
        
        if (*(*esi + 0xce0) != 0)
            edi[0xc] = 2
    else if (eax_83 == 2)
        edi[0xc] = 0xa
    else if (eax_83 == 3)
        edi[0xc] = 0x10
    else if (eax_83 == 4)
        edi[0xc] = 0x16
    
    if (edi[5] == 5)
        edi[0xc] = 0x1c
        
        if (*(*esi + 0xce0) != 0)
            edi[0xc] = 0x32
    
    if (edi[5] == 6)
        edi[0xc] = 0x2c
        
        if (*(*esi + 0xce0) != 0)
            edi[0xc] = 0x186a0
    
    int32_t eax_87 = edi[6]
    
    if (eax_87 == 1)
        edi[0xb] = 0x640
        edi[0xd] = 0xaf0
    else if (eax_87 == 2)
        edi[0xb] = 0x4b0
        edi[0xd] = 0x6a4
    else if (eax_87 == 3)
        edi[0xb] = 0x320
        edi[0xd] = 0x3e8
    else if (eax_87 == 4)
        edi[0xb] = 0x1f4
        edi[0xd] = 0x26c
    
    if (edi[6] == 5)
        edi[0xb] = 0x8c
        edi[0xd] = 0x190
    
    if (edi[6] == 6)
        edi[0xb] = 0x14
        edi[0xd] = 0x32
        
        if (*(*esi + 0xce0) != 0)
            edi[0xb] = 0
            edi[0xd] = 0
    
    if (*(data_780c58 + 4) == 7)
        if (edi[6] == 4)
            edi[0xb] = sub_402b4c(float.t(edi[0xb]) * data_4dd04c)
            edi[0xd] = sub_402b4c(float.t(edi[0xd]) * data_4dd04c)
        
        edi[0xb]
        bool o_13 = unimplemented  {imul eax, dword [edi+0x2c], 0x1}
        
        if (o_13)
            sub_403010()
            noreturn
        
        *(ebp_3 - 0x244) = edi[0xb]
        edi[0xb] = sub_402b4c(float.t(*(ebp_3 - 0x244)))
        edi[0xd]
        bool o_14 = unimplemented  {imul eax, dword [edi+0x34], 0x1}
        
        if (o_14)
            sub_403010()
            noreturn
        
        *(ebp_3 - 0x244) = edi[0xd]
        edi[0xd] = sub_402b4c(float.t(*(ebp_3 - 0x244)))
    
    if (edi[0xe1] == 0)
        edi[0xe1] = 1
    
    data_61d710 = sx.d(*((edi[2] << 1) + &data_61d6e8))
    int32_t eax_98
    eax_98.b = *edi != *(ebp_3 - 0xc)
    eax_98.b |= arg2
    
    if (eax_98.b != 0)
        *esi
        int32_t ecx_24 = sub_4da10c()
        *esi
        sub_4d9a28(ecx_24, 0, esi, edi)
        
        if (arg2 != 0)
            data_52fe7c = 0
        
        if (*(data_780c58 + 4) == 7)
            *esi
            sub_4d9f6c()
    
    int32_t eax_103
    eax_103.b = *(ebp_3 - 8) != edi[0xe1]
    
    if ((arg2 | eax_103.b) != 0)
        sub_480534(*esi, 0x46, 1)
        *(esp_30 - 4) = &data_4dd060
        sub_408e1c(*(*esi + 0xdbc), ebp_3 - 0x248)
        *(esp_30 - 8) = *(ebp_3 - 0x248)
        *(esp_30 - 0xc) = "\env"
        sub_408e1c(edi[0xe1], ebp_3 - 0x24c)
        *(esp_30 - 0x10) = *(ebp_3 - 0x24c)
        sub_404138(&edi[0xf1], 4)
        char* ecx_25 = sub_4dc090()
        ebp_3 = sub_4804e4(*esi, "Umgebungstexturen laden..", ecx_25)
        sub_480534(*esi, 0x4b, 1)
        sub_480534(*esi, 0x50, 1)
        *(esp_30 + 8) = *(*esi + 0xa64)
        *(esp_30 + 4) = "\data\bilder"
        *esp_30 = edi[0xf1]
        *(esp_30 - 4) = "\out.jpg"
        sub_404138(ebp_3 - 0x250, 4)
        void* esp_41 = esp_30 + 0x10
        
        if (sub_409040(*(ebp_3 - 0x250)) != 0)
            *(esp_41 - 4) = 0
            *(esp_41 - 8) = *(*esi + 0xa64)
            *(esp_41 - 0xc) = "\data\bilder"
            *(esp_41 - 0x10) = edi[0xf1]
            *(esp_41 - 0x14) = "\out.jpg"
            sub_404138(ebp_3 - 0x254, 4)
            int32_t eax_119
            eax_119, esi = sub_48be98(*esi, *(ebp_3 - 0x254), 0)
            data_61d0d8 = eax_119
        
        sub_480534(*esi, 0x55, 1)
        sub_480534(*esi, 0x5a, 1)
        *(esp_41 - 4) = 0
        *(esp_41 - 8) = *(*esi + 0xa64)
        *(esp_41 - 0xc) = "\data\bilder"
        *(esp_41 - 0x10) = edi[0xf1]
        *(esp_41 - 0x14) = "\tisch.jpg"
        sub_404138(ebp_3 - 0x258, 4)
        int32_t eax_125
        void** esi_1
        eax_125, esi_1 = sub_48be98(*esi, *(ebp_3 - 0x258), 0)
        data_61d0b4 = eax_125
        *(esp_41 - 4) = *(*esi_1 + 0xa64)
        *(esp_41 - 8) = "\data\bilder"
        *(esp_41 - 0xc) = edi[0xf1]
        *(esp_41 - 0x10) = "\tisch2.jpg"
        sub_404138(ebp_3 - 0x25c, 4)
        void* esp_57 = esp_41 + 4
        
        if (sub_409040(*(ebp_3 - 0x25c)) != 0)
            *(esp_57 - 4) = 0
            *(esp_57 - 8) = *(*esi_1 + 0xa64)
            *(esp_57 - 0xc) = "\data\bilder"
            *(esp_57 - 0x10) = edi[0xf1]
            *(esp_57 - 0x14) = "\tisch2.jpg"
            sub_404138(ebp_3 - 0x260, 4)
            int32_t eax_133
            eax_133, esi_1 = sub_48be98(*esi_1, *(ebp_3 - 0x260), 0)
            data_61d0b8 = eax_133
        
        *(esp_57 - 4) = *(*esi_1 + 0xa64)
        *(esp_57 - 8) = "\data\bilder"
        *(esp_57 - 0xc) = edi[0xf1]
        *(esp_57 - 0x10) = "\tisch3.jpg"
        sub_404138(ebp_3 - 0x264, 4)
        void* esp_67 = esp_57 + 4
        
        if (sub_409040(*(ebp_3 - 0x264)) != 0)
            *(esp_67 - 4) = 0
            *(esp_67 - 8) = *(*esi_1 + 0xa64)
            *(esp_67 - 0xc) = "\data\bilder"
            *(esp_67 - 0x10) = edi[0xf1]
            *(esp_67 - 0x14) = "\tisch3.jpg"
            sub_404138(ebp_3 - 0x268, 4)
            int32_t eax_141
            eax_141, esi_1 = sub_48be98(*esi_1, *(ebp_3 - 0x268), 0)
            data_61d0bc = eax_141
        
        sub_480534(*esi_1, 0x5f, 1)
        *(esp_67 - 4) = *(*esi_1 + 0xa64)
        *(esp_67 - 8) = "\data\bilder"
        *(esp_67 - 0xc) = edi[0xf1]
        *(esp_67 - 0x10) = "\tischk.jpg"
        sub_404138(ebp_3 - 0x26c, 4)
        void* esp_77 = esp_67 + 4
        
        if (sub_409040(*(ebp_3 - 0x26c)) != 0)
            *(esp_77 - 4) = 0
            *(esp_77 - 8) = *(*esi_1 + 0xa64)
            *(esp_77 - 0xc) = "\data\bilder"
            *(esp_77 - 0x10) = edi[0xf1]
            *(esp_77 - 0x14) = "\tischk.jpg"
            sub_404138(ebp_3 - 0x270, 4)
            int32_t eax_150
            eax_150, esi_1 = sub_48be98(*esi_1, *(ebp_3 - 0x270), 0)
            data_61d0c0 = eax_150
        
        *(esp_77 - 4) = *(*esi_1 + 0xa64)
        *(esp_77 - 8) = "\data\bilder"
        *(esp_77 - 0xc) = edi[0xf1]
        *(esp_77 - 0x10) = "\tischk2.jpg"
        sub_404138(ebp_3 - 0x274, 4)
        void* esp_87 = esp_77 + 4
        
        if (sub_409040(*(ebp_3 - 0x274)) == 0)
            data_61d0c4 = data_61d0c0
        else
            *(esp_87 - 4) = 0
            *(esp_87 - 8) = *(*esi_1 + 0xa64)
            *(esp_87 - 0xc) = "\data\bilder"
            *(esp_87 - 0x10) = edi[0xf1]
            *(esp_87 - 0x14) = "\tischk2.jpg"
            sub_404138(ebp_3 - 0x278, 4)
            int32_t eax_158
            eax_158, esi_1 = sub_48be98(*esi_1, *(ebp_3 - 0x278), 0)
            data_61d0c4 = eax_158
        
        sub_480534(*esi_1, 0x64, 1)
        *(esp_87 - 4) = 0
        *(esp_87 - 8) = *(*esi_1 + 0xa64)
        *(esp_87 - 0xc) = "\data\bilder"
        *(esp_87 - 0x10) = edi[0xf1]
        *(esp_87 - 0x14) = "\tischlm.jpg"
        sub_404138(ebp_3 - 0x27c, 4)
        esp_30 = esp_87
        data_61d0cc = sub_48be98(*esi_1, *(ebp_3 - 0x27c), 0)
        int32_t ecx_39 = sub_4f2e8c(0)
        int32_t eax_165 = data_77e234
        
        if (eax_165 s>= 0xffffffff)
            *(ebp_3 - 0x18) = eax_165 + 2
            *(ebp_3 - 0x10) = 0xffffffff
            int32_t i_1
            
            do
                *(ebp_3 - 0x14) = *(ebp_3 - 0x10)
                
                if (*(ebp_3 - 0x10) == 0xffffffff)
                    *(ebp_3 - 0x14) = 9
                
                if (*(ebp_3 - 0x10) == 0)
                    *(ebp_3 - 0x14) = 0xa
                
                *(esp_30 - 4) = fconvert.s(float.t(*(ebp_3 - 0x14)))
                *(ebp_3 - 0x14)
                bool o_15 = unimplemented  {imul eax, dword [ebp-0x14], 0x2345}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                sub_4f1e48(ecx_39, 0, *(ebp_3 - 0x14) * 0x8d14 + &data_614a00)
                *(ebp_3 - 0x14)
                int32_t edx_42 = *(ebp_3 - 0x14) * 0x2e9c
                bool o_16 = unimplemented  {imul edx, dword [ebp-0x14], 0x2e9c}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                *(ebp_3 - 0x14)
                int32_t eax_171 = *(ebp_3 - 0x14) * 0x2345
                bool o_17 = unimplemented  {imul eax, dword [ebp-0x14], 0x2345}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                *(data_5304fc + (edx_42 << 3) - 0x1c) = *((eax_171 << 2) + &data_61d380)
                *(data_5304fc + (edx_42 << 3) - 0x18) = *((eax_171 << 2) + &data_61d384)
                *(data_5304fc + (edx_42 << 3) - 0x14) = *((eax_171 << 2) + &data_61d388)
                *(data_5304fc + (edx_42 << 3) - 0x10) = *((eax_171 << 2) + &data_61d38c)
                *(data_5304fc + (edx_42 << 3) - 0xc) = *((eax_171 << 2) + &data_61d390)
                *(data_5304fc + (edx_42 << 3) - 8) = *((eax_171 << 2) + &data_61d394)
                *(esp_30 - 4) = 1
                *(esp_30 - 8) = 0
                *(esp_30 - 0xc) = 0
                *(esp_30 - 0x10) = ebp_3 - 0x294
                sub_4d41ec(*(ebp_3 - 0x14), *(ebp_3 - 0x14), 0)
                *(ebp_3 - 0x14)
                int32_t eax_175 = *(ebp_3 - 0x14) * 0x2e9c
                bool o_18 = unimplemented  {imul eax, dword [ebp-0x14], 0x2e9c}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                void* edx_44 = data_5304fc
                *(esp_30 - 4) = edi
                __builtin_memcpy(edx_44 + (eax_175 << 3) - 0x34, ebp_3 - 0x294, 0x18)
                edi = *(esp_30 - 4)
                int32_t ebx_6 = 0
                void* esi_3 = data_5304fc
                
                do
                    *(esp_30 - 4) = 1
                    *(esp_30 - 8) = 0
                    *(esp_30 - 0xc) = ebp_3 - 0x294
                    void* eax_176
                    eax_176.b = 1
                    sub_4d4f4c(*(ebp_3 - 0x14), ebx_6, eax_176)
                    *(ebp_3 - 0x14)
                    int32_t eax_177 = *(ebp_3 - 0x14) * 0x2e9c
                    bool o_19 = unimplemented  {imul eax, dword [ebp-0x14], 0x2e9c}
                    
                    if (o_19)
                        sub_403010()
                        noreturn
                    
                    *(esp_30 - 4) = esi_3
                    *(esp_30 - 8) = edi
                    ecx_39 = __builtin_memcpy(esi_3 + (eax_177 << 3) - 0x14008, ebp_3 - 0x294, 0x18)
                    edi = *(esp_30 - 8)
                    ebx_6 += 1
                    esi_3 = *(esp_30 - 4) + 0x353c
                while (ebx_6.b != 7)
                
                *(ebp_3 - 0x10) += 1
                i_1 = *(ebp_3 - 0x18)
                *(ebp_3 - 0x18) -= 1
            while (i_1 != 1)
    
    int32_t eax_178 = data_77e234
    
    if (eax_178 s>= 2)
        *(ebp_3 - 0x18) = eax_178 - 1
        *(ebp_3 - 0x10) = 2
        float esi_6 = 9.08513362e-39f
        int32_t i_2
        
        do
            if (sub_4c4b34(*(ebp_3 - 0x10)) != 0)
                ebp_3 = sub_4ee818(esi_6, *(ebp_3 - 0x10), ebp_3 - 0x30, esi_6, edi)
                *(esp_30 - 4) = esi_6
                *(esp_30 - 8) = edi
                __builtin_memcpy(esi_6, ebp_3 - 0x30, 0x18)
                int32_t edi_4 = *(esp_30 - 8)
                int32_t esi_8 = *(esp_30 - 4)
                *(esp_30 - 4) = esi_8
                *(esp_30 - 8) = edi_4
                __builtin_memcpy(esi_8 + 0x18, ebp_3 - 0x30, 0x18)
                edi = *(esp_30 - 8)
                esi_6 = *(esp_30 - 4)
            
            *(ebp_3 - 0x10) += 1
            esi_6 += 0x8d14
            i_2 = *(ebp_3 - 0x18)
            *(ebp_3 - 0x18) -= 1
        while (i_2 != 1)
    
    edi[0xe] = edi[0xb]
    *(esp_30 + 8)
    fsbase->NtTib.ExceptionList = *esp_30
    *(esp_30 + 8) = sub_4dd042
    sub_403e1c(ebp_3 - 0x27c, 0xe)
    return sub_403e1c(ebp_3 - 0x240, 3)
}
