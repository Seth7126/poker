// ============================================================
// 函数名称: sub_4dad04
// 虚拟地址: 0x4dad04
// WARP GUID: f36767a9-e791-5e0f-a53d-678e172ffe9a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_47a1c0, sub_4837ec, sub_404138, sub_4d4f84, sub_506f9c, sub_403e4c, sub_4f9424, sub_527454, sub_512690, sub_50d9e0, sub_4837d0, sub_402b4c, sub_403e1c, sub_403010, sub_511fd8, sub_4f1980, sub_404080, sub_48e950, sub_502b24, sub_50d838, sub_47ab08, sub_4f0c64, sub_4040c4, sub_4359b4, sub_408e1c, sub_50d2f4, sub_409bbc, sub_403df8, sub_4d9a0c, sub_48e980, sub_4da6ec, sub_4c2de8, sub_4c0924
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4dad04(void* arg1, char arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_4 = 0x15
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_4
        i_4 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_4
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg3
    *(esp_2 - 0x10) = arg4
    int32_t* esi = &data_61c8c8
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    char var_11 = data_7a6e60
    data_7a6e60 = arg2
    sub_48e950(data_61c8c8, 5)
    
    if (*(data_61c8c8 + 0xcf5) == 0)
        sub_4837d0(arg1, data_61ccac)
    else
        sub_4837ec(arg1, data_61ccac, true)
    
    if (mods.dp.d(sx.q(*(data_61c8c8 + 0x1230)), 5) == 0)
        *(esp_9 - 4) = 1
        sub_47a1c0(1, data_61cf9c, data_61c8c8)
        void* const eax_10
        
        if (sub_4c0924().b == 0 || data_77e23c == 0)
            eax_10 = nullptr
        else
            eax_10.b = 1
        
        *(esp_9 - 4) = eax_10
        sub_47a1c0(data_61cd98, data_61cf9c, data_61c8c8)
        void* const eax_12
        
        if (sub_4c0924().b == 0 || data_77e23c == 0)
            eax_12 = nullptr
        else
            eax_12.b = 1
        
        *(esp_9 - 4) = eax_12
        sub_47a1c0(data_61cd9c, data_61cf9c, data_61c8c8)
        
        if (*(data_61c8c8 + 0x89c) == 0)
            data_61cf9c
            bool o_5 = unimplemented  {imul eax, dword [0x61cf9c], 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            data_61cd98
            bool o_6 = unimplemented  {imul edx, dword [0x61cd98], 0x23}
            
            if (o_6)
                sub_403010()
                noreturn
            
            *(*(data_61c8c8 + 0xab0) + data_61cf9c * 0x81c0 + data_61cd98 * 0x118 - 0xf4) = 0x25
            data_61cf9c
            bool o_7 = unimplemented  {imul eax, dword [0x61cf9c], 0x1038}
            
            if (o_7)
                sub_403010()
                noreturn
            
            data_61cd9c
            bool o_8 = unimplemented  {imul edx, dword [0x61cd9c], 0x23}
            
            if (o_8)
                sub_403010()
                noreturn
            
            *(*(data_61c8c8 + 0xab0) + data_61cf9c * 0x81c0 + data_61cd9c * 0x118 - 0xf4) = 0x47
        else
            data_61cf9c
            bool o_1 = unimplemented  {imul eax, dword [0x61cf9c], 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            data_61cd98
            bool o_2 = unimplemented  {imul edx, dword [0x61cd98], 0x23}
            
            if (o_2)
                sub_403010()
                noreturn
            
            *(*(data_61c8c8 + 0xab0) + data_61cf9c * 0x81c0 + data_61cd98 * 0x118 - 0xf4) = 0x69
            data_61cf9c
            bool o_3 = unimplemented  {imul eax, dword [0x61cf9c], 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            data_61cd9c
            bool o_4 = unimplemented  {imul edx, dword [0x61cd9c], 0x23}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(*(data_61c8c8 + 0xab0) + data_61cf9c * 0x81c0 + data_61cd9c * 0x118 - 0xf4) = 0x8b
    
    *(esp_9 - 4) = 0
    sub_47a1c0(data_61cd88, data_61cf9c, data_61c8c8)
    void* esp_16 = esp_9
    char eax_24 = sub_4c0924()
    char eax_26
    char eax_28
    
    if (eax_24 == 0 || *(data_780c58 + 0x111fa) != 0)
        eax_26 = sub_4c0924()
        
        if (eax_26 != 0)
            data_61c9f0
            eax_28 = sub_50d2f4()
    
    void* const eax_25
    
    if ((eax_24 == 0 || *(data_780c58 + 0x111fa) != 0)
            && (eax_26 == 0 || eax_28 == 0 || *(data_61c9f0 + 0x54) s< 1))
        eax_25 = nullptr
    else
        eax_25.b = 1
    
    *(arg1 + 0xce1) = eax_25.b
    eax_25.b = data_77e23c
    char temp5_1
    char temp8_1
    
    if (eax_25.b - 1 u< 2 && *(data_780c58 + 4) == 1)
        void* eax_31
        eax_31.b = *(data_780c58 + 0xffec)
        temp5_1 = eax_31.b
        eax_31.b -= 1
        
        if (temp5_1 != 1)
            eax_31.b -= 5
            temp8_1 = eax_31.b
            eax_31.b -= 2
    
    bool ecx_5
    
    if (eax_25.b - 1 u< 2 && *(data_780c58 + 4) == 1 && (temp5_1 == 1 || temp8_1 u< 2))
        ecx_5 = true
    else
        ecx_5 = false
    
    sub_4837ec(data_61c8c8, data_61ca54, ecx_5)
    bool ecx_6
    
    if (data_77e23c - 1 u>= 2 || *(data_780c58 + 4) != 3)
        ecx_6 = false
    else
        ecx_6 = true
    
    sub_4837ec(data_61c8c8, data_61caa8, ecx_6)
    sub_4837ec(data_61c8c8, data_61cce8, false)
    data_77f7a4 = GetTickCount()
    
    if (data_61cf90 == 0)
        while (data_77f7a8 s> 0)
            if (data_77ef40 s> 0)
                break
            
            data_77f7a8
            int32_t eax_39 = data_77f7a8 * 5
            bool o_9 = unimplemented  {imul eax, dword [0x77f7a8], 0x5}
            
            if (o_9)
                sub_403010()
                noreturn
            
            *(esp_16 - 4) = (&data_77f7a0)[eax_39]
            *(esp_16 - 8) = (&data_77f7a4)[eax_39]
            int32_t ecx_8
            ecx_8.b = (&data_77f7a8)[eax_39].b
            *(esp_16 - 0xc) = ecx_8
            *((eax_39 << 2) + &data_77f79c)
            *((eax_39 << 2) + &data_77f798)
            sub_4d9a0c()
            int32_t temp17_1 = data_77f7a8
            data_77f7a8 -= 1
            
            if (add_overflow(temp17_1, 0xffffffff))
                sub_403010()
                noreturn
    
    sub_48e950(data_61c8c8, 1)
    
    if (*(data_61c8c8 + 0xcf9) != 0 || *(data_61c8c8 + 0xcf7) != 0)
        int32_t i_3 = 0x64
        int32_t i_1
        
        do
            int32_t j_2 = 1
            int32_t j
            
            do
                if (arg2 == 0 && data_77e23c != 0)
                    sub_527454(data_780c58)
                
                j = j_2
                j_2 -= 1
            while (j != 1)
            int32_t j_3 = 1
            int32_t j_1
            
            do
                sub_506f9c()
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    else if (arg2 == 0 && data_77e23c != 0)
        sub_527454(data_780c58)
    
    if (*(data_61c8c8 + 0x1224) == 0)
        sub_506f9c()
    
    if (mods.dp.d(sx.q(*(data_61c8c8 + 0x1230)), 3) == 0 && sub_4c0924() != 0)
        ebp_1 = sub_511fd8(data_61c9f0)
    
    int32_t ecx_10 = 0x14
    
    if (mods.dp.d(sx.q(*(data_61c8c8 + 0x1230)), 0x14) == 0 && sub_50d9e0(data_7a6e5c) != 0)
        ecx_10 = sub_50d838(data_7a6e5c)
    
    sub_48e980(data_61c8c8, 1, ecx_10)
    int32_t ecx_11
    
    if (data_77e23c != 0)
        long double x87_r7_1 = fconvert.t(*(data_61c8c8 + 0x11cc))
        long double temp20_1 = fconvert.t(105f)
        x87_r7_1 - temp20_1
        void* eax_61
        eax_61.w = (x87_r7_1 < temp20_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp20_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp20_1 ? 1 : 0) << 0xe
        int32_t ecx_12
        
        if (test_bit(eax_61:1.b, 6) || test_bit(eax_61:1.b, 0))
            long double x87_r7_2 = fconvert.t(*(data_61c8c8 + 0x11cc))
            long double temp21_1 = fconvert.t(65f)
            x87_r7_2 - temp21_1
            void* eax_62
            eax_62.w = (x87_r7_2 < temp21_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp21_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp21_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_62:1.b, 6) || test_bit(eax_62:1.b, 0))
                long double x87_r7_3 = fconvert.t(*(data_61c8c8 + 0x11cc))
                long double temp22_1 = fconvert.t(45f)
                x87_r7_3 - temp22_1
                void* eax_63
                eax_63.w = (x87_r7_3 < temp22_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_3, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp22_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_63:1.b, 6) || test_bit(eax_63:1.b, 0))
                    ecx_12 = 1
                else
                    ecx_12 = 2
            else
                ecx_12 = 3
        else
            ecx_12 = 4
        
        if (*(data_61c8c8 + 0xcf7) != 0)
            *(data_780c58 + 0x54c) = 1
        else
            *(data_780c58 + 0x54c) = 0
        
        int32_t temp1_3 = mods.dp.d(sx.q(*(data_780c58 + 0x4570)), ecx_12)
        
        if (temp1_3 == 0)
            if (temp1_3 == 0)
                *data_530968
                int32_t ecx_13 = sub_4359b4(ecx_12, &ebp_1[-6])
                int32_t edi_1 = ebp_1[-6]
                int32_t edi_2 = edi_1 s>> 1
                bool c_4 = unimplemented  {sar edi, 0x1}
                
                if (edi_1 s>> 1 s< 0)
                    edi_2 = adc.d(edi_2, 0, c_4)
                
                *data_530968
                ecx_12 = sub_4359b4(ecx_13, &ebp_1[-8])
                int32_t eax_75 = ebp_1[-7]
                int32_t eax_76 = eax_75 s>> 1
                bool c_5 = unimplemented  {sar eax, 0x1}
                
                if (eax_75 s>> 1 s< 0)
                    eax_76 = adc.d(eax_76, 0, c_5)
                
                int32_t eax_77 = eax_76 << 6
                
                if (add_overflow(edi_2, eax_77))
                    sub_403010()
                    noreturn
                
                *(data_780c58 + 0x4574) = edi_2 + eax_77
            
            long double x87_r7_4 = fconvert.t(*(data_61c8c8 + 0x11cc))
            long double temp23_1 = fconvert.t(40f)
            x87_r7_4 - temp23_1
            void* eax_79
            eax_79.w = (x87_r7_4 < temp23_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, temp23_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp23_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_79:1.b, 0)) || *(data_780c58 + 0x4574) != *(data_780c58 + 0x4578))
                *(data_780c58 + 0x4578) = *(data_780c58 + 0x4574)
                
                if (data_77e23c == 2 || *(data_61c8c8 + 0xe18) != 1)
                    ebp_1[-2] = 0
                else if (data_77e23c != 1 || *(data_61c8c8 + 0x8a0) != data_61cb2c)
                label_4db290:
                    *data_530968
                    int32_t ecx_14 = sub_4359b4(ecx_12, &ebp_1[-6])
                    int32_t eax_90 = ebp_1[-5]
                    void* edx_39 = data_61c8c8
                    
                    if (add_overflow(eax_90, neg.d(*(edx_39 + 0x34))))
                        sub_403010()
                        noreturn
                    
                    *(esp_16 - 4) = eax_90 - *(edx_39 + 0x34)
                    *data_530968
                    sub_4359b4(ecx_14, &ebp_1[-8])
                    int32_t eax_94 = ebp_1[-8]
                    void* edx_41 = data_61c8c8
                    
                    if (add_overflow(eax_94, neg.d(*(edx_41 + 0x30))))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-2] = sub_4f1980(eax_94 - *(edx_41 + 0x30), *(esp_16 - 4), &data_61c8c8)
                    
                    if (*(data_780c58 + 0x1026c) == 0)
                        *data_530508 = 0
                    
                    void* eax_99
                    eax_99.b = *(data_780c58 + 4)
                    eax_99.b -= 3
                    char temp33_1 = eax_99.b
                    eax_99.b -= 2
                    
                    if (temp33_1 u>= 2)
                        if (*data_530508 == 0 && *(data_61c8c8 + 0x9b0) != 0
                                && *(data_61c8c8 + 0x9b8) == data_61cda0
                                && *(data_61c8c8 + 0x9b4) == data_61cef0)
                            *data_530508 = data_67e354
                        
                        if (ebp_1[-2] != 0 && ebp_1[-2] s<= data_62608c)
                            ebp_1[-2]
                            ebp_1[-2]
                            bool o_15 = unimplemented  {imul eax, dword [ebp-0x8], 0x35}
                            
                            if (o_15)
                                sub_403010()
                                noreturn
                            
                            if (sub_4f0c64() == 0)
                                ebp_1[-2] = 0
                        
                        ebp_1[-2]
                        
                        if (*(data_61c8c8 + 0x9b0) != 0 && *(data_61c8c8 + 0x9b8) == data_61cda0)
                            int32_t i_2 = 1
                            void* eax_114 = &data_61cf28
                            
                            do
                                if (*eax_114 == *(data_61c8c8 + 0x9b4))
                                    ebp_1[-2] = i_2
                                
                                i_2 += 1
                                eax_114 += 4
                            while (i_2 != 0x15)
                        
                        ebp_1[-3] = 0x15
                        void* eax_115 = &data_61cf78
                        
                        do
                            if (*eax_115 == *(data_61c8c8 + 0x9b4))
                                if (ebp_1[-3] != 0x15)
                                    if (ebp_1[-3] - 0x17 u< 4 && data_687068 s> 0)
                                        *data_5300a0 = 0xc
                                        int32_t edx_54 = ebp_1[-3]
                                        
                                        if (add_overflow(edx_54, 0xfffffff0))
                                            sub_403010()
                                            noreturn
                                        
                                        if (add_overflow(edx_54 - 0x10, 0xfffffffa))
                                            sub_403010()
                                            noreturn
                                        
                                        *data_530508 = edx_54 - 0x16
                                        ebp_1[-2] = 0
                                else if (data_67e354 s> 0)
                                    *data_5300a0 = 0xb
                                    void* edx_47 = data_5300a0
                                    *edx_47
                                    bool o_16 = unimplemented  {imul edx, dword [edx], 0x2345}
                                    
                                    if (o_16)
                                        sub_403010()
                                        noreturn
                                    
                                    *data_530508 = *(*edx_47 * 0x8d14 + &data_61d378)
                                    ebp_1[-2] = 0
                            
                            ebp_1[-3] += 1
                            eax_115 += 4
                        while (ebp_1[-3] != 0x1b)
                else
                    data_61cb2c
                    bool o_12 = unimplemented  {imul eax, dword [0x61cb2c], 0x1038}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    if (*(*(data_61c8c8 + 0xab0) + data_61cb2c * 0x81c0 + 1) == 0)
                        goto label_4db290
                    
                    ebp_1[-2] = 0
                
                *data_5305b8 = ebp_1[-2]
        
        if (*(data_61c8c8 + 0xdfc) != 0 || data_52fe80 s> 2)
            sub_403e4c(&data_77f7a0, "No 32 Bit: Shad/Refl off")
            
            if (data_52fe80 s> 2)
                sub_403e4c(&data_77f7a0, "Too slow: Shad/Refl off")
        else
            sub_408e1c(data_77ef40, &ebp_1[-9])
            sub_403e4c(&data_77f7a0, ebp_1[-9])
        
        sub_408e1c(*(data_780c58 + 0x4584), &ebp_1[-0xa])
        *(esp_16 - 4) = ebp_1[-0xa]
        *(esp_16 - 8) = &data_4dbc78
        *(esp_16 - 0xc) = "stat0(rufwin): "
        sub_408e1c(data_780d7c, &ebp_1[-0xb])
        *(esp_16 - 0x10) = ebp_1[-0xb]
        *(esp_16 - 0x14) = ", stat1(rufloose): "
        sub_408e1c(data_780d80, &ebp_1[-0xc])
        *(esp_16 - 0x18) = ebp_1[-0xc]
        *(esp_16 - 0x1c) = &data_4dbc78
        *(esp_16 - 0x20) = "stat2(sowin): "
        sub_408e1c(data_780d84, &ebp_1[-0xd])
        *(esp_16 - 0x24) = ebp_1[-0xd]
        *(esp_16 - 0x28) = ", stat3(soloose): "
        sub_408e1c(data_780d88, &ebp_1[-0xe])
        *(esp_16 - 0x2c) = ebp_1[-0xe]
        *(esp_16 - 0x30) = &data_4dbc78
        *(esp_16 - 0x34) = "stat4(keinspiel): "
        sub_408e1c(data_780d8c, &ebp_1[-0xf])
        *(esp_16 - 0x38) = ebp_1[-0xf]
        sub_404138(&data_77f7a0, 0xe)
        void* esp_35 = esp_16 - 0x20
        int80_t x87_r0
        
        if (*(data_780c58 + 4) == 4)
            *(esp_35 - 4) = "cg.gs.getBlender.res_i: "
            sub_408e1c(sx.d(*(data_780c58 + 0x1015e)), &ebp_1[-0x10])
            *(esp_35 - 8) = ebp_1[-0x10]
            *(esp_35 - 0xc) = &data_4dbc78
            *(esp_35 - 0x10) = "cg.gs.getBlender.res_ii: "
            sub_408e1c(sx.d(*(data_780c58 + 0x1015e)), &ebp_1[-0x11])
            *(esp_35 - 0x14) = ebp_1[-0x11]
            *(esp_35 - 0x18) = &data_4dbc78
            sub_404138(&data_77f7a0, 6)
        else if (*(data_780c58 + 4) == 1)
            sub_408e1c(*(data_780c58 + 0x4584), &ebp_1[-0x12])
            *(esp_35 - 4) = ebp_1[-0x12]
            *(esp_35 - 8) = &data_4dbc78
            *(esp_35 - 0xc) = "stat0(nullwin): "
            sub_408e1c(data_780d7c, &ebp_1[-0x13])
            *(esp_35 - 0x10) = ebp_1[-0x13]
            *(esp_35 - 0x14) = ", stat1(nullloose): "
            sub_408e1c(data_780d80, &ebp_1[-0x14])
            *(esp_35 - 0x18) = ebp_1[-0x14]
            *(esp_35 - 0x1c) = &data_4dbc78
            *(esp_35 - 0x20) = "stat2(won): "
            sub_408e1c(data_780d84, &ebp_1[-0x15])
            *(esp_35 - 0x24) = ebp_1[-0x15]
            *(esp_35 - 0x28) = ", stat3(lost): "
            sub_408e1c(data_780d88, &ebp_1[-0x16])
            *(esp_35 - 0x2c) = ebp_1[-0x16]
            *(esp_35 - 0x30) = &data_4dbc78
            *(esp_35 - 0x34) = &data_4dbdbc
            sub_408e1c(*(data_780c58 + 0x4584), &ebp_1[-0x17])
            *(esp_35 - 0x38) = ebp_1[-0x17]
            *(esp_35 - 0x3c) = &data_4dbdc8
            sub_404138(&data_77f7a0, 0xf)
            esp_35 -= 0x24
        else if (*(data_780c58 + 4) == 7)
            if (*(data_61c8c8 + 0xcf9) == 0)
                sub_408e1c(*(data_780c58 + 0x21128), &ebp_1[-0x1b])
                sub_4040c4(&data_77f7a0, "AGGRESSION: ", ebp_1[-0x1b])
            else
                sub_408e1c(*(data_780db0 + 0xc), &ebp_1[-0x18])
                *(esp_35 - 4) = ebp_1[-0x18]
                *(esp_35 - 8) = &data_4dbdd4
                sub_408e1c(*(data_780c58 + 0x4584), &ebp_1[-0x19])
                *(esp_35 - 0xc) = ebp_1[-0x19]
                *(esp_35 - 0x10) = " - live: "
                sub_408e1c(sub_4c2de8(0), &ebp_1[-0x1a])
                *(esp_35 - 0x14) = ebp_1[-0x1a]
                sub_404138(&data_77f7a0, 5)
                esp_35 += 4
            
            if (*(*data_530380 + 0xc3d20) == 0)
                sub_403df8(&data_7a6a90)
            else
                sub_403e4c(&data_7a6a90, "learn")
                int32_t eax_153 = *(*data_530380 + 0xc3d24)
                
                if (eax_153 != 1)
                    data_530380
                    
                    if (eax_153 != 2)
                        data_530380
                        
                        if (eax_153 != 3)
                            data_530380
                            
                            if (eax_153 == 4)
                                sub_403e4c(&data_7a6a90, "del.comp.loose")
                        else
                            sub_403e4c(&data_7a6a90, "learn.mensch.win")
                    else
                        sub_403e4c(&data_7a6a90, "learn.mensch.all")
                else
                    sub_403e4c(&data_7a6a90, "learn.comp.win")
            
            if (*(*data_530380 + 0xc3d21) != 0)
                if (data_7a6a90 != 0)
                    sub_404080(&data_7a6a90, ", ")
                
                sub_404080(&data_7a6a90, "playing")
            
            *(esp_35 - 4) = data_7a6a90
            sub_47ab08(data_61c8c8, data_61ccb0, data_61ccb4, x87_r0)
            sub_408e1c(*(*data_530380 + 0x7e8), &ebp_1[-0x1d])
            sub_4040c4(&ebp_1[-0x1c], ".in:", ebp_1[-0x1d])
            *(esp_35 - 4) = ebp_1[-0x1c]
            sub_47ab08(data_61c8c8, data_61ccb0, data_61ccb8, x87_r0)
            sub_408e1c(*(*data_530380 + 0x62280), &ebp_1[-0x1f])
            sub_4040c4(&ebp_1[-0x1e], ".brain:", ebp_1[-0x1f])
            *(esp_35 - 4) = ebp_1[-0x1e]
            sub_47ab08(data_61c8c8, data_61ccb0, data_61ccbc, x87_r0)
            sub_4837ec(ebp_1[-1], data_61ccb0, *(data_61c8c8 + 0xcf5))
        
        *(esp_35 - 4) = "FPS: "
        *(esp_35 - 0x10) = fconvert.t(*(data_61c8c8 + 0x11cc))
        sub_409bbc(&ebp_1[-0x21])
        *(esp_35 - 8) = ebp_1[-0x21]
        *(esp_35 - 0xc) = &data_4dbc78
        *(esp_35 - 0x10) = "WIN1: "
        *(esp_35 - 0x1c) = fconvert.t(data_7a6a98)
        sub_409bbc(&ebp_1[-0x22])
        *(esp_35 - 0x14) = ebp_1[-0x22]
        sub_404138(&ebp_1[-0x20], 5)
        *esp_35 = ebp_1[-0x20]
        sub_47ab08(data_61c8c8, data_61ccac, 1, x87_r0)
        *esp_35 = "FPS: "
        *(esp_35 - 0xc) = fconvert.t(*(data_61c8c8 + 0x11cc))
        sub_409bbc(&ebp_1[-0x24])
        *(esp_35 - 4) = ebp_1[-0x24]
        *(esp_35 - 8) = &data_4dbc78
        *(esp_35 - 0xc) = "WIN1: "
        *(esp_35 - 0x18) = fconvert.t(data_7a6a98)
        sub_409bbc(&ebp_1[-0x25])
        *(esp_35 - 0x10) = ebp_1[-0x25]
        sub_404138(&ebp_1[-0x23], 5)
        *(esp_35 + 4) = ebp_1[-0x23]
        sub_47ab08(data_61c8c8, data_61ccec, 1, x87_r0)
        sub_408e1c(*data_5305b8, &ebp_1[-0x27])
        sub_4040c4(&ebp_1[-0x26], "Selcard:  ", ebp_1[-0x27])
        *(esp_35 + 4) = ebp_1[-0x26]
        sub_47ab08(data_61c8c8, data_61ccac, 2, x87_r0)
        *(esp_35 + 4) = "Ziehcard: "
        sub_408e1c(*data_5300a0, &ebp_1[-0x29])
        *esp_35 = ebp_1[-0x29]
        *(esp_35 - 4) = &data_4dbf08
        sub_408e1c(*data_530508, &ebp_1[-0x2a])
        *(esp_35 - 8) = ebp_1[-0x2a]
        sub_404138(&ebp_1[-0x28], 4)
        *(esp_35 + 0xc) = ebp_1[-0x28]
        sub_47ab08(data_61c8c8, data_61ccac, 3, x87_r0)
        *(esp_35 + 0xc) = "aStatus: asEingabe"
        sub_47ab08(data_61c8c8, data_61ccac, 4, x87_r0)
        sub_4040c4(&ebp_1[-0x2b], "Info: ", data_77f7a0)
        void* esp_100
        *esp_100 = ebp_1[-0x2b]
        sub_47ab08(data_61c8c8, data_61ccac, 5, x87_r0)
        void* esp_103 = esp_35 + 0x10
        
        if (data_77e245 == 2)
            *(esp_103 - 4) = "aStatus: asAnimation"
            sub_47ab08(data_61c8c8, data_61ccac, 4, x87_r0)
        
        if (data_77e245 == 0)
            *(esp_103 - 4) = "aStatus: asNone"
            sub_47ab08(data_61c8c8, data_61ccac, 4, x87_r0)
        
        if (*(data_780c58 + 4) != 7)
            ebp_1[-1]
            sub_4da6ec()
        
        data_780c54 = GetTickCount()
        void* eax_205 = data_780c58
        int32_t temp32_1 = *(eax_205 + 0x4570)
        *(eax_205 + 0x4570) += 1
        
        if (add_overflow(temp32_1, 1))
            sub_403010()
            noreturn
        
        if (sub_4c0924() != 0 && mods.dp.d(sx.q(*(data_780c58 + 0x4570)), 0xa) == 0)
            ebp_1, esi = sub_512690(data_61c9f0)
        
        if (*(*esi + 0xcf9) == 0)
            void* eax_213
            eax_213.b = *(*esi + 0xdf9)
            
            if (eax_213.b != 0 && *(*esi + 0xdf8) != 0)
                eax_213.b = 4
                sub_4f9424(eax_213.b)
            else if (eax_213.b != 0)
                eax_213.b = 3
                sub_4f9424(eax_213.b)
            else if (*(*esi + 0xdf8) == 0)
                sub_4f9424(0)
            else
                void* eax_214
                eax_214.b = 2
                sub_4f9424(eax_214.b)
        else if (*(data_780c58 + 4) == 7)
            void* eax_215
            eax_215.b = 6
            ebp_1 = sub_4d4f84(eax_215.b)
        
        uint32_t eax_216
        eax_216, ecx_11 = GetTickCount()
        ebp_1[-6] = eax_216
        ebp_1[-5] = 0
        int32_t eax_217
        int32_t edx_106
        eax_217, edx_106 = sub_402b4c(float.t(*(ebp_1 - 0x18)))
        *(esp_103 - 4) = edx_106
        *(esp_103 - 8) = eax_217
        int32_t eax_219
        int32_t edx_107
        edx_107:eax_219 = sx.q(data_780c54)
        int32_t temp34_1 = *(esp_103 - 8)
        *(esp_103 - 8) -= eax_219
        *(esp_103 - 4) = sbb.d(*(esp_103 - 4), edx_107, temp34_1 u< eax_219)
        int32_t edx_108 = *(esp_103 - 4)
        esp_16 = esp_103
        
        if (edx_108 == 0)
            if (*(esp_103 - 8) u<= 0x96)
                goto label_4dbbbb
            
            goto label_4dbba2
        
        if (edx_108 s<= 0)
        label_4dbbbb:
            
            if (data_52fe80 s> 0 && data_52fe80 s< 3)
                int32_t temp37_1 = data_52fe80
                data_52fe80 -= 1
                
                if (add_overflow(temp37_1, 0xffffffff))
                    sub_403010()
                    noreturn
        else
        label_4dbba2:
            
            if (data_52fe80 s< 0xa)
                int32_t temp36_1 = data_52fe80
                data_52fe80 += 1
                
                if (add_overflow(temp36_1, 1))
                    sub_403010()
                    noreturn
    else
        ecx_11 = sub_502b24()
    
    sub_48e980(*esi, 5, ecx_11)
    data_7a6e60 = *(ebp_1 - 0xd)
    *(esp_16 + 8)
    fsbase->NtTib.ExceptionList = *esp_16
    *(esp_16 + 8) = sub_4dbc14
    return sub_403e1c(&ebp_1[-0x2b], 0x23)
}
