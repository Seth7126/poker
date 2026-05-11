// ============================================================
// 函数名称: sub_4ee958
// 虚拟地址: 0x4ee958
// WARP GUID: d31c4c77-98e0-5b18-8b08-3506c7f3bf77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4748fc, sub_404138, sub_502b8c, sub_52c1b4, sub_403e1c, sub_403010, sub_4f0d44, sub_517c04, sub_516e74, sub_517a38, sub_503984, sub_517b44, sub_52c15c, sub_51bf18, sub_408e1c, sub_4f1e48, sub_51bd00, sub_517ba0, sub_518248, sub_51b920, sub_503538, sub_517cd8
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_t __convention("regparm")sub_4ee958(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, char arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t i_49 = arg3
    int32_t* esp_1 = &i_49
    int32_t i_25 = 0x267
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_25
        i_25 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_25
    int32_t i_53 = i_49
    i_49 = i_25
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = arg5
    i_49 = arg1
    *(esp_1 - 0x14) = &var_4
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_1 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    
    if (arg6 == 8)
        *(esp_9 - 4) = 0
        *(esp_9 - 8) = 0xd
        *(esp_9 - 0xc) = 0
        sub_502b8c(i_53, arg7, 0, arg4, arg5)
        esp_9 += 0x24
        *(*data_5301f4 + 0x1025e) = 0xd
        *(*data_5301f4 + 0x10260) = 1
        *(*data_5301f4 + 0x10250) = 3
    else if (arg6 == 7)
        if (add_overflow(arg7, 0xffffffff))
            sub_403010()
            noreturn
        
        if (arg7 - 1 s>= 0)
            int32_t i_26 = arg7
            int32_t var_14_1 = 0
            int32_t i_1
            
            do
                int32_t eax_8 = ebp_1[4]
                
                if (add_overflow(eax_8, ebp_1[-4]))
                    sub_403010()
                    noreturn
                
                *(esp_9 - 4) = eax_8 + ebp_1[-4]
                *(esp_9 - 8) = 1
                *(esp_9 - 0xc) = 3
                *(esp_9 - 0x10) = 0x10
                *(esp_9 - 0x14) = fconvert.s(float.t(ebp_1[-4]) * data_4f0b38)
                *(esp_9 - 0x18) = 0
                *(esp_9 - 0x1c) = 0
                esp_9 -= 0x1c
                int32_t edx_1 = ebp_1[-2]
                
                if (add_overflow(edx_1, neg.d(ebp_1[-4])))
                    sub_403010()
                    noreturn
                
                ebp_1 = sub_503984(ebp_1[-1], edx_1 - ebp_1[-4], ebp_1[-3])
                ebp_1[-4] += 1
                i_1 = i_26
                i_26 -= 1
            while (i_1 != 1)
        
        *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
        *(*data_5301f4 + 0x10260) = 1
        *(*data_5301f4 + 0x10250) = 3
    else if (arg6 != 6)
        int16_t var_cae[0x2]
        void var_caa
        void var_992
        void var_35e
        void var_35c
        int16_t i_48
        
        if (arg6 == 5)
            int16_t* esi_1
            int16_t* edi_2
            edi_2, esi_1 = __builtin_memcpy(&var_35e, *data_5301f4 + 0x10280, 0x318)
            *edi_2 = *esi_1
            sub_517ba0(&var_992)
            bool o_6 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_6)
                sub_403010()
                noreturn
            
            sub_516e74(data_5301b0 + i_49 * 0x8d14 - 0x8d14)
            bool o_7 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_7)
                sub_403010()
                noreturn
            
            int32_t eax_30
            eax_30.w = *(data_5301b0 + i_49 * 0x8d14 - 0xcc)
            int32_t i_27 = sx.d(eax_30.w)
            
            if (i_27 s> 0)
                void* ebx = &var_caa
                int32_t i_2
                
                do
                    *ebx = 0
                    ebx += 4
                    i_2 = i_27
                    i_27 -= 1
                while (i_2 != 1)
            
            int32_t i_28 = sx.d(i_48)
            
            if (i_28 s> 0)
                void* esi_3 = &var_35c
                void var_990
                void* ebx_1 = &var_990
                int32_t i_3
                
                do
                    bool o_8 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    sub_517a38(&var_992, *(data_5301b0 + i_49 * 0x8d14 + (sx.d(*esi_3) << 2) - 0x368))
                    *ebx_1 = *esi_3
                    (&var_cae)[sx.d(*esi_3)][0] = 1
                    ebx_1 += 4
                    esi_3 += 4
                    i_3 = i_28
                    i_28 -= 1
                while (i_3 != 1)
            
            if (i_48 == 0)
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = 0
                *(esp_9 - 0x14) = "ERROR in amtAnlegen("
                int32_t var_fd0
                sub_408e1c(i_49, &var_fd0)
                *(esp_9 - 0x18) = var_fd0
                *(esp_9 - 0x1c) = &data_4f0b6c
                int32_t var_fd4
                sub_408e1c(i_53, &var_fd4)
                *(esp_9 - 0x20) = var_fd4
                *(esp_9 - 0x24) = &data_4f0b78
                int32_t var_fd8
                sub_408e1c(i_53, &var_fd8)
                *(esp_9 - 0x28) = var_fd8
                *(esp_9 - 0x2c) = "): cg.gs.bl.selhand.anz=0"
                char* var_fcc
                sub_404138(&var_fcc, 7)
                esp_9 += 8
                sub_4748fc(*data_530304, var_fcc, 0)
            
            bool o_9 = unimplemented  {imul eax, dword [ebp+0x10], 0x35}
            
            if (o_9)
                sub_403010()
                noreturn
            
            int32_t var_30_1 = *(data_5301b0 + arg8 * 0xd4 + 0x60f58)
            bool o_10 = unimplemented  {imul eax, dword [ebp+0x10], 0x35}
            
            if (o_10)
                sub_403010()
                noreturn
            
            int32_t var_20_1 = *(data_5301b0 + arg8 * 0xd4 + 0x60f5c)
            int16_t* esi_4
            int16_t* edi_4
            edi_4, esi_4 = __builtin_memcpy(&var_992, &var_35e, 0x318)
            *edi_4 = *esi_4
            int32_t var_3c_1 = 0
            void var_fc6
            void var_678
            int16_t* esi_6
            int16_t* edi_6
            edi_6, esi_6 = __builtin_memcpy(&var_fc6, &var_678, 0x318)
            *edi_6 = *esi_6
            int32_t i_29 = sx.d(i_48)
            
            if (i_29 s> 0)
                int32_t var_28_1 = 1
                void* ebx_2 = &var_992
                void* esi_8 = &var_35c
                int32_t i_4
                
                do
                    int32_t eax_47 = *(data_5301b0 + 0x69954)
                    int32_t eax_48 = eax_47 + ebp_1[-9]
                    
                    if (add_overflow(eax_47, ebp_1[-9]))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_48, neg.d(ebp_1[-0xe])))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-5] = eax_48 - ebp_1[-0xe]
                    ebp_1[-0xd] = sub_517cd8(ebp_1 - 0xfc2, *ebx_2)
                    int32_t j_1 = sx.d(*(ebp_1 - 0xd2a))
                    
                    if (j_1 s> 0)
                        ebp_1[-0xa] = 1
                        void* eax_52 = &ebp_1[-0x3f0]
                        int32_t j
                        
                        do
                            if (ebp_1[-0xd] != ebp_1[-0xa] && *eax_52 == 0x1bc)
                                int32_t ecx_5
                                ecx_5.b = *(eax_52 - 1)
                                
                                if (ecx_5.b == *(ebx_2 + 1))
                                    ecx_5.b = *(eax_52 - 2)
                                    
                                    if (ecx_5.b == *ebx_2)
                                        ebp_1[-0xd] = ebp_1[-0xa]
                            
                            ebp_1[-0xa] += 1
                            eax_52 += 4
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    *(&ebp_1[ebp_1[-0xd]] - 0xfc6) = 0
                    
                    if (*(*data_5301f4 + 4) == 3 && *(&ebp_1[ebp_1[-0xd]] - 0x676) == 0x1bc)
                        int32_t temp256_1 = ebp_1[-0xe]
                        ebp_1[-0xe] += 1
                        
                        if (add_overflow(temp256_1, 1))
                            sub_403010()
                            noreturn
                        
                        sub_51b920(*data_52ffd0, ebp_1[-0xb], &ebp_1[-0x4bc])
                        ebp_1[-5] = sub_517c04(&ebp_1[-0x4bc], 0xe)
                        sub_51b920(*data_52ffd0, ebp_1[-0xb], &ebp_1[-0x4bc])
                        ebp_1[-5] = sx.d(*(&ebp_1[ebp_1[-5]] - 0x12f2))
                    
                    *(ebx_2 + 2) = (ebp_1[-0xd]).w
                    ebp_1[-5]
                    int32_t eax_66 = ebp_1[-5] * 0x35
                    bool o_14 = unimplemented  {imul eax, dword [ebp-0x14], 0x35}
                    
                    if (o_14)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + (eax_66 << 2) + 0x60f58) = ebp_1[-0xb]
                    *(data_5301b0 + (eax_66 << 2) + 0x60f5c) = ebp_1[-0xd]
                    
                    if (*(data_5301b0 + 0x69954) s< ebp_1[-5])
                        int32_t eax_68
                        eax_68.w = *esi_8
                        
                        if (eax_68.w s> 0)
                            ebp_1[-1]
                            bool o_15 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                            
                            if (o_15)
                                sub_403010()
                                noreturn
                            
                            if (*(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c) s>= sx.d(eax_68.w))
                                ebp_1[-1]
                                bool o_16 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                                
                                if (o_16)
                                    sub_403010()
                                    noreturn
                                
                                *(esp_9 - 4) = data_5301b0 + ebp_1[-1] * 0x8d14
                                bool o_17 = unimplemented  {imul eax, eax, 0x35}
                                
                                if (o_17)
                                    sub_403010()
                                    noreturn
                                
                                *(esp_9 - 4) = *(*(esp_9 - 4) + sx.d(eax_68.w) * 0xd4 - 0x8de8)
                                ebp_1[-5]
                                bool o_18 = unimplemented  {imul eax, dword [ebp-0x14], 0x35}
                                
                                if (o_18)
                                    sub_403010()
                                    noreturn
                                
                                *(data_5301b0 + ebp_1[-5] * 0xd4 + 0x60f08) = (*(esp_9 - 4)).b
                                ebp_1[-1]
                                bool o_19 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                                
                                if (o_19)
                                    sub_403010()
                                    noreturn
                                
                                bool o_20 = unimplemented  {imul edx, edx, 0x35}
                                
                                if (o_20)
                                    sub_403010()
                                    noreturn
                                
                                void* eax_73
                                eax_73.b =
                                    *(data_5301b0 + ebp_1[-1] * 0x8d14 + sx.d(*esi_8) * 0xd4 - 0x8de7)
                                ebp_1[-5]
                                bool o_21 = unimplemented  {imul edx, dword [ebp-0x14], 0x35}
                                
                                if (o_21)
                                    sub_403010()
                                    noreturn
                                
                                *(data_5301b0 + ebp_1[-5] * 0xd4 + 0x60f09) = eax_73.b
                    
                    int32_t eax_74 = sx.d(*esi_8)
                    ebp_1[-0x10] = eax_74
                    *(esp_9 - 4) = ebp_1[-5]
                    *(esp_9 - 8) = 1
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 2
                    *(esp_9 - 0x14) = 0
                    *(esp_9 - 0x18) = 0xffffffff
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    ebp_1 = sub_503984(ebp_1[-1], eax_74, ebp_1[-3])
                    ebp_1[-9] += 1
                    esi_8 += 4
                    ebx_2 += 4
                    i_4 = i_29
                    i_29 -= 1
                while (i_4 != 1)
            
            if (ebp_1[-0x10] == 0x76adf1)
                ebp_1[-0x10] = sx.d(ebp_1[sx.d(*(ebp_1 - 0xc2)) - 0xd7].w)
            
            if (ebp_1[-0x10] == 0x76adf1)
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = 0
                *(esp_9 - 0x14) = "ATTENTION! Save-error in amove.amtAnlegen("
                sub_408e1c(ebp_1[-1], &ebp_1[-0x4be])
                *(esp_9 - 0x18) = ebp_1[-0x4be]
                *(esp_9 - 0x1c) = &data_4f0b78
                sub_408e1c(ebp_1[-2], &ebp_1[-0x4bf])
                *(esp_9 - 0x20) = ebp_1[-0x4bf]
                *(esp_9 - 0x24) = &data_4f0b6c
                sub_408e1c(ebp_1[-3], &ebp_1[-0x4c0])
                *(esp_9 - 0x28) = ebp_1[-0x4c0]
                *(esp_9 - 0x2c) = &data_4f0b78
                sub_408e1c(ebp_1[4], &ebp_1[-0x4c1])
                *(esp_9 - 0x30) = ebp_1[-0x4c1]
                *(esp_9 - 0x34) = "): movei not set!"
                sub_404138(&ebp_1[-0x4bd], 9)
                sub_4748fc(*data_530304, ebp_1[-0x4bd], 0)
            
            ebp_1[-0x10] = sx.d(ebp_1[-0xd6].w)
            *(esp_9 - 4) = &ebp_1[-0x19d]
            *(esp_9 - 8) = ebp_1[-0xb]
            *(esp_9 - 0xc) = ebp_1[-0xd]
            *(esp_9 - 0x10) = ebp_1[-1]
            *(esp_9 - 0x14) = ebp_1[-0x10]
            ebp_1[-0xb]
            bool o_22 = unimplemented  {imul eax, dword [ebp-0x2c], 0x41}
            
            if (o_22)
                sub_403010()
                noreturn
            
            int32_t eax_92 = sx.d(*(*data_52ffd0 + ebp_1[-0xb] * 0x104))
            int32_t edx_45 = sx.d(*(ebp_1 - 0x6f6))
            
            if (add_overflow(eax_92, edx_45))
                sub_403010()
                noreturn
            
            int32_t eax_93
            eax_93.b = eax_92 + edx_45 s> sx.d(ebp_1[-0xf7].w)
            *(esp_9 - 0x18) = eax_93
            *(esp_9 - 0x1c) = ebp_1[-5]
            *(esp_9 - 0x20) = 0x3f800000
            sub_51bd00(ebp_1 - 0x98e, *data_5301f4 + 0x10280, *data_52ffd0)
            void* esp_63 = esp_9
            
            if (*(*data_52ffd0 + 0x3d01) != 0)
                *(esp_63 - 4) = 1
                *(esp_63 - 8) = 1
                *(esp_63 - 0xc) = 2
                *(esp_63 - 0x10) = 3
                *(esp_63 - 0x14) = 0
                *(esp_63 - 0x18) = 0
                *(esp_63 - 0x1c) = 0
                esp_63 -= 0x1c
                int32_t ecx_19 = ebp_1[-1]
                
                if (neg.d(ecx_19) == 0x80000000)
                    sub_403010()
                    noreturn
                
                ebp_1 = sub_503984(0xc, *(*data_52ffd0 + 0x3d08), neg.d(ecx_19))
                void* eax_105 = *data_52ffd0
                *(eax_105 + 0x3d08)
                bool o_25 = unimplemented  {imul eax, dword [eax+0x3d08], 0x35}
                
                if (o_25)
                    sub_403010()
                    noreturn
                
                ebp_1[-1]
                bool o_26 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                *(data_5302e4 + ebp_1[-1] * 0x8d14 - 0x8d14) =
                    *(data_5301b0 + *(eax_105 + 0x3d08) * 0xd4 + 0x60f08)
                *(*data_52ffd0 + 0x3d10) = ebp_1[*(*data_52ffd0 + 0x3d04) - 0x19e]
            
            ebp_1[-8] = sx.d(ebp_1[-0xd6].w)
            ebp_1[-0xc] = 0
            
            if (*(*data_52ffd0 + 0x3d01) != 0)
                int32_t temp254_1 = ebp_1[-0xc]
                ebp_1[-0xc] -= 1
                
                if (add_overflow(temp254_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            ebp_1[-1]
            bool o_28 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_28)
                sub_403010()
                noreturn
            
            int32_t i_30 = *(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c)
            
            if (i_30 s> 0)
                ebp_1[-4] = 1
                void* esi_9 = ebp_1 - 0xca6
                void* ebx_4 = data_5301b0 + 0xd4
                int32_t i_5
                
                do
                    if (*esi_9 != 0)
                        int32_t temp266_1 = ebp_1[-0xc]
                        ebp_1[-0xc] += 1
                        
                        if (add_overflow(temp266_1, 1))
                            sub_403010()
                            noreturn
                    else
                        ebp_1[-1]
                        bool o_29 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                        
                        if (o_29)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_55 = ebp_1[-4]
                        
                        if (add_overflow(edx_55, neg.d(ebp_1[-0xc])))
                            sub_403010()
                            noreturn
                        
                        bool o_31 = unimplemented  {imul edx, edx, 0x35}
                        
                        if (o_31)
                            sub_403010()
                            noreturn
                        
                        ebp_1[-1]
                        bool o_32 = unimplemented  {imul ecx, dword [ebp-0x4], 0x2345}
                        
                        if (o_32)
                            sub_403010()
                            noreturn
                        
                        *(data_5302e4 + ebp_1[-1] * 0x8d14 + (edx_55 - ebp_1[-0xc]) * 0xd4 - 0x8de8) =
                            *(ebx_4 + ebp_1[-1] * 0x8d14 - 0x8de8)
                        int32_t eax_118 = ebp_1[-4]
                        
                        if (add_overflow(eax_118, neg.d(ebp_1[-0xc])))
                            sub_403010()
                            noreturn
                        
                        *(esp_63 - 4) = eax_118 - ebp_1[-0xc]
                        *(esp_63 - 8) = 0
                        *(esp_63 - 0xc) = 2
                        *(esp_63 - 0x10) = 1
                        *(esp_63 - 0x14) = 0
                        *(esp_63 - 0x18) = 0xffffffff
                        *(esp_63 - 0x1c) = 0
                        esp_63 -= 0x1c
                        int32_t ecx_24 = ebp_1[-1]
                        
                        if (neg.d(ecx_24) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        ebp_1 = sub_503984(ebp_1[-1], ebp_1[-4], neg.d(ecx_24))
                        ebp_1[-8] = ebp_1[-4]
                    
                    ebp_1[-4] += 1
                    ebx_4 += 0xd4
                    esi_9 += 4
                    i_5 = i_30
                    i_30 -= 1
                while (i_5 != 1)
            
            if (*(*data_52ffd0 + 0x3d01) == 0)
                ebp_1[-1]
                bool o_42 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_42)
                    sub_403010()
                    noreturn
                
                int32_t eax_132 = *(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c)
                int32_t edx_66 = sx.d(*(ebp_1 - 0x6f6))
                
                if (add_overflow(eax_132, neg.d(edx_66)))
                    sub_403010()
                    noreturn
                
                ebp_1[-1]
                bool o_44 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                
                if (o_44)
                    sub_403010()
                    noreturn
                
                void* ecx_27 = data_5302e4
                *(ecx_27 + ebp_1[-1] * 0x8d14 - 0x39c) = eax_132 - edx_66
                ebp_1[-1]
                bool o_45 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_45)
                    sub_403010()
                    noreturn
                
                *(esp_63 - 4) = fconvert.s(float.t(*(data_5302e4 + ebp_1[-1] * 0x8d14 - 0x39c)))
                ebp_1[-1]
                bool o_46 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_46)
                    sub_403010()
                    noreturn
                
                sub_4f1e48(ecx_27, 0, data_5302e4 + ebp_1[-1] * 0x8d14 - 0x8d14)
                esp_9 = esp_63
            else
                ebp_1[-1]
                bool o_36 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_36)
                    sub_403010()
                    noreturn
                
                int32_t eax_125 = *(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c)
                int32_t edx_60 = sx.d(*(ebp_1 - 0x6f6))
                int32_t eax_126 = eax_125 - edx_60
                
                if (add_overflow(eax_125, neg.d(edx_60)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_126, 1))
                    sub_403010()
                    noreturn
                
                ebp_1[-1]
                bool o_39 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                
                if (o_39)
                    sub_403010()
                    noreturn
                
                void* ecx_26 = data_5302e4
                *(ecx_26 + ebp_1[-1] * 0x8d14 - 0x39c) = eax_126 + 1
                ebp_1[-1]
                bool o_40 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_40)
                    sub_403010()
                    noreturn
                
                *(esp_63 - 4) = fconvert.s(float.t(*(data_5302e4 + ebp_1[-1] * 0x8d14 - 0x39c)))
                ebp_1[-1]
                bool o_41 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_41)
                    sub_403010()
                    noreturn
                
                sub_4f1e48(ecx_26, 0, data_5302e4 + ebp_1[-1] * 0x8d14 - 0x8d14)
                esp_9 = esp_63
            
            *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
            *(*data_5301f4 + 0x10260) = (ebp_1[-8]).w
            *(*data_5301f4 + 0x10250) = 3
        else if (arg6 == 5)
            int16_t* esi_11
            int16_t* edi_8
            edi_8, esi_11 = __builtin_memcpy(&var_35e, *data_5301f4 + 0x10280, 0x318)
            *edi_8 = *esi_11
            
            if (i_48 == 0)
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = 0
                *(esp_9 - 0x14) = "ATTENTION! Save-error in amove.amtAnlegen("
                int32_t var_1310
                sub_408e1c(i_49, &var_1310)
                *(esp_9 - 0x18) = var_1310
                *(esp_9 - 0x1c) = &data_4f0b78
                int32_t var_1314
                sub_408e1c(arg2, &var_1314)
                *(esp_9 - 0x20) = var_1314
                *(esp_9 - 0x24) = &data_4f0b6c
                int32_t var_1318
                sub_408e1c(i_53, &var_1318)
                *(esp_9 - 0x28) = var_1318
                *(esp_9 - 0x2c) = &data_4f0b78
                int32_t var_131c
                sub_408e1c(arg8, &var_131c)
                *(esp_9 - 0x30) = var_131c
                *(esp_9 - 0x34) = "): cg.gs.bl.selhand is empty"
                char* var_130c
                sub_404138(&var_130c, 9)
                sub_4748fc(*data_530304, var_130c, 0)
            
            int32_t var_44_1 = 0x76adf1
            sub_517b44(&var_992)
            bool o_47 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_47)
                sub_403010()
                noreturn
            
            int32_t i_31 = sx.d((*(data_5301b0 + i_49 * 0x8d14 - 0x39c)).w)
            
            if (i_31 s> 0)
                void* ebx_5 = &var_caa
                int32_t i_6
                
                do
                    *ebx_5 = 0
                    ebx_5 += 4
                    i_6 = i_31
                    i_31 -= 1
                while (i_6 != 1)
            
            int32_t i_32 = sx.d(i_48)
            
            if (i_32 s> 0)
                void* ebx_6 = &var_35c
                int32_t i_7
                
                do
                    bool o_48 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                    
                    if (o_48)
                        sub_403010()
                        noreturn
                    
                    sub_517a38(&var_992, *(data_5301b0 + i_49 * 0x8d14 + (sx.d(*ebx_6) << 2) - 0x368))
                    (&var_cae)[sx.d(*ebx_6)][0] = 1
                    ebx_6 += 4
                    i_7 = i_32
                    i_32 -= 1
                while (i_7 != 1)
            
            bool o_49 = unimplemented  {imul eax, dword [ebp+0x10], 0x35}
            
            if (o_49)
                sub_403010()
                noreturn
            
            int32_t var_30_2 = *(data_5301b0 + arg8 * 0xd4 + 0x60f58)
            bool o_50 = unimplemented  {imul eax, dword [ebp+0x10], 0x35}
            
            if (o_50)
                sub_403010()
                noreturn
            
            int32_t var_20_2 = *(data_5301b0 + arg8 * 0xd4 + 0x60f5c)
            int32_t var_3c_2 = 0
            int32_t i_33 = sx.d(i_48)
            
            if (i_33 s> 0)
                int32_t var_28_2 = 1
                void* ebx_7 = &var_992
                void* esi_13 = &var_35c
                int32_t i_8
                
                do
                    int32_t eax_162 = *(data_5301b0 + 0x69954)
                    int32_t eax_163 = eax_162 + ebp_1[-9]
                    
                    if (add_overflow(eax_162, ebp_1[-9]))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_163, neg.d(ebp_1[-0xe])))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-5] = eax_163 - ebp_1[-0xe]
                    ebp_1[-0xd] = sub_517cd8(&ebp_1[-0x19d], *ebx_7)
                    
                    if (*(*data_5301f4 + 4) == 3 && *(&ebp_1[ebp_1[-0xd]] - 0x676) == 0x1bc)
                        int32_t temp148_1 = ebp_1[-0xe]
                        ebp_1[-0xe] += 1
                        
                        if (add_overflow(temp148_1, 1))
                            sub_403010()
                            noreturn
                        
                        sub_51b920(*data_52ffd0, ebp_1[-0xb], &ebp_1[-0x4bc])
                        ebp_1[-5] = sub_517c04(&ebp_1[-0x4bc], 0xe)
                        sub_51b920(*data_52ffd0, ebp_1[-0xb], &ebp_1[-0x4bc])
                        ebp_1[-5] = sx.d(*(&ebp_1[ebp_1[-5]] - 0x12f2))
                        ebp_1[-5]
                        bool o_54 = unimplemented  {imul eax, dword [ebp-0x14], 0x35}
                        
                        if (o_54)
                            sub_403010()
                            noreturn
                        
                        if (*(data_5301b0 + ebp_1[-5] * 0xd4 + 0x60f08) != 0xe)
                            *(esp_9 - 4) = 0
                            *(esp_9 - 8) = 0
                            *(esp_9 - 0xc) = 0
                            *(esp_9 - 0x10) = 0
                            *(esp_9 - 0x14) = "ATTENTION! No Joker at "
                            sub_408e1c(ebp_1[-0xb], &ebp_1[-0x4c8])
                            *(esp_9 - 0x18) = ebp_1[-0x4c8]
                            *(esp_9 - 0x1c) = &data_4f0b78
                            sub_408e1c(ebp_1[-5], &ebp_1[-0x4c9])
                            *(esp_9 - 0x20) = ebp_1[-0x4c9]
                            sub_404138(&ebp_1[-0x4c7], 4)
                            esp_9 += 0x14
                            sub_4748fc(*data_530304, ebp_1[-0x4c7], 0)
                    
                    *(ebx_7 + 2) = (ebp_1[-0xd]).w
                    ebp_1[-5]
                    int32_t eax_185 = ebp_1[-5] * 0x35
                    bool o_55 = unimplemented  {imul eax, dword [ebp-0x14], 0x35}
                    
                    if (o_55)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + (eax_185 << 2) + 0x60f58) = ebp_1[-0xb]
                    *(data_5301b0 + (eax_185 << 2) + 0x60f5c) = ebp_1[-0xd]
                    int32_t eax_186 = sx.d(*esi_13)
                    ebp_1[-0x10] = eax_186
                    *(esp_9 - 4) = ebp_1[-5]
                    *(esp_9 - 8) = 1
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 2
                    *(esp_9 - 0x14) = 0
                    *(esp_9 - 0x18) = 0xffffffff
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    ebp_1 = sub_503984(ebp_1[-1], eax_186, ebp_1[-3])
                    ebp_1[-9] += 1
                    esi_13 += 4
                    ebx_7 += 4
                    i_8 = i_33
                    i_33 -= 1
                while (i_8 != 1)
            
            if (ebp_1[-0x10] == 0x76adf1)
                ebp_1[-0x10] = sx.d(ebp_1[sx.d(*(ebp_1 - 0xc2)) - 0xd7].w)
            
            if (ebp_1[-0x10] == 0x76adf1)
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = 0
                *(esp_9 - 0x14) = "ATTENTION! Save-error in amove.amtAnlegen("
                sub_408e1c(ebp_1[-1], &ebp_1[-0x4cb])
                *(esp_9 - 0x18) = ebp_1[-0x4cb]
                *(esp_9 - 0x1c) = &data_4f0b78
                sub_408e1c(ebp_1[-2], &ebp_1[-0x4cc])
                *(esp_9 - 0x20) = ebp_1[-0x4cc]
                *(esp_9 - 0x24) = &data_4f0b6c
                sub_408e1c(ebp_1[-3], &ebp_1[-0x4cd])
                *(esp_9 - 0x28) = ebp_1[-0x4cd]
                *(esp_9 - 0x2c) = &data_4f0b78
                sub_408e1c(ebp_1[4], &ebp_1[-0x4ce])
                *(esp_9 - 0x30) = ebp_1[-0x4ce]
                *(esp_9 - 0x34) = "): movei not set!"
                sub_404138(&ebp_1[-0x4ca], 9)
                sub_4748fc(*data_530304, ebp_1[-0x4ca], 0)
                ebp_1[-0x10] = sx.d(ebp_1[-0xd6].w)
            
            *(esp_9 - 4) = &ebp_1[-0x19d]
            *(esp_9 - 8) = ebp_1[-0xb]
            *(esp_9 - 0xc) = ebp_1[-0xd]
            *(esp_9 - 0x10) = ebp_1[-1]
            *(esp_9 - 0x14) = ebp_1[-0x10]
            ebp_1[-0xb]
            bool o_56 = unimplemented  {imul eax, dword [ebp-0x2c], 0x41}
            
            if (o_56)
                sub_403010()
                noreturn
            
            int32_t eax_204 = sx.d(*(*data_52ffd0 + ebp_1[-0xb] * 0x104))
            int32_t edx_104 = sx.d(*(ebp_1 - 0x6f6))
            
            if (add_overflow(eax_204, edx_104))
                sub_403010()
                noreturn
            
            int32_t eax_205
            eax_205.b = eax_204 + edx_104 s> sx.d(ebp_1[-0xf7].w)
            *(esp_9 - 0x18) = eax_205
            *(esp_9 - 0x1c) = ebp_1[-5]
            *(esp_9 - 0x20) = 0x3f800000
            sub_51bd00(ebp_1 - 0x98e, *data_5301f4 + 0x10280, *data_52ffd0)
            void* esp_126 = esp_9
            
            if (*(*data_52ffd0 + 0x3d01) != 0)
                *(esp_126 - 4) = 1
                *(esp_126 - 8) = 1
                *(esp_126 - 0xc) = 2
                *(esp_126 - 0x10) = 3
                *(esp_126 - 0x14) = 0
                *(esp_126 - 0x18) = 0
                *(esp_126 - 0x1c) = 0
                esp_126 -= 0x1c
                int32_t ecx_37 = ebp_1[-1]
                
                if (neg.d(ecx_37) == 0x80000000)
                    sub_403010()
                    noreturn
                
                ebp_1 = sub_503984(0xc, *(*data_52ffd0 + 0x3d08), neg.d(ecx_37))
                void* eax_217 = *data_52ffd0
                *(eax_217 + 0x3d08)
                bool o_59 = unimplemented  {imul eax, dword [eax+0x3d08], 0x35}
                
                if (o_59)
                    sub_403010()
                    noreturn
                
                ebp_1[-1]
                bool o_60 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                
                if (o_60)
                    sub_403010()
                    noreturn
                
                *(data_5302e4 + ebp_1[-1] * 0x8d14 - 0x8d14) =
                    *(data_5301b0 + *(eax_217 + 0x3d08) * 0xd4 + 0x60f08)
                *(*data_52ffd0 + 0x3d10) = ebp_1[*(*data_52ffd0 + 0x3d04) - 0x19e]
            
            ebp_1[-8] = sx.d(ebp_1[-0xd6].w)
            ebp_1[-0xc] = 0
            
            if (*(*data_52ffd0 + 0x3d01) != 0)
                int32_t temp162_1 = ebp_1[-0xc]
                ebp_1[-0xc] -= 1
                
                if (add_overflow(temp162_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            ebp_1[-1]
            bool o_62 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_62)
                sub_403010()
                noreturn
            
            int32_t i_34 = *(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c)
            
            if (i_34 s> 0)
                ebp_1[-4] = 1
                void* esi_14 = ebp_1 - 0xca6
                void* ebx_9 = data_5301b0 + 0xd4
                int32_t i_9
                
                do
                    if (*esi_14 != 0)
                        int32_t temp218_1 = ebp_1[-0xc]
                        ebp_1[-0xc] += 1
                        
                        if (add_overflow(temp218_1, 1))
                            sub_403010()
                            noreturn
                    else
                        ebp_1[-1]
                        bool o_63 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                        
                        if (o_63)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_114 = ebp_1[-4]
                        
                        if (add_overflow(edx_114, neg.d(ebp_1[-0xc])))
                            sub_403010()
                            noreturn
                        
                        bool o_65 = unimplemented  {imul edx, edx, 0x35}
                        
                        if (o_65)
                            sub_403010()
                            noreturn
                        
                        ebp_1[-1]
                        bool o_66 = unimplemented  {imul ecx, dword [ebp-0x4], 0x2345}
                        
                        if (o_66)
                            sub_403010()
                            noreturn
                        
                        *(data_5302e4 + ebp_1[-1] * 0x8d14 + (edx_114 - ebp_1[-0xc]) * 0xd4 - 0x8de8) =
                            *(ebx_9 + ebp_1[-1] * 0x8d14 - 0x8de8)
                        int32_t eax_230 = ebp_1[-4]
                        
                        if (add_overflow(eax_230, neg.d(ebp_1[-0xc])))
                            sub_403010()
                            noreturn
                        
                        *(esp_126 - 4) = eax_230 - ebp_1[-0xc]
                        *(esp_126 - 8) = 0
                        *(esp_126 - 0xc) = 2
                        *(esp_126 - 0x10) = 1
                        *(esp_126 - 0x14) = 0
                        *(esp_126 - 0x18) = 0xffffffff
                        *(esp_126 - 0x1c) = 0
                        esp_126 -= 0x1c
                        int32_t ecx_42 = ebp_1[-1]
                        
                        if (neg.d(ecx_42) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        ebp_1 = sub_503984(ebp_1[-1], ebp_1[-4], neg.d(ecx_42))
                        ebp_1[-8] = ebp_1[-4]
                    
                    ebp_1[-4] += 1
                    ebx_9 += 0xd4
                    esi_14 += 4
                    i_9 = i_34
                    i_34 -= 1
                while (i_9 != 1)
            
            if (*(*data_52ffd0 + 0x3d01) == 0)
                ebp_1[-1]
                bool o_76 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_76)
                    sub_403010()
                    noreturn
                
                int32_t eax_244 = *(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c)
                int32_t edx_125 = sx.d(*(ebp_1 - 0x6f6))
                
                if (add_overflow(eax_244, neg.d(edx_125)))
                    sub_403010()
                    noreturn
                
                ebp_1[-1]
                bool o_78 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                
                if (o_78)
                    sub_403010()
                    noreturn
                
                void* ecx_45 = data_5302e4
                *(ecx_45 + ebp_1[-1] * 0x8d14 - 0x39c) = eax_244 - edx_125
                ebp_1[-1]
                bool o_79 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_79)
                    sub_403010()
                    noreturn
                
                *(esp_126 - 4) = fconvert.s(float.t(*(data_5302e4 + ebp_1[-1] * 0x8d14 - 0x39c)))
                ebp_1[-1]
                bool o_80 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_80)
                    sub_403010()
                    noreturn
                
                sub_4f1e48(ecx_45, 0, data_5302e4 + ebp_1[-1] * 0x8d14 - 0x8d14)
                esp_9 = esp_126
            else
                ebp_1[-1]
                bool o_70 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_70)
                    sub_403010()
                    noreturn
                
                int32_t eax_237 = *(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c)
                int32_t edx_119 = sx.d(*(ebp_1 - 0x6f6))
                int32_t eax_238 = eax_237 - edx_119
                
                if (add_overflow(eax_237, neg.d(edx_119)))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_238, 1))
                    sub_403010()
                    noreturn
                
                ebp_1[-1]
                bool o_73 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                
                if (o_73)
                    sub_403010()
                    noreturn
                
                void* ecx_44 = data_5302e4
                *(ecx_44 + ebp_1[-1] * 0x8d14 - 0x39c) = eax_238 + 1
                ebp_1[-1]
                bool o_74 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_74)
                    sub_403010()
                    noreturn
                
                *(esp_126 - 4) = fconvert.s(float.t(*(data_5302e4 + ebp_1[-1] * 0x8d14 - 0x39c)))
                ebp_1[-1]
                bool o_75 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                
                if (o_75)
                    sub_403010()
                    noreturn
                
                sub_4f1e48(ecx_44, 0, data_5302e4 + ebp_1[-1] * 0x8d14 - 0x8d14)
                esp_9 = esp_126
            
            *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
            *(*data_5301f4 + 0x10260) = (ebp_1[-8]).w
            *(*data_5301f4 + 0x10250) = 3
        else if (arg6 == 4)
            int32_t var_18_1 = *(data_5301b0 + 0x69954)
            int32_t var_30_3 = sub_51bf18(*data_52ffd0, *(*data_5301f4 + 0x10020), i_48)
            int32_t i_35 = sx.d(i_48)
            
            if (i_35 s> 0)
                int32_t var_14_2 = 1
                void* ebx_10 = &var_35c
                int32_t i_10
                
                do
                    int32_t temp17_1 = ebp_1[-5]
                    ebp_1[-5] += 1
                    
                    if (add_overflow(temp17_1, 1))
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = ebp_1[-5]
                    *(esp_9 - 8) = 1
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 2
                    int32_t eax_261 = ebp_1[-4]
                    
                    if (add_overflow(eax_261, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-0x4cf] = eax_261 - 1
                    *(esp_9 - 0x14) = fconvert.s(float.t(ebp_1[-0x4cf]) * data_4f0c38)
                    *(esp_9 - 0x18) = 0xffffffff
                    int32_t eax_263 = sx.d(*(ebp_1 - 0xc2))
                    int32_t eax_264 = eax_263 - ebp_1[-4]
                    
                    if (add_overflow(eax_263, neg.d(ebp_1[-4])))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_264, 1))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-0x4d0] = eax_264 + 1
                    esp_9 -= 0x1c
                    *esp_9 = fconvert.s(float.t(ebp_1[-0x4d0]) * fconvert.t(0f))
                    ebp_1 = sub_503984(ebp_1[-1], sx.d(*ebx_10), ebp_1[-3])
                    ebp_1[-5]
                    int32_t eax_267 = ebp_1[-5] * 0x35
                    bool o_85 = unimplemented  {imul eax, dword [ebp-0x14], 0x35}
                    
                    if (o_85)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + (eax_267 << 2) + 0x60f58) = ebp_1[-0xb]
                    *(data_5301b0 + (eax_267 << 2) + 0x60f5c) = ebp_1[-4]
                    *(data_5301b0 + (eax_267 << 2) + 0x60f08) = *(ebx_10 - 2)
                    ebp_1[-8] = sx.d(*ebx_10)
                    ebp_1[-4] += 1
                    ebx_10 += 4
                    i_10 = i_35
                    i_35 -= 1
                while (i_10 != 1)
            
            ebp_1[-0xc] = 0
            void* eax_270 = *data_5301f4
            *(eax_270 + 0x10020)
            bool o_86 = unimplemented  {imul eax, dword [eax+0x10020], 0x2345}
            
            if (o_86)
                sub_403010()
                noreturn
            
            int32_t i_36 = *(data_5301b0 + *(eax_270 + 0x10020) * 0x8d14 - 0x39c)
            
            if (i_36 s> 0)
                ebp_1[-4] = 1
                void* ebx_12 = data_5301b0 + 0xd4
                int32_t i_11
                
                do
                    void* edx_141 = *data_5301f4
                    *(edx_141 + 0x10020)
                    bool o_87 = unimplemented  {imul edx, dword [edx+0x10020], 0x2345}
                    
                    if (o_87)
                        sub_403010()
                        noreturn
                    
                    *(ebx_12 + *(edx_141 + 0x10020) * 0x8d14 - 0x8de6) = (ebp_1[-4]).w
                    void* eax_274 = *data_5301f4
                    *(eax_274 + 0x10020)
                    bool o_88 = unimplemented  {imul eax, dword [eax+0x10020], 0x2345}
                    
                    if (o_88)
                        sub_403010()
                        noreturn
                    
                    if (sub_518248(ebp_1 - 0x35a, *(ebx_12 + *(eax_274 + 0x10020) * 0x8d14 - 0x8de8))
                            == 0)
                        ebp_1[-1]
                        bool o_90 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                        
                        if (o_90)
                            sub_403010()
                            noreturn
                        
                        int32_t edx_145 = ebp_1[-4]
                        
                        if (add_overflow(edx_145, neg.d(ebp_1[-0xc])))
                            sub_403010()
                            noreturn
                        
                        bool o_92 = unimplemented  {imul edx, edx, 0x35}
                        
                        if (o_92)
                            sub_403010()
                            noreturn
                        
                        ebp_1[-1]
                        bool o_93 = unimplemented  {imul ecx, dword [ebp-0x4], 0x2345}
                        
                        if (o_93)
                            sub_403010()
                            noreturn
                        
                        *(data_5302e4 + ebp_1[-1] * 0x8d14 + (edx_145 - ebp_1[-0xc]) * 0xd4 - 0x8de8) =
                            *(ebx_12 + ebp_1[-1] * 0x8d14 - 0x8de8)
                        int32_t eax_280 = ebp_1[-4]
                        
                        if (add_overflow(eax_280, neg.d(ebp_1[-0xc])))
                            sub_403010()
                            noreturn
                        
                        *(esp_9 - 4) = eax_280 - ebp_1[-0xc]
                        *(esp_9 - 8) = 0
                        *(esp_9 - 0xc) = 2
                        *(esp_9 - 0x10) = 1
                        *(esp_9 - 0x14) = fconvert.s(float.t(*(ebp_1 - 0xc2)) * data_4f0c38)
                        *(esp_9 - 0x18) = 0xffffffff
                        *(esp_9 - 0x1c) = 0
                        esp_9 -= 0x1c
                        int32_t ecx_53 = ebp_1[-1]
                        
                        if (neg.d(ecx_53) == 0x80000000)
                            sub_403010()
                            noreturn
                        
                        ebp_1 = sub_503984(ebp_1[-1], ebp_1[-4], neg.d(ecx_53))
                        ebp_1[-8] = ebp_1[-4]
                    else
                        int32_t temp52_1 = ebp_1[-0xc]
                        ebp_1[-0xc] += 1
                        
                        if (add_overflow(temp52_1, 1))
                            sub_403010()
                            noreturn
                    
                    ebp_1[-4] += 1
                    ebx_12 += 0xd4
                    i_11 = i_36
                    i_36 -= 1
                while (i_11 != 1)
            
            ebp_1[-1]
            bool o_96 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_96)
                sub_403010()
                noreturn
            
            int32_t eax_285 = *(data_5301b0 + ebp_1[-1] * 0x8d14 - 0x39c)
            int32_t edx_150 = sx.d(*(ebp_1 - 0xc2))
            
            if (add_overflow(eax_285, neg.d(edx_150)))
                sub_403010()
                noreturn
            
            ebp_1[-1]
            bool o_98 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
            
            if (o_98)
                sub_403010()
                noreturn
            
            void* ecx_55 = data_5302e4
            *(ecx_55 + ebp_1[-1] * 0x8d14 - 0x39c) = eax_285 - edx_150
            ebp_1[-1]
            bool o_99 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_99)
                sub_403010()
                noreturn
            
            *(esp_9 - 4) = fconvert.s(float.t(*(data_5302e4 + ebp_1[-1] * 0x8d14 - 0x39c)))
            ebp_1[-1]
            bool o_100 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_100)
                sub_403010()
                noreturn
            
            sub_4f1e48(ecx_55, 0, data_5302e4 + ebp_1[-1] * 0x8d14 - 0x8d14)
            *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
            *(*data_5301f4 + 0x10260) = (ebp_1[-8]).w
            *(*data_5301f4 + 0x10250) = 3
        else if (arg6 != 3)
            if (arg6 == 2)
                *(esp_9 - 4) = 0
                sub_503538(0xffffffff, arg2, i_49)
                *(*data_5301f4 + 0x1025e) = i_49.w
                int32_t eax_337 = arg2 + arg7
                
                if (add_overflow(arg2, arg7))
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_337, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *(*data_5301f4 + 0x10260) = eax_337.w - 1
                *(*data_5301f4 + 0x10250) = 3
            else if (arg6 == 0)
                if (i_49 == 0xd && i_53 s> 0 && i_53 s<= 0xa)
                    if (add_overflow(arg7, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (arg7 - 1 s>= 0)
                        int32_t i_38 = arg7
                        int32_t var_14_5 = 0
                        int32_t i_12
                        
                        do
                            int32_t eax_343 = ebp_1[4]
                            
                            if (add_overflow(eax_343, ebp_1[-4]))
                                sub_403010()
                                noreturn
                            
                            *(esp_9 - 4) = eax_343 + ebp_1[-4]
                            *(esp_9 - 8) = 1
                            *(esp_9 - 0xc) = 2
                            *(esp_9 - 0x10) = 0xe
                            *(esp_9 - 0x14) = 0
                            *(esp_9 - 0x18) = 0
                            *(esp_9 - 0x1c) = 0
                            esp_9 -= 0x1c
                            int32_t edx_192 = ebp_1[-2]
                            
                            if (add_overflow(edx_192, ebp_1[-4]))
                                sub_403010()
                                noreturn
                            
                            ebp_1 = sub_503984(ebp_1[-1], edx_192 + ebp_1[-4], ebp_1[-3])
                            ebp_1[-4] += 1
                            i_12 = i_38
                            i_38 -= 1
                        while (i_12 != 1)
                    
                    *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
                    int32_t eax_347 = ebp_1[-2]
                    int32_t eax_348 = eax_347 + ebp_1[3]
                    
                    if (add_overflow(eax_347, ebp_1[3]))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_348, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    *(*data_5301f4 + 0x10260) = eax_348.w - 1
                    *(*data_5301f4 + 0x10250) = 3
                else if ((i_49 - 0xc u< 2 || i_49 == 0x10) && i_53 s> 0 && i_53 s<= 0xa)
                    if (arg7 != 1)
                        if (add_overflow(arg7, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (arg7 - 1 s>= 0)
                            int32_t i_39 = arg7
                            int32_t var_14_7 = 0
                            int32_t i_13
                            
                            do
                                int32_t eax_373 = ebp_1[4]
                                
                                if (add_overflow(eax_373, neg.d(ebp_1[-4])))
                                    sub_403010()
                                    noreturn
                                
                                *(esp_9 - 4) = eax_373 - ebp_1[-4]
                                *(esp_9 - 8) = 1
                                *(esp_9 - 0xc) = 2
                                *(esp_9 - 0x10) = 3
                                *(esp_9 - 0x14) = 0
                                *(esp_9 - 0x18) = 0
                                *(esp_9 - 0x1c) = 0
                                esp_9 -= 0x1c
                                int32_t ecx_68 = ebp_1[-3]
                                
                                if (neg.d(ecx_68) == 0x80000000)
                                    sub_403010()
                                    noreturn
                                
                                int32_t edx_210 = ebp_1[-2]
                                
                                if (add_overflow(edx_210, neg.d(ebp_1[-4])))
                                    sub_403010()
                                    noreturn
                                
                                ebp_1 = sub_503984(ebp_1[-1], edx_210 - ebp_1[-4], neg.d(ecx_68))
                                ebp_1[-4] += 1
                                i_13 = i_39
                                i_39 -= 1
                            while (i_13 != 1)
                        
                        *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
                        *(*data_5301f4 + 0x10260) = (ebp_1[-2]).w
                    else
                        *(esp_9 - 4) = 0
                        *(esp_9 - 8) = i_49
                        *(esp_9 - 0xc) = arg2
                        sub_502b8c(i_53, arg7, 0, arg4, arg5)
                        esp_9 += 0x24
                        bool o_134 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                        
                        if (o_134)
                            sub_403010()
                            noreturn
                        
                        int32_t edi_18 = *(data_5301b0 + i_49 * 0x8d14 - 0x39c)
                        
                        if (add_overflow(edi_18, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (edi_18 - 1 s>= arg2)
                            int32_t edi_21 = edi_18 - 1 - arg2 + 1
                            bool o_136 = unimplemented  {imul eax, dword [ebp-0x10], 0x35}
                            
                            if (o_136)
                                sub_403010()
                                noreturn
                            
                            void* esi_18 = data_5301b0 + arg2 * 0xd4
                            bool o_137 = unimplemented  {imul eax, dword [ebp-0x10], 0x35}
                            
                            if (o_137)
                                sub_403010()
                                noreturn
                            
                            void* ebx_14 = data_5302e4 + arg2 * 0xd4
                            int32_t i_14
                            
                            do
                                ebp_1[-1]
                                bool o_138 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                                
                                if (o_138)
                                    sub_403010()
                                    noreturn
                                
                                ebp_1[-1]
                                bool o_139 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                                
                                if (o_139)
                                    sub_403010()
                                    noreturn
                                
                                *(ebx_14 + ebp_1[-1] * 0x8d14 - 0x8de8) =
                                    *(esi_18 + ebp_1[-1] * 0x8d14 - 0x8d14)
                                *(esp_9 - 4) = ebp_1[-4]
                                *(esp_9 - 8) = 0
                                *(esp_9 - 0xc) = 2
                                *(esp_9 - 0x10) = 1
                                *(esp_9 - 0x14) = 0
                                *(esp_9 - 0x18) = 0
                                *(esp_9 - 0x1c) = 0
                                int32_t edx_203 = ebp_1[-4]
                                
                                if (add_overflow(edx_203, 1))
                                    sub_403010()
                                    noreturn
                                
                                ebp_1 = sub_503984(ebp_1[-1], edx_203 + 1, ebp_1[-1])
                                ebp_1[-1]
                                int32_t eax_367 = ebp_1[-1] * 0x2345
                                bool o_141 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                                
                                if (o_141)
                                    sub_403010()
                                    noreturn
                                
                                ebp_1[-1]
                                int32_t edx_205 = ebp_1[-1] * 0x2345
                                bool o_142 = unimplemented  {imul edx, dword [ebp-0x4], 0x2345}
                                
                                if (o_142)
                                    sub_403010()
                                    noreturn
                                
                                *(esp_9 - 0x20) = esi_18
                                *(esp_9 - 0x24) = edi_21
                                __builtin_memcpy(ebx_14 + (edx_205 << 2) - 0x8de4, 
                                    esi_18 + (eax_367 << 2) - 0x8de4, 0x58)
                                i_14 = *(esp_9 - 0x24)
                                void* esi_20 = *(esp_9 - 0x20)
                                esp_9 -= 0x1c
                                ebp_1[-1]
                                bool o_143 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
                                
                                if (o_143)
                                    sub_403010()
                                    noreturn
                                
                                *(ebx_14 + ebp_1[-1] * 0x8d14 - 0x8ddc) = 0xc2c20000
                                ebp_1[-4] += 1
                                ebx_14 += 0xd4
                                esi_18 = esi_20 + 0xd4
                                edi_21 = i_14 - 1
                            while (i_14 != 1)
                        
                        *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
                        int32_t eax_370 = ebp_1[-2]
                        int32_t eax_371 = eax_370 - ebp_1[3]
                        
                        if (add_overflow(eax_370, neg.d(ebp_1[3])))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_371, 1))
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + 0x10260) = eax_371.w + 1
                    
                    *(*data_5301f4 + 0x10250) = 3
                else
                    int32_t i_50 = i_49
                    
                    if ((i_50 == 0xb || i_50 == 0xf) && i_53 s> 0 && i_53 s<= 0xa)
                        *(esp_9 - 4) = 0
                        *(esp_9 - 8) = 0xb
                        *(esp_9 - 0xc) = 0
                        sub_502b8c(i_53, arg7, 0, arg4, arg5)
                        esp_9 += 0x24
                        *(*data_5301f4 + 0x1025e) = 0xb
                        int32_t eax_386 = arg2 - arg7
                        
                        if (add_overflow(arg2, neg.d(arg7)))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_386, 1))
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + 0x10260) = eax_386.w + 1
                        *(*data_5301f4 + 0x10250) = 3
                    else if (i_49 == 0xb && i_53 == 0xf)
                        if (add_overflow(arg7, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (arg7 - 1 s>= 0)
                            int32_t i_40 = arg7
                            int32_t var_14_8 = 0
                            int32_t i_15
                            
                            do
                                int32_t eax_390 = ebp_1[4]
                                
                                if (add_overflow(eax_390, neg.d(ebp_1[-4])))
                                    sub_403010()
                                    noreturn
                                
                                *(esp_9 - 4) = eax_390 - ebp_1[-4]
                                *(esp_9 - 8) = 1
                                *(esp_9 - 0xc) = 2
                                *(esp_9 - 0x10) = 0xe
                                *(esp_9 - 0x14) = 0
                                *(esp_9 - 0x18) = 0
                                *(esp_9 - 0x1c) = 0
                                esp_9 -= 0x1c
                                int32_t edx_219 = ebp_1[-2]
                                
                                if (add_overflow(edx_219, neg.d(ebp_1[-4])))
                                    sub_403010()
                                    noreturn
                                
                                ebp_1 = sub_503984(0xb, edx_219 - ebp_1[-4], 0xf)
                                ebp_1[-4] += 1
                                i_15 = i_40
                                i_40 -= 1
                            while (i_15 != 1)
                        
                        *(*data_5301f4 + 0x1025e) = 0xb
                        int32_t eax_395 = ebp_1[-2]
                        int32_t eax_396 = eax_395 - ebp_1[3]
                        
                        if (add_overflow(eax_395, neg.d(ebp_1[3])))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_396, 1))
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + 0x10260) = eax_396.w + 1
                        *(*data_5301f4 + 0x10250) = 3
                    else if (i_49 s<= 0 || i_49 s> 0xa || (i_53 - 0xc u>= 2 && i_53 != 0x10))
                        int32_t i_51 = i_49
                        
                        if ((i_51 == 0xb || i_51 == 0xf) && i_53 == 0xc)
                            if (*(data_530598 + 0x14) s<= 2)
                                if (add_overflow(arg7, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                if (arg7 - 1 s>= 0)
                                    int32_t i_42 = arg7
                                    int32_t var_14_10 = 0
                                    int32_t i_16
                                    
                                    do
                                        if (add_overflow(arg8, var_14_10))
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_9 - 4) = arg8 + var_14_10
                                        *(esp_9 - 8) = 0
                                        *(esp_9 - 0xc) = 3
                                        *(esp_9 - 0x10) = 7
                                        *(esp_9 - 0x14) =
                                            fconvert.s(float.t(var_14_10) * fconvert.t(0.25f))
                                        *(esp_9 - 0x18) = arg7
                                        
                                        if (add_overflow(arg2, neg.d(var_14_10)))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4f0d44(0xc, arg2 - var_14_10, 0xb)
                                        var_14_10 += 1
                                        i_16 = i_42
                                        i_42 -= 1
                                    while (i_16 != 1)
                            else if (*(data_530598 + 0x14) != 3)
                                if (add_overflow(arg7, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                if (arg7 - 1 s>= 0)
                                    int32_t i_44 = arg7
                                    int32_t var_14_12 = 0
                                    int32_t i_17
                                    
                                    do
                                        if (add_overflow(arg8, var_14_12))
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_9 - 4) = arg8 + var_14_12
                                        *(esp_9 - 8) = 0
                                        *(esp_9 - 0xc) = 3
                                        *(esp_9 - 0x10) = 7
                                        *(esp_9 - 0x14) = fconvert.s(float.t(var_14_12) * data_4f0b38)
                                        *(esp_9 - 0x18) = arg7
                                        
                                        if (add_overflow(arg2, neg.d(var_14_12)))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4f0d44(0xc, arg2 - var_14_12, 0xb)
                                        var_14_12 += 1
                                        i_17 = i_44
                                        i_44 -= 1
                                    while (i_17 != 1)
                            else
                                if (add_overflow(arg7, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                if (arg7 - 1 s>= 0)
                                    int32_t i_43 = arg7
                                    int32_t var_14_11 = 0
                                    int32_t i_18
                                    
                                    do
                                        if (add_overflow(arg8, var_14_11))
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_9 - 4) = arg8 + var_14_11
                                        *(esp_9 - 8) = 0
                                        *(esp_9 - 0xc) = 3
                                        *(esp_9 - 0x10) = 7
                                        *(esp_9 - 0x14) = fconvert.s(float.t(var_14_11) * data_4f0c38)
                                        *(esp_9 - 0x18) = arg7
                                        
                                        if (add_overflow(arg2, neg.d(var_14_11)))
                                            sub_403010()
                                            noreturn
                                        
                                        sub_4f0d44(0xc, arg2 - var_14_11, 0xb)
                                        var_14_11 += 1
                                        i_18 = i_43
                                        i_43 -= 1
                                    while (i_18 != 1)
                            
                            *(*data_5301f4 + 0x1025e) = 0xb
                            int32_t eax_436 = arg2 - arg7
                            
                            if (add_overflow(arg2, neg.d(arg7)))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_436, 1))
                                sub_403010()
                                noreturn
                            
                            *(*data_5301f4 + 0x10260) = eax_436.w + 1
                            *(*data_5301f4 + 0x10250) = 3
                        else if ((i_49 - 0xc u< 2 || i_49 == 0x10) && (i_53 - 0xc u< 2 || i_53 == 0x10))
                            if (add_overflow(arg7, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            if (arg7 - 1 s>= 0)
                                int32_t i_45 = arg7
                                int32_t var_14_13 = 0
                                int32_t i_19
                                
                                do
                                    int32_t eax_448 = ebp_1[4]
                                    
                                    if (add_overflow(eax_448, neg.d(ebp_1[-4])))
                                        sub_403010()
                                        noreturn
                                    
                                    *(esp_9 - 4) = eax_448 - ebp_1[-4]
                                    *(esp_9 - 8) = 1
                                    *(esp_9 - 0xc) = 2
                                    *(esp_9 - 0x10) = 0xf
                                    *(esp_9 - 0x14) = 0
                                    *(esp_9 - 0x18) = 0
                                    *(esp_9 - 0x1c) = 0
                                    esp_9 -= 0x1c
                                    int32_t edx_240 = ebp_1[-2]
                                    
                                    if (add_overflow(edx_240, neg.d(ebp_1[-4])))
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1 = sub_503984(ebp_1[-1], edx_240 - ebp_1[-4], ebp_1[-3])
                                    ebp_1[-4] += 1
                                    i_19 = i_45
                                    i_45 -= 1
                                while (i_19 != 1)
                            
                            *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
                            int32_t eax_452 = ebp_1[-2]
                            int32_t eax_453 = eax_452 - ebp_1[3]
                            
                            if (add_overflow(eax_452, neg.d(ebp_1[3])))
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_453, 1))
                                sub_403010()
                                noreturn
                            
                            *(*data_5301f4 + 0x10260) = eax_453.w + 1
                            *(*data_5301f4 + 0x10250) = 3
                        else
                            int32_t i_52 = i_49
                            
                            if ((i_52 == 0xb || i_52 == 0xf) && (i_53 == 0xb || i_53 == 0xf))
                                if (add_overflow(arg7, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                if (arg7 - 1 s>= 0)
                                    int32_t i_46 = arg7
                                    int32_t var_14_14 = 0
                                    int32_t i_20
                                    
                                    do
                                        int32_t eax_462 = ebp_1[4]
                                        
                                        if (add_overflow(eax_462, neg.d(ebp_1[-4])))
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_9 - 4) = eax_462 - ebp_1[-4]
                                        *(esp_9 - 8) = 1
                                        *(esp_9 - 0xc) = 2
                                        *(esp_9 - 0x10) = 0xe
                                        *(esp_9 - 0x14) = 0
                                        *(esp_9 - 0x18) = 0
                                        *(esp_9 - 0x1c) = 0
                                        esp_9 -= 0x1c
                                        int32_t edx_246 = ebp_1[-2]
                                        
                                        if (add_overflow(edx_246, neg.d(ebp_1[-4])))
                                            sub_403010()
                                            noreturn
                                        
                                        ebp_1 = sub_503984(ebp_1[-1], edx_246 - ebp_1[-4], ebp_1[-3])
                                        ebp_1[-4] += 1
                                        i_20 = i_46
                                        i_46 -= 1
                                    while (i_20 != 1)
                                
                                *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
                                int32_t eax_466 = ebp_1[-2]
                                int32_t eax_467 = eax_466 - ebp_1[3]
                                
                                if (add_overflow(eax_466, neg.d(ebp_1[3])))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_467, 1))
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + 0x10260) = eax_467.w + 1
                                *(*data_5301f4 + 0x10250) = 3
                            else if ((i_49 - 0xc u< 2 || i_49 == 0x10) && (i_53 == 0xb || i_53 == 0xf))
                                if (add_overflow(arg7, 0xffffffff))
                                    sub_403010()
                                    noreturn
                                
                                if (arg7 - 1 s>= 0)
                                    int32_t i_47 = arg7
                                    int32_t var_14_15 = 0
                                    int32_t i_21
                                    
                                    do
                                        int32_t eax_478 = ebp_1[4]
                                        
                                        if (add_overflow(eax_478, neg.d(ebp_1[-4])))
                                            sub_403010()
                                            noreturn
                                        
                                        *(esp_9 - 4) = eax_478 - ebp_1[-4]
                                        *(esp_9 - 8) = 1
                                        *(esp_9 - 0xc) = 3
                                        *(esp_9 - 0x10) = 7
                                        *(esp_9 - 0x14) = fconvert.s(float.t(ebp_1[-4]) * data_4f0b38
                                            * fconvert.t(0f))
                                        *(esp_9 - 0x18) = ebp_1[3]
                                        *(esp_9 - 0x1c) = 0
                                        esp_9 -= 0x1c
                                        int32_t edx_252 = ebp_1[-2]
                                        
                                        if (add_overflow(edx_252, neg.d(ebp_1[-4])))
                                            sub_403010()
                                            noreturn
                                        
                                        ebp_1 = sub_503984(ebp_1[-1], edx_252 - ebp_1[-4], ebp_1[-3])
                                        ebp_1[-4] += 1
                                        i_21 = i_47
                                        i_47 -= 1
                                    while (i_21 != 1)
                                
                                *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
                                int32_t eax_483 = ebp_1[-2]
                                int32_t eax_484 = eax_483 - ebp_1[3]
                                
                                if (add_overflow(eax_483, neg.d(ebp_1[3])))
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_484, 1))
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + 0x10260) = eax_484.w + 1
                                *(*data_5301f4 + 0x10250) = 3
                    else
                        if (arg7 s> 1)
                            if (add_overflow(arg7, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            if (arg7 - 1 s>= 0)
                                int32_t i_41 = arg7
                                int32_t var_14_9 = 0
                                int32_t i_22
                                
                                do
                                    ebp_1[-3]
                                    bool o_158 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
                                    
                                    if (o_158)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_405 = *(data_5301b0 + ebp_1[-3] * 0x8d14 - 0x39c)
                                    
                                    if (add_overflow(eax_405, 1))
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_405 + 1, ebp_1[-4]))
                                        sub_403010()
                                        noreturn
                                    
                                    *(esp_9 - 4) = eax_405 + 1 + ebp_1[-4]
                                    *(esp_9 - 8) = 1
                                    *(esp_9 - 0xc) = 2
                                    *(esp_9 - 0x10) = 2
                                    *(esp_9 - 0x14) = 0
                                    *(esp_9 - 0x18) = 0
                                    *(esp_9 - 0x1c) = 0
                                    esp_9 -= 0x1c
                                    int32_t edx_224 = ebp_1[-2]
                                    
                                    if (add_overflow(edx_224, ebp_1[-4]))
                                        sub_403010()
                                        noreturn
                                    
                                    ebp_1 = sub_503984(ebp_1[-1], edx_224 + ebp_1[-4], ebp_1[-3])
                                    ebp_1[-4] += 1
                                    i_22 = i_41
                                    i_41 -= 1
                                while (i_22 != 1)
                        else if (i_53 != 0xd)
                            *(esp_9 - 4) = 0
                            sub_503538(0xc, arg2, i_49)
                        else
                            *(esp_9 - 4) = 0
                            sub_503538(0xd, arg2, i_49)
                        
                        *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
                        int32_t eax_412 = ebp_1[-2]
                        int32_t eax_413 = eax_412 + ebp_1[3]
                        
                        if (add_overflow(eax_412, ebp_1[3]))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(eax_413, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + 0x10260) = eax_413.w - 1
                        *(*data_5301f4 + 0x10250) = 3
        else if (arg7 != 1)
            *(esp_9 - 4) = 0
            bool o_119 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_119)
                sub_403010()
                noreturn
            
            int32_t edx_179 = *(data_5301b0 + i_49 * 0x8d14 - 0x39c)
            
            if (add_overflow(edx_179, 0xfffffffe))
                sub_403010()
                noreturn
            
            bool o_121 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_121)
                sub_403010()
                noreturn
            
            sub_52c1b4(3, edx_179 - 2, data_5301b0 + i_49 * 0x8d14 - 0x8d14)
            
            if (add_overflow(arg7, 0xffffffff))
                sub_403010()
                noreturn
            
            if (arg7 - 1 s>= 0)
                int32_t i_37 = arg7
                int32_t var_14_4 = 0
                int32_t i_23
                
                do
                    int32_t eax_325 = ebp_1[4]
                    
                    if (add_overflow(eax_325, neg.d(ebp_1[-4])))
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = eax_325 - ebp_1[-4]
                    *(esp_9 - 8) = 0
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 1
                    *(esp_9 - 0x14) = 0
                    *(esp_9 - 0x18) = 0
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    int32_t edx_181 = ebp_1[-2]
                    
                    if (add_overflow(edx_181, neg.d(ebp_1[-4])))
                        sub_403010()
                        noreturn
                    
                    ebp_1 = sub_503984(ebp_1[-1], edx_181 - ebp_1[-4], ebp_1[-3])
                    ebp_1[-4] += 1
                    i_23 = i_37
                    i_37 -= 1
                while (i_23 != 1)
            
            *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
            int32_t eax_329 = ebp_1[-2]
            int32_t eax_330 = eax_329 + ebp_1[3]
            
            if (add_overflow(eax_329, ebp_1[3]))
                sub_403010()
                noreturn
            
            if (add_overflow(eax_330, 0xffffffff))
                sub_403010()
                noreturn
            
            *(*data_5301f4 + 0x10260) = eax_330.w - 1
            *(*data_5301f4 + 0x10250) = 3
        else
            bool o_101 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
            
            if (o_101)
                sub_403010()
                noreturn
            
            bool o_102 = unimplemented  {imul edx, dword [ebp-0x8], 0x35}
            
            if (o_102)
                sub_403010()
                noreturn
            
            bool o_103 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
            
            if (o_103)
                sub_403010()
                noreturn
            
            int32_t eax_298 = sub_52c15c(data_5301b0 + i_53 * 0x8d14 - 0x8d14, 
                *(data_5301b0 + i_49 * 0x8d14 + arg2 * 0xd4 - 0x8de8))
            bool o_104 = unimplemented  {imul edx, dword [ebp-0xc], 0x2345}
            
            if (o_104)
                sub_403010()
                noreturn
            
            int32_t edi_10 = *(data_5301b0 + i_53 * 0x8d14 - 0x39c)
            
            if (edi_10 s>= eax_298)
                int32_t edi_12 = edi_10 - eax_298 + 1
                bool o_105 = unimplemented  {imul eax, dword [ebp-0x10], 0x35}
                
                if (o_105)
                    sub_403010()
                    noreturn
                
                void* ebx_13 = data_5301b0 + eax_298 * 0xd4
                bool o_106 = unimplemented  {imul eax, dword [ebp-0x10], 0x35}
                
                if (o_106)
                    sub_403010()
                    noreturn
                
                void* esi_15 = data_5302e4 + eax_298 * 0xd4
                int32_t i_24
                
                do
                    ebp_1[-3]
                    bool o_107 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
                    
                    if (o_107)
                        sub_403010()
                        noreturn
                    
                    ebp_1[-3]
                    bool o_108 = unimplemented  {imul edx, dword [ebp-0xc], 0x2345}
                    
                    if (o_108)
                        sub_403010()
                        noreturn
                    
                    *(esi_15 + ebp_1[-3] * 0x8d14 - 0x8d14) = *(ebx_13 + ebp_1[-3] * 0x8d14 - 0x8de8)
                    ebp_1[-3]
                    int32_t eax_304 = ebp_1[-3] * 0x2345
                    bool o_109 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
                    
                    if (o_109)
                        sub_403010()
                        noreturn
                    
                    ebp_1[-3]
                    int32_t edx_166 = ebp_1[-3] * 0x2345
                    bool o_110 = unimplemented  {imul edx, dword [ebp-0xc], 0x2345}
                    
                    if (o_110)
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = esi_15
                    *(esp_9 - 8) = edi_12
                    __builtin_memcpy(esi_15 + (edx_166 << 2) - 0x8d10, 
                        ebx_13 + (eax_304 << 2) - 0x8d10, 0x58)
                    i_24 = *(esp_9 - 8)
                    void* esi_17 = *(esp_9 - 4)
                    ebp_1[-3]
                    bool o_111 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
                    
                    if (o_111)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_306 = *(data_5301b0 + ebp_1[-3] * 0x8d14 - 0x39c)
                    int32_t eax_307 = eax_306 + ebp_1[-5]
                    
                    if (add_overflow(eax_306, ebp_1[-5]))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_307, neg.d(ebp_1[-4])))
                        sub_403010()
                        noreturn
                    
                    ebp_1[-9] = eax_307 - ebp_1[-4]
                    ebp_1[-3]
                    bool o_114 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
                    
                    if (o_114)
                        sub_403010()
                        noreturn
                    
                    ebp_1[-9]
                    bool o_115 = unimplemented  {imul edx, dword [ebp-0x24], 0x35}
                    
                    if (o_115)
                        sub_403010()
                        noreturn
                    
                    *(data_5302e4 + ebp_1[-3] * 0x8d14 + ebp_1[-9] * 0xd4 - 0x8d08) = 0xc2c20000
                    ebp_1[-3]
                    bool o_116 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
                    
                    if (o_116)
                        sub_403010()
                        noreturn
                    
                    ebp_1[-9]
                    bool o_117 = unimplemented  {imul edx, dword [ebp-0x24], 0x35}
                    
                    if (o_117)
                        sub_403010()
                        noreturn
                    
                    *(data_5301b0 + ebp_1[-3] * 0x8d14 + ebp_1[-9] * 0xd4 - 0x8d08) = 0xc2c20000
                    int32_t eax_313 = ebp_1[-9]
                    
                    if (add_overflow(eax_313, 1))
                        sub_403010()
                        noreturn
                    
                    *(esp_9 - 4) = eax_313 + 1
                    *(esp_9 - 8) = 0
                    *(esp_9 - 0xc) = 2
                    *(esp_9 - 0x10) = 1
                    *(esp_9 - 0x14) = 0
                    *(esp_9 - 0x18) = 0
                    *(esp_9 - 0x1c) = 0
                    esp_9 -= 0x1c
                    ebp_1 = sub_503984(ebp_1[-3], ebp_1[-9], ebp_1[-3])
                    ebp_1[-4] += 1
                    esi_15 = esi_17 + 0xd4
                    ebx_13 += 0xd4
                    edi_12 = i_24 - 1
                while (i_24 != 1)
            
            *(esp_9 - 4) = ebp_1[-5]
            sub_503538(0xffffffff, ebp_1[-2], ebp_1[-1])
            *(*data_5301f4 + 0x1025e) = (ebp_1[-1]).w
            *(*data_5301f4 + 0x10260) = (ebp_1[-2]).w
            *(*data_5301f4 + 0x10250) = 3
    else if (i_49 == 0xd && i_53 s> 0 && i_53 s< 0xa)
        *(esp_9 - 4) = 0
        *(esp_9 - 8) = 0xd
        *(esp_9 - 0xc) = 0
        sub_502b8c(i_53, arg7, 0, arg4, arg5)
        esp_9 += 0x24
        *(*data_5301f4 + 0x1025e) = i_49.w
        int32_t eax_21 = arg2 - arg7
        
        if (add_overflow(arg2, neg.d(arg7)))
            sub_403010()
            noreturn
        
        if (add_overflow(eax_21, 1))
            sub_403010()
            noreturn
        
        *(*data_5301f4 + 0x10260) = eax_21.w + 1
        *(*data_5301f4 + 0x10250) = 3
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_4f0b2c
    sub_403e1c(&ebp_1[-0x4ce], 0x12)
    return sub_403e1c(&ebp_1[-0x3f5], 4)
}
