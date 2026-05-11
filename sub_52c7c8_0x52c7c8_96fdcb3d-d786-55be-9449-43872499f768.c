// ============================================================
// 函数名称: sub_52c7c8
// 虚拟地址: 0x52c7c8
// WARP GUID: 96fdcb3d-d786-55be-9449-43872499f768
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41e1b4, sub_409040, sub_4030d0, sub_4092cc, sub_404138, sub_41efec, sub_402968, sub_4030a0, sub_402824, sub_405ee8, sub_4062e1, sub_404280, sub_405e46, sub_403010, sub_403e1c, sub_403d40, sub_404078, sub_404188, sub_406318, sub_4535a8, sub_40276c, sub_4033d0, sub_40422c, sub_4040c4, sub_41dae0, sub_402754, sub_403df8, sub_405f4c, sub_4088f0, sub_52c7c4, sub_44cce8
// [被调用的父级函数]: sub_48be98
// ============================================================

char** __convention("regparm")sub_52c7c8(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, char arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t i_10 = arg3
    int32_t* esp_1 = &i_10
    int32_t i_9 = 0x35
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_9
        i_9 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_9
    int32_t i_15 = i_10
    i_10 = i_9
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg4
    *(esp_1 - 0x10) = arg5
    void* esp_6 = esp_1 - 0x10
    
    if (arg2.b != 0)
        esp_6 -= 0x10
        arg1 = sub_4033d0(i_15, arg2)
    
    i_10:3.b = arg2.b
    char* arg_8
    sub_40422c(arg_8)
    *(esp_6 - 4) = &var_4
    *(esp_6 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_6 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_6 - 0xc
    sub_4030a0(i_15, 0)
    void* esp_10 = esp_6 + 0x18
    char eax_3 = sub_409040(arg_8)
    
    if (eax_3 == 0)
        *(esp_10 - 4) = 0
        int32_t var_18c
        int32_t ecx_1
        int32_t edx_1
        ecx_1, edx_1 = sub_4040c4(&var_18c, arg_8, sub_52d473+5)
        ecx_1.w = 0x10
        edx_1.b = 1
        sub_44cce8(ecx_1)
        sub_403d40(1)
        noreturn
    
    char* var_190
    sub_4092cc(arg_8, &var_190)
    void* var_18
    sub_4088f0(var_190, &var_18)
    *(arg1 + 4) = i_15
    sub_404188(var_18, ".BMP")
    int32_t var_1b4
    int32_t var_1c
    char* var_30
    int32_t* var_24
    
    if (eax_3 != 0)
        sub_404188(var_18, ".JPG")
        
        if (eax_3 != 0)
            sub_404188(var_18, ".TGA")
            
            if (eax_3 == 0)
                void var_188
                sub_405e46(&var_188, arg_8)
                sub_4062e1()
                int32_t var_14
                *(esp_10 - 4) = &var_14
                void var_9
                sub_405ee8(4, &var_9, &var_188)
                
                if (sub_402968() != 0 || var_14 != 4)
                    *(esp_10 - 4) = 0
                    int32_t var_1a0
                    int32_t ecx_23
                    int32_t edx_89
                    ecx_23, edx_89 = sub_4040c4(&var_1a0, arg_8, " - unrecognized format")
                    ecx_23.w = 0x10
                    edx_89.b = 1
                    sub_44cce8(ecx_23)
                    sub_403d40(1)
                    noreturn
                
                sub_406318(&var_188, 0xc)
                *(esp_10 - 4) = &var_14
                char var_10
                sub_405ee8(7, &var_10, &var_188)
                
                if (sub_402968() != 0 || var_14 != 7)
                    *(esp_10 - 4) = 0
                    int32_t var_1a4
                    int32_t ecx_25
                    int32_t edx_92
                    ecx_25, edx_92 = sub_4040c4(&var_1a4, arg_8, " - unrecognized format")
                    ecx_25.w = 0x10
                    edx_92.b = 1
                    sub_44cce8(ecx_25)
                    sub_403d40(1)
                    noreturn
                
                if (i_10.b != 0 || i_10:1.b != 2)
                    *(esp_10 - 4) = 0
                    int32_t var_1a8
                    int32_t ecx_26
                    int32_t edx_94
                    ecx_26, edx_94 = sub_4040c4(&var_1a8, arg_8, " - unrecognized format")
                    ecx_26.w = 0x10
                    edx_94.b = 1
                    sub_44cce8(ecx_26)
                    sub_403d40(1)
                    noreturn
                
                char var_c
                int32_t eax_155
                eax_155.b = var_c
                
                if (eax_155.b != 0x20 && eax_155.b != 0x18)
                    *(esp_10 - 4) = 0
                    int32_t var_1ac
                    int32_t ecx_27
                    int32_t edx_96
                    ecx_27, edx_96 = sub_4040c4(&var_1ac, arg_8, " - unrecognized format")
                    ecx_27.w = 0x10
                    edx_96.b = 1
                    sub_44cce8(ecx_27)
                    sub_403d40(1)
                    noreturn
                
                int32_t eax_162
                eax_162.b = var_10
                char var_f
                int32_t edx_97
                edx_97.b = var_f
                int32_t edx_98 = edx_97 * 0x100
                bool o_72 = unimplemented  {imul edx, edx, 0x100}
                
                if (o_72)
                    sub_403010()
                    noreturn
                
                if (add_overflow(eax_162, edx_98))
                    sub_403010()
                    noreturn
                
                *(arg1 + 8) = eax_162 + edx_98
                char var_e
                int32_t eax_164
                eax_164.b = var_e
                char var_d
                int32_t edx_99
                edx_99.b = var_d
                int32_t edx_100 = edx_99 * 0x100
                bool o_74 = unimplemented  {imul edx, edx, 0x100}
                
                if (o_74)
                    sub_403010()
                    noreturn
                
                int32_t eax_165 = eax_164 + edx_100
                
                if (add_overflow(eax_164, edx_100))
                    sub_403010()
                    noreturn
                
                *(arg1 + 0xc) = eax_165
                
                if (var_c != 0x18)
                    bool o_87 = unimplemented  {imul edx, eax}
                    
                    if (o_87)
                        sub_403010()
                        noreturn
                    
                    bool o_88 = unimplemented  {imul eax, edx, 0x4}
                    
                    if (o_88)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_188 = sub_402754(*(arg1 + 8) * eax_165 * 4)
                    *(esp_10 - 4) = &var_14
                    *(arg1 + 0xc)
                    bool o_89 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_89)
                        sub_403010()
                        noreturn
                    
                    bool o_90 = unimplemented  {imul ecx, eax, 0x4}
                    
                    if (o_90)
                        sub_403010()
                        noreturn
                    
                    sub_402824(sub_405ee8(*(arg1 + 8) * *(arg1 + 0xc) * 4, eax_188, &var_188))
                    *(arg1 + 0xc)
                    bool o_91 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_91)
                        sub_403010()
                        noreturn
                    
                    bool o_92 = unimplemented  {imul eax, eax, 0x4}
                    
                    if (o_92)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + 8) * *(arg1 + 0xc) * 4 != var_14)
                        sub_40276c(eax_188)
                        *(esp_10 - 4) = 0
                        int32_t ecx_37
                        int32_t edx_111
                        ecx_37, edx_111 = sub_4040c4(&var_1b4, arg_8, " - read error")
                        ecx_37.w = 0x10
                        edx_111.b = 1
                        sub_44cce8(ecx_37)
                        sub_403d40(1)
                        noreturn
                    
                    *(arg1 + 0xc)
                    bool o_93 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_93)
                        sub_403010()
                        noreturn
                    
                    bool o_94 = unimplemented  {imul eax, eax, 0x4}
                    
                    if (o_94)
                        sub_403010()
                        noreturn
                    
                    *(arg1 + 0x10) = sub_402754(*(arg1 + 8) * *(arg1 + 0xc) * 4)
                    *(arg1 + 0xc)
                    int32_t i_14 = *(arg1 + 8) * *(arg1 + 0xc)
                    bool o_95 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_95)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(i_14, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (i_14 - 1 s>= 0)
                        int32_t i_8 = i_14
                        int32_t edi_3 = 0
                        int32_t i_1
                        
                        do
                            int32_t eax_206 = edi_3 * 3
                            bool o_97 = unimplemented  {imul eax, edi, 0x3}
                            
                            if (o_97)
                                sub_403010()
                                noreturn
                            
                            (*(arg1 + 0x10))[eax_206] = *(eax_188 + (edi_3 << 2) + 1)
                            *(*(arg1 + 0x10) + eax_206 + 1) = *(eax_188 + (edi_3 << 2))
                            *(*(arg1 + 0x10) + eax_206 + 2) = *(eax_188 + (edi_3 << 2) + 3)
                            edi_3 += 1
                            i_1 = i_8
                            i_8 -= 1
                        while (i_1 != 1)
                    
                    sub_40276c(eax_188)
                else
                    bool o_76 = unimplemented  {imul edx, eax}
                    
                    if (o_76)
                        sub_403010()
                        noreturn
                    
                    bool o_77 = unimplemented  {imul eax, edx, 0x3}
                    
                    if (o_77)
                        sub_403010()
                        noreturn
                    
                    void* eax_167 = sub_402754(*(arg1 + 8) * eax_165 * 3)
                    *(esp_10 - 4) = &var_14
                    *(arg1 + 0xc)
                    bool o_78 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_78)
                        sub_403010()
                        noreturn
                    
                    bool o_79 = unimplemented  {imul ecx, eax, 0x3}
                    
                    if (o_79)
                        sub_403010()
                        noreturn
                    
                    sub_402824(sub_405ee8(*(arg1 + 8) * *(arg1 + 0xc) * 3, eax_167, &var_188))
                    *(arg1 + 0xc)
                    bool o_80 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_80)
                        sub_403010()
                        noreturn
                    
                    bool o_81 = unimplemented  {imul eax, eax, 0x3}
                    
                    if (o_81)
                        sub_403010()
                        noreturn
                    
                    if (*(arg1 + 8) * *(arg1 + 0xc) * 3 != var_14)
                        sub_40276c(eax_167)
                        *(esp_10 - 4) = 0
                        int32_t var_1b0
                        int32_t ecx_29
                        int32_t edx_105
                        ecx_29, edx_105 = sub_4040c4(&var_1b0, arg_8, " - read error")
                        ecx_29.w = 0x10
                        edx_105.b = 1
                        sub_44cce8(ecx_29)
                        sub_403d40(1)
                        noreturn
                    
                    *(arg1 + 0xc)
                    bool o_82 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_82)
                        sub_403010()
                        noreturn
                    
                    bool o_83 = unimplemented  {imul eax, eax, 0x4}
                    
                    if (o_83)
                        sub_403010()
                        noreturn
                    
                    *(arg1 + 0x10) = sub_402754(*(arg1 + 8) * *(arg1 + 0xc) * 4)
                    *(arg1 + 0xc)
                    int32_t i_13 = *(arg1 + 8) * *(arg1 + 0xc)
                    bool o_84 = unimplemented  {imul dword [ebx+0xc]}
                    
                    if (o_84)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(i_13, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (i_13 - 1 s>= 0)
                        int32_t i_7 = i_13
                        int32_t edi_2 = 0
                        int32_t i_2
                        
                        do
                            int32_t eax_185 = edi_2 * 3
                            bool o_86 = unimplemented  {imul eax, edi, 0x3}
                            
                            if (o_86)
                                sub_403010()
                                noreturn
                            
                            *(esp_10 - 4) = *(eax_167 + eax_185 + 1)
                            char* edx_106 = *(arg1 + 0x10)
                            edx_106[eax_185] = (*(esp_10 - 4)).b
                            *(esp_10 - 4) = *(eax_167 + eax_185)
                            edx_106[eax_185 + 1] = (*(esp_10 - 4)).b
                            *(esp_10 - 4) = *(eax_167 + eax_185 + 2)
                            edx_106[eax_185 + 2] = (*(esp_10 - 4)).b
                            edi_2 += 1
                            i_2 = i_7
                            i_7 -= 1
                        while (i_2 != 1)
                    
                    sub_40276c(eax_167)
                
                sub_402824(sub_405f4c(&var_188))
        else
            int32_t edx_47
            edx_47.b = 1
            int32_t* eax_73 = sub_4535a8(sub_4532a0+0xa4, edx_47)
            (*(*eax_73 + 0x48))()
            int32_t edx_49
            edx_49.b = 1
            int32_t* eax_75 = sub_41dae0(sub_41799a+0xe2, edx_49)
            (*(*eax_75 + 0x68))()
            sub_41efec(eax_75, 6)
            *(arg1 + 8) = (*(*eax_73 + 0x2c))()
            *(arg1 + 0xc) = (*(*eax_73 + 0x20))()
            *(arg1 + 8)
            (*(*eax_75 + 0x40))()
            *(arg1 + 0xc)
            (*(*eax_75 + 0x34))()
            (*(*eax_75 + 8))()
            char* var_19c
            *(esp_10 - 4) = &var_19c
            int32_t eax_86 = sub_404078(arg_8)
            
            if (add_overflow(eax_86, 0xfffffffc))
                sub_403010()
                noreturn
            
            sub_404280(eax_86 - 4, 1, arg_8)
            sub_4040c4(&var_1c, var_19c, "a.bmp")
            char eax_90
            int32_t edx_59
            
            if (arg6 == 0)
                eax_90 = 0
            else
                eax_90, edx_59 = sub_409040(var_1c)
                
                eax_90 = eax_90 != 0 ? 1 : 0
            
            if (eax_90 != 0)
                edx_59.b = 1
                var_24 = sub_41dae0(sub_41799a+0xe2, edx_59)
                (*(*var_24 + 0x68))()
                (*(*var_24 + 0x48))()
            
            if (arg6 == 0)
                *(arg1 + 0xc)
                bool o_40 = unimplemented  {imul dword [ebx+0xc]}
                
                if (o_40)
                    sub_403010()
                    noreturn
                
                bool o_41 = unimplemented  {imul eax, eax, 0x3}
                
                if (o_41)
                    sub_403010()
                    noreturn
                
                *(arg1 + 0x10) = sub_402754(*(arg1 + 8) * *(arg1 + 0xc) * 3)
            else
                *(arg1 + 0xc)
                bool o_38 = unimplemented  {imul dword [ebx+0xc]}
                
                if (o_38)
                    sub_403010()
                    noreturn
                
                bool o_39 = unimplemented  {imul eax, eax, 0x4}
                
                if (o_39)
                    sub_403010()
                    noreturn
                
                *(arg1 + 0x14) = sub_402754(*(arg1 + 8) * *(arg1 + 0xc) * 4)
            
            int32_t i_12 = *(arg1 + 0xc)
            
            if (add_overflow(i_12, 0xffffffff))
                sub_403010()
                noreturn
            
            if (i_12 - 1 s>= 0)
                int32_t i_6 = i_12
                int32_t edi_1 = 0
                int32_t i_3
                
                do
                    int32_t edx_62 = *(arg1 + 0xc)
                    
                    if (add_overflow(edx_62, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edx_62 - 1, neg.d(edi_1)))
                        sub_403010()
                        noreturn
                    
                    char* eax_105
                    int32_t ecx_21
                    eax_105, ecx_21 = sub_41e1b4(eax_75, edx_62 - 1 - edi_1)
                    
                    if (eax_90 != 0)
                        int32_t edx_65 = *(arg1 + 0xc)
                        
                        if (add_overflow(edx_65, 0xffffffff))
                            sub_403010()
                            noreturn
                        
                        if (add_overflow(edx_65 - 1, neg.d(edi_1)))
                            sub_403010()
                            noreturn
                        
                        char* eax_107
                        eax_107, ecx_21 = sub_41e1b4(var_24, edx_65 - 1 - edi_1)
                        var_30 = eax_107
                    
                    int32_t j_5 = *(arg1 + 8)
                    
                    if (add_overflow(j_5, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (j_5 - 1 s>= 0)
                        int32_t j_3 = j_5
                        int32_t esi_3 = 0
                        int32_t j
                        
                        do
                            int32_t eax_110 = esi_3 * 3
                            bool o_48 = unimplemented  {imul eax, esi, 0x3}
                            
                            if (o_48)
                                sub_403010()
                                noreturn
                            
                            char* edx_68
                            edx_68.b = eax_105[eax_110 + 2]
                            char var_31_2 = edx_68.b
                            char* edx_69
                            edx_69.b = eax_105[eax_110 + 1]
                            char var_32_2 = edx_69.b
                            eax_110.b = eax_105[eax_110]
                            char var_33_2 = eax_110.b
                            
                            if (arg6 == 0)
                                *(arg1 + 8)
                                int32_t eax_133 = edi_1 * *(arg1 + 8)
                                bool o_63 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_63)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_133, esi_3))
                                    sub_403010()
                                    noreturn
                                
                                bool o_65 = unimplemented  {imul eax, eax, 0x3}
                                
                                if (o_65)
                                    sub_403010()
                                    noreturn
                                
                                ecx_21.b = var_31_2
                                (*(arg1 + 0x10))[(eax_133 + esi_3) * 3] = ecx_21.b
                                *(arg1 + 8)
                                int32_t eax_137 = edi_1 * *(arg1 + 8)
                                bool o_66 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_66)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_137, esi_3))
                                    sub_403010()
                                    noreturn
                                
                                bool o_68 = unimplemented  {imul eax, eax, 0x3}
                                
                                if (o_68)
                                    sub_403010()
                                    noreturn
                                
                                ecx_21.b = var_32_2
                                *(*(arg1 + 0x10) + (eax_137 + esi_3) * 3 + 1) = ecx_21.b
                                *(arg1 + 8)
                                int32_t eax_141 = edi_1 * *(arg1 + 8)
                                bool o_69 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_69)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_141, esi_3))
                                    sub_403010()
                                    noreturn
                                
                                bool o_71 = unimplemented  {imul eax, eax, 0x3}
                                
                                if (o_71)
                                    sub_403010()
                                    noreturn
                                
                                ecx_21.b = var_33_2
                                *(*(arg1 + 0x10) + (eax_141 + esi_3) * 3 + 2) = ecx_21.b
                            else
                                *(arg1 + 8)
                                int32_t eax_112 = edi_1 * *(arg1 + 8)
                                bool o_49 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_49)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_112, esi_3))
                                    sub_403010()
                                    noreturn
                                
                                ecx_21.b = var_31_2
                                *(*(arg1 + 0x14) + ((eax_112 + esi_3) << 2)) = ecx_21.b
                                *(arg1 + 8)
                                int32_t eax_115 = edi_1 * *(arg1 + 8)
                                bool o_51 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_51)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_115, esi_3))
                                    sub_403010()
                                    noreturn
                                
                                ecx_21.b = var_32_2
                                *(*(arg1 + 0x14) + ((eax_115 + esi_3) << 2) + 1) = ecx_21.b
                                *(arg1 + 8)
                                int32_t eax_118 = edi_1 * *(arg1 + 8)
                                bool o_53 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_53)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_118, esi_3))
                                    sub_403010()
                                    noreturn
                                
                                ecx_21.b = var_33_2
                                *(*(arg1 + 0x14) + ((eax_118 + esi_3) << 2) + 2) = ecx_21.b
                                
                                if (eax_90 != 0)
                                    bool o_60 = unimplemented  {imul eax, esi, 0x3}
                                    
                                    if (o_60)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t eax_131
                                    eax_131.b = var_30[esi_3 * 3]
                                    *(arg1 + 8)
                                    int32_t edx_80 = edi_1 * *(arg1 + 8)
                                    bool o_61 = unimplemented  {imul edx, dword [ebx+0x8]}
                                    
                                    if (o_61)
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(edx_80, esi_3))
                                        sub_403010()
                                        noreturn
                                    
                                    *(*(arg1 + 0x14) + ((edx_80 + esi_3) << 2) + 3) = eax_131.b
                                else if (var_31_2 u< 0xff)
                                label_52cf07:
                                    *(arg1 + 8)
                                    int32_t eax_129 = edi_1 * *(arg1 + 8)
                                    bool o_58 = unimplemented  {imul dword [ebx+0x8]}
                                    
                                    if (o_58)
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_129, esi_3))
                                        sub_403010()
                                        noreturn
                                    
                                    *(*(arg1 + 0x14) + ((eax_129 + esi_3) << 2) + 3) = 0xff
                                else
                                    *(esp_10 - 4) = zx.d(var_32_2)
                                    uint32_t eax_124 = zx.d(var_33_2)
                                    int32_t edx_74 = *(esp_10 - 4)
                                    
                                    if (add_overflow(edx_74, eax_124))
                                        sub_403010()
                                        noreturn
                                    
                                    if (edx_74 + eax_124 != 0)
                                        goto label_52cf07
                                    
                                    *(arg1 + 8)
                                    int32_t eax_126 = edi_1 * *(arg1 + 8)
                                    bool o_56 = unimplemented  {imul dword [ebx+0x8]}
                                    
                                    if (o_56)
                                        sub_403010()
                                        noreturn
                                    
                                    if (add_overflow(eax_126, esi_3))
                                        sub_403010()
                                        noreturn
                                    
                                    *(*(arg1 + 0x14) + ((eax_126 + esi_3) << 2) + 3) = 0
                            
                            esi_3 += 1
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                    
                    edi_1 += 1
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
            
            sub_4030d0(eax_75)
            
            if (eax_90 != 0)
                sub_4030d0(var_24)
            
            sub_4030d0(eax_73)
    else
        int32_t edx_4
        edx_4.b = 1
        int32_t* eax_9 = sub_41dae0(sub_41799a+0xe2, edx_4)
        (*(*eax_9 + 0x68))()
        (*(*eax_9 + 0x48))()
        int32_t var_194
        *(esp_10 - 4) = &var_194
        int32_t eax_13 = sub_404078(arg_8)
        
        if (add_overflow(eax_13, 0xfffffffc))
            sub_403010()
            noreturn
        
        sub_404280(eax_13 - 4, 1, arg_8)
        *(esp_10 - 4) = var_194
        *(esp_10 - 8) = &data_52d4a0
        int32_t var_198
        *(esp_10 - 0xc) = &var_198
        int32_t eax_16 = sub_404078(arg_8)
        
        if (add_overflow(eax_16, 0xfffffffd))
            sub_403010()
            noreturn
        
        sub_404280(4, eax_16 - 3, arg_8)
        *(esp_10 - 0xc) = var_198
        sub_404138(&var_1c, 3)
        char eax_20
        int32_t edx_10
        
        if (arg6 == 0)
            eax_20 = 0
        else
            eax_20, edx_10 = sub_409040(var_1c)
            
            eax_20 = eax_20 != 0 ? 1 : 0
        
        if (eax_20 != 0)
            arg6 = 1
            edx_10.b = 1
            var_24 = sub_41dae0(sub_41799a+0xe2, edx_10)
            (*(*var_24 + 0x68))()
            (*(*var_24 + 0x48))()
        
        edx_10.b = 6
        sub_41efec(eax_9, edx_10.b)
        *(arg1 + 8) = (*(*eax_9 + 0x2c))()
        int32_t eax_28 = (*(*eax_9 + 0x20))()
        *(arg1 + 0xc) = eax_28
        
        if (arg6 == 0)
            bool o_5 = unimplemented  {imul esi}
            
            if (o_5)
                sub_403010()
                noreturn
            
            bool o_6 = unimplemented  {imul eax, eax, 0x3}
            
            if (o_6)
                sub_403010()
                noreturn
            
            *(arg1 + 0x10) = sub_402754(*(arg1 + 8) * eax_28 * 3)
        else
            bool o_3 = unimplemented  {imul esi}
            
            if (o_3)
                sub_403010()
                noreturn
            
            bool o_4 = unimplemented  {imul eax, eax, 0x4}
            
            if (o_4)
                sub_403010()
                noreturn
            
            *(arg1 + 0x14) = sub_402754(*(arg1 + 8) * eax_28 * 4)
        
        int32_t i_11 = *(arg1 + 0xc)
        
        if (add_overflow(i_11, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_11 - 1 s>= 0)
            int32_t i_5 = i_11
            int32_t edi = 0
            int32_t i_4
            
            do
                int32_t edx_15 = *(arg1 + 0xc)
                
                if (add_overflow(edx_15, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (add_overflow(edx_15 - 1, neg.d(edi)))
                    sub_403010()
                    noreturn
                
                char* eax_40
                int32_t ecx_9
                eax_40, ecx_9 = sub_41e1b4(eax_9, edx_15 - 1 - edi)
                
                if (eax_20 != 0)
                    int32_t edx_18 = *(arg1 + 0xc)
                    
                    if (add_overflow(edx_18, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(edx_18 - 1, neg.d(edi)))
                        sub_403010()
                        noreturn
                    
                    char* eax_42
                    eax_42, ecx_9 = sub_41e1b4(var_24, edx_18 - 1 - edi)
                    var_30 = eax_42
                
                int32_t j_4 = *(arg1 + 8)
                
                if (add_overflow(j_4, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (j_4 - 1 s>= 0)
                    int32_t j_2 = j_4
                    int32_t esi_2 = 0
                    int32_t j_1
                    
                    do
                        int32_t eax_45 = esi_2 * 3
                        bool o_13 = unimplemented  {imul eax, esi, 0x3}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        char* edx_21
                        edx_21.b = eax_40[eax_45 + 2]
                        char var_31_1 = edx_21.b
                        char* edx_22
                        edx_22.b = eax_40[eax_45 + 1]
                        char var_32_1 = edx_22.b
                        eax_45.b = eax_40[eax_45]
                        char var_33_1 = eax_45.b
                        
                        if (arg6 == 0)
                            *(arg1 + 8)
                            int32_t edx_36 = edi * *(arg1 + 8)
                            bool o_28 = unimplemented  {imul edx, dword [ebx+0x8]}
                            
                            if (o_28)
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(edx_36, esi_2))
                                sub_403010()
                                noreturn
                            
                            bool o_30 = unimplemented  {imul edx, edx, 0x3}
                            
                            if (o_30)
                                sub_403010()
                                noreturn
                            
                            (*(arg1 + 0x10))[(edx_36 + esi_2) * 3] = var_31_1
                            *(arg1 + 8)
                            int32_t edx_40 = edi * *(arg1 + 8)
                            bool o_31 = unimplemented  {imul edx, dword [ebx+0x8]}
                            
                            if (o_31)
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(edx_40, esi_2))
                                sub_403010()
                                noreturn
                            
                            bool o_33 = unimplemented  {imul edx, edx, 0x3}
                            
                            if (o_33)
                                sub_403010()
                                noreturn
                            
                            *(*(arg1 + 0x10) + (edx_40 + esi_2) * 3 + 1) = var_32_1
                            *(arg1 + 8)
                            int32_t edx_44 = edi * *(arg1 + 8)
                            bool o_34 = unimplemented  {imul edx, dword [ebx+0x8]}
                            
                            if (o_34)
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(edx_44, esi_2))
                                sub_403010()
                                noreturn
                            
                            bool o_36 = unimplemented  {imul edx, edx, 0x3}
                            
                            if (o_36)
                                sub_403010()
                                noreturn
                            
                            *(*(arg1 + 0x10) + (edx_44 + esi_2) * 3 + 2) = var_33_1
                        else
                            *(arg1 + 8)
                            int32_t eax_47 = edi * *(arg1 + 8)
                            bool o_14 = unimplemented  {imul dword [ebx+0x8]}
                            
                            if (o_14)
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_47, esi_2))
                                sub_403010()
                                noreturn
                            
                            ecx_9.b = var_31_1
                            *(*(arg1 + 0x14) + ((eax_47 + esi_2) << 2)) = ecx_9.b
                            *(arg1 + 8)
                            int32_t eax_50 = edi * *(arg1 + 8)
                            bool o_16 = unimplemented  {imul dword [ebx+0x8]}
                            
                            if (o_16)
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_50, esi_2))
                                sub_403010()
                                noreturn
                            
                            ecx_9.b = var_32_1
                            *(*(arg1 + 0x14) + ((eax_50 + esi_2) << 2) + 1) = ecx_9.b
                            *(arg1 + 8)
                            int32_t eax_53 = edi * *(arg1 + 8)
                            bool o_18 = unimplemented  {imul dword [ebx+0x8]}
                            
                            if (o_18)
                                sub_403010()
                                noreturn
                            
                            if (add_overflow(eax_53, esi_2))
                                sub_403010()
                                noreturn
                            
                            ecx_9.b = var_33_1
                            *(*(arg1 + 0x14) + ((eax_53 + esi_2) << 2) + 2) = ecx_9.b
                            
                            if (eax_20 != 0)
                                bool o_25 = unimplemented  {imul eax, esi, 0x3}
                                
                                if (o_25)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_66
                                eax_66.b = var_30[esi_2 * 3]
                                *(arg1 + 8)
                                int32_t edx_33 = edi * *(arg1 + 8)
                                bool o_26 = unimplemented  {imul edx, dword [ebx+0x8]}
                                
                                if (o_26)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(edx_33, esi_2))
                                    sub_403010()
                                    noreturn
                                
                                *(*(arg1 + 0x14) + ((edx_33 + esi_2) << 2) + 3) = eax_66.b
                            else if (var_31_1 u< 0xff)
                            label_52cb33:
                                *(arg1 + 8)
                                int32_t eax_64 = edi * *(arg1 + 8)
                                bool o_23 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_23)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_64, esi_2))
                                    sub_403010()
                                    noreturn
                                
                                *(*(arg1 + 0x14) + ((eax_64 + esi_2) << 2) + 3) = 0xff
                            else
                                *(esp_10 - 4) = zx.d(var_32_1)
                                uint32_t eax_59 = zx.d(var_33_1)
                                int32_t edx_27 = *(esp_10 - 4)
                                
                                if (add_overflow(edx_27, eax_59))
                                    sub_403010()
                                    noreturn
                                
                                if (edx_27 + eax_59 != 0)
                                    goto label_52cb33
                                
                                *(arg1 + 8)
                                int32_t eax_61 = edi * *(arg1 + 8)
                                bool o_21 = unimplemented  {imul dword [ebx+0x8]}
                                
                                if (o_21)
                                    sub_403010()
                                    noreturn
                                
                                if (add_overflow(eax_61, esi_2))
                                    sub_403010()
                                    noreturn
                                
                                *(*(arg1 + 0x14) + ((eax_61 + esi_2) << 2) + 3) = 0
                        
                        esi_2 += 1
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                
                edi += 1
                i_4 = i_5
                i_5 -= 1
            while (i_4 != 1)
        
        sub_4030d0(eax_9)
        
        if (eax_20 != 0)
            sub_4030d0(var_24)
    *(esp_10 + 8)
    fsbase->NtTib.ExceptionList = *esp_10
    *(esp_10 + 8) = sub_52d44e
    sub_403e1c(&var_1b4, 0xb)
    sub_403e1c(&var_1c, 2)
    char** result = &arg_8
    sub_403df8(result)
    return result
}
