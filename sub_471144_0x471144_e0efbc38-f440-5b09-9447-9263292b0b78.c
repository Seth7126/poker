// ============================================================
// 函数名称: sub_471144
// 虚拟地址: 0x471144
// WARP GUID: e0efbc38-f440-5b09-9447-9263292b0b78
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShellExecuteA, GetTickCount
// [内部子函数调用]: sub_472ccc, sub_404138, sub_44cde0, sub_402a38, sub_40423c, sub_472854, sub_471078, sub_42b1dc, sub_404280, sub_403e1c, sub_470f48, sub_403010, sub_44921c, sub_403e90, sub_404078, sub_404188, sub_47a2ac, sub_483950, sub_4318d0, sub_47a140, sub_473878, sub_476aa0, sub_473938, sub_44613c, sub_408e1c, sub_42b220, sub_47110c, sub_453088, sub_473570, sub_47289c, sub_4471a4, sub_44399c, sub_4702a8, sub_40fa94, sub_47b304, sub_473684, sub_52d910, sub_483958, sub_4710c8, sub_46e24c, sub_469a6c, sub_408e80
// [被调用的父级函数]: sub_47d208
// ============================================================

void* __convention("regparm")sub_471144(int32_t* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_1 = 0x15
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_2 - 4) = i_1
    int32_t entry_ebx
    *(esp_2 - 8) = entry_ebx
    *(esp_2 - 0xc) = arg2
    *(esp_2 - 0x10) = arg3
    int32_t __saved_edx_1
    int32_t __saved_edx = __saved_edx_1
    *(esp_2 - 0x14) = &var_4
    *(esp_2 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
    void* esp_9 = esp_2 - 0x1c
    fsbase->NtTib.ExceptionList = esp_9
    
    if (arg1[0x28b].b == 0)
        *(arg1 + 0xabd) = 0
        arg1[0x33a].b = 0
        *(arg1 + 0xce9) = 0
        *(arg1 + 0xcea) = 0
        *(arg1 + 0xceb) = 0
        arg1[0x33b].b = 0
        arg1[0x33c] = 0
        *(arg1 + 0xced) = 0
        arg1[0x33d].b = 0
        *(arg1 + 0xcf5) = 0
        *(arg1 + 0xcf6) = 0
        *(arg1 + 0xcf7) = 0
        arg1[0x33e].b = 0
        *(arg1 + 0xcf9) = 0
        arg1[0x4d1] = 0xffffffff
        *(esp_9 - 4) = &arg1[0x4d3]
        int32_t esi
        int32_t edi
        esi, edi = sub_47a2ac(arg1, arg1[0x434], arg1[0x442])
        void* var_34
        *(esp_9 - 8) = &var_34
        char* var_38
        sub_402a38(1, &var_38)
        sub_404280(1, 2, var_38)
        void* esp_12 = esp_9 - 4
        sub_404188(var_34, 0x472674)
        void var_48
        
        if (arg1 == 0xffffecb4)
        label_4712b8:
            arg1[0x4d1] = 1
            void* edi_1 = nullptr
            *(esp_12 - 4) = &var_4
            *(esp_12 - 8) = j_sub_4037f0
            *(esp_12 - 0xc) = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = esp_12 - 0xc
            sub_40fa94(0xffffffef, 0xffffffef, &var_48)
            *(esp_12 - 0x10) = &var_48
            *(esp_12 - 0x14) = arg1 + 0xa96
            void* ecx_3
            ecx_3.b = 0x38
            arg1[0x75]
            arg1[0x74]()
            sub_44399c(arg1, 1)
            *(esp_12 + 0x28) = sub_42b220(arg1)
            *(esp_12 + 0x24) = sub_42b1dc(arg1)
            HWND eax_37 = sub_4318d0(arg1)
            *(esp_12 + 0x24)
            void* ebp_2
            int32_t esi_1
            ebp_2, esi_1 = sub_473938(arg1, eax_37)
            sub_453088(*(*(ebp_2 - 0xc) + 0xa1c))
            sub_44399c(*(ebp_2 - 0xc), 0)
            sub_40fa94(0xffffffef, 0xffffffef, ebp_2 - 0x44)
            *(esp_12 + 0x24) = ebp_2 - 0x44
            *(esp_12 + 0x20) = *(ebp_2 - 0xc) + 0xa96
            void* esp_24 = esp_12 + 0x20
            void* ebx_1 = *(ebp_2 - 0xc)
            void* ecx_5
            ecx_5.b = 0x38
            *(ebx_1 + 0x1d4)
            (*(ebx_1 + 0x1d0))()
            
            if (*(*(ebp_2 - 0xc) + 0xce2) == 0)
                *(ebp_2 - 0x14) = 0
                *(ebp_2 - 0x18) = 0
                *(ebp_2 - 0x1c) = 0
                *(ebp_2 - 0x20) = 0
                *(esp_24 - 4) = ebp_2
                int32_t eax_47
                eax_47, ebp_2 = sub_470f48()
                *(*(ebp_2 - 0xc) + 0x2e0) = eax_47
                int32_t temp0_1 = divs.dp.d(sx.q(eax_47), 0xf4240)
                *(*(ebp_2 - 0xc) + 0x2e0) = temp0_1
                char eax_54 = sub_471078(temp0_1)
                *(ebp_2 - 0x21) = sub_4710c8(*(*(ebp_2 - 0xc) + 0x2e0))
                
                if (sub_47110c(*(*(ebp_2 - 0xc) + 0x2e0)) != 0)
                    *(esp_24 - 4) = 0x20
                    esi_1 = sub_52d910(0x400, 0x500, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x20
                        esi_1 = sub_52d910(0x300, 0x400, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x20
                        esi_1 = sub_52d910(0x258, 0x320, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x10
                        esi_1 = sub_52d910(0x258, 0x320, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x10
                        esi_1 = sub_52d910(0x1e0, 0x280, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    *(ebp_2 - 0x28) = 0
                    *(ebp_2 - 0x18) = 0xc8
                else if (*(ebp_2 - 0x21) != 0)
                    *(esp_24 - 4) = 0x20
                    esi_1 = sub_52d910(0x300, 0x400, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x20
                        esi_1 = sub_52d910(0x258, 0x320, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x10
                        esi_1 = sub_52d910(0x258, 0x320, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x10
                        esi_1 = sub_52d910(0x1e0, 0x280, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    *(ebp_2 - 0x28) = 0
                    *(ebp_2 - 0x18) = 0x78
                else if (eax_54 != 0)
                    *(esp_24 - 4) = 0x20
                    esi_1 = sub_52d910(0x258, 0x320, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x10
                        esi_1 = sub_52d910(0x258, 0x320, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (esi_1 s<= 0)
                        *(esp_24 - 4) = 0x10
                        esi_1 = sub_52d910(0x1e0, 0x280, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    *(ebp_2 - 0x28) = 0
                    *(ebp_2 - 0x18) = 0x3c
                
                if (eax_54 == 0 || esi_1 s<= 0)
                    *(ebp_2 - 0x14) = 0
                    *(ebp_2 - 0x18) = 0
                    *(ebp_2 - 0x1c) = 0
                    *(ebp_2 - 0x20) = 0
                    *(esp_24 - 4) = 0x10
                    int32_t eax_99 = sub_52d910(0x1e0, 0x280, *(*(ebp_2 - 0xc) + 0xa20))
                    
                    if (eax_99 s> 0)
                        sub_472ccc(*(ebp_2 - 0xc), eax_99)
                        sub_47289c(*(ebp_2 - 0xc), 0x280, 0x1e0)
                        sub_40fa94(0xffffffef, 0xffffffef, ebp_2 - 0x44)
                        *(esp_24 - 4) = ebp_2 - 0x44
                        *(esp_24 - 8) = *(ebp_2 - 0xc) + 0xa96
                        void* esi_3 = *(ebp_2 - 0xc)
                        void* ecx_21
                        ecx_21.b = 0x38
                        *(esi_3 + 0x1d4)
                        (*(esi_3 + 0x1d0))()
                        uint32_t eax_106 = GetTickCount()
                        
                        while (true)
                            sub_44921c(*data_530660)
                            uint32_t eax_109 = GetTickCount()
                            *(esp_24 - 4) = 0
                            *(esp_24 - 8) = eax_109
                            int32_t eax_111
                            int32_t edx_26
                            edx_26:eax_111 = sx.q(eax_106)
                            int32_t temp15_1 = *(esp_24 - 8)
                            *(esp_24 - 8) -= eax_111
                            *(esp_24 - 4) = sbb.d(*(esp_24 - 4), edx_26, temp15_1 u< eax_111)
                            int32_t edx_27 = *(esp_24 - 4)
                            
                            if (edx_27 != 0)
                                if (edx_27 s> 0)
                                    break
                            else
                                if (*(esp_24 - 8) u> 0xc8)
                                    break
                        
                        uint32_t eax_113 = GetTickCount()
                        
                        while (true)
                            sub_40fa94(0xfffffff1, 1, ebp_2 - 0x44)
                            *(esp_24 - 4) = ebp_2 - 0x44
                            *(esp_24 - 8) = *(ebp_2 - 0xc) + 0xa96
                            edi_1 = *(ebp_2 - 0xc)
                            void* ecx_22
                            ecx_22.b = 0x38
                            *(edi_1 + 0x1d4)
                            (*(edi_1 + 0x1d0))()
                            sub_472854(*(ebp_2 - 0xc))
                            int32_t temp24_1 = *(ebp_2 - 0x14)
                            *(ebp_2 - 0x14) += 1
                            
                            if (add_overflow(temp24_1, 1))
                                sub_403010()
                                noreturn
                            
                            uint32_t eax_119 = GetTickCount()
                            *(esp_24 - 4) = 0
                            *(esp_24 - 8) = eax_119
                            int32_t eax_121
                            int32_t edx_29
                            edx_29:eax_121 = sx.q(eax_113)
                            int32_t temp30_1 = *(esp_24 - 8)
                            *(esp_24 - 8) -= eax_121
                            *(esp_24 - 4) = sbb.d(*(esp_24 - 4), edx_29, temp30_1 u< eax_121)
                            int32_t edx_30 = *(esp_24 - 4)
                            
                            if (edx_30 != 0)
                                if (edx_30 s> 0)
                                    break
                            else
                                if (*(esp_24 - 8) u> 0x3e8)
                                    break
                        
                        sub_473684(*(ebp_2 - 0xc))
                    
                    *(esp_24 - 4) = 0x20
                    int32_t eax_126 = sub_52d910(0x258, 0x320, *(*(ebp_2 - 0xc) + 0xa20))
                    esp_24 = esp_24
                    
                    if (eax_126 s> 0)
                        sub_472ccc(*(ebp_2 - 0xc), eax_126)
                        sub_47289c(*(ebp_2 - 0xc), 0x320, 0x258)
                        sub_40fa94(0xffffffef, 0xffffffef, ebp_2 - 0x44)
                        *(esp_24 - 4) = ebp_2 - 0x44
                        *(esp_24 - 8) = *(ebp_2 - 0xc) + 0xa96
                        void* esi_7 = *(ebp_2 - 0xc)
                        void* ecx_25
                        ecx_25.b = 0x38
                        *(esi_7 + 0x1d4)
                        (*(esi_7 + 0x1d0))()
                        uint32_t eax_133 = GetTickCount()
                        
                        while (true)
                            sub_44921c(*data_530660)
                            uint32_t eax_136 = GetTickCount()
                            *(esp_24 - 4) = 0
                            *(esp_24 - 8) = eax_136
                            int32_t eax_138
                            int32_t edx_34
                            edx_34:eax_138 = sx.q(eax_133)
                            int32_t temp16_1 = *(esp_24 - 8)
                            *(esp_24 - 8) -= eax_138
                            *(esp_24 - 4) = sbb.d(*(esp_24 - 4), edx_34, temp16_1 u< eax_138)
                            int32_t edx_35 = *(esp_24 - 4)
                            
                            if (edx_35 != 0)
                                if (edx_35 s> 0)
                                    break
                            else
                                if (*(esp_24 - 8) u> 0xc8)
                                    break
                        
                        uint32_t eax_140 = GetTickCount()
                        
                        while (true)
                            sub_40fa94(0xfffffff1, 2, ebp_2 - 0x44)
                            *(esp_24 - 4) = ebp_2 - 0x44
                            *(esp_24 - 8) = *(ebp_2 - 0xc) + 0xa96
                            void* edi_2 = *(ebp_2 - 0xc)
                            void* ecx_26
                            ecx_26.b = 0x38
                            *(edi_2 + 0x1d4)
                            (*(edi_2 + 0x1d0))()
                            sub_472854(*(ebp_2 - 0xc))
                            int32_t temp29_1 = *(ebp_2 - 0x18)
                            *(ebp_2 - 0x18) += 1
                            
                            if (add_overflow(temp29_1, 1))
                                sub_403010()
                                noreturn
                            
                            uint32_t eax_146 = GetTickCount()
                            *(esp_24 - 4) = 0
                            *(esp_24 - 8) = eax_146
                            int32_t eax_148
                            int32_t edx_37
                            edx_37:eax_148 = sx.q(eax_140)
                            int32_t temp32_1 = *(esp_24 - 8)
                            *(esp_24 - 8) -= eax_148
                            *(esp_24 - 4) = sbb.d(*(esp_24 - 4), edx_37, temp32_1 u< eax_148)
                            int32_t edx_38 = *(esp_24 - 4)
                            
                            if (edx_38 != 0)
                                if (edx_38 s> 0)
                                    break
                            else
                                if (*(esp_24 - 8) u> 0x3e8)
                                    break
                        
                        uint32_t eax_150 = GetTickCount()
                        
                        while (true)
                            sub_40fa94(0xfffffff1, 1, ebp_2 - 0x44)
                            *(esp_24 - 4) = ebp_2 - 0x44
                            *(esp_24 - 8) = *(ebp_2 - 0xc) + 0xa96
                            edi_1 = *(ebp_2 - 0xc)
                            void* ecx_27
                            ecx_27.b = 0x38
                            *(edi_1 + 0x1d4)
                            (*(edi_1 + 0x1d0))()
                            sub_472854(*(ebp_2 - 0xc))
                            int32_t temp38_1 = *(ebp_2 - 0x1c)
                            *(ebp_2 - 0x1c) += 1
                            
                            if (add_overflow(temp38_1, 1))
                                sub_403010()
                                noreturn
                            
                            uint32_t eax_156 = GetTickCount()
                            *(esp_24 - 4) = 0
                            *(esp_24 - 8) = eax_156
                            int32_t eax_158
                            int32_t edx_40
                            edx_40:eax_158 = sx.q(eax_150)
                            int32_t temp39_1 = *(esp_24 - 8)
                            *(esp_24 - 8) -= eax_158
                            *(esp_24 - 4) = sbb.d(*(esp_24 - 4), edx_40, temp39_1 u< eax_158)
                            int32_t edx_41 = *(esp_24 - 4)
                            
                            if (edx_41 != 0)
                                if (edx_41 s> 0)
                                    break
                            else
                                if (*(esp_24 - 8) u> 0x3e8)
                                    break
                        
                        if (*(ebp_2 - 0x18) s> 1)
                            uint32_t eax_160 = GetTickCount()
                            
                            while (true)
                                sub_40fa94(0xfffffff1, 3, ebp_2 - 0x44)
                                *(esp_24 - 4) = ebp_2 - 0x44
                                *(esp_24 - 8) = *(ebp_2 - 0xc) + 0xa96
                                edi_1 = *(ebp_2 - 0xc)
                                void* ecx_28
                                ecx_28.b = 0x38
                                *(edi_1 + 0x1d4)
                                (*(edi_1 + 0x1d0))()
                                sub_472854(*(ebp_2 - 0xc))
                                int32_t temp40_1 = *(ebp_2 - 0x20)
                                *(ebp_2 - 0x20) += 1
                                
                                if (add_overflow(temp40_1, 1))
                                    sub_403010()
                                    noreturn
                                
                                uint32_t eax_166 = GetTickCount()
                                *(esp_24 - 4) = 0
                                *(esp_24 - 8) = eax_166
                                int32_t eax_168
                                int32_t edx_43
                                edx_43:eax_168 = sx.q(eax_160)
                                int32_t temp41_1 = *(esp_24 - 8)
                                *(esp_24 - 8) -= eax_168
                                *(esp_24 - 4) = sbb.d(*(esp_24 - 4), edx_43, temp41_1 u< eax_168)
                                int32_t edx_44 = *(esp_24 - 4)
                                
                                if (edx_44 != 0)
                                    if (edx_44 s> 0)
                                        break
                                else
                                    if (*(esp_24 - 8) u> 0x3e8)
                                        break
                    
                    *(ebp_2 - 0x28) = 0
                    
                    if (*(ebp_2 - 0x20) s>= 0x28)
                        *(ebp_2 - 0x18) = 0xc8
                    else if (*(ebp_2 - 0x21) != 0 && *(ebp_2 - 0x20) s>= 0x1c)
                        *(ebp_2 - 0x18) = 0xc8
                    else if (eax_54 != 0 && *(ebp_2 - 0x20) s>= 0x10)
                        *(ebp_2 - 0x18) = 0x78
                    else if (eax_54 != 0)
                        *(ebp_2 - 0x28) = 8
                    else if (*(ebp_2 - 0x21) != 0)
                        *(ebp_2 - 0x28) = 0x10
                
                if (*(ebp_2 - 0x14) s<= 1 && *(ebp_2 - 0x18) s> 1 && *(ebp_2 - 0x1c) s> 1)
                    int32_t eax_170 = *(ebp_2 - 0x18)
                    int32_t eax_171 = eax_170 + *(ebp_2 - 0x1c)
                    
                    if (add_overflow(eax_170, *(ebp_2 - 0x1c)))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_171, *(ebp_2 - 0x20)))
                        sub_403010()
                        noreturn
                    
                    *(ebp_2 - 0x14) = eax_171 + *(ebp_2 - 0x20)
            
            fsbase->NtTib.ExceptionList = *esp_24
            *(esp_24 + 8) = 0x472022
            sub_40fa94(0xffffffee, 0xffffffee, ebp_2 - 0x44)
            *(esp_24 + 4) = ebp_2 - 0x44
            *esp_24 = *(ebp_2 - 0xc) + 0xa96
            void* ebx_4 = *(ebp_2 - 0xc)
            void* ecx_29
            ecx_29.b = 0x38
            *(ebx_4 + 0x1d4)
            (*(ebx_4 + 0x1d0))()
            void* result = *(ebp_2 - 0xc)
            char temp4 = *(result + 0xce2)
            
            if (temp4 != 0)
                return result
            
            sub_473684(*(ebp_2 - 0xc))
            *(esp_24 + 8) = ebp_2 - 0x48
            sub_402a38(1, ebp_2 - 0x4c)
            sub_404280(1, 2, *(ebp_2 - 0x4c))
            void* esp_83 = esp_24 + 0xc
            sub_404188(*(ebp_2 - 0x48), 0x472690)
            
            if (temp4 == 0)
                *(esp_83 - 4) = "640x480x16:"
                sub_408e1c(*(ebp_2 - 0x14), ebp_2 - 0x54)
                *(esp_83 - 8) = *(ebp_2 - 0x54)
                *(esp_83 - 0xc) = &data_4726b4
                *(esp_83 - 0x10) = "800x600x32(shadow):"
                sub_408e1c(*(ebp_2 - 0x18), ebp_2 - 0x58)
                *(esp_83 - 0x14) = *(ebp_2 - 0x58)
                *(esp_83 - 0x18) = &data_4726b4
                *(esp_83 - 0x1c) = "800x600x32:"
                sub_408e1c(*(ebp_2 - 0x1c), ebp_2 - 0x5c)
                *(esp_83 - 0x20) = *(ebp_2 - 0x5c)
                *(esp_83 - 0x24) = &data_4726b4
                *(esp_83 - 0x28) = "800x600x32(shadowHIGH):"
                sub_408e1c(*(ebp_2 - 0x20), ebp_2 - 0x60)
                *(esp_83 - 0x2c) = *(ebp_2 - 0x60)
                *(esp_83 - 0x30) = &data_4726b4
                *(esp_83 - 0x34) = "VideoMemory:"
                sub_408e1c(*(*(ebp_2 - 0xc) + 0x2e0), ebp_2 - 0x64)
                *(esp_83 - 0x38) = *(ebp_2 - 0x64)
                *(esp_83 - 0x3c) = &data_472728
                sub_408e1c(divs.dp.d(sx.q(*(*(ebp_2 - 0xc) + 0x2e0)), 0xf4240), ebp_2 - 0x68)
                *(esp_83 - 0x40) = *(ebp_2 - 0x68)
                *(esp_83 - 0x44) = &data_472734
                sub_404138(ebp_2 - 0x50, 0x11)
                *(ebp_2 - 0x50)
                sub_44cde0()
            
            *(*(ebp_2 - 0xc) + 0xcd0) = 2
            *(*(ebp_2 - 0xc) + 0xcd4) = 2
            *(*(ebp_2 - 0xc) + 0xcdc) = 1
            
            if (add_overflow(0x96, neg.d(*(ebp_2 - 0x28))))
                sub_403010()
                noreturn
            
            if (0x96 - *(ebp_2 - 0x28) s> *(ebp_2 - 0x18))
                if (add_overflow(0x64, neg.d(*(ebp_2 - 0x28))))
                    sub_403010()
                    noreturn
                
                if (0x64 - *(ebp_2 - 0x28) s> *(ebp_2 - 0x18))
                    if (add_overflow(0x32, neg.d(*(ebp_2 - 0x28))))
                        sub_403010()
                        noreturn
                    
                    if (0x32 - *(ebp_2 - 0x28) s> *(ebp_2 - 0x18))
                        if (add_overflow(0xa0, neg.d(*(ebp_2 - 0x28))))
                            sub_403010()
                            noreturn
                        
                        if (0xa0 - *(ebp_2 - 0x28) s> *(ebp_2 - 0x1c))
                            if (add_overflow(0x50, neg.d(*(ebp_2 - 0x28))))
                                sub_403010()
                                noreturn
                            
                            if (0x50 - *(ebp_2 - 0x28) s> *(ebp_2 - 0x1c))
                                if (add_overflow(0x5a, neg.d(*(ebp_2 - 0x28))))
                                    sub_403010()
                                    noreturn
                                
                                if (0x5a - *(ebp_2 - 0x28) s<= *(ebp_2 - 0x14))
                                    *(*(ebp_2 - 0xc) + 0xccc) = 0
                                    *(*(ebp_2 - 0xc) + 0xccd) = 0
                                    *(*(ebp_2 - 0xc) + 0xcd8) = 2
                                    *(*(ebp_2 - 0xc) + 0xcd0) = 2
                                    *(*(ebp_2 - 0xc) + 0xcd4) = 4
                                else if (*(ebp_2 - 0x14) s< 0x1e)
                                    *(*(ebp_2 - 0xc) + 0xccc) = 0
                                    *(*(ebp_2 - 0xc) + 0xccd) = 0
                                    *(*(ebp_2 - 0xc) + 0xcd8) = 1
                                    *(*(ebp_2 - 0xc) + 0xcd0) = 1
                                    *(*(ebp_2 - 0xc) + 0xcd4) = 1
                                else
                                    *(*(ebp_2 - 0xc) + 0xccc) = 0
                                    *(*(ebp_2 - 0xc) + 0xccd) = 0
                                    *(*(ebp_2 - 0xc) + 0xcd8) = 1
                                    *(*(ebp_2 - 0xc) + 0xcd0) = 2
                                    *(*(ebp_2 - 0xc) + 0xcd4) = 2
                            else
                                *(*(ebp_2 - 0xc) + 0xccc) = 1
                                *(*(ebp_2 - 0xc) + 0xccd) = 0
                                *(*(ebp_2 - 0xc) + 0xcd8) = 2
                                *(*(ebp_2 - 0xc) + 0xcd0) = 2
                                *(*(ebp_2 - 0xc) + 0xcd4) = 3
                        else
                            *(*(ebp_2 - 0xc) + 0xccc) = 1
                            *(*(ebp_2 - 0xc) + 0xccd) = 0
                            *(*(ebp_2 - 0xc) + 0xcd8) = 3
                            *(*(ebp_2 - 0xc) + 0xcd0) = 2
                            *(*(ebp_2 - 0xc) + 0xcd4) = 4
                    else
                        *(*(ebp_2 - 0xc) + 0xccc) = 1
                        *(*(ebp_2 - 0xc) + 0xccd) = 1
                        *(*(ebp_2 - 0xc) + 0xcd8) = 2
                        *(*(ebp_2 - 0xc) + 0xcd0) = 2
                        *(*(ebp_2 - 0xc) + 0xcd4) = 2
                else
                    *(*(ebp_2 - 0xc) + 0xccc) = 1
                    *(*(ebp_2 - 0xc) + 0xccd) = 1
                    *(*(ebp_2 - 0xc) + 0xcd8) = 3
                    *(*(ebp_2 - 0xc) + 0xcd0) = 2
                    
                    if (add_overflow(0x78, neg.d(*(ebp_2 - 0x28))))
                        sub_403010()
                        noreturn
                    
                    if (0x78 - *(ebp_2 - 0x28) s<= *(ebp_2 - 0x18))
                        *(*(ebp_2 - 0xc) + 0xcd0) = 3
                    
                    *(*(ebp_2 - 0xc) + 0xcd4) = 4
                    
                    if (add_overflow(0x82, neg.d(*(ebp_2 - 0x28))))
                        sub_403010()
                        noreturn
                    
                    if (0x82 - *(ebp_2 - 0x28) s> *(ebp_2 - 0x18))
                        *(*(ebp_2 - 0xc) + 0xcd4) = 3
                    else
                        *(*(ebp_2 - 0xc) + 0xcdc) = 2
            else
                *(*(ebp_2 - 0xc) + 0xccc) = 1
                *(*(ebp_2 - 0xc) + 0xccd) = 1
                *(*(ebp_2 - 0xc) + 0xcd8) = 3
                *(*(ebp_2 - 0xc) + 0xcd0) = 3
                *(*(ebp_2 - 0xc) + 0xcd4) = 4
                *(*(ebp_2 - 0xc) + 0xcdc) = 2
                
                if (add_overflow(0xb4, neg.d(*(ebp_2 - 0x28))))
                    sub_403010()
                    noreturn
                
                if (0xb4 - *(ebp_2 - 0x28) s<= *(ebp_2 - 0x18))
                    *(*(ebp_2 - 0xc) + 0xcd4) = 5
            
            void* ebx_5 = *(ebp_2 - 0xc) + 0xce8
            int32_t eax_251 = 0x10
            
            if (*(*(ebp_2 - 0xc) + 0xccc) != 0)
                eax_251 = 0x20
            
            int32_t edx_58 = *(*(ebp_2 - 0xc) + 0xcd8)
            int32_t edx_59
            int32_t esi_12
            
            if (edx_58 == 3)
                edx_59 = 0x400
                esi_12 = 0x300
            else if (edx_58 != 2)
                edx_59 = 0x280
                esi_12 = 0x1e0
            else
                edx_59 = 0x320
                esi_12 = 0x258
            
            *(esp_83 - 4) = eax_251
            int32_t esi_13 = sub_52d910(esi_12, edx_59, *(*(ebp_2 - 0xc) + 0xa20))
            
            if (esi_13 == 0)
                *(esp_83 - 4) = 0x10
                esi_13 = sub_52d910(0x1e0, 0x280, *(*(ebp_2 - 0xc) + 0xa20))
            
            if (esi_13 != 0)
                *(esp_83 - 4) = 0
                sub_47a140(*(ebx_5 + 0x458), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_83 - 4) = 1
                sub_47a140(*(ebx_5 + 0x44c), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_83 - 4) = 1
                sub_476aa0(*(ebx_5 + 0x44c), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_83 - 4) = 0
                sub_476aa0(*(ebx_5 + 0x458), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_83 - 4) = esi_13
                sub_47b304(*(ebx_5 + 0x448), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                void* esp_123
                
                if (*(*(ebp_2 - 0xc) + 0xccd) == 0)
                    *(esp_83 - 4) = 0
                    sub_47a140(*(ebx_5 + 0x46c), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                    *(esp_83 - 4) = 0
                    sub_47a140(*(ebx_5 + 0x470), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                    esp_123 = esp_83
                else
                    *(esp_83 - 4) = 1
                    sub_47a140(*(ebx_5 + 0x46c), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                    *(esp_83 - 4) = 1
                    sub_47a140(*(ebx_5 + 0x470), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                    esp_123 = esp_83
                
                *(esp_123 - 4) = *(*(ebp_2 - 0xc) + 0xcd0)
                sub_47b304(*(ebx_5 + 0x464), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_123 - 4) = *(*(ebp_2 - 0xc) + 0xcd4)
                sub_47b304(*(ebx_5 + 0x478), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_123 - 4) = *(*(ebp_2 - 0xc) + 0xcdc)
                sub_47b304(*(ebx_5 + 0x47c), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
            else
                *(esp_83 - 4) = 0
                sub_47a140(*(ebx_5 + 0x44c), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_83 - 4) = 1
                sub_47a140(*(ebx_5 + 0x458), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_83 - 4) = 0
                sub_476aa0(*(ebx_5 + 0x44c), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
                *(esp_83 - 4) = 1
                sub_476aa0(*(ebx_5 + 0x458), *(ebx_5 + 0x3ec), *(ebp_2 - 0xc))
            
            int32_t edx_65
            edx_65.b = 1
            return sub_46e24c(*(ebp_2 - 0xc), esi_13, edi_1)
        
        sub_404188(arg1[0x4d3], "first")
        
        if (arg1 == 0xffffecb4)
            goto label_4712b8
        
        void* var_3c
        *(esp_12 - 4) = &var_3c
        char* var_40
        sub_402a38(1, &var_40)
        sub_404280(1, 2, var_40)
        sub_404188(var_3c, 0x472690)
        
        if (arg1 == 0xffffecb4)
            goto label_4712b8
        
        void* var_70
        *(esp_12 - 4) = &var_70
        char* var_74
        sub_402a38(1, &var_74)
        sub_404280(1, 2, var_74)
        void* esp_132 = esp_12
        sub_404188(var_70, 0x472740)
        
        if (arg1 != 0xffffecb4)
            void* var_78
            *(esp_132 - 4) = &var_78
            char* var_7c
            sub_402a38(1, &var_7c)
            sub_404280(1, 2, var_7c)
            sub_404188(var_78, 0x47274c)
        
        if (arg1 == 0xffffecb4 || arg1 == 0xffffecb4)
            *(esp_132 - 4) = 0
            sub_47a140(arg1[0x44d], arg1[0x435], arg1)
            *(esp_132 - 4) = 1
            sub_47a140(arg1[0x450], arg1[0x435], arg1)
            *(esp_132 - 4) = 0
            sub_476aa0(arg1[0x44d], arg1[0x435], arg1)
            *(esp_132 - 4) = 1
            sub_476aa0(arg1[0x450], arg1[0x435], arg1)
            *data_530a18
            int32_t eax_293 = sub_4471a4()
            void* esp_143
            
            if (eax_293 s< 0x320)
                *(esp_132 - 4) = 1
                sub_47b304(arg1[0x451], arg1[0x435], arg1)
                esp_143 = esp_132
            else
                *(esp_132 - 4) = 3
                sub_47b304(arg1[0x451], arg1[0x435], arg1)
                esp_143 = esp_132
            
            void* var_80
            *(esp_143 - 4) = &var_80
            char* var_84
            sub_402a38(1, &var_84)
            sub_404280(1, 2, var_84)
            esp_132 = esp_143
            sub_404188(var_80, 0x47274c)
            
            if (eax_293 == 0x320)
                *(arg1 + 0xccd) = 0
                arg1[0x334] = 2
                arg1[0x335] = 3
                arg1[0x337] = 1
                void* esp_149
                
                if (*(arg1 + 0xccd) == 0)
                    *(esp_132 - 4) = 0
                    sub_47a140(arg1[0x455], arg1[0x435], arg1)
                    *(esp_132 - 4) = 0
                    sub_47a140(arg1[0x456], arg1[0x435], arg1)
                    esp_149 = esp_132
                else
                    *(esp_132 - 4) = 1
                    sub_47a140(arg1[0x455], arg1[0x435], arg1)
                    *(esp_132 - 4) = 1
                    sub_47a140(arg1[0x456], arg1[0x435], arg1)
                    esp_149 = esp_132
                
                *(esp_149 - 4) = arg1[0x334]
                sub_47b304(arg1[0x453], arg1[0x435], arg1)
                *(esp_149 - 4) = arg1[0x335]
                sub_47b304(arg1[0x458], arg1[0x435], arg1)
                *(esp_149 - 4) = arg1[0x337]
                sub_47b304(arg1[0x459], arg1[0x435], arg1)
                esp_132 = esp_149
            
            int32_t edx_90
            edx_90.b = 1
            sub_46e24c(arg1, esi, edi)
        
        if (*(arg1 + 0xa32) != 0)
            arg1[0x28d]
            arg1[0x28c]()
        
        sub_40fa94(0xfffffff9, 0xfffffff9, &var_48)
        *(esp_132 - 4) = &var_48
        *(esp_132 - 8) = arg1 + 0xa96
        void* ecx_65
        ecx_65.b = 0x38
        arg1[0x75]
        arg1[0x74]()
        esp_9 = esp_132 + 0x24
        arg1[0x2af].b = 1
        
        if (*(arg1 + 0xce2) == 0)
            *(esp_9 - 4) = 0
            sub_473878(0x1e0, 0x280, arg1)
        
        if (*(arg1 + 0xce2) != 0)
            int32_t ecx_74
            int32_t edx_123
            
            if (*(arg1 + 0xce3) == 0)
                ecx_74, edx_123 = sub_44cde0()
            else
                int32_t var_30
                sub_402a38(1, &var_30)
                
                if (var_30 == 0)
                    sub_403e90(&var_30, 0x472794)
                
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0x472798
                *(esp_9 - 0xc) = var_30
                *(esp_9 - 0x10) = " /X /"
                int32_t var_ac
                sub_408e1c(arg1[0x339], &var_ac)
                *(esp_9 - 0x14) = var_ac
                char* var_a8
                sub_404138(&var_a8, 3)
                *(esp_9 + 0x2c) = sub_40423c(var_a8)
                char* var_b0
                sub_402a38(0, &var_b0)
                *(esp_9 + 0x28) = sub_40423c(var_b0)
                *(esp_9 + 0x24) = 0
                *(esp_9 + 0x20) = sub_4318d0(arg1)
                ecx_74, edx_123 = ShellExecuteA()
                esp_9 += 0x38
            
            arg1[0x28b].b = 3
            sub_44613c(arg1, edx_123, ecx_74)
        else
            arg1[0x2af].b = 0
            sub_40fa94(0xffffffff, 0xffffffff, &var_48)
            *(esp_9 - 4) = &var_48
            *(esp_9 - 8) = arg1 + 0xa96
            void* ecx_67
            ecx_67.b = 0x38
            arg1[0x75]
            arg1[0x74]()
            arg1[0x28b].b = 2
            arg1[0xc0] = GetTickCount()
            arg1[0xc1] = GetTickCount()
            arg1[0xbf] = 0x14
            sub_483950(arg1, arg1[0x27c])
            *(esp_9 - 4) = 0x87
            *(esp_9 - 8) = 0x78
            *(esp_9 - 0xc) = 0x28
            *(esp_9 - 0x10) = 8
            *(esp_9 - 0x14) = "!Center"
            int32_t var_88
            sub_408e1c(arg1[0x472], &var_88)
            *(esp_9 - 0x18) = var_88
            *(esp_9 - 0x1c) = 0x2d
            *(esp_9 - 0x20) = 0x28
            *(esp_9 - 0x24) = 0x14
            *(esp_9 - 0x28) = 5
            *(esp_9 - 0x2c) = 0x3fa66666
            int32_t edx_105
            edx_105.b = 0xa
            int80_t x87_r0
            arg1[0x281] = sub_483958(arg1, edx_105, 0xd7, x87_r0)
            *(esp_9 - 4) = 0x87
            *(esp_9 - 8) = 0x78
            *(esp_9 - 0xc) = 0x28
            *(esp_9 - 0x10) = 8
            *(esp_9 - 0x14) = "!Left"
            int32_t var_8c
            sub_408e1c(arg1[0x472], &var_8c)
            *(esp_9 - 0x18) = var_8c
            *(esp_9 - 0x1c) = 0x2d
            *(esp_9 - 0x20) = 0x28
            *(esp_9 - 0x24) = 0x14
            *(esp_9 - 0x28) = 5
            *(esp_9 - 0x2c) = 0x3fa66666
            int32_t edx_108
            edx_108.b = 0xa
            arg1[0x27f] = sub_483958(arg1, edx_108, 0xaf, x87_r0)
            *(esp_9 - 4) = 0x87
            *(esp_9 - 8) = 0x78
            *(esp_9 - 0xc) = 0x28
            *(esp_9 - 0x10) = 8
            *(esp_9 - 0x14) = "!Right"
            int32_t var_90
            sub_408e1c(arg1[0x472], &var_90)
            *(esp_9 - 0x18) = var_90
            *(esp_9 - 0x1c) = 0x2d
            *(esp_9 - 0x20) = 0x28
            *(esp_9 - 0x24) = 0x14
            *(esp_9 - 0x28) = 5
            *(esp_9 - 0x2c) = 0x3fa66666
            int32_t edx_111
            edx_111.b = 0xa
            arg1[0x280] = sub_483958(arg1, edx_111, 0x163, x87_r0)
            
            do
                ebp_1 = sub_4702a8(ebp_1[-3], 0)
            while (*(ebp_1[-3] + 0xa2c) != 3)
            
            char temp23_1 = *(ebp_1[-3] + 0xdb0)
            
            if (temp23_1 != 0)
                sub_473570(ebp_1[-3])
            
            *(esp_9 - 4) = &ebp_1[-0x24]
            sub_402a38(2, &ebp_1[-0x25])
            sub_404280(1, 2, ebp_1[-0x25])
            int32_t ecx_72
            void* edx_115
            ecx_72, edx_115 = sub_404188(ebp_1[-0x24], 0x472788)
            
            if (temp23_1 == 0)
                *(esp_9 - 4) = &ebp_1[-0x26]
                sub_402a38(3, &ebp_1[-0x27])
                int32_t eax_360 = sub_404078(ebp_1[-0x27])
                
                if (add_overflow(eax_360, 0xffffffff))
                    sub_403010()
                    noreturn
                
                *(esp_9 - 8) = eax_360 - 1
                sub_402a38(3, &ebp_1[-0x28])
                sub_404280(*(esp_9 - 8), 2, ebp_1[-0x28])
                int32_t eax_364
                eax_364, ecx_72, edx_115 = sub_408e80(ebp_1[-0x26])
                *(ebp_1[-3] + 0xce4) = eax_364
                
                if (eax_364 - 1 u< 2 || eax_364 == 4 || eax_364 == 8)
                    ebp_1[-3]
                    char eax_372
                    eax_372, ecx_72 = sub_469a6c(ecx_72, eax_364)
                    edx_115 = ebp_1[-3]
                    *(edx_115 + 0xce3) = eax_372
                else
                    *(ebp_1[-3] + 0xce3) = 0
                
                *(ebp_1[-3] + 0xce3)
            
            sub_44613c(ebp_1[-3], edx_115, ecx_72)
    
    *(esp_9 + 8)
    fsbase->NtTib.ExceptionList = *esp_9
    *(esp_9 + 8) = sub_472662
    sub_403e1c(&ebp_1[-0x2b], 0x1a)
    return sub_403e1c(&ebp_1[-0xf], 5)
}
