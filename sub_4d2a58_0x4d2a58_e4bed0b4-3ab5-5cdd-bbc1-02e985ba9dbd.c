// ============================================================
// 函数名称: sub_4d2a58
// 虚拟地址: 0x4d2a58
// WARP GUID: e4bed0b4-3ab5-5cdd-bbc1-02e985ba9dbd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc140, sub_402b3c, sub_4cb8e8, sub_4d1324, sub_403010, sub_4d5c18, sub_4d41ec, sub_4d0ae4, sub_4d5b1c
// [被调用的父级函数]: sub_4d4f84, sub_4d5577
// ============================================================

void* __convention("regparm")sub_4d2a58(int32_t arg1)
{
    // 第一条实际指令: char var_84
    char var_84
    __builtin_memcpy(&var_84, arg1, 0x50)
    int32_t ecx
    int32_t var_a4 = ecx
    char edx
    char var_89 = edx
    char* esi_1 = &var_84
    float var_98 = 1f
    char var_6c
    arg1.b = var_6c
    int32_t __saved_ebp
    float var_14c[0x6]
    int32_t var_80
    int32_t var_78
    void var_64
    int32_t var_4c
    
    if (arg1.b == 1)
        arg1.b = var_84
        char* esi_3
        
        if (arg1.b != 6 || var_80 != 1)
        label_4d2b1a:
            char* var_15c_2 = &var_84
            __builtin_memcpy(&var_4c, &var_64, 0x18)
            esi_3 = var_15c_2
        else
            int32_t edx_1
            edx_1.b = arg1.b
            bool o_1 = unimplemented  {imul edx, edx, 0xd4f}
            
            if (o_1)
                sub_403010()
                noreturn
            
            bool o_2 = unimplemented  {imul ecx, dword [esi+0xc], 0x2e9c}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(var_78 * 0x174e0 + &data_532f70 + edx_1 * 0x353c - 0x174c8) != 3)
                goto label_4d2b1a
            
            bool o_3 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_3)
                sub_403010()
                noreturn
            
            bool o_4 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
            
            if (o_4)
                sub_403010()
                noreturn
            
            bool o_5 = unimplemented  {imul edx, dword [esi+0x4], 0xa}
            
            if (o_5)
                sub_403010()
                noreturn
            
            char* var_15c_1 = &var_84
            __builtin_memcpy(&var_4c, 
                var_78 * 0x174e0 + &data_532f70 + (arg1 & 0x7f) * 0x353c + var_80 * 0x50 - 0x17510, 
                0x18)
            esi_3 = var_15c_1
        
        if (*(*data_530304 + 0xdfb) != 0)
            *(esi_3 + 0x38) = 0
            *(esi_3 + 0x3c) = 0
            *(esi_3 + 0x4c) = 0
        
        *(esi_3 + 0xc)
        bool o_6 = unimplemented  {imul eax, dword [esi+0xc], 0x2e9c}
        
        if (o_6)
            sub_403010()
            noreturn
        
        sub_4d5c18(&var_14c, &(&data_532f3c)[*(esi_3 + 0xc) * 0x5d38], &esi_3[0x38], 1f)
        __builtin_memcpy(&esi_3[0x38], &var_14c, 0x18)
        void* edx_6
        edx_6.b = esi_3[0x10]
        int32_t eax_8 = sub_4cc140(*(esi_3 + 0xc), edx_6.b, *(esi_3 + 4))
        
        if (eax_8 != 0)
            int32_t eax_14
            eax_14.b = *esi_3
            bool o_9 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_9)
                sub_403010()
                noreturn
            
            *(esi_3 + 0xc)
            bool o_10 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
            
            if (o_10)
                sub_403010()
                noreturn
            
            bool o_11 = unimplemented  {imul edx, ebx, 0x3}
            
            if (o_11)
                sub_403010()
                noreturn
            
            sub_4d5c18(&var_14c, 
                *(esi_3 + 0xc) * 0x174e0 + &data_532f70 + eax_14 * 0x353c + eax_8 * 0x18 - 0x14008, 
                &esi_3[0x38], *(data_530598 + 0x10))
            __builtin_memcpy(&esi_3[0x38], &var_14c, 0x18)
            esi_1 = esi_3
        else
            int32_t eax_10
            eax_10.b = *esi_3
            bool o_7 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_7)
                sub_403010()
                noreturn
            
            *(esi_3 + 0xc)
            bool o_8 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
            
            if (o_8)
                sub_403010()
                noreturn
            
            sub_4d5c18(&var_14c, *(esi_3 + 0xc) * 0x174e0 + &data_532f70 + eax_10 * 0x353c - 0x14008, 
                &esi_3[0x38], *(data_530598 + 0x10))
            __builtin_memcpy(&esi_3[0x38], &var_14c, 0x18)
            esi_1 = esi_3
    else if (arg1.b == 0)
        int32_t var_68
        int32_t eax_18 = var_68 * 2
        bool o_12 = unimplemented  {imul eax, dword [esi+0x1c], 0x2}
        
        if (o_12)
            sub_403010()
            noreturn
        
        void* var_164
        
        if (*(data_61c0d0 + (eax_18 << 3) + 0x1a) != 6)
            bool o_30 = unimplemented  {imul eax, dword [esi+0x1c], 0x2}
            
            if (o_30)
                sub_403010()
                noreturn
            
            char* edi_18 = data_61c0d0 + var_68 * 0x10 + 0x14
            float var_114_1 = *(edi_18 + 0xc)
            long double x87_r7_14 = fconvert.t(var_114_1)
            long double temp7_1 = fconvert.t(1f)
            x87_r7_14 - temp7_1
            float eax_57
            eax_57.w = (x87_r7_14 < temp7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_14, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp7_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_57:1.b, 6)) && not(test_bit(eax_57:1.b, 0)))
                var_114_1 = 1f
            
            float var_118_1 = fconvert.s(fconvert.t(1f) - fconvert.t(var_114_1))
            eax_57.b = edi_18[6]
            char edx_41 = eax_57.b
            char temp12_1
            
            if (edx_41 != 1)
                temp12_1 = edx_41 - 5
            
            if (edx_41 != 1 && temp12_1 u>= 2)
                eax_57.b -= 2
                char temp15_1 = eax_57.b
                eax_57.b -= 3
                
                if (temp15_1 u< 3)
                    char* var_15c_46 = &var_84
                    __builtin_memcpy(&var_4c, &var_64, 0x18)
                    *(var_15c_46 + 0xc)
                    bool o_44 = unimplemented  {imul eax, dword [esi+0xc], 0x2e9c}
                    
                    if (o_44)
                        sub_403010()
                        noreturn
                    
                    sub_4d5c18(&var_14c, &(&data_532f3c)[*(var_15c_46 + 0xc) * 0x5d38], 
                        &var_15c_46[0x38], 1f)
                    __builtin_memcpy(&var_15c_46[0x38], &var_14c, 0x18)
                    int32_t eax_90
                    eax_90.b = *var_15c_46
                    bool o_45 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_45)
                        sub_403010()
                        noreturn
                    
                    *(var_15c_46 + 0xc)
                    bool o_46 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
                    
                    if (o_46)
                        sub_403010()
                        noreturn
                    
                    sub_4d5c18(&var_14c, 
                        *(var_15c_46 + 0xc) * 0x174e0 + &data_532f70 + eax_90 * 0x353c - 0x14008, 
                        &var_15c_46[0x38], 1f)
                    __builtin_memcpy(&var_15c_46[0x38], &var_14c, 0x18)
                    esi_1 = var_15c_46
            else
                __builtin_memset(&var_4c, 0, 0x18)
                sub_4d5c18(&var_14c, &var_64, &var_4c, var_118_1)
                char* var_15c_28 = &var_84
                __builtin_memcpy(&var_4c, &var_14c, 0x18)
                *(var_15c_28 + 0xc)
                bool o_31 = unimplemented  {imul eax, dword [esi+0xc], 0x2e9c}
                
                if (o_31)
                    sub_403010()
                    noreturn
                
                sub_4d5c18(&var_14c, &(&data_532f3c)[*(var_15c_28 + 0xc) * 0x5d38], &var_15c_28[0x38], 
                    var_118_1)
                __builtin_memcpy(&var_15c_28[0x38], &var_14c, 0x18)
                int32_t ecx_23
                ecx_23.b = edi_18[2]
                void* edx_43
                edx_43.b = edi_18[4]
                int32_t eax_61
                eax_61.b = *edi_18
                int32_t eax_62 = sub_4cc140(eax_61, edx_43.b, ecx_23)
                char* esi_13
                char* edi_24
                
                if (eax_62 != 0)
                    int32_t eax_68
                    eax_68.b = *var_15c_28
                    bool o_34 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_34)
                        sub_403010()
                        noreturn
                    
                    *(var_15c_28 + 0xc)
                    bool o_35 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
                    
                    if (o_35)
                        sub_403010()
                        noreturn
                    
                    bool o_36 = unimplemented  {imul edx, ebx, 0x3}
                    
                    if (o_36)
                        sub_403010()
                        noreturn
                    
                    sub_4d5c18(&var_14c, 
                        *(var_15c_28 + 0xc) * 0x174e0 +
                            &data_532f70 + eax_68 * 0x353c + eax_62 * 0x18 - 0x14008, 
                        &var_15c_28[0x38], 
                        fconvert.s(fconvert.t(var_118_1) * fconvert.t(*(data_530598 + 0x10))))
                    __builtin_memcpy(&var_15c_28[0x38], &var_14c, 0x18)
                    edi_24 = edi_18
                    esi_13 = var_15c_28
                else
                    int32_t eax_64
                    eax_64.b = *var_15c_28
                    bool o_32 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_32)
                        sub_403010()
                        noreturn
                    
                    *(var_15c_28 + 0xc)
                    bool o_33 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
                    
                    if (o_33)
                        sub_403010()
                        noreturn
                    
                    sub_4d5c18(&var_14c, 
                        *(var_15c_28 + 0xc) * 0x174e0 + &data_532f70 + eax_64 * 0x353c - 0x14008, 
                        &var_15c_28[0x38], 
                        fconvert.s(fconvert.t(var_118_1) * fconvert.t(*(data_530598 + 0x10))))
                    __builtin_memcpy(&var_15c_28[0x38], &var_14c, 0x18)
                    edi_24 = edi_18
                    esi_13 = var_15c_28
                
                int32_t ecx_26
                ecx_26.b = edi_24[3]
                void* edx_46
                edx_46.b = edi_24[5]
                int32_t eax_72
                eax_72.b = edi_24[1]
                int32_t eax_73 = sub_4cc140(eax_72, edx_46.b, ecx_26)
                char var_15c_35 = 0
                int32_t var_160_15 = 0
                var_164 = nullptr
                int32_t edx_50
                edx_50.b = edi_24[1]
                float var_134
                sub_4d41ec(0xffffffff, edx_50, 0, &var_134, var_164.b, var_160_15, var_15c_35)
                sub_4d5c18(&var_14c, &var_134, &esi_13[0x38], var_114_1)
                __builtin_memcpy(&esi_13[0x38], &var_14c, 0x18)
                
                if (*esi_13 != 6)
                    char var_15c_39 = 0
                    void* eax_74
                    eax_74.b = *esi_13 == 4
                    var_164 = eax_74
                    int32_t ecx_29
                    ecx_29.b = edi_24[1]
                    int32_t edx_54
                    edx_54.b = edi_24[3]
                    sub_4d41ec(ecx_29, edx_54, 2, &var_134, var_164.b, eax_73, var_15c_39)
                else
                    char var_15c_38 = 0
                    var_164 = nullptr
                    int32_t edx_52
                    edx_52.b = edi_24[3]
                    int32_t eax_75
                    eax_75.b = edi_24[1]
                    int32_t eax_76 = eax_75 * 0x2e9c
                    bool o_37 = unimplemented  {imul eax, eax, 0x2e9c}
                    
                    if (o_37)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_53 = edx_52 - *((eax_76 << 3) + &data_532ec8)
                    
                    if (add_overflow(edx_52, neg.d(*((eax_76 << 3) + &data_532ec8))))
                        sub_403010()
                        noreturn
                    
                    int32_t ecx_28
                    ecx_28.b = edi_24[1]
                    eax_76.b = 2
                    sub_4d41ec(ecx_28, edx_53, eax_76.b, &var_134, var_164.b, eax_73, var_15c_38)
                
                if (sub_4cb8e8() != 0)
                    char eax_78 = *esi_13
                    float var_12c
                    
                    if (eax_78 == 0)
                        float var_12c_1 = fconvert.s(data_4d3664 * fconvert.t(var_12c))
                    else if (eax_78 == 1)
                        float var_12c_2 = fconvert.s(data_4d3670 * fconvert.t(var_12c))
                    else if (eax_78 == 2)
                        float var_12c_3 = fconvert.s(data_4d367c * fconvert.t(var_12c))
                    else if (eax_78 == 3)
                        float var_12c_4 = fconvert.s(data_4d3688 * fconvert.t(var_12c))
                
                sub_4d5c18(&var_14c, &var_134, &esi_13[0x38], var_114_1)
                __builtin_memcpy(&esi_13[0x38], &var_14c, 0x18)
                char* edi_31
                
                if (eax_73 != 0)
                    int32_t eax_85
                    eax_85.b = *esi_13
                    bool o_41 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_41)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_60
                    edx_60.b = edi_24[1]
                    bool o_42 = unimplemented  {imul edx, edx, 0x2e9c}
                    
                    if (o_42)
                        sub_403010()
                        noreturn
                    
                    bool o_43 = unimplemented  {imul edx, ebx, 0x3}
                    
                    if (o_43)
                        sub_403010()
                        noreturn
                    
                    sub_4d5c18(&var_14c, 
                        edx_60 * 0x174e0 + &data_532f70 + eax_85 * 0x353c + eax_73 * 0x18 - 0x14008, 
                        &esi_13[0x38], 
                        fconvert.s(fconvert.t(var_114_1) * fconvert.t(*(data_530598 + 0x10))))
                    __builtin_memcpy(&esi_13[0x38], &var_14c, 0x18)
                    edi_31 = edi_24
                    esi_1 = esi_13
                else
                    int32_t eax_81
                    eax_81.b = *esi_13
                    bool o_39 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_39)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_56
                    edx_56.b = edi_24[1]
                    bool o_40 = unimplemented  {imul edx, edx, 0x2e9c}
                    
                    if (o_40)
                        sub_403010()
                        noreturn
                    
                    sub_4d5c18(&var_14c, edx_56 * 0x174e0 + &data_532f70 + eax_81 * 0x353c - 0x14008, 
                        &esi_13[0x38], 
                        fconvert.s(fconvert.t(var_114_1) * fconvert.t(*(data_530598 + 0x10))))
                    __builtin_memcpy(&esi_13[0x38], &var_14c, 0x18)
                    edi_31 = edi_24
                    esi_1 = esi_13
                
                *(esi_1 + 0x40) = fconvert.s(
                    fconvert.t(var_114_1) * fconvert.t(var_118_1) * fconvert.t(400f)
                    + fconvert.t(*(esi_1 + 0x40)))
                long double x87_r7_37 = data_4d3694
                long double temp51_1 = fconvert.t(var_114_1)
                x87_r7_37 - temp51_1
                void* eax_83
                eax_83.w = (x87_r7_37 < temp51_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_37, temp51_1) ? 1 : 0) << 0xa
                    | (x87_r7_37 == temp51_1 ? 1 : 0) << 0xe
                
                if (test_bit(eax_83:1.b, 6) || test_bit(eax_83:1.b, 0))
                    long double x87_r7_44 = data_4d36b4
                    long double temp52_1 = fconvert.t(var_114_1)
                    x87_r7_44 - temp52_1
                    eax_83.w = (x87_r7_44 < temp52_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_44, temp52_1) ? 1 : 0) << 0xa
                        | (x87_r7_44 == temp52_1 ? 1 : 0) << 0xe
                    
                    if (not(test_bit(eax_83:1.b, 0)))
                        *(esi_1 + 0x40) = fconvert.s(fconvert.t(*(esi_1 + 0x40)) + fconvert.t(150f))
                    else
                        *(esi_1 + 0x40) = fconvert.s(sub_402b3c((fconvert.t(1f) - fconvert.t(var_114_1))
                            * fconvert.t(2.5f) * data_4d36a4) * fconvert.t(150f)
                            + fconvert.t(*(esi_1 + 0x40)))
                else
                    *(esi_1 + 0x40) = fconvert.s(
                        sub_402b3c(fconvert.t(var_114_1) * fconvert.t(2.5f) * data_4d36a4)
                        * fconvert.t(150f) + fconvert.t(*(esi_1 + 0x40)))
                
                if (edi_31[6] == 5)
                    *(esi_1 + 0x44) = fconvert.s(fconvert.t(*(esi_1 + 0x44))
                        - fconvert.t(var_114_1) * fconvert.t(360f))
        else
            void* edi_4 = data_61c0d0 + (eax_18 << 3) + 0x14
            eax_18.b = var_84
            char* esi_6
            void* edi_5
            
            if (eax_18.b != 6 || var_80 != 1)
            label_4d2d0f:
                char* var_15c_10 = &var_84
                __builtin_memcpy(&var_4c, &var_64, 0x18)
                edi_5 = edi_4
                esi_6 = var_15c_10
            else
                int32_t edx_16
                edx_16.b = eax_18.b
                bool o_13 = unimplemented  {imul edx, edx, 0xd4f}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                bool o_14 = unimplemented  {imul ecx, dword [esi+0xc], 0x2e9c}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                if (*(var_78 * 0x174e0 + &data_532f70 + edx_16 * 0x353c - 0x174c8) != 3)
                    goto label_4d2d0f
                
                bool o_15 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_15)
                    sub_403010()
                    noreturn
                
                bool o_16 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                bool o_17 = unimplemented  {imul edx, dword [esi+0x4], 0xa}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                char* var_15c_9 = &var_84
                __builtin_memcpy(&var_4c, 
                    var_78 * 0x174e0 +
                        &data_532f70 + (eax_18 & 0x7f) * 0x353c + var_80 * 0x50 - 0x17510, 
                    0x18)
                edi_5 = edi_4
                esi_6 = var_15c_9
            
            if (*(*data_530304 + 0xdfb) != 0)
                *(esi_6 + 0x38) = 0
                *(esi_6 + 0x3c) = 0
                *(esi_6 + 0x4c) = 0
            
            *(esi_6 + 0xc)
            bool o_18 = unimplemented  {imul eax, dword [esi+0xc], 0x2e9c}
            
            if (o_18)
                sub_403010()
                noreturn
            
            sub_4d5c18(&var_14c, &(&data_532f3c)[*(esi_6 + 0xc) * 0x5d38], &esi_6[0x38], 1f)
            __builtin_memcpy(&esi_6[0x38], &var_14c, 0x18)
            void* edx_21
            edx_21.b = esi_6[0x10]
            int32_t eax_27 = sub_4cc140(*(esi_6 + 0xc), edx_21.b, *(esi_6 + 4))
            char* esi_8
            void* edi_10
            
            if (eax_27 != 0)
                int32_t eax_33
                eax_33.b = *esi_6
                bool o_21 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_21)
                    sub_403010()
                    noreturn
                
                *(esi_6 + 0xc)
                bool o_22 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                bool o_23 = unimplemented  {imul edx, ebx, 0x3}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                sub_4d5c18(&var_14c, 
                    *(esi_6 + 0xc) * 0x174e0 +
                        &data_532f70 + eax_33 * 0x353c + eax_27 * 0x18 - 0x14008, 
                    &esi_6[0x38], *(data_530598 + 0x10))
                __builtin_memcpy(&esi_6[0x38], &var_14c, 0x18)
                edi_10 = edi_5
                esi_8 = esi_6
            else
                int32_t eax_29
                eax_29.b = *esi_6
                bool o_19 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_19)
                    sub_403010()
                    noreturn
                
                *(esi_6 + 0xc)
                bool o_20 = unimplemented  {imul edx, dword [esi+0xc], 0x2e9c}
                
                if (o_20)
                    sub_403010()
                    noreturn
                
                sub_4d5c18(&var_14c, 
                    *(esi_6 + 0xc) * 0x174e0 + &data_532f70 + eax_29 * 0x353c - 0x14008, &esi_6[0x38], 
                    *(data_530598 + 0x10))
                __builtin_memcpy(&esi_6[0x38], &var_14c, 0x18)
                edi_10 = edi_5
                esi_8 = esi_6
            
            float var_98_1 = fconvert.s(fconvert.t(1f)
                - (fconvert.t(*(esi_8 + 0x40)) / fconvert.t(400f) + fconvert.t(1f))
                * fconvert.t(*(edi_10 + 0xc)))
            long double x87_r7_6 = fconvert.t(var_98_1)
            long double temp37_1 = fconvert.t(0f)
            x87_r7_6 - temp37_1
            void* eax_31
            eax_31.w = (x87_r7_6 < temp37_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_6, temp37_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp37_1 ? 1 : 0) << 0xe
            
            if (test_bit(eax_31:1.b, 0))
                var_98_1 = 0f
            
            void* eax_36
            
            if (*data_530364 == 2)
                long double x87_r7_7 = data_4d3658
                long double temp38_1 = fconvert.t(var_98_1)
                x87_r7_7 - temp38_1
                eax_36.w = (x87_r7_7 < temp38_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_7, temp38_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp38_1 ? 1 : 0) << 0xe
            
            if (*data_530364 != 2 || test_bit(eax_36:1.b, 6) || test_bit(eax_36:1.b, 0))
                int32_t* var_15c_17 = &__saved_ebp
                eax_36.b = *esi_8
                int32_t eax_37
                void* edx_28
                eax_37, edx_28 = sub_4d5b1c(eax_36.b)
                sub_4d1324(eax_37, edx_28)
                sub_4d0ae4(&__saved_ebp)
            else
                int32_t var_98_2 = 0
            
            int32_t ecx_16
            ecx_16.b = *(edi_10 + 3)
            void* edx_24
            edx_24.b = *(edi_10 + 5)
            int32_t eax_39
            eax_39.b = *(edi_10 + 1)
            void* ebx_3 = sub_4cc140(eax_39, edx_24.b, ecx_16)
            char var_15c_19 = 0
            void* eax_40
            eax_40.b = *esi_8 == 4
            var_164 = eax_40
            int32_t ecx_17
            ecx_17.b = *(edi_10 + 1)
            int32_t edx_29
            edx_29.b = *(edi_10 + 3)
            sub_4d41ec(ecx_17, edx_29, 2, &var_14c, var_164.b, ebx_3, var_15c_19)
            __builtin_memcpy(&esi_8[0x38], &var_14c, 0x18)
            
            if (*(*data_530304 + 0xdfb) != 0)
                *(esi_8 + 0x38) = 0
                *(esi_8 + 0x3c) = 0
                *(esi_8 + 0x4c) = 0
            
            int32_t eax_44
            eax_44.b = *(edi_10 + 1)
            bool o_24 = unimplemented  {imul eax, eax, 0x2e9c}
            
            if (o_24)
                sub_403010()
                noreturn
            
            sub_4d5c18(&var_14c, &(&data_532f3c)[eax_44 * 0x5d38], &esi_8[0x38], 1f)
            __builtin_memcpy(&esi_8[0x38], &var_14c, 0x18)
            void* edi_17
            
            if (ebx_3 != 0)
                int32_t eax_52
                eax_52.b = *esi_8
                bool o_27 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_27)
                    sub_403010()
                    noreturn
                
                int32_t edx_35
                edx_35.b = *(edi_10 + 1)
                bool o_28 = unimplemented  {imul edx, edx, 0x2e9c}
                
                if (o_28)
                    sub_403010()
                    noreturn
                
                bool o_29 = unimplemented  {imul edx, ebx, 0x3}
                
                if (o_29)
                    sub_403010()
                    noreturn
                
                sub_4d5c18(&var_14c, 
                    edx_35 * 0x174e0 + &data_532f70 + eax_52 * 0x353c + ebx_3 * 0x18 - 0x14008, 
                    &esi_8[0x38], *(data_530598 + 0x10))
                __builtin_memcpy(&esi_8[0x38], &var_14c, 0x18)
                edi_17 = edi_10
                esi_1 = esi_8
            else
                int32_t eax_48
                eax_48.b = *esi_8
                bool o_25 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_25)
                    sub_403010()
                    noreturn
                
                int32_t edx_31
                edx_31.b = *(edi_10 + 1)
                bool o_26 = unimplemented  {imul edx, edx, 0x2e9c}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                sub_4d5c18(&var_14c, edx_31 * 0x174e0 + &data_532f70 + eax_48 * 0x353c - 0x14008, 
                    &esi_8[0x38], *(data_530598 + 0x10))
                __builtin_memcpy(&esi_8[0x38], &var_14c, 0x18)
                edi_17 = edi_10
                esi_1 = esi_8
            
            var_98 = fconvert.s((fconvert.t(400f) / fconvert.t(*(esi_1 + 0x40)) + fconvert.t(1f))
                * fconvert.t(*(edi_17 + 0xc)))
            long double x87_r7_12 = fconvert.t(var_98)
            long double temp53_1 = fconvert.t(1f)
            x87_r7_12 - temp53_1
            void* eax_50
            eax_50.w = (x87_r7_12 < temp53_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_12, temp53_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == temp53_1 ? 1 : 0) << 0xe
            
            if (not(test_bit(eax_50:1.b, 6)) && not(test_bit(eax_50:1.b, 0)))
                var_98 = 1f
            
            if (*data_530364 == 2)
                long double x87_r7_13 = data_4d3658
                long double temp54_1 = fconvert.t(var_98)
                x87_r7_13 - temp54_1
                void* eax_55
                eax_55.w = (x87_r7_13 < temp54_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_13, temp54_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp54_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax_55:1.b, 6)) && not(test_bit(eax_55:1.b, 0)))
                    var_98 = 0f
    void* result
    result.b = *data_530364
    char temp1 = result.b
    result.b -= 4
    
    if (temp1 u< 4)
        long double x87_r7_57 = fconvert.t(var_98)
        long double temp3_1 = fconvert.t(0f)
        x87_r7_57 - temp3_1
        result.w = (x87_r7_57 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_57, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_57 == temp3_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(result:1.b, 6)) && not(test_bit(result:1.b, 0)))
            int32_t* var_15c_51 = &__saved_ebp
            result.b = *esi_1
            int32_t eax_93
            void* edx_69
            eax_93, edx_69 = sub_4d5b1c(result.b)
            result = sub_4d1324(eax_93, edx_69)
    
    return result
}
