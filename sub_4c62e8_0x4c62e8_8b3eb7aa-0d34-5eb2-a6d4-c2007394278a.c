// ============================================================
// 函数名称: sub_4c62e8
// 虚拟地址: 0x4c62e8
// WARP GUID: 8b3eb7aa-0d34-5eb2-a6d4-c2007394278a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2b1c, sub_52acfc, sub_4c1b10, sub_47a1c0, sub_4cd720, sub_404138, sub_4837ec, sub_502b8c, sub_4c1120, sub_420ac8, sub_4c5eb0, sub_4c48dc, sub_4c60d8, sub_4c1fa8, sub_404280, sub_403e1c, sub_403010, sub_4c39c8, sub_402d38, sub_4c2ca0, sub_404078, sub_4c06c0, sub_4b73a8, sub_4c08f8, sub_404080, sub_4c5e90, sub_4c1e60, sub_4cdec4, sub_4cddb4, sub_4c8aa0, sub_514cc4, sub_4c5cf4, sub_420b80, sub_4c1e70, sub_4ceed4, sub_4cc6dc, sub_4c5e18, sub_4040c4, sub_4c30b4, sub_4c4150, sub_4f17d0, sub_408e1c, sub_4c094c, sub_4ee958, sub_4c329c, sub_4c2d7c, sub_4cbe24, sub_403df8, sub_50907c, sub_5255c0, sub_4cdcac, sub_4b77e0, sub_4746a0, sub_4c3270, sub_4c2be8, sub_4c2de8, sub_4ee818, sub_4c1254, sub_4c3194, sub_4c0924
// [被调用的父级函数]: sub_527454
// ============================================================

void* __convention("regparm")sub_4c62e8(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_14 = 0x3c
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_14
        i_14 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg2
    *(esp_2 - 0xc) = arg3
    void* esi = arg1
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    
    if (sub_4c0924() == 0)
        *data_530538 = 0
    
    char var_9 = 0
    int32_t temp3 = *(esi + 0xbbc8)
    *(esi + 0xbbc8) += 1
    
    if (add_overflow(temp3, 1))
        sub_403010()
        noreturn
    
    int32_t temp4 = *(esi + 0xbbcc)
    *(esi + 0xbbcc) += 1
    
    if (add_overflow(temp4, 1))
        sub_403010()
        noreturn
    
    if (sub_4c0924() != 0)
        sub_50907c(0)
    
    *(esp_2 - 0x1c) = "abc["
    int32_t var_184
    sub_408e1c(*(esi + 0xba74), &var_184)
    *(esp_2 - 0x20) = var_184
    *(esp_2 - 0x24) = &data_4c8920
    char* var_180
    struct _EXCEPTION_REGISTRATION_RECORD* ecx
    int32_t edx_1
    ecx, edx_1 = sub_404138(&var_180, 3)
    void* esp_12 = &esp_2[1]
    void* ebp_1 = sub_4c2b1c(var_180, edx_1, ecx)
    char eax_6 = *(esi + 0xba70)
    
    if (eax_6 == 0)
        *data_530538 = 0
        *(esi + 0xba70) = 1
        *(esi + 0xba74) = 0xffffffff
        
        if (*(*data_5301f4 + 0x4584) == 0)
            *(esi + 0xba70) = 2
            *(esi + 0xba74) = 0
        
        *(esi + 0xba7c) = 0
        *(esi + 0xbbcc) = 0
        *(esi + 0x1cb90) = 0
        *(esi + 0x1cb94) = 0
        *(esi + 0x1cb98) = 0
        int32_t eax_11 = *data_5300d0
        
        if (eax_11 s> 0)
            *(ebp_1 - 0x2c) = eax_11
            *(ebp_1 - 0x10) = 1
            *(ebp_1 - 0x30) = data_53020c
            int32_t i_1
            
            do
                *(ebp_1 - 0x10)
                bool o_2 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                char* ebx = *data_5301f4 + *(ebp_1 - 0x10) * 0x208 + 0x1fea0
                *(ebx + 4) = 0
                ebx[0x1e4] = 0
                
                if (*ebx == 2)
                    *ebx = 1
                
                ebx[2] = 0xb
                ebx[0xe] = 0
                ebx[0x1e5] = 0
                *(ebx + 0x1ec) = 0
                ebx[0xc] = 0
                ebx[0xd] = 0
                *(ebx + 0x1e0) = 0
                
                for (int32_t j = 1; j != 8; j += 1)
                    *(ebp_1 - 0x10)
                    bool o_3 = unimplemented  {imul edx, dword [ebp-0x10], 0x41}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + *(ebp_1 - 0x10) * 0x208 + j + 0x20093) = 0
                
                int32_t j_3 = 4
                char* edx_6 = *(ebp_1 - 0x30)
                int32_t j_1
                
                do
                    *edx_6 = 0
                    edx_6 = &edx_6[1]
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                *(ebp_1 - 0x10) += 1
                *(ebp_1 - 0x30) += 4
                i_1 = *(ebp_1 - 0x2c)
                *(ebp_1 - 0x2c) -= 1
            while (i_1 != 1)
    else if (eax_6 == 2)
        int32_t eax_14 = sub_4c08f8()
        int32_t edx_9 = *(*data_5301f4 + 0x456c)
        
        if (add_overflow(edx_9, neg.d(eax_14)))
            sub_403010()
            noreturn
        
        if (edx_9 - eax_14 s<= *(esi + 0xba74))
            if (*(*data_5301f4 + 0x111f8) != 0)
                sub_4837ec(*data_530304, *data_5307c8, true)
            
            *(esi + 0x1bb19) = 2
            *(esi + 0xba70) = 1
            *(esi + 0xba74) = 0xffffffff
            *(esi + 0xba7c) = 0
        else if (*(*data_5301f4 + 0x2a240) != 1)
            *(esp_12 - 4) = ebp_1
            sub_4c5e90()
            *(esp_12 - 4)
            int32_t temp9_1 = *(esi + 0xba74)
            *(esi + 0xba74) += 1
            
            if (add_overflow(temp9_1, 1))
                sub_403010()
                noreturn
            
            *(esi + 0xba8c) = 0xb
            *(esi + 0xba90) = *(esi + 0xbaa4)
            *(esi + 0xbaa4)
            bool o_9 = unimplemented  {imul eax, dword [esi+0xbaa4], 0x41}
            
            if (o_9)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + *(esi + 0xbaa4) * 0x208 + 0x1fea0) != 0)
                *(esp_12 - 4) = sub_4c1e60()
                *(esp_12 - 8) = 0
                *(esp_12 - 0xc) = 0
                *(esp_12 - 0x10) = 1
                esp_12 -= 0x10
                sub_4ceed4(*data_53067c, 9, *(esi + 0xbaa4))
        else
            int32_t eax_17 = sub_4c08f8()
            int32_t edx_12 = *data_5300d0
            int32_t edx_13 = edx_12 - eax_17
            
            if (add_overflow(edx_12, neg.d(eax_17)))
                sub_403010()
                noreturn
            
            if (edx_13 s> 0)
                *(ebp_1 - 0x2c) = edx_13
                int32_t i_2
                
                do
                    *(esp_12 - 4) = ebp_1
                    sub_4c5e90()
                    *(esp_12 - 4)
                    int32_t temp20_1 = *(esi + 0xba74)
                    *(esi + 0xba74) += 1
                    
                    if (add_overflow(temp20_1, 1))
                        sub_403010()
                        noreturn
                    
                    *(esi + 0xba8c) = 0xb
                    *(esi + 0xba90) = *(esi + 0xbaa4)
                    int32_t ebx_1 = *(esi + 0xbaa4)
                    bool o_7 = unimplemented  {imul eax, ebx, 0x41}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    if (*(*data_5301f4 + ebx_1 * 0x208 + 0x1fea0) != 0)
                        *(esp_12 - 4) = sub_4c1e60()
                        *(esp_12 - 8) = 0
                        *(esp_12 - 0xc) = 0
                        *(esp_12 - 0x10) = 1
                        esp_12 -= 0x10
                        sub_4ceed4(*data_53067c, 9, ebx_1)
                    
                    i_2 = *(ebp_1 - 0x2c)
                    *(ebp_1 - 0x2c) -= 1
                while (i_2 != 1)
    else if (*(esi + 0xba70) == 1 && *(*data_5301f4 + 0xfff0) == 0xffffffff)
        *(*data_5301f4 + 0x21104) = *(*data_5301f4 + 0x21108)
        int32_t ecx_8
        ecx_8, ebp_1 = sub_4c1e70()
        *(*data_5301f4 + 0x10020) = *(*data_5301f4 + 0x2009c)
        ecx_8.b = 1
        int32_t eax_40
        int32_t ecx_9
        eax_40, ecx_9 = sub_4c5cf4(1)
        *(*data_5301f4 + 0x2009c) = eax_40
        *(esi + 0xbaa4) = eax_40
        ecx_9.b = 1
        int32_t eax_43
        int32_t ecx_10
        eax_43, ecx_10 = sub_4c5e18(1)
        *(*data_5301f4 + 0x200a4) = eax_43
        ecx_10.b = 1
        int32_t eax_44
        int32_t ecx_11
        eax_44, ecx_11 = sub_4c5e18(1)
        *(ebp_1 - 0x14) = eax_44
        ecx_11.b = 1
        int32_t eax_45
        int32_t ecx_12
        eax_45, ecx_12 = sub_4c5cf4(1)
        *(*data_5301f4 + 0x200a0) = eax_45
        *(esi + 0xbaa4) = eax_45
        ecx_12.b = 1
        *(*data_5301f4 + 0x20098) = sub_4c5cf4(1)
        int32_t i_16 = 0
        int32_t i_15 = 0
        *(ebp_1 - 0x20) = 0
        int32_t i_3 = 1
        *(ebp_1 - 0x30) = data_5304fc + 0x17438
        
        do
            *(ebp_1 - 0x10) = 0
            
            if (*(ebp_1 - 0x10) s>= 0 && (i_3 == 9 || i_3 s<= *data_5300d0))
                int32_t edx_38 = *(ebp_1 - 0x10)
                int32_t ecx_14 = **(ebp_1 - 0x30)
                
                if (add_overflow(ecx_14, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (ecx_14 - 1 s>= edx_38)
                    *(ebp_1 - 0x2c) = ecx_14 - 1 - edx_38 + 1
                    bool o_11 = unimplemented  {imul edx, edx, 0xa}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    int16_t* edx_40 = *(ebp_1 - 0x30) + edx_38 * 0x50 - 0x34c8
                    int32_t j_2
                    
                    do
                        int32_t ecx_18
                        ecx_18.w = *edx_40
                        
                        if (ecx_18.w == 0)
                            i_16 = i_3
                        
                        if (ecx_18.w == 1)
                            i_15 = i_3
                        
                        if (ecx_18.w == 2)
                            *(ebp_1 - 0x20) = i_3
                        
                        edx_40 = &edx_40[0x28]
                        j_2 = *(ebp_1 - 0x2c)
                        *(ebp_1 - 0x2c) -= 1
                    while (j_2 != 1)
            
            i_3 += 1
            *(ebp_1 - 0x30) += 0x174e0
        while (i_3 != 0xa)
        
        if (i_15 != 9)
            if (i_15 != *(*data_5301f4 + 0x200a0))
                *(esp_12 - 4) = 0xffffff91
                *(esp_12 - 8) = 1
                *(esp_12 - 0xc) = 4
                *(esp_12 - 0x10) = 1
                esp_12 -= 0x10
                sub_4ceed4(*data_53067c, i_15, *(*data_5301f4 + 0x200a0))
            
            if (*(*data_5301f4 + 0x2009c) != *(ebp_1 - 0x20))
                *(esp_12 - 4) = 0xffffff91
                *(esp_12 - 8) = 1
                *(esp_12 - 0xc) = 4
                *(esp_12 - 0x10) = 1
                esp_12 -= 0x10
                sub_4ceed4(*data_53067c, *(ebp_1 - 0x20), *(*data_5301f4 + 0x2009c))
            
            if (i_16 != *(ebp_1 - 0x14))
                *(esp_12 - 4) = 0xffffff91
                *(esp_12 - 8) = 1
                *(esp_12 - 0xc) = 4
                *(esp_12 - 0x10) = 1
                esp_12 -= 0x10
                sub_4ceed4(*data_53067c, i_16, *(ebp_1 - 0x14))
        else
            *(esp_12 - 4) = 0xffffff91
            *(esp_12 - 8) = 1
            *(esp_12 - 0xc) = 4
            *(esp_12 - 0x10) = 1
            sub_4ceed4(*data_53067c, i_16, *(ebp_1 - 0x14))
            *(esp_12 - 0x14) = 0xffffff91
            *(esp_12 - 0x18) = 1
            *(esp_12 - 0x1c) = 4
            *(esp_12 - 0x20) = 1
            sub_4ceed4(*data_53067c, *(ebp_1 - 0x20), *(*data_5301f4 + 0x2009c))
            *(esp_12 - 0x24) = 0xffffff91
            *(esp_12 - 0x28) = 1
            *(esp_12 - 0x2c) = 4
            *(esp_12 - 0x30) = 1
            esp_12 -= 0x30
            sub_4ceed4(*data_53067c, i_15, *(*data_5301f4 + 0x200a0))
        
        *(*data_5301f4 + 0xfff0) = 0xfffffffe
    else if (*(esi + 0xba70) == 1 && *(*data_5301f4 + 0xfff0) == 0xfffffffe)
        *(*data_5301f4 + 0x21100) = 0
        void* eax_81 = *data_5301f4
        *(eax_81 + 0x200a0)
        bool o_12 = unimplemented  {imul eax, dword [eax+0x200a0], 0x41}
        
        if (o_12)
            sub_403010()
            noreturn
        
        void* ebx_4 = *data_5301f4 + *(eax_81 + 0x200a0) * 0x208 + 0x1fea0
        int32_t eax_83 = *(esi + 0x1cb8c)
        *(ebx_4 + 4) = eax_83
        *(esp_12 - 4) = eax_83
        *(esp_12 - 8) = 0
        *(esp_12 - 0xc) = 1
        *(esp_12 - 0x10) = 1
        sub_4ceed4(*data_53067c, *(*data_5301f4 + 0x200a0), 0xa)
        int32_t eax_88 = *(ebx_4 + 4)
        void* edx_51 = *data_5301f4
        int32_t temp11_1 = *(edx_51 + 0x21100)
        *(edx_51 + 0x21100) += eax_88
        
        if (add_overflow(temp11_1, eax_88))
            sub_403010()
            noreturn
        
        void* eax_90 = *data_5301f4
        *(eax_90 + 0x2009c)
        bool o_14 = unimplemented  {imul eax, dword [eax+0x2009c], 0x41}
        
        if (o_14)
            sub_403010()
            noreturn
        
        void* ebx_5 = *data_5301f4 + *(eax_90 + 0x2009c) * 0x208 + 0x1fea0
        int32_t eax_92 = *(esi + 0x1cb8c)
        int32_t eax_93 = eax_92 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_92 s>> 1 s< 0)
            eax_93 = adc.d(eax_93, 0, c_1)
        
        *(ebx_5 + 4) = eax_93
        *(esp_12 - 0x14) = eax_93
        *(esp_12 - 0x18) = 0
        *(esp_12 - 0x1c) = 1
        *(esp_12 - 0x20) = 1
        esp_12 -= 0x20
        sub_4ceed4(*data_53067c, *(*data_5301f4 + 0x2009c), 0xa)
        int32_t eax_98 = *(ebx_5 + 4)
        void* edx_56 = *data_5301f4
        int32_t temp22_1 = *(edx_56 + 0x21100)
        *(edx_56 + 0x21100) += eax_98
        
        if (add_overflow(temp22_1, eax_98))
            sub_403010()
            noreturn
        
        *(*data_5301f4 + 0xfff0) = 0
    else if (*(esi + 0xba70) == 1)
        int32_t edi = 2
        int32_t eax_101 = sub_4c08f8()
        int32_t edx_59 = *(*data_5301f4 + 0x456c)
        
        if (add_overflow(edx_59, neg.d(eax_101)))
            sub_403010()
            noreturn
        
        if (edx_59 - eax_101 s<= *(esi + 0xba74))
            *(esi + 0xba70) = 4
            *(esi + 0xbbcc) = 0
            *(esi + 0xba74) = 0
            *(esi + 0xba7c) = 0
            *(esi + 0xba88) = 8
            *(esi + 0x215c0) = *(*data_5301f4 + 0x10020)
            __builtin_memcpy(esi + 0xc30c, *data_5301f4 + 0x1026c, 0x61c)
            long double st0_1 = sub_402d38()
            long double x87_r6_1 = data_4c8928
            x87_r6_1 - st0_1
            int32_t eax_135
            eax_135.w = (x87_r6_1 < st0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe
        else if (*(*data_5301f4 + 0x2a240) != 1)
            *(esp_12 - 4) = ebp_1
            sub_4c5e90()
            *(esp_12 - 4)
            int32_t temp17_1 = *(esi + 0xba74)
            *(esi + 0xba74) += 1
            
            if (add_overflow(temp17_1, 1))
                sub_403010()
                noreturn
            
            *(esi + 0xba8c) = 0xb
            *(esi + 0xba90) = *(esi + 0xbaa4)
            
            if (sub_4c2d7c(*(esi + 0xbaa4)) != 0)
                *(esp_12 - 4) = 0
                *(esp_12 - 8) = 0xb
                *(esp_12 - 0xc) = 0
                sub_502b8c(*(esi + 0xbaa4), 2, 0, esi, edi)
                *(esi + 0xbce2) = 0xb
                int32_t eax_128 = *(data_5301b0 + 0x60c40)
                
                if (add_overflow(eax_128, 0xfffffffe))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_128 - 2, 1))
                    sub_403010()
                    noreturn
                
                *(esi + 0xbce4) = (eax_128 - 2).w + 1
                *(esi + 0xbcd4) = 3
        else
            *(ebp_1 - 0x14) = 0
            int32_t eax_105 = *data_5300d0
            
            if (eax_105 s> 0)
                *(ebp_1 - 0x2c) = eax_105
                int32_t ebx_6 = 1
                int32_t i_4
                
                do
                    int32_t eax_108 = *(*data_5301f4 + 0x10020)
                    
                    if (add_overflow(eax_108, ebx_6))
                        sub_403010()
                        noreturn
                    
                    *(ebp_1 - 0x10) = eax_108 + ebx_6
                    
                    if (*data_5300d0 s< *(ebp_1 - 0x10))
                        int32_t eax_113 = *data_5300d0
                        int32_t temp33_1 = *(ebp_1 - 0x10)
                        *(ebp_1 - 0x10) -= eax_113
                        
                        if (add_overflow(temp33_1, neg.d(eax_113)))
                            sub_403010()
                            noreturn
                    
                    if (sub_4c2d7c(*(ebp_1 - 0x10)) != 0)
                        sub_4c0924()
                        int32_t temp35_1 = *(ebp_1 - 0x14)
                        *(ebp_1 - 0x14) += 1
                        
                        if (add_overflow(temp35_1, 1))
                            sub_403010()
                            noreturn
                        
                        int32_t eax_116 = *(ebp_1 - 0x14)
                        
                        if (add_overflow(eax_116, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        *(ebp_1 - 0x184) = eax_116 - 1
                        *(esp_12 - 4) = fconvert.s(float.t(*(ebp_1 - 0x184)) * fconvert.t(0.25f))
                        *(esp_12 - 8) = 0xb
                        *(esp_12 - 0xc) = 0
                        int32_t ecx_27 = *(ebp_1 - 0x14)
                        
                        if (add_overflow(ecx_27, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        bool o_22 = unimplemented  {imul ecx, edi}
                        
                        if (o_22)
                            sub_403010()
                            noreturn
                        
                        sub_502b8c(*(ebp_1 - 0x10), 2, (ecx_27 - 1) * 2, esi, edi)
                    
                    ebx_6 += 1
                    i_4 = *(ebp_1 - 0x2c)
                    *(ebp_1 - 0x2c) -= 1
                while (i_4 != 1)
            
            *(esi + 0xbce2) = 0xb
            int32_t eax_120 = sub_4c2de8(0) * 2
            bool o_23 = unimplemented  {imul edi}
            
            if (o_23)
                sub_403010()
                noreturn
            
            int32_t edx_63 = *(data_5301b0 + 0x60c40)
            int32_t edx_64 = edx_63 - eax_120
            
            if (add_overflow(edx_63, neg.d(eax_120)))
                sub_403010()
                noreturn
            
            if (add_overflow(edx_64, 1))
                sub_403010()
                noreturn
            
            *(esi + 0xbce4) = edx_64.w + 1
            *(esi + 0xbcd4) = 3
            *(esi + 0xba74) = *data_5300d0
    else if (*(esi + 0xba70) == 4)
        if (sub_4c094c() != 0)
            *(esp_12 - 4) = "----------------from>"
            sub_408e1c(*(*data_5301f4 + 0xfff0), ebp_1 - 0x18c)
            *(esp_12 - 8) = *(ebp_1 - 0x18c)
            *(esp_12 - 0xc) = "> akspi:"
            sub_408e1c(*(*data_5301f4 + 0x10020), ebp_1 - 0x190)
            *(esp_12 - 0x10) = *(ebp_1 - 0x190)
            *(esp_12 - 0x14) = ", d,sb,bb:"
            sub_408e1c(*(*data_5301f4 + 0x200a4), ebp_1 - 0x194)
            *(esp_12 - 0x18) = *(ebp_1 - 0x194)
            *(esp_12 - 0x1c) = &data_4c8984
            sub_408e1c(*(*data_5301f4 + 0x2009c), ebp_1 - 0x198)
            *(esp_12 - 0x20) = *(ebp_1 - 0x198)
            *(esp_12 - 0x24) = &data_4c8984
            sub_408e1c(*(*data_5301f4 + 0x200a0), ebp_1 - 0x19c)
            *(esp_12 - 0x28) = *(ebp_1 - 0x19c)
            sub_404138(ebp_1 - 0x188, 0xa)
            sub_514cc4(*data_530454, *(ebp_1 - 0x188))
        
        sub_4c1120()
        void* eax_156 = *data_5301f4
        *(eax_156 + 0x10020)
        bool o_29 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
        
        if (o_29)
            sub_403010()
            noreturn
        
        if (*(*data_5301f4 + *(eax_156 + 0x10020) * 0x208 + 0x1fea4) s< 0)
            *(esp_12 - 4) = 0
            *(esp_12 - 8) = &data_4c8924
            *(esp_12 - 0xc) = &data_4c8924
            sub_408e1c(*(*data_5301f4 + 0x10020), ebp_1 - 0x1a0)
            sub_4746a0(*(ebp_1 - 0x1a0), 0x10, *data_530304)
        
        *data_53067c
        *(ebp_1 - 0x22) = sub_4cddb4()
        *(ebp_1 - 5) = *(ebp_1 - 0x22)
        
        if (sub_404078(*data_5304e8) s> 0x64)
            *(esp_12 - 4) = data_5304e8
            int32_t eax_172 = sub_404078(*data_5304e8)
            
            if (add_overflow(eax_172, 0xffffff9d))
                sub_403010()
                noreturn
            
            sub_404280(0x64, eax_172 - 0x63, *data_5304e8)
        
        int32_t ecx_34
        
        if (*(ebp_1 - 0x22) == 0)
            ecx_34 = sub_404080(data_5304e8, ",no")
            data_5304e8
        else
            ecx_34 = sub_404080(data_5304e8, ",low")
            data_5304e8
        
        if (*(ebp_1 - 0x22) != 0)
            *data_53067c
            ebp_1 = sub_4cdec4()
        else if (*(esi + 0xba88) == 6 && *(esi + 0xba74) == 0x63)
            if (sub_4c094c() != 0)
                *(esp_12 - 4) = "----------------to>"
                sub_408e1c(*(*data_5301f4 + 0xfff0), ebp_1 - 0x1a8)
                *(esp_12 - 8) = *(ebp_1 - 0x1a8)
                *(esp_12 - 0xc) = "> akspi:"
                sub_408e1c(*(*data_5301f4 + 0x10020), ebp_1 - 0x1ac)
                *(esp_12 - 0x10) = *(ebp_1 - 0x1ac)
                *(esp_12 - 0x14) = ", d,sb,bb:"
                sub_408e1c(*(*data_5301f4 + 0x200a4), ebp_1 - 0x1b0)
                *(esp_12 - 0x18) = *(ebp_1 - 0x1b0)
                *(esp_12 - 0x1c) = &data_4c8984
                sub_408e1c(*(*data_5301f4 + 0x2009c), ebp_1 - 0x1b4)
                *(esp_12 - 0x20) = *(ebp_1 - 0x1b4)
                *(esp_12 - 0x24) = &data_4c8984
                sub_408e1c(*(*data_5301f4 + 0x200a0), ebp_1 - 0x1b8)
                *(esp_12 - 0x28) = *(ebp_1 - 0x1b8)
                sub_404138(ebp_1 - 0x1a4, 0xa)
                sub_514cc4(*data_530454, *(ebp_1 - 0x1a4))
            
            if (*(*data_5301f4 + 0x111f9) == 0)
                ebp_1 = sub_4c5eb0()
        else if (*(esi + 0xba88) == 4)
            *(esi + 0xba88) = 3
            *(*data_5301f4 + 0x10884) = 0
            int32_t edx_85
            edx_85.b = 1
            *(esi + 0xbaa4) = sub_4c5cf4(1)
            
            if (*(*data_5301f4 + 0x2007d) != 0)
                *(*data_5301f4 + 0x210ec) = *(*data_5301f4 + 0x210e8)
            else if (*(*data_5301f4 + 0x2007c) == 0)
                *(*data_5301f4 + 0x210ec) = 0xf4240
            else
                *(*data_5301f4 + 0x210ec) = *(*data_5301f4 + 0x21100)
            
            *(esp_12 - 4) = 0
            sub_47a1c0(*(data_530678 + (*(esi + 0x215c0) << 2)), *data_530a74, *data_530304)
            *(esp_12 - 4) = 1
            sub_47a1c0(*(data_530678 + (*(esi + 0xbaa4) << 2)), *data_530a74, *data_530304)
            *(*data_5301f4 + 0x210fc) = *(*data_5301f4 + 0x210f8)
            void* eax_226 = *data_5301f4
            *(eax_226 + 0x10020)
            bool o_31 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
            
            if (o_31)
                sub_403010()
                noreturn
            
            void* ebx_7 = *data_5301f4 + *(eax_226 + 0x10020) * 0x208 + 0x1fea0
            int32_t eax_231 = sub_4cc6dc(*(*data_5301f4 + 0x10020))
            
            if (add_overflow(eax_231, *(ebx_7 + 4)))
                sub_403010()
                noreturn
            
            *(ebx_7 + 0x1d8) = eax_231 + *(ebx_7 + 4)
            int32_t eax_235
            
            if (*(*data_5301f4 + 0x21104) s<= *(ebx_7 + 0x1d8)
                    || *(*data_5301f4 + 0x21104) == *(ebx_7 + 4))
                eax_235.b = 1
            else
                eax_235 = 0
            
            *(ebx_7 + 0x1dd) = eax_235.b
            int32_t eax_240 = *(*data_5301f4 + 0x21104)
            void* edx_101 = *data_5301f4
            
            if (add_overflow(eax_240, *(edx_101 + 0x210f8)))
                sub_403010()
                noreturn
            
            int32_t eax_241
            eax_241.b = eax_240 + *(edx_101 + 0x210f8) s<= *(ebx_7 + 0x1d8)
            *(ebx_7 + 0x1dc) = eax_241.b
            int32_t eax_245
            
            if (*(ebx_7 + 0x1e4) != 0)
                eax_245 = 0
            else
                eax_245 = sub_4cc6dc(*(*data_5301f4 + 0x10020))
                int32_t edx_104 = *(*data_5301f4 + 0x210ec)
                void* ecx_39 = *data_5301f4
                int32_t edx_105 = edx_104 + *(ecx_39 + 0x21104)
                
                if (add_overflow(edx_104, *(ecx_39 + 0x21104)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(edx_105, neg.d(*(ebx_7 + 4))))
                    sub_403010()
                    noreturn
                
                if (eax_245 s<= edx_105 - *(ebx_7 + 4))
                    eax_245.b = 1
                else
                    eax_245 = 0
            
            *(ebx_7 + 0x1de) = eax_245.b
            
            if (*(*data_5301f4 + 0x2007d) != 0)
                if (*(*data_5301f4 + 0x21110) s>= 4)
                label_4c72bd:
                    *(ebx_7 + 0x1dc) = 0
                    
                    if (sub_4cc6dc(*(*data_5301f4 + 0x10020)) s> *(*data_5301f4 + 0x210ec))
                        *(ebx_7 + 0x1de) = 0
                else if (*(*data_5301f4 + 0x21110) s>= 3 && *(*data_5301f4 + 0x20094) == 1)
                    goto label_4c72bd
            
            if (sub_4c2ca0() s<= 1)
                *(esi + 0xba88) = 3
                *(esi + 0xbbe4) = 0x63
            else
                sub_5255c0(*data_5301f4)
            
            *(esi + 0x215c0) = *(*data_5301f4 + 0x10020)
        else if (*(esi + 0xba88) == 8)
            if (*(esi + 0xba74) s< 9)
                if (*(esi + 0xba74) != 0)
                    *(esi + 0xba7c) = 0
                
                ecx_34 = sub_4040c4(data_5300b4, *data_5309b0, "\n\r")
                int32_t temp43_1 = *(esi + 0xba74)
                *(esi + 0xba74) += 1
                
                if (add_overflow(temp43_1, 1))
                    sub_403010()
                    noreturn
                
                int32_t eax_266 = *(esi + 0xba74)
                
                if (eax_266 == 3 || eax_266 == 5 || eax_266 == 7)
                    char eax_270
                    eax_270, ecx_34 = sub_4c30b4(0)
                    
                    if (eax_270 != 0)
                        int32_t temp58_1 = *(esi + 0xba74)
                        *(esi + 0xba74) += 1
                        
                        if (add_overflow(temp58_1, 1))
                            sub_403010()
                            noreturn
                
                if (sub_4c2ca0() == 1)
                    int32_t eax_274 = *data_5300d0
                    
                    if (eax_274 s> 0)
                        *(ebp_1 - 0x2c) = eax_274
                        int32_t ebx_8 = 1
                        int32_t i_5
                        
                        do
                            bool o_38 = unimplemented  {imul eax, ebx, 0x41}
                            
                            if (o_38)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_275
                            eax_275.b = *(*data_5301f4 + ebx_8 * 0x208 + 0x1fea0)
                            bool o_39 = unimplemented  {imul edx, ebx, 0x41}
                            
                            if (o_39)
                                sub_403010()
                                noreturn
                            
                            *(*data_5301f4 + ebx_8 * 0x208 + 0x1fea1) = eax_275.b
                            ebx_8 += 1
                            i_5 = *(ebp_1 - 0x2c)
                            *(ebp_1 - 0x2c) -= 1
                        while (i_5 != 1)
                    
                    *(*data_5301f4 + 0xfff8) = 0
                    *(esi + 0xba88) = 8
                    ecx_34, ebp_1 = sub_4c4150()
                    *(esi + 0xba74) = 9
            
            int32_t eax_453 = *(esi + 0xba74)
            
            if (eax_453 == 1 && *(esi + 0xba7c) == 0)
                sub_52acfc(*data_5309d4, 1)
                *(*data_5301f4 + 0x20094) = 1
                *(*data_5301f4 + 0x20095) = 1
                *(*data_5301f4 + 0x20096) = 1
                *(*data_5301f4 + 0x21110) = 0
                *(*data_5301f4 + 0x210e8) = *(*data_5301f4 + 0x210f0)
                *(*data_5301f4 + 0x210ec) = 0xf4240
                *(*data_5301f4 + 0x210e8) = *(*data_5301f4 + 0x210f0)
                *(*data_5301f4 + 0x210f8) = *(*data_5301f4 + 0x21108)
                *(esi + 0xba7c) = 1
                *(esi + 0xba74) = 0
            else if (*(esi + 0xba74) == 1)
                sub_4c5e18(1)
                int32_t eax_300 = *data_5300d0
                
                if (eax_300 s> 0)
                    *(ebp_1 - 0x2c) = eax_300
                    *(ebp_1 - 0x10) = 1
                    *(ebp_1 - 0x30) = data_530208 + 4
                    int32_t i_6
                    
                    do
                        *(ebp_1 - 0x10)
                        bool o_40 = unimplemented  {imul eax, dword [ebp-0x10], 0x41}
                        
                        if (o_40)
                            sub_403010()
                            noreturn
                        
                        void* ebx_9 = *data_5301f4 + *(ebp_1 - 0x10) * 0x208 + 0x1fea0
                        *(esp_12 - 4) = &data_4c89d4
                        sub_408e1c(*(ebp_1 - 0x10), ebp_1 - 0x1c0)
                        *(esp_12 - 8) = *(ebp_1 - 0x1c0)
                        *(esp_12 - 0xc) = ">setsum=0"
                        struct _EXCEPTION_REGISTRATION_RECORD* ecx_43
                        int32_t edx_125
                        ecx_43, edx_125 = sub_404138(ebp_1 - 0x1bc, 3)
                        ebp_1 = sub_4c2b1c(*(ebp_1 - 0x1bc), edx_125, ecx_43)
                        
                        if (*(*data_5301f4 + 0x2009c) != *(ebp_1 - 0x10)
                                && *(*data_5301f4 + 0x200a0) != *(ebp_1 - 0x10))
                            *(ebx_9 + 4) = 0
                        
                        if (sub_4cc6dc(*(ebp_1 - 0x10)) != 0
                                || *(*data_5301f4 + 0x200a0) != *(ebp_1 - 0x10))
                            *(ebx_9 + 0x1e4) = 0
                        else
                            *(ebx_9 + 0x1e4) = 1
                        
                        *(ebx_9 + 2) = 0xb
                        *(ebx_9 + 0xe) = 0
                        *(ebx_9 + 0x1e5) = 0
                        *(ebx_9 + 0x1ec) = 0
                        *(ebx_9 + 0xc) = 0
                        *(ebx_9 + 0xd) = 0
                        *(ebx_9 + 0x1e0) = 0
                        *(esp_12 + 0x18) = 1
                        sub_47a1c0(**(ebp_1 - 0x30), *data_530a74, *data_530304)
                        esp_12 += 0x1c
                        *(ebp_1 - 0x10) += 1
                        *(ebp_1 - 0x30) += 4
                        i_6 = *(ebp_1 - 0x2c)
                        *(ebp_1 - 0x2c) -= 1
                    while (i_6 != 1)
                
                void* eax_322 = *data_5301f4
                *(eax_322 + 0x2009c)
                bool o_41 = unimplemented  {imul eax, dword [eax+0x2009c], 0x41}
                
                if (o_41)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_322 + 0x2009c) * 0x208 + 0x1feac) = 1
                void* eax_325 = *data_5301f4
                *(eax_325 + 0x200a0)
                bool o_42 = unimplemented  {imul eax, dword [eax+0x200a0], 0x41}
                
                if (o_42)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_325 + 0x200a0) * 0x208 + 0x1fead) = 1
                void* eax_328 = *data_5301f4
                *(eax_328 + 0x2009c)
                bool o_43 = unimplemented  {imul eax, dword [eax+0x2009c], 0x41}
                
                if (o_43)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_328 + 0x2009c) * 0x208 + 0x1fea2) = 0
                void* eax_331 = *data_5301f4
                *(eax_331 + 0x200a0)
                bool o_44 = unimplemented  {imul eax, dword [eax+0x200a0], 0x41}
                
                if (o_44)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_331 + 0x200a0) * 0x208 + 0x1fea2) = 0
                *data_53067c
                
                if (sub_4cddb4() != 0)
                    *(esp_12 - 4) = 0
                    *(esp_12 - 8) = &data_4c8924
                    *(esp_12 - 0xc) = &data_4c8924
                    sub_4746a0(0, 0x11, *data_530304)
                
                *(esi + 0xba88) = 4
                *(esi + 0xba7c) = 1
            else if (eax_453 == 2)
                *(*data_5301f4 + 0x20094) = 2
                *(*data_5301f4 + 0x20095) = 0
                *(esp_12 - 4) = 1
                *(esp_12 - 8) = 3
                *(esp_12 - 0xc) = 0
                sub_4ee958(0xb, *(data_5301b0 + 0x60c40), 0xc, esi, arg3)
            else if (eax_453 == 3)
                sub_52acfc(*data_5309d4, 2)
                *(*data_5301f4 + 0x20094) = 3
                *(*data_5301f4 + 0x20095) = 1
                *(*data_5301f4 + 0x20096) = 0
                *(*data_5301f4 + 0x21110) = 0
                *(*data_5301f4 + 0x10020) = sub_4c1fa8()
                *(*data_5301f4 + 0x210e8) = *(*data_5301f4 + 0x210f0)
                *(*data_5301f4 + 0x210f8) = *(*data_5301f4 + 0x21108)
                int32_t eax_361 = *data_5300d0
                
                if (eax_361 s> 0)
                    *(ebp_1 - 0x2c) = eax_361
                    int32_t ebx_10 = 1
                    int32_t i_7
                    
                    do
                        bool o_45 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_45)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_362
                        eax_362.b = *(*data_5301f4 + ebx_10 * 0x208 + 0x1fea0)
                        
                        if (eax_362.b != 0)
                            char temp74_1 = eax_362.b
                            eax_362.b -= 3
                            
                            if (temp74_1 != 3)
                                bool o_46 = unimplemented  {imul eax, ebx, 0x41}
                                
                                if (o_46)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + ebx_10 * 0x208 + 0x1fea2) != 2)
                                    bool o_47 = unimplemented  {imul eax, ebx, 0x41}
                                    
                                    if (o_47)
                                        sub_403010()
                                        noreturn
                                    
                                    *(*data_5301f4 + ebx_10 * 0x208 + 0x1fea2) = 0xb
                        
                        ebx_10 += 1
                        i_7 = *(ebp_1 - 0x2c)
                        *(ebp_1 - 0x2c) -= 1
                    while (i_7 != 1)
                
                *(esi + 0xba88) = 4
                *(esi + 0xba7c) = 1
            else if (eax_453 == 4)
                *(*data_5301f4 + 0x20094) = 4
                *(*data_5301f4 + 0x20095) = 0
                *(esp_12 - 4) = 4
                *(esp_12 - 8) = 1
                *(esp_12 - 0xc) = 0
                sub_4ee958(0xb, *(data_5301b0 + 0x60c40), 0xc, esi, arg3)
            else if (eax_453 == 5)
                sub_52acfc(*data_5309d4, 3)
                *(*data_5301f4 + 0x20094) = 5
                *(*data_5301f4 + 0x20095) = 1
                *(*data_5301f4 + 0x20096) = 0
                *(*data_5301f4 + 0x21110) = 0
                *(*data_5301f4 + 0x10020) = sub_4c1fa8()
                *(*data_5301f4 + 0x210e8) = *(*data_5301f4 + 0x210f4)
                *(*data_5301f4 + 0x210f8) = *(*data_5301f4 + 0x210f4)
                int32_t eax_388 = *data_5300d0
                
                if (eax_388 s> 0)
                    *(ebp_1 - 0x2c) = eax_388
                    int32_t ebx_11 = 1
                    int32_t i_8
                    
                    do
                        bool o_48 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_48)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_389
                        eax_389.b = *(*data_5301f4 + ebx_11 * 0x208 + 0x1fea0)
                        
                        if (eax_389.b != 0)
                            char temp85_1 = eax_389.b
                            eax_389.b -= 3
                            
                            if (temp85_1 != 3)
                                bool o_49 = unimplemented  {imul eax, ebx, 0x41}
                                
                                if (o_49)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + ebx_11 * 0x208 + 0x1fea2) != 2)
                                    bool o_50 = unimplemented  {imul eax, ebx, 0x41}
                                    
                                    if (o_50)
                                        sub_403010()
                                        noreturn
                                    
                                    *(*data_5301f4 + ebx_11 * 0x208 + 0x1fea2) = 0xb
                        
                        ebx_11 += 1
                        i_8 = *(ebp_1 - 0x2c)
                        *(ebp_1 - 0x2c) -= 1
                    while (i_8 != 1)
                
                *(esi + 0xba88) = 4
                *(esi + 0xba7c) = 1
            else if (eax_453 == 6)
                *(*data_5301f4 + 0x20094) = 6
                *(*data_5301f4 + 0x20095) = 0
                *(esp_12 - 4) = 5
                *(esp_12 - 8) = 1
                *(esp_12 - 0xc) = 0
                sub_4ee958(0xb, *(data_5301b0 + 0x60c40), 0xc, esi, arg3)
            else if (eax_453 == 7)
                sub_52acfc(*data_5309d4, 4)
                *(*data_5301f4 + 0x20094) = 7
                *(*data_5301f4 + 0x20095) = 1
                *(*data_5301f4 + 0x20096) = 0
                *(*data_5301f4 + 0x21110) = 0
                *(*data_5301f4 + 0x10020) = sub_4c1fa8()
                *(*data_5301f4 + 0x210e8) = *(*data_5301f4 + 0x210f4)
                *(*data_5301f4 + 0x210f8) = *(*data_5301f4 + 0x210f4)
                int32_t eax_415 = *data_5300d0
                
                if (eax_415 s> 0)
                    *(ebp_1 - 0x2c) = eax_415
                    int32_t ebx_12 = 1
                    int32_t i_9
                    
                    do
                        bool o_51 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_51)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_416
                        eax_416.b = *(*data_5301f4 + ebx_12 * 0x208 + 0x1fea0)
                        
                        if (eax_416.b != 0)
                            char temp98_1 = eax_416.b
                            eax_416.b -= 3
                            
                            if (temp98_1 != 3)
                                bool o_52 = unimplemented  {imul eax, ebx, 0x41}
                                
                                if (o_52)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + ebx_12 * 0x208 + 0x1fea2) != 2)
                                    bool o_53 = unimplemented  {imul eax, ebx, 0x41}
                                    
                                    if (o_53)
                                        sub_403010()
                                        noreturn
                                    
                                    *(*data_5301f4 + ebx_12 * 0x208 + 0x1fea2) = 0xb
                        
                        ebx_12 += 1
                        i_9 = *(ebp_1 - 0x2c)
                        *(ebp_1 - 0x2c) -= 1
                    while (i_9 != 1)
                
                *(esi + 0xba88) = 4
                *(esi + 0xba7c) = 1
            else if (eax_453 == 8)
                if (*(*data_5301f4 + 0x111f9) != 0)
                    sub_4c48dc()
                
                ebp_1 = sub_4c4150()
                int32_t eax_422 = *data_5300d0
                
                if (eax_422 s>= 2)
                    *(ebp_1 - 0x2c) = eax_422 - 1
                    int32_t ebx_13 = 2
                    *(ebp_1 - 0x30) = data_5301b0 + 0x11694
                    int32_t i_10
                    
                    do
                        int32_t eax_427 = ebx_13 * 0x41
                        bool o_54 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_54)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_180
                        edx_180.b = *(*data_5301f4 + (eax_427 << 3) + 0x1fea0)
                        *(*data_5301f4 + (eax_427 << 3) + 0x1fea1) = edx_180.b
                        
                        if (*(*data_5301f4 + (eax_427 << 3) + 0x1fea0) == 1)
                            *(*data_5301f4 + (eax_427 << 3) + 0x1fea2) = 0xa
                            
                            if (sub_4c2ca0() s> 1 && *(*data_530304 + 0xcf9) == 0
                                    && *(*data_530304 + 0xcf6) == 0)
                                int32_t ecx_52
                                ecx_52, ebx_13, ebp_1 =
                                    sub_4ee818(*(ebp_1 - 0x30), ebx_13, ebp_1 - 0x48, esi, arg3)
                                *(esp_12 - 4) = 0x43480000
                                sub_4f17d0(ecx_52, ebx_13, ebp_1 - 0x48)
                        
                        ebx_13 += 1
                        *(ebp_1 - 0x30) += 0x8d14
                        i_10 = *(ebp_1 - 0x2c)
                        *(ebp_1 - 0x2c) -= 1
                    while (i_10 != 1)
                
                *(esp_12 - 4) = 0
                sub_47a1c0(*(data_530678 + (*(esi + 0xbaa4) << 2)), *data_530a74, *data_530304)
                *(esi + 0xba74) = 9
                *(*data_5301f4 + 0xfff8) = 0
                *(esi + 0xba88) = 8
            else if (eax_453 == 9)
                if (sub_4c3270() != 0)
                    *(esi + 0xba88) = 8
                    sub_4c48dc()
                    int32_t eax_443 = *data_5300d0
                    
                    if (eax_443 s> 0)
                        *(ebp_1 - 0x2c) = eax_443
                        int32_t ebx_14 = 1
                        int32_t i_11
                        
                        do
                            bool o_55 = unimplemented  {imul eax, ebx, 0x41}
                            
                            if (o_55)
                                sub_403010()
                                noreturn
                            
                            if (*(*data_5301f4 + ebx_14 * 0x208 + 0x1fea0) == 1)
                                bool o_56 = unimplemented  {imul eax, ebx, 0x41}
                                
                                if (o_56)
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + ebx_14 * 0x208 + 0x1fea2) = 8
                            
                            ebx_14 += 1
                            i_11 = *(ebp_1 - 0x2c)
                            *(ebp_1 - 0x2c) -= 1
                        while (i_11 != 1)
                    
                    *(*data_5301f4 + 0x21118) = 0
                    *(esi + 0xba74) = 0xa
                    void* eax_447
                    eax_447.b = 1
                    ebp_1 = sub_4c329c(eax_447.b)
                    *(*data_5301f4 + 0x2111d) = sub_4c1254()
            else if (*(esi + 0xba74) - 0xa u< 3)
                if (*(esi + 0xba74) s< 0xc && sub_4c2ca0() s> 1 && *(*data_5301f4 + 0x2111d) == 0)
                    ebp_1, esi = sub_4cd720(1, "leer")
                
                int32_t temp95_1 = *(esi + 0xba74)
                *(esi + 0xba74) += 1
                
                if (add_overflow(temp95_1, 1))
                    sub_403010()
                    noreturn
            else if (eax_453 == 0xd)
                eax_453.b = 1
                sub_4c39c8(ecx_34, ebp_1 - 0x1c4, esi, arg3)
                
                if (sub_4cbe24() != 0)
                    if (sub_4c094c() == 0)
                        sub_4c06c0()
                    
                    int32_t eax_459 = *data_5300d0
                    
                    if (eax_459 s> 0)
                        *(ebp_1 - 0x2c) = eax_459
                        int32_t ebx_15 = 1
                        int32_t i_12
                        
                        do
                            bool o_58 = unimplemented  {imul eax, ebx, 0x41}
                            
                            if (o_58)
                                sub_403010()
                                noreturn
                            
                            if (*(*data_5301f4 + ebx_15 * 0x208 + 0x1fea0) == 1)
                                bool o_59 = unimplemented  {imul eax, ebx, 0x41}
                                
                                if (o_59)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*data_5301f4 + ebx_15 * 0x208 + 0x20085) != 0)
                                    bool o_60 = unimplemented  {imul eax, ebx, 0x41}
                                    
                                    if (o_60)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(*data_5301f4 + ebx_15 * 0x208 + 0x2008c) s> 0)
                                        bool o_61 = unimplemented  {imul eax, ebx, 0x41}
                                        
                                        if (o_61)
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_12 - 4) = *(*data_5301f4 + ebx_15 * 0x208 + 0x2008c)
                                        *(esp_12 - 8) = 0
                                        *(esp_12 - 0xc) = 1
                                        *(esp_12 - 0x10) = 1
                                        esp_12 -= 0x10
                                        sub_4ceed4(*data_53067c, 0xa, ebx_15)
                            
                            ebx_15 += 1
                            i_12 = *(ebp_1 - 0x2c)
                            *(ebp_1 - 0x2c) -= 1
                        while (i_12 != 1)
                    
                    *(esi + 0xba74) = 0x63
                    *(esi + 0xba88) = 6
                else
                    *data_53067c
                    sub_4cdcac()
            else if (eax_453 == 0xb)
                *(*data_5301f4 + 0x10020) = 1
                sub_5255c0(*data_5301f4)
                *(esi + 0xba74) = 0x63
                *(esi + 0xba88) = 6
        else if (*(esi + 0xba88) == 3)
            int32_t temp40_1 = *(esi + 0xba7c)
            *(esi + 0xba7c) += 1
            
            if (add_overflow(temp40_1, 1))
                sub_403010()
                noreturn
            
            if (*(esi + 0xbbe4) == 0x2b)
                void* eax_472 = *data_5301f4
                *(eax_472 + 0x10020)
                bool o_63 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                
                if (o_63)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_472 + 0x10020) * 0x208 + 0x1fea2) = 7
                void* eax_475 = *data_5301f4
                *(eax_475 + 0x10020)
                bool o_64 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                
                if (o_64)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_475 + 0x10020) * 0x208 + 0x1fea0) = 3
                *(esp_12 - 4) = 0
                sub_47a1c0(*(data_530208 + (*(*data_5301f4 + 0x10020) << 2)), *data_530a74, 
                    *data_530304)
                ebp_1, esi = sub_4cd720(*(*data_5301f4 + 0x10020), "sePassen")
                *(ebp_1 - 0xc) = 0xfffffffe
            else if (*(esi + 0xbbe4) - 0x63 u< 3)
                void* eax_487 = *data_5301f4
                *(eax_487 + 0x10020)
                bool o_65 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                
                if (o_65)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_487 + 0x10020) * 0x208 + 0x1fea8) = sx.d(*(esi + 0xbbe2))
                void* eax_490 = *data_5301f4
                *(eax_490 + 0x10020)
                int32_t eax_491 = *(eax_490 + 0x10020) * 0x41
                bool o_66 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                
                if (o_66)
                    sub_403010()
                    noreturn
                
                int32_t edx_220 = *data_5301f4
                int32_t ebx_16 = *(*data_5301f4 + 0x21104)
                int32_t ebx_17 = ebx_16 - *(edx_220 + (eax_491 << 3) + 0x1fea4)
                
                if (add_overflow(ebx_16, neg.d(*(edx_220 + (eax_491 << 3) + 0x1fea4))))
                    sub_403010()
                    noreturn
                
                void* ebp_2
                
                if (*(esi + 0xbbe4) == 0x64)
                    if (*(*data_5301f4 + 0x20096) == 0)
                        void* eax_498 = *data_5301f4
                        *(eax_498 + 0x10020)
                        bool o_69 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_69)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + *(eax_498 + 0x10020) * 0x208 + 0x1fea2) = 5
                    else
                        void* eax_495 = *data_5301f4
                        *(eax_495 + 0x10020)
                        bool o_68 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_68)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + *(eax_495 + 0x10020) * 0x208 + 0x1fea2) = 4
                    
                    *(*data_5301f4 + 0x20096) = 1
                    *(*data_5301f4 + 0x210fc) = sx.d(*(esi + 0xbbe2))
                    
                    if (*(esi + 0xbbe4) != 0x65 && sx.d(*(esi + 0xbbe2)) s< *(*data_5301f4 + 0x210f8))
                        sub_408e1c(*(*data_5301f4 + 0x210f8), ebp_1 - 0x1c8)
                        *(esp_12 - 4) = *(ebp_1 - 0x1c8)
                        *(esp_12 - 8) = &data_4c8924
                        *(esp_12 - 0xc) = &data_4c8924
                        sub_408e1c(sx.d(*(esi + 0xbbe2)), ebp_1 - 0x1cc)
                        sub_4746a0(*(ebp_1 - 0x1cc), 0x12, *data_530304)
                    
                    *(*data_5301f4 + 0x210f8) = sx.d(*(esi + 0xbbe2))
                    void* eax_513 = *data_5301f4
                    int32_t temp90_1 = ebx_17
                    ebx_17 += *(eax_513 + 0x210fc)
                    
                    if (add_overflow(temp90_1, *(eax_513 + 0x210fc)))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_516 = *(*data_5301f4 + 0x210fc)
                    void* edx_235 = *data_5301f4
                    int32_t temp94_1 = *(edx_235 + 0x21104)
                    *(edx_235 + 0x21104) += eax_516
                    
                    if (add_overflow(temp94_1, eax_516))
                        sub_403010()
                        noreturn
                    
                    sub_4c1e70()
                    
                    if (ebx_17 s< sub_4cc6dc(*(*data_5301f4 + 0x10020)))
                        ebp_2, esi = sub_4cd720(*(*data_5301f4 + 0x10020), sub_4c8a23+5)
                        int32_t temp101_1 = *(esi + 0x1cb90)
                        *(esi + 0x1cb90) += 1
                        
                        if (add_overflow(temp101_1, 1))
                            sub_403010()
                            noreturn
                        
                        int32_t temp107_1 = *(esi + 0x1cb94)
                        *(esi + 0x1cb94) += 1
                        
                        if (add_overflow(temp107_1, 1))
                            sub_403010()
                            noreturn
                        
                        void* eax_536 = *data_5301f4
                        *(eax_536 + 0x10020)
                        int32_t eax_537 = *(eax_536 + 0x10020) * 0x41
                        bool o_76 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_76)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_241 = *data_5301f4
                        int32_t temp111_1 = *(edx_241 + (eax_537 << 3) + 0x20080)
                        *(edx_241 + (eax_537 << 3) + 0x20080) += 1
                        
                        if (add_overflow(temp111_1, 1))
                            sub_403010()
                            noreturn
                        
                        if (*(esi + 0xba74) == 3)
                            *(data_53020c + (*(*data_5301f4 + 0x10020) << 2) - 3) = 1
                        else if (*(esi + 0xba74) == 5)
                            *(data_53020c + (*(*data_5301f4 + 0x10020) << 2) - 2) = 1
                        else if (*(esi + 0xba74) == 7)
                            *(data_53020c + (*(*data_5301f4 + 0x10020) << 2) - 1) = 1
                        
                        if (*(esi + 0xba74) s>= 3)
                            *(data_53020c + (*(*data_5301f4 + 0x10020) << 2) - 4) = 1
                        
                        *(esp_12 - 4) = *(*data_5301f4 + 0x21108)
                        *(ebp_2 - 0xc) = divs.dp.d(sx.q(ebx_17), *(esp_12 - 4))
                    else
                        void* eax_522 = *data_5301f4
                        *(eax_522 + 0x10020)
                        bool o_72 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_72)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + *(eax_522 + 0x10020) * 0x208 + 0x1fea2) = 2
                        void* eax_525 = *data_5301f4
                        *(eax_525 + 0x10020)
                        bool o_73 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_73)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + *(eax_525 + 0x10020) * 0x208 + 0x20084) = 1
                        *(*data_5301f4 + 0x21114) = 1
                        ebp_2, esi = sub_4cd720(*(*data_5301f4 + 0x10020), "seAllIn")
                        *(ebp_2 - 0xc) = 0x64
                    
                    if (*(*data_5301f4 + 0x10020) == 1)
                        int32_t eax_558 = *data_5300d0
                        
                        if (eax_558 s> 0)
                            *(ebp_2 - 0x2c) = eax_558
                            int32_t edi_2 = 1
                            int32_t i_13
                            
                            do
                                if (edi_2 != *(*data_5301f4 + 0x10020) && sub_4c2be8(edi_2) != 0)
                                    *(ebp_2 - 0x18) = sx.d(*(esi + 0xbbe2))
                                    void* eax_565 = *data_5301f4
                                    *(eax_565 + 0x21108)
                                    bool o_78 = unimplemented  {imul eax, dword [eax+0x21108], 0x2}
                                    
                                    if (o_78)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_566
                                    
                                    if (*(eax_565 + 0x21108) * 2 s<= *(ebp_2 - 0x18))
                                        long double st0_2 = sub_402d38()
                                        long double x87_r6_2 = data_4c8a34
                                        x87_r6_2 - st0_2
                                        eax_566.w = (x87_r6_2 < st0_2 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_2, st0_2) ? 1 : 0) << 0xa
                                            | (x87_r6_2 == st0_2 ? 1 : 0) << 0xe
                                    
                                    if (*(eax_565 + 0x21108) * 2 s<= *(ebp_2 - 0x18)
                                        && not(test_bit(eax_566:1.b, 6))
                                        && not(test_bit(eax_566:1.b, 0)))
                                    label_4c83c8:
                                        *data_530380
                                        ebp_2, esi = sub_4b77e0(ebp_2 - 0x1e0, edi_2)
                                        bool o_81 = unimplemented  {imul eax, edi, 0x41}
                                        
                                        if (o_81)
                                            sub_403010()
                                            noreturn
                                        
                                        long double x87_r7_8 =
                                            fconvert.t(*(*data_5301f4 + edi_2 * 0x208 + 0x200a0))
                                            / data_4c8a58
                                        long double temp117_1 = fconvert.t(60f)
                                        x87_r7_8 - temp117_1
                                        int32_t eax_575
                                        eax_575.w = (x87_r7_8 < temp117_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_8, temp117_1) ? 1 : 0) << 0xa
                                            | (x87_r7_8 == temp117_1 ? 1 : 0) << 0xe
                                        
                                        if (not(test_bit(eax_575:1.b, 0))
                                            && *(*data_5301f4 + 0x20094) != 1)
                                        label_4c843b:
                                            *(ebp_2 - 0x1c) = 0
                                            bool o_83 = unimplemented  {imul eax, edi, 0x41}
                                            
                                            if (o_83)
                                                sub_403010()
                                                noreturn
                                            
                                            long double x87_r7_12 =
                                                fconvert.t(*(*data_5301f4 + edi_2 * 0x208 + 0x200a0))
                                                / data_4c8a58
                                            long double temp119_1 = fconvert.t(90f)
                                            x87_r7_12 - temp119_1
                                            int32_t eax_579
                                            eax_579.w = (x87_r7_12 < temp119_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r7_12, temp119_1) ? 1 : 0) << 0xa
                                                | (x87_r7_12 == temp119_1 ? 1 : 0) << 0xe
                                            
                                            if (test_bit(eax_579:1.b, 0))
                                                bool o_84 = unimplemented  {imul eax, edi, 0x41}
                                                
                                                if (o_84)
                                                    sub_403010()
                                                    noreturn
                                                
                                                long double x87_r7_14 = fconvert.t(
                                                    *(*data_5301f4 + edi_2 * 0x208 + 0x200a0)) / data_4c8a58
                                                long double temp120_1 = fconvert.t(84f)
                                                x87_r7_14 - temp120_1
                                                int32_t eax_580
                                                eax_580.w = (x87_r7_14 < temp120_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r7_14, temp120_1) ? 1 : 0)
                                                    << 0xa | (x87_r7_14 == temp120_1 ? 1 : 0) << 0xe
                                                
                                                if (test_bit(eax_580:1.b, 0))
                                                    bool o_85 = unimplemented  {imul eax, edi, 0x41}
                                                    
                                                    if (o_85)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    long double x87_r7_16 = fconvert.t(
                                                        *(*data_5301f4 + edi_2 * 0x208 + 0x200a0))
                                                        / data_4c8a58
                                                    long double temp122_1 = fconvert.t(76f)
                                                    x87_r7_16 - temp122_1
                                                    int32_t eax_581
                                                    eax_581.w = (x87_r7_16 < temp122_1 ? 1 : 0) << 8 | (
                                                        is_unordered.t(x87_r7_16, temp122_1) ? 1 : 0) << 0xa
                                                        | (x87_r7_16 == temp122_1 ? 1 : 0) << 0xe
                                                    
                                                    if (test_bit(eax_581:1.b, 0))
                                                        bool o_86 = unimplemented  {imul eax, edi, 0x41}
                                                        
                                                        if (o_86)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        long double x87_r7_18 = fconvert.t(
                                                            *(*data_5301f4 + edi_2 * 0x208 + 0x200a0))
                                                            / data_4c8a58
                                                        long double temp123_1 = fconvert.t(68f)
                                                        x87_r7_18 - temp123_1
                                                        int32_t eax_582
                                                        eax_582.w = (x87_r7_18 < temp123_1 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r7_18, temp123_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_18 == temp123_1 ? 1 : 0) << 0xe
                                                        
                                                        if (test_bit(eax_582:1.b, 0))
                                                            *(ebp_2 - 0x1c) = 0xfffffff8
                                                        else
                                                            *(ebp_2 - 0x1c) = 0xfffffffc
                                                    else
                                                        *(ebp_2 - 0x1c) = 0
                                                else
                                                    *(ebp_2 - 0x1c) = 5
                                            else
                                                *(ebp_2 - 0x1c) = 0xa
                                            
                                            int32_t edx_262 = *(ebp_2 - 0x1c)
                                            
                                            if (add_overflow(edx_262, 0x55))
                                                sub_403010()
                                                noreturn
                                            
                                            sub_4c1b10(0x24, edi_2, sub_420ac8(0x64, edx_262 + 0x55))
                                            break
                                        
                                        bool o_82 = unimplemented  {imul eax, edi, 0x41}
                                        
                                        if (o_82)
                                            sub_403010()
                                            noreturn
                                        
                                        long double x87_r7_10 =
                                            fconvert.t(*(*data_5301f4 + edi_2 * 0x208 + 0x200a0))
                                            / data_4c8a58
                                        long double temp118_1 = fconvert.t(68f)
                                        x87_r7_10 - temp118_1
                                        int32_t eax_578
                                        eax_578.w = (x87_r7_10 < temp118_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_10, temp118_1) ? 1 : 0) << 0xa
                                            | (x87_r7_10 == temp118_1 ? 1 : 0) << 0xe
                                        
                                        if (not(test_bit(eax_578:1.b, 0)))
                                            goto label_4c843b
                                    else
                                        void* eax_568 = *data_5301f4
                                        *(eax_568 + 0x21108)
                                        bool o_79 = unimplemented  {imul eax, dword [eax+0x21108], 0x5}
                                        
                                        if (o_79)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t eax_569
                                        
                                        if (*(eax_568 + 0x21108) * 5 s<= *(ebp_2 - 0x18))
                                            long double st0_3 = sub_402d38()
                                            long double x87_r6_3 = data_4c8a40
                                            x87_r6_3 - st0_3
                                            eax_569.w = (x87_r6_3 < st0_3 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_3, st0_3) ? 1 : 0) << 0xa
                                                | (x87_r6_3 == st0_3 ? 1 : 0) << 0xe
                                        
                                        if (*(eax_568 + 0x21108) * 5 s<= *(ebp_2 - 0x18)
                                                && not(test_bit(eax_569:1.b, 6))
                                                && not(test_bit(eax_569:1.b, 0)))
                                            goto label_4c83c8
                                        
                                        void* eax_571 = *data_5301f4
                                        *(eax_571 + 0x21108)
                                        bool o_80 = unimplemented  {imul eax, dword [eax+0x21108], 0xa}
                                        
                                        if (o_80)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(eax_571 + 0x21108) * 0xa s<= *(ebp_2 - 0x18))
                                            long double st0_4 = sub_402d38()
                                            long double x87_r6_4 = data_4c8a4c
                                            x87_r6_4 - st0_4
                                            int32_t eax_572
                                            eax_572.w = (x87_r6_4 < st0_4 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_4, st0_4) ? 1 : 0) << 0xa
                                                | (x87_r6_4 == st0_4 ? 1 : 0) << 0xe
                                            
                                            if (not(test_bit(eax_572:1.b, 6))
                                                    && not(test_bit(eax_572:1.b, 0)))
                                                goto label_4c83c8
                                
                                edi_2 += 1
                                i_13 = *(ebp_2 - 0x2c)
                                *(ebp_2 - 0x2c) -= 1
                            while (i_13 != 1)
                else if (*(esi + 0xbbe4) != 0x65)
                    if (ebx_17 != sub_4cc6dc(*(*data_5301f4 + 0x10020)))
                        void* eax_620 = *data_5301f4
                        *(eax_620 + 0x10020)
                        bool o_95 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_95)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + *(eax_620 + 0x10020) * 0x208 + 0x1fea2) = 1
                        ebp_2, esi = sub_4cd720(*(*data_5301f4 + 0x10020), "seMitgehen")
                        *(ebp_2 - 0xc) = 0xffffffff
                    else
                        void* eax_609 = *data_5301f4
                        *(eax_609 + 0x10020)
                        bool o_93 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_93)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + *(eax_609 + 0x10020) * 0x208 + 0x1fea2) = 2
                        void* eax_612 = *data_5301f4
                        *(eax_612 + 0x10020)
                        bool o_94 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                        
                        if (o_94)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + *(eax_612 + 0x10020) * 0x208 + 0x20084) = 1
                        *(*data_5301f4 + 0x21114) = 1
                        ebp_2, esi = sub_4cd720(*(*data_5301f4 + 0x10020), "seAllIn")
                        *(ebp_2 - 0xc) = 0x64
                else
                    ebx_17 = sub_4cc6dc(*(*data_5301f4 + 0x10020))
                    void* eax_589 = *data_5301f4
                    *(eax_589 + 0x10020)
                    bool o_88 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                    
                    if (o_88)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_591 = *(*data_5301f4 + *(eax_589 + 0x10020) * 0x208 + 0x1fea4)
                    *(*data_5301f4 + 0x210fc) = ebx_17
                    int32_t edx_271 = *(*data_5301f4 + 0x210fc)
                    
                    if (add_overflow(edx_271, eax_591))
                        sub_403010()
                        noreturn
                    
                    if (edx_271 + eax_591 s> *(*data_5301f4 + 0x21104))
                        void* edx_274 = *data_5301f4
                        
                        if (add_overflow(eax_591, *(edx_274 + 0x210fc)))
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + 0x21104) = eax_591 + *(edx_274 + 0x210fc)
                    
                    sub_4c1e70()
                    void* eax_594 = *data_5301f4
                    *(eax_594 + 0x10020)
                    bool o_91 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                    
                    if (o_91)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + *(eax_594 + 0x10020) * 0x208 + 0x1fea2) = 2
                    void* eax_597 = *data_5301f4
                    *(eax_597 + 0x10020)
                    bool o_92 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                    
                    if (o_92)
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + *(eax_597 + 0x10020) * 0x208 + 0x20084) = 1
                    *(*data_5301f4 + 0x21114) = 1
                    ebp_2, esi = sub_4cd720(*(*data_5301f4 + 0x10020), "seAllIn")
                    *(ebp_2 - 0xc) = 0x64
                
                *(esp_12 - 4) = ebp_2
                sub_4c60d8()
                *(esp_12 - 4) = ebx_17
                *(esp_12 - 8) = 0
                *(esp_12 - 0xc) = 1
                *(esp_12 - 0x10) = 1
                esp_12 -= 0x10
                sub_4ceed4(*data_53067c, *(*data_5301f4 + 0x10020), 0xa)
                void* eax_630 = *data_5301f4
                int32_t temp86_1 = *(eax_630 + 0x21100)
                *(eax_630 + 0x21100) += ebx_17
                
                if (add_overflow(temp86_1, ebx_17))
                    sub_403010()
                    noreturn
                
                void* eax_632 = *data_5301f4
                *(eax_632 + 0x10020)
                int32_t eax_633 = *(eax_632 + 0x10020) * 0x41
                bool o_97 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                
                if (o_97)
                    sub_403010()
                    noreturn
                
                int32_t edx_289 = *data_5301f4
                int32_t temp99_1 = *(edx_289 + (eax_633 << 3) + 0x1fea4)
                *(edx_289 + (eax_633 << 3) + 0x1fea4) += ebx_17
                
                if (add_overflow(temp99_1, ebx_17))
                    sub_403010()
                    noreturn
                
                void* eax_635 = *data_5301f4
                *(eax_635 + 0x10020)
                bool o_99 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                
                if (o_99)
                    sub_403010()
                    noreturn
                
                int32_t edx_292 = *(*data_5301f4 + *(eax_635 + 0x10020) * 0x208 + 0x1fea4)
                void* eax_638 = *data_5301f4
                
                if (add_overflow(edx_292, neg.d(*(eax_638 + 0x21104))))
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + 0x210f8) =
                    sub_420b80(*(*data_5301f4 + 0x210f8), edx_292 - *(eax_638 + 0x21104))
                ebp_1 = sub_4c1e70()
            else if (*(esi + 0xbbe4) == 0x2a)
                void* eax_644 = *data_5301f4
                *(eax_644 + 0x10020)
                bool o_101 = unimplemented  {imul eax, dword [eax+0x10020], 0x41}
                
                if (o_101)
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + *(eax_644 + 0x10020) * 0x208 + 0x1fea2) = 3
                ebp_1, esi = sub_4cd720(*(*data_5301f4 + 0x10020), sub_4c8a8f+5)
                *(ebp_1 - 0xc) = 0xfffffffe
            
            if (*(ebp_1 - 0xc) s> 0x64)
                *(ebp_1 - 0xc) = 0x64
            
            void* eax_649 = data_530258
            void* edx_298 = data_530204
            *(esp_12 - 4) = esi
            int16_t* esi_3
            int16_t* edi_4
            edi_4, esi_3 = __builtin_memcpy(edx_298, eax_649, 0x10)
            *edi_4 = *esi_3
            void* esi_5 = *(esp_12 - 4)
            *(data_530204 + 0x12) = (*(ebp_1 - 0xc)).w
            sub_4b73a8(*data_530380, data_530204)
            *(data_530258 + 0x10) = 0
            *(esi_5 + 0xba88) = 4
            
            if (sub_4c3194() != 0)
                *(esi_5 + 0xba88) = 8
    
    sub_4c8aa0(0)
    *(esp_12 + 8)
    fsbase->NtTib.ExceptionList = *esp_12
    *(esp_12 + 8) = 0x4c88fb
    sub_403e1c(ebp_1 - 0x1cc, 0x12)
    sub_403e1c(ebp_1 - 0x180, 2)
    sub_403df8(ebp_1 - 0x28)
    return ebp_1 - 0x28
}
