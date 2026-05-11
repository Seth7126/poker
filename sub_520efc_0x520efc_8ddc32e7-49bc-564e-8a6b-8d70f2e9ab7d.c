// ============================================================
// 函数名称: sub_520efc
// 虚拟地址: 0x520efc
// WARP GUID: 8ddc32e7-49bc-564e-8a6b-8d70f2e9ab7d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_40401c, sub_520e50, sub_518820, sub_4cda5c, sub_47b650, sub_4c0984, sub_403e1c, sub_403010, sub_483950, sub_404080, sub_520a04, sub_478234, sub_47ab08, sub_47b488, sub_4cc6dc, sub_4040c4, sub_408e1c, sub_4c1090, sub_4c094c, sub_4c2d7c, sub_403df8, sub_512ce8, sub_4c2f1c, sub_5207dc, sub_51866c, sub_4c2de8, sub_50a53c, sub_46910c, sub_528538, sub_47b0c8, sub_512d1c, sub_4c0924
// [被调用的父级函数]: sub_4e6659, sub_509ed4, sub_5223e8, sub_508954, sub_50907c, sub_4e649b
// ============================================================

void* __fastcallsub_520efc(int32_t arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_13 = 0x42
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_13
        i_13 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = arg4
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    int32_t* eax_3 = *data_5301f4 + 0x4584
    *(esp_2 - 0x1c) = 1
    sub_47b488(*data_53098c, *data_5302c8, *data_530304)
    *(esp_2 - 0x1c) = 1
    sub_47b488(*data_52fffc, *data_5302c8, *data_530304)
    void* eax_8 = data_5302c8
    *eax_8
    bool o = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    void* edx_7 = data_53098c
    *edx_7
    bool o_1 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx_5 = *data_5300d0
    
    if (add_overflow(ecx_5, 2))
        sub_403010()
        noreturn
    
    *(*(*data_530304 + 0xab0) + *eax_8 * 0x81c0 + *edx_7 * 0x118 - 0x7a) = ecx_5.w + 2
    void* eax_11 = data_5302c8
    *eax_11
    bool o_3 = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o_3)
        sub_403010()
        noreturn
    
    void* edx_12 = data_52fffc
    *edx_12
    bool o_4 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_4)
        sub_403010()
        noreturn
    
    int32_t ecx_8 = *data_5300d0
    
    if (add_overflow(ecx_8, 2))
        sub_403010()
        noreturn
    
    if (add_overflow(ecx_8 + 2, 1))
        sub_403010()
        noreturn
    
    *(*(*data_530304 + 0xab0) + *eax_11 * 0x81c0 + *edx_12 * 0x118 - 0x7a) = (ecx_8 + 2).w + 1
    void* eax_14 = data_5302c8
    *eax_14
    bool o_7 = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o_7)
        sub_403010()
        noreturn
    
    void* edx_17 = data_53098c
    *edx_17
    bool o_8 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_8)
        sub_403010()
        noreturn
    
    *(*(*data_530304 + 0xab0) + *eax_14 * 0x81c0 + *edx_17 * 0x118 - 0xa) = 0
    sub_483950(*data_530304, *data_5302c8)
    void* esp_53
    int80_t x87_r0
    
    if (*(*data_5301f4 + 4) != 7)
        sub_51866c()
        void var_10
        sub_403df8(&var_10)
        void var_20
        sub_403df8(&var_20)
        *(esp_2 - 0x1c) = 0
        void* esp_54 = esp_2 - 0x1c
        sub_47b650(*data_530304, *data_53098c, "!^Spiel")
        int32_t i_19 = *data_5300d0
        int32_t eax
        
        if (i_19 s> 0)
            int32_t edi_5 = 1
            int32_t i_1
            
            do
                int32_t eax_205 = edi_5 & 0x80000001
                
                if (eax_205 s< 0)
                    eax_205 = ((eax_205 - 1) | 0xfffffffe) + 1
                
                int32_t ecx_63
                
                if (eax_205 != 0)
                    *(esp_54 - 4) = 0
                    *(esp_54 - 8) = 0
                    char* var_1dc
                    *(esp_54 - 0xc) = &var_1dc
                    ecx_63.b = 1
                    sub_5207dc(eax, edi_5, ecx_63)
                    int32_t var_1d8
                    sub_4040c4(&var_1d8, U"!", var_1dc)
                    sub_47b650(*data_530304, *data_53098c, var_1d8)
                else
                    *(esp_54 - 4) = 0
                    *(esp_54 - 8) = 0
                    char* var_1d4
                    *(esp_54 - 0xc) = &var_1d4
                    ecx_63.b = 1
                    sub_5207dc(eax, edi_5, ecx_63)
                    int32_t var_1d0[0x5c]
                    sub_4040c4(&var_1d0, "!^", var_1d4)
                    sub_47b650(*data_530304, *data_53098c, var_1d0[0])
                edi_5 += 1
                i_1 = i_19
                i_19 -= 1
            while (i_1 != 1)
        
        *(esp_54 - 4) = 0
        void* esp_61 = esp_54 - 4
        sub_47b650(*data_530304, *data_53098c, U"!")
        int32_t i_26 = *eax_3
        
        if (i_26 s<= 0xc8)
            int32_t i_20 = i_26
            
            if (i_20 s> 0)
                int32_t edi_6 = 1
                int32_t i_2
                
                do
                    *(esp_61 - 4) = 0
                    *(esp_61 - 8) = &data_522264
                    int32_t var_1e4
                    sub_408e1c(edi_6, &var_1e4)
                    *(esp_61 - 0xc) = var_1e4
                    *(esp_61 - 0x10) = &data_5222cc
                    char* var_1e0
                    sub_404138(&var_1e0, 3)
                    void* esp_66 = esp_61
                    sub_47b650(*data_530304, *data_53098c, var_1e0)
                    int32_t j_4 = *data_5300d0
                    
                    if (j_4 s> 0)
                        int32_t j_3 = j_4
                        int32_t ebx_4 = 1
                        int32_t j
                        
                        do
                            *(esp_66 - 4) = 0
                            char* var_1ec
                            *(esp_66 - 8) = &var_1ec
                            bool o_27 = unimplemented  {imul eax, ebx, 0xc9}
                            
                            if (o_27)
                                sub_403010()
                                noreturn
                            
                            sub_520a04(0, eax_3[ebx_4 * 0xc9 + edi_6 + 2])
                            esp_66 -= 4
                            int32_t var_1e8
                            sub_4040c4(&var_1e8, U"!", var_1ec)
                            sub_47b650(*data_530304, *data_53098c, var_1e8)
                            ebx_4 += 1
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                    
                    *(esp_66 - 4) = 0
                    esp_61 = esp_66 - 4
                    bool o_28 = unimplemented  {imul edx, edi, 0xc9}
                    
                    if (o_28)
                        sub_403010()
                        noreturn
                    
                    sub_40401c(eax_3, eax_3 + edi_6 * 0xc9 + 0x1c4c)
                    int32_t var_1f0
                    sub_47b650(*data_530304, *data_53098c, var_1f0)
                    edi_6 += 1
                    i_2 = i_20
                    i_20 -= 1
                while (i_2 != 1)
        
        *(esp_61 - 4) = 0
        void* esp_69 = esp_61 - 4
        sub_47b650(*data_530304, *data_53098c, 0)
        int32_t i_21 = *data_5300d0
        
        if (i_21 s> 0)
            int32_t i_3
            
            do
                *(esp_69 - 4) = 0
                esp_69 -= 4
                sub_47b650(*data_530304, *data_53098c, 0)
                i_3 = i_21
                i_21 -= 1
            while (i_3 != 1)
        
        *(esp_69 - 4) = 0
        sub_47b650(*data_530304, *data_53098c, 0)
        *(esp_69 - 8) = 0
        void* esp_71 = esp_69 - 8
        sub_47b650(*data_530304, *data_52fffc, U"!")
        int32_t i_22 = *data_5300d0
        
        if (i_22 s> 0)
            int32_t edi_7 = 1
            int32_t i_4
            
            do
                int32_t eax_241 = edi_7 & 0x80000001
                
                if (eax_241 s< 0)
                    eax_241 = ((eax_241 - 1) | 0xfffffffe) + 1
                
                int32_t ecx_79
                
                if (eax_241 != 0)
                    *(esp_71 - 4) = 0
                    *(esp_71 - 8) = 0
                    char* var_200
                    *(esp_71 - 0xc) = &var_200
                    ecx_79.b = 1
                    sub_5207dc(eax, edi_7, ecx_79)
                    int32_t var_1fc
                    sub_4040c4(&var_1fc, U"!", var_200)
                    sub_47b650(*data_530304, *data_52fffc, var_1fc)
                else
                    *(esp_71 - 4) = 0
                    *(esp_71 - 8) = 0
                    char* var_1f8
                    *(esp_71 - 0xc) = &var_1f8
                    ecx_79.b = 1
                    sub_5207dc(eax, edi_7, ecx_79)
                    int32_t var_1f4
                    sub_4040c4(&var_1f4, "!^", var_1f8)
                    sub_47b650(*data_530304, *data_52fffc, var_1f4)
                edi_7 += 1
                i_4 = i_22
                i_22 -= 1
            while (i_4 != 1)
        
        *(esp_71 - 4) = 0
        sub_47b650(*data_530304, *data_52fffc, U"!")
        *(esp_71 - 8) = 0
        sub_47b650(*data_530304, *data_52fffc, U"!")
        *(esp_71 - 0xc) = 0
        void* esp_80 = esp_71 - 0xc
        sub_47b650(*data_530304, *data_52fffc, 0)
        int32_t i_23 = *data_5300d0
        
        if (i_23 s> 0)
            int32_t ebx_5 = 1
            int32_t i_5
            
            do
                *(esp_80 - 4) = 0
                char* var_208
                *(esp_80 - 8) = &var_208
                int32_t ecx_87
                ecx_87.b = 1
                sub_520a04(ecx_87, eax_3[ebx_5 + 0x2e88])
                esp_80 -= 4
                int32_t var_204
                sub_4040c4(&var_204, U"!", var_208)
                sub_47b650(*data_530304, *data_52fffc, var_204)
                ebx_5 += 1
                i_5 = i_23
                i_23 -= 1
            while (i_5 != 1)
        
        if (*data_5300d0 s< 6)
            *(esp_80 - 4) = 0
            esp_80 -= 4
            sub_47b650(*data_530304, *data_52fffc, U"!")
        
        void* esp_83
        
        if (*(*data_5301f4 + 4) != 7)
            *(esp_80 - 4) = 0
            esp_83 = esp_80 - 4
            sub_47b650(*data_530304, *data_52fffc, "Summe")
        else
            *(esp_80 - 4) = 0
            esp_83 = esp_80 - 4
            sub_47b650(*data_530304, *data_52fffc, "Cash")
        
        void* eax_273
        eax_273.b = *(*data_5301f4 + 4)
        char temp22_1 = eax_273.b
        eax_273.b -= 4
        
        if (temp22_1 != 4)
            char temp25_1 = eax_273.b
            eax_273.b -= 3
            
            if (temp25_1 != 3)
                *(esp_83 - 4) = 0
                void* esp_84 = esp_83 - 4
                sub_47b650(*data_530304, *data_52fffc, 0)
                int32_t i_24 = *data_5300d0
                
                if (i_24 s> 0)
                    int32_t ebx_6 = 1
                    int32_t i_6
                    
                    do
                        *(esp_84 - 4) = 0
                        char* var_210
                        *(esp_84 - 8) = &var_210
                        int32_t ecx_94
                        ecx_94.b = 1
                        sub_520a04(ecx_94, eax_3[ebx_6 + 0x2e91])
                        esp_84 -= 4
                        int32_t var_20c
                        sub_4040c4(&var_20c, U"!", var_210)
                        sub_47b650(*data_530304, *data_52fffc, var_20c)
                        ebx_6 += 1
                        i_6 = i_24
                        i_24 -= 1
                    while (i_6 != 1)
                
                if (*data_5300d0 s< 6)
                    *(esp_84 - 4) = 0
                    esp_84 -= 4
                    sub_47b650(*data_530304, *data_52fffc, U"!")
                
                void* eax_285
                eax_285.b = *(*data_5301f4 + 4)
                
                if (eax_285.b != 1 || *(*data_5301f4 + 0x1d37e) == 0)
                    data_5301f4
                
                if ((eax_285.b != 1 || *(*data_5301f4 + 0x1d37e) == 0) && eax_285.b != 6)
                    *(esp_84 - 4) = 0
                    esp_83 = esp_84 - 4
                    sub_47b650(*data_530304, *data_52fffc, "Gewinn/Verlust")
                else
                    *(esp_84 - 4) = 0
                    esp_83 = esp_84 - 4
                    int32_t var_214
                    char* var_34
                    sub_4040c4(&var_214, "Gewinn/Verlust ", var_34)
                    sub_47b650(*data_530304, *data_52fffc, var_214)
        
        *(esp_83 - 4) = 0
        void* esp_87 = esp_83 - 4
        sub_47b650(*data_530304, *data_52fffc, 0)
        int32_t i_25 = *data_5300d0
        
        if (i_25 s> 0)
            int32_t i_7
            
            do
                *(esp_87 - 4) = 0
                esp_87 -= 4
                sub_47b650(*data_530304, *data_52fffc, 0)
                i_7 = i_25
                i_25 -= 1
            while (i_7 != 1)
        
        *(esp_87 - 4) = 0
        sub_47b650(*data_530304, *data_52fffc, 0)
        *(esp_87 - 8) = 0
        esp_53 = esp_87 - 8
        sub_47b650(*data_530304, *data_52fffc, 0)
    else
        sub_518820()
        int32_t i_15 = *data_5300d0
        
        if (i_15 s> 0)
            int32_t edi = 1
            void var_54
            void* ebx = &var_54
            int32_t i_8
            
            do
                *ebx = edi.w
                int32_t eax_23 = sub_4cc6dc(edi)
                bool o_9 = unimplemented  {imul edx, edi, 0x41}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + edi * 0x208 + 0x20078) = eax_23
                edi += 1
                ebx += 2
                i_8 = i_15
                i_15 -= 1
            while (i_8 != 1)
        
        int32_t esi_2 = *data_5300d0
        int32_t i_16 = esi_2 - 1
        
        if (add_overflow(esi_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_16 s> 0)
            int32_t i_9
            
            do
                int32_t eax_25 = *data_5300d0
                
                if (add_overflow(eax_25, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (eax_25 - 1 s> 0)
                    int32_t j_2 = eax_25 - 1
                    void var_52
                    void* ebx_1 = &var_52
                    int32_t j_1
                    
                    do
                        if (arg2 != 1)
                            if (sub_520e50(sx.d(*ebx_1), sx.d(*(ebx_1 - 2))).b != 0)
                                int16_t edi_2 = *(ebx_1 - 2)
                                *(ebx_1 - 2) = *ebx_1
                                *ebx_1 = edi_2
                        else if (sub_520e50(sx.d(*ebx_1), sx.d(*(ebx_1 - 2))).b != 0)
                            int16_t edi_1 = *(ebx_1 - 2)
                            *(ebx_1 - 2) = *ebx_1
                            *ebx_1 = edi_1
                        
                        ebx_1 += 2
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                
                i_9 = i_16
                i_16 -= 1
            while (i_9 != 1)
        
        *(esp_2 - 0x1c) = 0
        sub_47b650(*data_530304, *data_53098c, U"!")
        *(esp_2 - 0x20) = 0
        void var_60
        void* ebp_2 = sub_46910c(*data_530304, "f_platz", &var_60)
        sub_4040c4(ebp_2 - 0x58, U"!", *(ebp_2 - 0x5c))
        sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x58))
        *(esp_2 - 0x24) = 0
        sub_47b650(*data_530304, *data_53098c, "Name")
        void* esp_16
        
        if (*(ebp_2 - 8) != 1)
            if (sub_4c0924() == 0 || *(*data_530454 + 0x1e1) == 0)
                *(esp_2 - 0x28) = 0
                esp_16 = esp_2 - 0x28
                ebp_2 = sub_46910c(*data_530304, "f_impot", ebp_2 - 0x6c)
                sub_4040c4(ebp_2 - 0x68, U"!", *(ebp_2 - 0x6c))
                sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x68))
            else
                *(esp_2 - 0x28) = 0
                esp_16 = esp_2 - 0x28
                sub_47b650(*data_530304, *data_53098c, U"!")
        else
            *(esp_2 - 0x28) = 0
            esp_16 = esp_2 - 0x28
            ebp_2 = sub_46910c(*data_530304, "f_spiel", ebp_2 - 0x64)
            sub_4040c4(ebp_2 - 0x60, U"!", *(ebp_2 - 0x64))
            sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x60))
        
        *(esp_16 - 4) = 0
        void* esp_17 = esp_16 - 4
        sub_47b650(*data_530304, *data_53098c, "!Cash")
        *(ebp_2 - 0x34) = 9
        *(ebp_2 - 0x38) = 1
        *(ebp_2 - 0x10) = sx.d(*(ebp_2 - 0x50))
        *(ebp_2 - 0x18) = 0
        int32_t i_17 = *data_5300d0
        
        if (i_17 s> 0)
            int32_t edi_3 = 1
            void* ebx_2 = ebp_2 - 0x50
            int32_t i_10
            
            do
                *(ebp_2 - 0x14) = *(ebp_2 - 0x10)
                *(ebp_2 - 0x10) = sx.d(*ebx_2)
                int32_t ecx_26
                
                if (sub_4c1090() == 0)
                    if (sub_4c094c() != 0)
                        ecx_26.b = 1
                        
                        if (sub_512d1c(*data_530454, *(ebp_2 - 0x10), ecx_26.b) != 0)
                            *(ebp_2 - 0x38) = edi_3
                    
                    *(ebp_2 - 0x10)
                    bool o_12 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    *(ebp_2 - 0x14)
                    bool o_13 = unimplemented  {imul edx, dword [ebp-0x14], 0x41}
                    
                    if (o_13)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + *(ebp_2 - 0x10) * 0x208 + 0x20078)
                            s< *(*data_5301f4 + *(ebp_2 - 0x14) * 0x208 + 0x20078))
                        *(ebp_2 - 0x38) = edi_3
                    
                    *(ebp_2 - 0x10)
                    int32_t eax_70 = *(ebp_2 - 0x10) * 0x41
                    bool o_14 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                    
                    if (o_14)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + (eax_70 << 3) + 0x200a4) s> 0
                            && *(*data_5301f4 + (eax_70 << 3) + 0x20090) s> *(ebp_2 - 0x38))
                        *(ebp_2 - 0x38) = *(*data_5301f4 + (eax_70 << 3) + 0x20090)
                    
                    if (sub_4c094c() != 0)
                        int32_t eax_75 = sub_50a53c(*(ebp_2 - 0x10)) * 0xe9
                        bool o_15 = unimplemented  {imul eax, eax, 0xe9}
                        
                        if (o_15)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_530454 + (eax_75 << 2) + 0x18c) != 0)
                            int32_t eax_78 = sub_50a53c(*(ebp_2 - 0x10)) * 0xe9
                            bool o_16 = unimplemented  {imul eax, eax, 0xe9}
                            
                            if (o_16)
                                sub_403010()
                                noreturn
                            
                            *(ebp_2 - 0x38) = *(*data_530454 + (eax_78 << 2) + 0x18c)
                else
                    int32_t eax_63
                    eax_63, ecx_26 = sub_528538(*data_5302c4, *(ebp_2 - 0x10))
                    *(ebp_2 - 0x38) = eax_63
                
                if (sub_4c094c() != 0 && sub_512ce8(*data_530454, *(ebp_2 - 0x10)) != 0)
                    *(ebp_2 - 0x38) = 0
                    int32_t temp32_1 = *(ebp_2 - 0x18)
                    *(ebp_2 - 0x18) += 1
                    
                    if (add_overflow(temp32_1, 1))
                        sub_403010()
                        noreturn
                
                if (*(ebp_2 - 0x38) s> 0)
                    char eax_84 = sub_4c094c()
                    char eax_87
                    
                    if (eax_84 != 0)
                        ecx_26.b = 1
                        eax_87 = sub_512d1c(*data_530454, *(ebp_2 - 0x10), ecx_26.b)
                    
                    void* esp_18
                    
                    if (eax_84 == 0 || eax_87 == 0)
                        *(esp_17 - 4) = 0
                        esp_18 = esp_17 - 4
                        sub_47b650(*data_530304, *data_53098c, U"!")
                    else
                        *(esp_17 - 4) = 0
                        esp_18 = esp_17 - 4
                        sub_47b650(*data_530304, *data_53098c, 0x5222c0)
                    
                    *(esp_18 - 4) = 0
                    *(esp_18 - 8) = &data_522264
                    sub_408e1c(*(ebp_2 - 0x38), ebp_2 - 0x74)
                    *(esp_18 - 0xc) = *(ebp_2 - 0x74)
                    *(esp_18 - 0x10) = &data_5222cc
                    sub_404138(ebp_2 - 0x70, 3)
                    sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x70))
                    *(esp_18 - 4) = 0
                    *(esp_18 - 8) = 0
                    *(esp_18 - 0xc) = ebp_2 - 0x78
                    int32_t ecx_31
                    ecx_31.b = 1
                    sub_5207dc(*(ebp_2 - 4), *(ebp_2 - 0x10), ecx_31)
                    sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x78))
                    void* esp_30
                    
                    if (*(ebp_2 - 8) != 1)
                        if (sub_4c094c() == 0 || *(*data_530454 + 0x1e1) == 0)
                            *(esp_18 - 4) = 0
                            *(esp_18 - 8) = ebp_2 - 0x88
                            *(ebp_2 - 0x10)
                            bool o_18 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                            
                            if (o_18)
                                sub_403010()
                                noreturn
                            
                            *(ebp_2 - 4)
                            sub_520a04(0, *(*data_5301f4 + *(ebp_2 - 0x10) * 0x208 + 0x1fea4))
                            esp_30 = esp_18 - 4
                            sub_4040c4(ebp_2 - 0x84, U"!", *(ebp_2 - 0x88))
                            sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x84))
                        else
                            *(esp_18 - 4) = 0
                            esp_30 = esp_18 - 4
                            sub_47b650(*data_530304, *data_53098c, U"!")
                    else
                        *(esp_18 - 4) = 0
                        *(esp_18 - 8) = ebp_2 - 0x80
                        *(ebp_2 - 4)
                        sub_520a04(0, *(data_530a3c + (*(ebp_2 - 0x10) << 2) + 0x10))
                        esp_30 = esp_18 - 4
                        sub_4040c4(ebp_2 - 0x7c, U"!", *(ebp_2 - 0x80))
                        sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x7c))
                    
                    if (sub_4c2d7c(*(ebp_2 - 0x10)) == 0)
                    label_521637:
                        char eax_126 = sub_4c094c()
                        char eax_129
                        
                        if (eax_126 != 0)
                            eax_129 = sub_512ce8(*data_530454, *(ebp_2 - 0x10))
                        
                        if (eax_126 == 0 || eax_129 == 0)
                            if (sub_4c094c() == 0)
                            label_521751:
                                *(ebp_2 - 0x10)
                                bool o_25 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                                
                                if (o_25)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + *(ebp_2 - 0x10) * 0x208 + 0x200a4) == 0)
                                    *(esp_30 - 4) = 0
                                    esp_17 = esp_30 - 4
                                    ebp_2, i_17 =
                                        sub_46910c(*data_530304, "f_ausgeschieden", ebp_2 - 0xa0)
                                    sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0xa0))
                                else
                                    *(esp_30 - 4) = 0
                                    esp_17 = esp_30 - 4
                                    ebp_2, i_17 =
                                        sub_46910c(*data_530304, "f_ausgeschieden", ebp_2 - 0x9c)
                                    sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x9c))
                                    
                                    if (*(ebp_2 - 0x34) == 9)
                                        if (add_overflow(edi_3, neg.d(*(ebp_2 - 0x18))))
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebp_2 - 0x34) = edi_3 - *(ebp_2 - 0x18)
                            else
                                if (sub_512d1c(*data_530454, *(ebp_2 - 0x10), 0) == 0)
                                    goto label_521751
                                
                                *(ebp_2 - 0x10)
                                bool o_22 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                                
                                if (o_22)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + *(ebp_2 - 0x10) * 0x208 + 0x200a4) != 0)
                                    goto label_521751
                                
                                *(esp_30 - 4) = 0
                                *(esp_30 - 8) = &data_5222d8
                                *(ebp_2 - 0x10)
                                bool o_23 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                                
                                if (o_23)
                                    sub_403010()
                                    noreturn
                                
                                ebp_2, edi_3 = sub_4cda5c(
                                    *(*data_5301f4 + *(ebp_2 - 0x10) * 0x208 + 0x20078), 0, 
                                    ebp_2 - 0x98)
                                *(esp_30 - 0xc) = *(ebp_2 - 0x98)
                                *(esp_30 - 0x10) = &data_5222e4
                                sub_404138(ebp_2 - 0x94, 3)
                                esp_17 = esp_30
                                sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x94))
                                
                                if (*(ebp_2 - 0x34) == 9)
                                    if (add_overflow(edi_3, neg.d(*(ebp_2 - 0x18))))
                                        sub_403010()
                                        noreturn
                                    
                                    *(ebp_2 - 0x34) = edi_3 - *(ebp_2 - 0x18)
                        else
                            *(esp_30 - 4) = 0
                            esp_17 = esp_30 - 4
                            sub_47b650(*data_530304, *data_53098c, 0)
                            
                            if (*(ebp_2 - 0x34) == 9)
                                if (add_overflow(edi_3, neg.d(*(ebp_2 - 0x18))))
                                    sub_403010()
                                    noreturn
                                
                                *(ebp_2 - 0x34) = edi_3 - *(ebp_2 - 0x18)
                    else
                        *(ebp_2 - 0x10)
                        bool o_19 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                        
                        if (o_19)
                            sub_403010()
                            noreturn
                        
                        if (*(*data_5301f4 + *(ebp_2 - 0x10) * 0x208 + 0x20078)
                                s< *(*data_5301f4 + 0x21108))
                            goto label_521637
                        
                        *(esp_30 - 4) = 0
                        esp_17 = esp_30 - 4
                        *(ebp_2 - 0x10)
                        bool o_20 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                        
                        if (o_20)
                            sub_403010()
                            noreturn
                        
                        ebp_2, edi_3 = sub_4cda5c(*(*data_5301f4 + *(ebp_2 - 0x10) * 0x208 + 0x20078), 
                            0, ebp_2 - 0x90)
                        sub_4040c4(ebp_2 - 0x8c, U"!", *(ebp_2 - 0x90))
                        sub_47b650(*data_530304, *data_53098c, *(ebp_2 - 0x8c))
                
                edi_3 += 1
                ebx_2 += 2
                i_10 = i_17
                i_17 -= 1
            while (i_10 != 1)
        
        int32_t i_14 = 5
        int32_t i_11
        
        do
            *(esp_17 - 4) = 0
            esp_17 -= 4
            sub_47b650(*data_530304, *data_53098c, 0)
            i_11 = i_14
            i_14 -= 1
        while (i_11 != 1)
        int32_t i_18 = *data_5300d0
        
        if (i_18 s> 0)
            int32_t edi_4 = 1
            void* ebx_3 = ebp_2 - 0x50
            int32_t i_12
            
            do
                if (*ebx_3 == 1)
                    sub_408e1c(edi_4, ebp_2 - 0xa4)
                    *(esp_17 - 4) = ebp_2 - 0xa4
                    sub_408e1c(*(ebp_2 - 0x34), ebp_2 - 0xa8)
                    sub_404080(*(esp_17 - 4), *(ebp_2 - 0xa8))
                    *(esp_17 - 4) = *(ebp_2 - 0xa4)
                    esp_17 -= 4
                    i_18, edi_4 = sub_47b0c8(*data_530304, *data_5302c8, *data_53098c)
                
                edi_4 += 1
                ebx_3 += 2
                i_12 = i_18
                i_18 -= 1
            while (i_12 != 1)
        
        void* esp_43
        
        if (*(*data_5301f4 + 0x4584) != 1)
            void* ebp_4 = sub_46910c(*data_530304, "f_ssnach1", ebp_2 - 0xb8)
            *(esp_17 - 4) = *(ebp_4 - 0xb8)
            sub_408e1c(*(*data_5301f4 + 0x4584), ebp_4 - 0xbc)
            *(esp_17 - 8) = *(ebp_4 - 0xbc)
            ebp_1 = sub_46910c(*data_530304, "f_ssnach3", ebp_4 - 0xc0)
            *(esp_17 - 0xc) = ebp_1[-0x30]
            *(esp_17 - 0x10) = &data_522330
            sub_404138(&ebp_1[-7], 4)
            esp_43 = esp_17
        else
            void* ebp_3 = sub_46910c(*data_530304, "f_ssnach1", ebp_2 - 0xac)
            *(esp_17 - 4) = *(ebp_3 - 0xac)
            sub_408e1c(*(*data_5301f4 + 0x4584), ebp_3 - 0xb0)
            *(esp_17 - 8) = *(ebp_3 - 0xb0)
            ebp_1 = sub_46910c(*data_530304, "f_ssnach2", ebp_3 - 0xb4)
            *(esp_17 - 0xc) = ebp_1[-0x2d]
            *(esp_17 - 0x10) = &data_522330
            sub_404138(&ebp_1[-7], 4)
            esp_43 = esp_17
        
        if (mods.dp.d(sx.q(*(*data_5301f4 + 0x4584)), *(*data_5301f4 + 0x20078)) == 0)
            *(esp_43 - 4) = ebp_1[-7]
            ebp_1 = sub_46910c(*data_530304, "f_blindsup", &ebp_1[-0x31])
            *(esp_43 - 8) = ebp_1[-0x31]
            sub_40401c(sub_4c0984(*(*data_5301f4 + 0x21108), &ebp_1[-0x72]), &ebp_1[-0x72])
            *(esp_43 - 0xc) = ebp_1[-0x32]
            *(esp_43 - 0x10) = &data_5222cc
            sub_404138(&ebp_1[-7], 4)
        
        *(esp_43 - 4) = ebp_1[-7]
        sub_47ab08(*data_530304, *data_5302c8, *data_530964, x87_r0)
        esp_53 = esp_43
    
    void* eax_299 = data_5302c8
    *eax_299
    bool o_29 = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o_29)
        sub_403010()
        noreturn
    
    void* edx_193 = data_53098c
    *edx_193
    bool o_30 = unimplemented  {imul edx, dword [edx], 0x23}
    
    if (o_30)
        sub_403010()
        noreturn
    
    void* ebx_7 = *(*data_530304 + 0xab0) + *eax_299 * 0x81c0 + *edx_193 * 0x118 - 0xf8
    int32_t edx_194
    edx_194.w = *(ebx_7 + 0x76)
    int32_t eax_301
    eax_301.w = *(ebx_7 + 0xec)
    
    if (edx_194.w s>= eax_301.w)
        *(ebx_7 + 0x74) = 0
    else
        int32_t eax_302 = sx.d(eax_301.w)
        int32_t edx_195 = sx.d(edx_194.w)
        
        if (add_overflow(eax_302, neg.d(edx_195)))
            sub_403010()
            noreturn
        
        *(ebx_7 + 0x74) = eax_302.w - edx_195.w
    
    sub_478234(*data_530304, *data_5302c8, sx.d(*(ebx_7 + 0x8b)))
    sub_478234(*data_530304, *data_5302c8, sx.d(*(ebx_7 + 0x8c)))
    *(esp_53 - 4) = ebp_1[-7]
    sub_47ab08(*data_530304, *data_5302c8, *data_530964, x87_r0)
    
    if (sub_4c094c() != 0 && sub_4c2f1c(1) != 0 && *(*data_530454 + 0x270) s>= 0)
        void* eax_315 = data_5302c8
        *eax_315
        bool o_32 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_32)
            sub_403010()
            noreturn
        
        void* edx_205 = data_53098c
        *edx_205
        bool o_33 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_33)
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_315 * 0x81c0 + *edx_205 * 0x118 - 0x84) = 0
        void* eax_318 = data_5302c8
        *eax_318
        bool o_34 = unimplemented  {imul eax, dword [eax], 0x1038}
        
        if (o_34)
            sub_403010()
            noreturn
        
        void* edx_210 = data_53098c
        *edx_210
        bool o_35 = unimplemented  {imul edx, dword [edx], 0x23}
        
        if (o_35)
            sub_403010()
            noreturn
        
        *(*(*data_530304 + 0xab0) + *eax_318 * 0x81c0 + *edx_210 * 0x118 + 0x2c4) = 0
    
    if (ebp_1[-2] == 1 && sub_4c094c() != 0)
        if (sub_4c2de8(0) s> 1)
            if (sub_4c2f1c(1) == 0)
                *(esp_53 - 4) = "Weiter"
                sub_47ab08(*data_530304, *data_5302c8, 2, x87_r0)
        else
            *(*data_530454 + 0x1b4) = 0
            *(esp_53 - 4) = "Ende"
            sub_47ab08(*data_530304, *data_5302c8, 2, x87_r0)
    
    *(esp_53 + 8)
    fsbase->NtTib.ExceptionList = *esp_53
    *(esp_53 + 8) = sub_522255
    sub_403e1c(&ebp_1[-0x84], 0x12)
    sub_403e1c(&ebp_1[-0x32], 0x1d)
    sub_403df8(&ebp_1[-0xc])
    sub_403e1c(&ebp_1[-8], 2)
    sub_403df8(&ebp_1[-3])
    return &ebp_1[-3]
}
