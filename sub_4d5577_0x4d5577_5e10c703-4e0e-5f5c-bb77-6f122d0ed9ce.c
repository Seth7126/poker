// ============================================================
// 函数名称: sub_4d5577
// 虚拟地址: 0x4d5577
// WARP GUID: 5e10c703-4e0e-5f5c-bb77-6f122d0ed9ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_507d4c, sub_4d2a58, sub_404080, sub_4c094c, sub_403df8, sub_4cff1c, sub_4d0148, sub_403010, sub_4d5b64, sub_402bdc, sub_4d00b8, sub_4d5b1c
// [被调用的父级函数]: 无
// ============================================================

void*sub_4d5577(int32_t* arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3 @ edi, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t eax = arg3 & 0x80000001
    int32_t eax = arg3 & 0x80000001
    
    if (eax s< 0)
        eax = ((eax - 1) | 0xfffffffe) + 1
    
    if (eax == 1)
        *(arg1 - 0x15) = 1
    
    while (true)
        char entry_ebx
        
        if (*(*data_530304 + 0xdfa) != 0)
            int32_t eax_12
            
            if (mods.dp.d(sx.q(arg3), 3) != 0)
                eax_12 = 0
            else
                int32_t eax_9
                eax_9.b = entry_ebx
                bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                bool o_2 = unimplemented  {imul edx, esi, 0x2e9c}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t eax_11 = *(arg2 * 0x174e0 + &data_532f70 + eax_9 * 0x353c - 0x14010)
                
                if (add_overflow(eax_11, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (add_overflow(arg3, 2))
                    sub_403010()
                    noreturn
                
                if (eax_11 - 1 s>= arg3 + 2)
                    eax_12.b = 1
                else
                    eax_12 = 0
            
            arg1[-6].b = eax_12.b
            
            if (arg1[-6].b == 0)
                *(arg1 - 0x15) = 1
                int32_t eax_13
                eax_13.b = entry_ebx
                bool o_5 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                bool o_6 = unimplemented  {imul edx, esi, 0x2e9c}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                int32_t eax_15 = *(arg2 * 0x174e0 + &data_532f70 + eax_13 * 0x353c - 0x14010)
                
                if (add_overflow(eax_15, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (mods.dp.d(sx.q(eax_15 - 1), 3) u< 2)
                    int32_t eax_19
                    eax_19.b = entry_ebx
                    bool o_8 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    bool o_9 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_21 = *(arg2 * 0x174e0 + &data_532f70 + eax_19 * 0x353c - 0x14010)
                    
                    if (add_overflow(eax_21, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    if (arg3 == eax_21 - 1)
                        *(arg1 - 0x15) = 0
                
                int32_t eax_23
                eax_23.b = entry_ebx
                bool o_11 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_11)
                    sub_403010()
                    noreturn
                
                bool o_12 = unimplemented  {imul edx, esi, 0x2e9c}
                
                if (o_12)
                    sub_403010()
                    noreturn
                
                int32_t eax_25 = *(arg2 * 0x174e0 + &data_532f70 + eax_23 * 0x353c - 0x14010)
                
                if (add_overflow(eax_25, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (mods.dp.d(sx.q(eax_25 - 1), 3) == 1)
                    int32_t eax_29
                    eax_29.b = entry_ebx
                    bool o_14 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_14)
                        sub_403010()
                        noreturn
                    
                    bool o_15 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_15)
                        sub_403010()
                        noreturn
                    
                    int32_t eax_31 = *(arg2 * 0x174e0 + &data_532f70 + eax_29 * 0x353c - 0x14010)
                    
                    if (add_overflow(eax_31, 0xfffffffe))
                        sub_403010()
                        noreturn
                    
                    if (arg3 == eax_31 - 2)
                        *(arg1 - 0x15) = 0
        
        void* eax_139
        
        while (true)
            if (*(*data_530304 + 0xdfa) != 0)
                int32_t eax_51
                eax_51.b = entry_ebx
                bool o_23 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                bool o_24 = unimplemented  {imul edx, esi, 0x2e9c}
                
                if (o_24)
                    sub_403010()
                    noreturn
                
                bool o_25 = unimplemented  {imul edx, edi, 0xa}
                
                if (o_25)
                    sub_403010()
                    noreturn
                
                *(arg1 - 0x19) = sub_4d00b8(arg2 * 0x174e0 +
                    &data_532f70 + eax_51 * 0x353c + arg3 * 0x50 - 0x174e0).b
            
            if (*(arg1 - 1) != 0)
                if (*(arg1 - 1) == 1)
                label_4d5891:
                    int32_t eax_58
                    eax_58.b = entry_ebx
                    bool o_26 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_26)
                        sub_403010()
                        noreturn
                    
                    bool o_27 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_27)
                        sub_403010()
                        noreturn
                    
                    bool o_28 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_28)
                        sub_403010()
                        noreturn
                    
                    *(arg1 - 0x15) = sub_4d00b8(arg2 * 0x174e0 +
                        &data_532f70 + eax_58 * 0x353c + arg3 * 0x50 - 0x174e0)
                    int32_t eax_63
                    eax_63.b = entry_ebx
                    bool o_29 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_29)
                        sub_403010()
                        noreturn
                    
                    bool o_30 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_30)
                        sub_403010()
                        noreturn
                    
                    bool o_31 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_31)
                        sub_403010()
                        noreturn
                    
                    arg1[-6].b = sub_4cff1c(arg2 * 0x174e0 +
                        &data_532f70 + eax_63 * 0x353c + arg3 * 0x50 - 0x174e0).b
            else if (*(arg1 - 0x16) == 0)
                if ((entry_ebx != 6 && (*(*data_530304 + 0xdfb) != 0 || *(*data_530304 + 0xdc0) s<= 2))
                        || *(arg1 - 1) == 1)
                    goto label_4d5891
            else if ((*(arg1 - 0x17) != 0 && entry_ebx != 6
                    && (*(*data_530304 + 0xdfb) != 0 || *(*data_530304 + 0xdc0) s<= 2)) || *(arg1 - 1) == 1)
                goto label_4d5891
            
            if (*(arg1 - 0x15) == 0)
                if (*(arg1 - 1) == 1)
                    if (arg2 != 1)
                        int32_t eax_71 = sub_4d5b1c(entry_ebx)
                        
                        if (add_overflow(eax_71, 0x14))
                            sub_403010()
                            noreturn
                        
                        arg1[-9] = eax_71 + 0x14
                    else
                        int32_t eax_68 = sub_4d5b1c(entry_ebx)
                        
                        if (add_overflow(eax_68, 0xa))
                            sub_403010()
                            noreturn
                        
                        arg1[-9] = eax_68 + 0xa
                    
                    (*data_5307b0)(arg1[-9])
                    arg1[-8] = 3
                
                void* eax_50
                eax_50.b = arg1[-6].b
                void* var_4_2 = eax_50
                eax_50.b = *(arg1 - 0x19)
                void* var_8_1 = eax_50
                int32_t eax_76
                eax_76.b = entry_ebx
                bool o_34 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_34)
                    sub_403010()
                    noreturn
                
                bool o_35 = unimplemented  {imul edx, esi, 0x2e9c}
                
                if (o_35)
                    sub_403010()
                    noreturn
                
                bool o_36 = unimplemented  {imul edx, edi, 0xa}
                
                if (o_36)
                    sub_403010()
                    noreturn
                
                arg1[-8]
                int32_t edx_38
                edx_38.b = *(arg1 - 1)
                sub_4d2a58(arg2 * 0x174e0 + &data_532f70 + eax_76 * 0x353c + arg3 * 0x50 - 0x174e0)
            
            while (true)
                arg1[-3] += 1
                int32_t temp8_1 = arg1[-0xd]
                arg1[-0xd] -= 1
                
                if (temp8_1 == 1)
                    int32_t eax_107
                    
                    do
                        *(arg1 - 0x25) = entry_ebx == 0
                        
                        if (*(arg1 - 0x25) == 0)
                            int32_t eax_81 = sub_4d5b1c(entry_ebx)
                            
                            if (add_overflow(eax_81, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            entry_ebx = sub_4d5b64(eax_81 - 1)
                        
                        if (entry_ebx == 5)
                            entry_ebx = 4
                        
                        if (*(arg1 - 0x25) != 0)
                            arg1[-2] += 1
                            int32_t temp22_1 = arg1[-0xc]
                            arg1[-0xc] -= 1
                            
                            if (temp22_1 == 1)
                                int32_t i
                                
                                do
                                    arg1[-0xa].b += 1
                                    
                                    if (arg1[-0xa].b == 2)
                                        int32_t eax_85 = *data_5300d0
                                        
                                        if (eax_85 s>= 0xffffffff)
                                            arg1[-0xc] = eax_85 + 2
                                            arg1[-2] = 0xffffffff
                                            int32_t j
                                            
                                            do
                                                int32_t esi = arg1[-2]
                                                
                                                if (arg1[-2] == 0xffffffff)
                                                    esi = 9
                                                
                                                if (arg1[-2] == 0)
                                                    esi = 0xa
                                                
                                                char eax_88
                                                
                                                if (esi == 0xa)
                                                    eax_88 = sub_4c094c()
                                                
                                                if (esi != 0xa || eax_88 == 0
                                                        || *(*data_530454 + 0x1e4) == 0
                                                        || *(*data_5301f4 + 0x10148) s> 1
                                                        || *(*data_5301f4 + 0x4584) != 0)
                                                    *(arg1 - 0x26) = 0
                                                else
                                                    *(arg1 - 0x26) = 1
                                                    sub_507d4c(&arg1[-0x59])
                                                    sub_404080(&arg1[-0x59], " starten..")
                                                    sub_404054(&arg1[-0x58], arg1[-0x59], 0xff)
                                                    sub_402bdc(arg1 - 0x59, &arg1[-0x58], 0x20)
                                                
                                                arg1[-2] += 1
                                                j = arg1[-0xc]
                                                arg1[-0xc] -= 1
                                            while (j != 1)
                                        
                                        TEB* fsbase
                                        fsbase->NtTib.ExceptionList = __return_addr
                                        sub_403df8(&arg1[-0x59])
                                        sub_403df8(&arg1[-0x18])
                                        *arg1
                                        return &arg1[-0x18]
                                    
                                    i = *data_5300d0
                                while (i s< 0xffffffff)
                                
                                arg1[-0xc] = i + 2
                                arg1[-2] = 0xffffffff
                            
                            arg2 = arg1[-2]
                            
                            if (arg1[-2] == 0xffffffff)
                                arg2 = 9
                            
                            if (arg1[-2] == 0)
                                arg2 = 0xa
                            
                            if (*(arg1 - 1) != 1)
                                entry_ebx = 6
                        
                        int32_t eax_105
                        eax_105.b = entry_ebx
                        bool o_38 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_38)
                            sub_403010()
                            noreturn
                        
                        bool o_39 = unimplemented  {imul edx, esi, 0x2e9c}
                        
                        if (o_39)
                            sub_403010()
                            noreturn
                        
                        eax_107 = *(arg2 * 0x174e0 + &data_532f70 + eax_105 * 0x353c - 0x14010)
                        
                        if (add_overflow(eax_107, 0xffffffff))
                            sub_403010()
                            noreturn
                    while (eax_107 - 1 s< 0)
                    
                    arg1[-0xd] = eax_107
                    arg1[-3] = 0
                
                if (arg1[-0xa].b == 0 || *(arg1 - 1) != 0)
                    arg3 = arg1[-3]
                else
                    int32_t eax_110
                    eax_110.b = entry_ebx
                    bool o_41 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_41)
                        sub_403010()
                        noreturn
                    
                    bool o_42 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_42)
                        sub_403010()
                        noreturn
                    
                    int32_t edi_1 = *(arg2 * 0x174e0 + &data_532f70 + eax_110 * 0x353c - 0x14010)
                    
                    if (add_overflow(edi_1, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    arg3 = edi_1 - 1 - arg1[-3]
                    
                    if (add_overflow(edi_1 - 1, neg.d(arg1[-3])))
                        sub_403010()
                        noreturn
                
                int32_t eax_112
                eax_112.b = entry_ebx
                bool o_45 = unimplemented  {imul eax, eax, 0xd4f}
                
                if (o_45)
                    sub_403010()
                    noreturn
                
                bool o_46 = unimplemented  {imul edx, esi, 0x2e9c}
                
                if (o_46)
                    sub_403010()
                    noreturn
                
                bool o_47 = unimplemented  {imul edx, edi, 0xa}
                
                if (o_47)
                    sub_403010()
                    noreturn
                
                void* eax_114
                eax_114.b = *(arg2 * 0x174e0 + &data_532f70 + eax_112 * 0x353c + arg3 * 0x50 - 0x174c8)
                int32_t edx_48
                edx_48.b = eax_114.b == 0
                
                if (edx_48.b == arg1[-0xa].b)
                    arg1[-8] = 0
                    arg1[-6].b = 0
                    *(arg1 - 0x15) = 0
                    *(arg1 - 0x19) = 0
                    int32_t edx_49
                    edx_49.b = entry_ebx
                    bool o_48 = unimplemented  {imul edx, edx, 0xd4f}
                    
                    if (o_48)
                        sub_403010()
                        noreturn
                    
                    bool o_49 = unimplemented  {imul ecx, esi, 0x2e9c}
                    
                    if (o_49)
                        sub_403010()
                        noreturn
                    
                    bool var_4_3 = (arg2 * 0x174e0).b + 0x70 + (edx_49 * 0x353c).b
                    bool o_50 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_50)
                        sub_403010()
                        noreturn
                    
                    *(arg1 - 0x16) = eax_114.b == 0
                    int32_t eax_118
                    
                    if (*(arg1 - 0x16) == 0)
                        eax_118 = 0
                    else
                        int32_t eax_115
                        eax_115.b = entry_ebx
                        bool o_51 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_51)
                            sub_403010()
                            noreturn
                        
                        bool o_52 = unimplemented  {imul edx, esi, 0x2e9c}
                        
                        if (o_52)
                            sub_403010()
                            noreturn
                        
                        void* eax_117 = arg2 * 0x174e0 + &data_532f70 + eax_115 * 0x353c
                        int32_t edx_55 = arg3 * 0xa
                        bool o_53 = unimplemented  {imul edx, edi, 0xa}
                        
                        if (o_53)
                            sub_403010()
                            noreturn
                        
                        *(eax_117 + (edx_55 << 3) - 0x174c4)
                        bool o_54 = unimplemented  {imul eax, dword [eax+edx*8-0x174c4], 0x2}
                        
                        if (o_54)
                            sub_403010()
                            noreturn
                        
                        if (*(data_61c0d0 + *(eax_117 + (edx_55 << 3) - 0x174c4) * 0x10 + 0x1a) == 6)
                            eax_118.b = 1
                        else
                            eax_118 = 0
                    
                    *(arg1 - 0x17) = eax_118.b
                    int32_t eax_119
                    eax_119.b = entry_ebx
                    bool o_55 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_55)
                        sub_403010()
                        noreturn
                    
                    bool o_56 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_56)
                        sub_403010()
                        noreturn
                    
                    bool o_57 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_57)
                        sub_403010()
                        noreturn
                    
                    if (*(arg2 * 0x174e0 + &data_532f70 + eax_119 * 0x353c + arg3 * 0x50 - 0x174c8)
                            != 2)
                        int32_t eax_135
                        eax_135.b = entry_ebx
                        bool o_73 = unimplemented  {imul eax, eax, 0xd4f}
                        
                        if (o_73)
                            sub_403010()
                            noreturn
                        
                        bool o_74 = unimplemented  {imul edx, esi, 0x2e9c}
                        
                        if (o_74)
                            sub_403010()
                            noreturn
                        
                        bool o_75 = unimplemented  {imul edx, edi, 0xa}
                        
                        if (o_75)
                            sub_403010()
                            noreturn
                        
                        if (*(arg2 * 0x174e0 + &data_532f70 + eax_135 * 0x353c + arg3 * 0x50 - 0x174c8)
                                != 3)
                            if (*(arg1 - 1) != 6)
                                break
                    else
                        if (entry_ebx != 6 || arg2 == 9)
                            int32_t edx_63
                            edx_63.b = entry_ebx
                            int32_t edx_64 = edx_63 * 0xd4f
                            bool o_61 = unimplemented  {imul edx, edx, 0xd4f}
                            
                            if (o_61)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_125 = arg2 * 0x2e9c
                            bool o_62 = unimplemented  {imul eax, esi, 0x2e9c}
                            
                            if (o_62)
                                sub_403010()
                                noreturn
                            
                            int32_t temp42_1 =
                                *((eax_125 << 3) + &data_532f70 + (edx_64 << 2) - 0x14010)
                            *((eax_125 << 3) + &data_532f70 + (edx_64 << 2) - 0x14010) -= 1
                            
                            if (add_overflow(temp42_1, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            int32_t edx_65
                            edx_65.b = entry_ebx
                            bool o_64 = unimplemented  {imul edx, edx, 0xd4f}
                            
                            if (o_64)
                                sub_403010()
                                noreturn
                            
                            int32_t eax_127 =
                                *((eax_125 << 3) + &data_532f70 + edx_65 * 0x353c - 0x14010)
                            
                            if (add_overflow(eax_127, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            if (eax_127 - 1 s>= arg3)
                                arg1[-0xe] = eax_127 - 1 - arg3 + 1
                                bool o_66 = unimplemented  {imul eax, eax, 0xa}
                                
                                if (o_66)
                                    sub_403010()
                                    noreturn
                                
                                void* eax_133 = arg3 * 0x50 + &data_532f70
                                int32_t i_1
                                
                                do
                                    bool o_67 = unimplemented  {imul edx, esi, 0x2e9c}
                                    
                                    if (o_67)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t ecx_8
                                    ecx_8.b = entry_ebx
                                    bool o_68 = unimplemented  {imul ecx, ecx, 0xd4f}
                                    
                                    if (o_68)
                                        sub_403010()
                                        noreturn
                                    
                                    bool o_69 = unimplemented  {imul edx, esi, 0x2e9c}
                                    
                                    if (o_69)
                                        sub_403010()
                                        noreturn
                                    
                                    int32_t ecx_10
                                    ecx_10.b = entry_ebx
                                    bool o_70 = unimplemented  {imul ecx, ecx, 0xd4f}
                                    
                                    if (o_70)
                                        sub_403010()
                                        noreturn
                                    
                                    __builtin_memcpy(
                                        eax_133 + arg2 * 0x174e0 + ecx_10 * 0x353c - 0x174e0, 
                                        eax_133 + arg2 * 0x174e0 + ecx_8 * 0x353c - 0x17490, 0x50)
                                    eax_133 += 0x50
                                    i_1 = arg1[-0xe]
                                    arg1[-0xe] -= 1
                                while (i_1 != 1)
                        else
                            int32_t eax_122
                            eax_122.b = entry_ebx
                            bool o_58 = unimplemented  {imul eax, eax, 0xd4f}
                            
                            if (o_58)
                                sub_403010()
                                noreturn
                            
                            bool o_59 = unimplemented  {imul edx, esi, 0x2e9c}
                            
                            if (o_59)
                                sub_403010()
                                noreturn
                            
                            bool o_60 = unimplemented  {imul edx, edi, 0xa}
                            
                            if (o_60)
                                sub_403010()
                                noreturn
                            
                            *(arg2 * 0x174e0 +
                                &data_532f70 + eax_122 * 0x353c + arg3 * 0x50 - 0x174c8) = 3
                        
                        int32_t eax_134 = arg2 * 0x2e9c
                        bool o_71 = unimplemented  {imul eax, esi, 0x2e9c}
                        
                        if (o_71)
                            sub_403010()
                            noreturn
                        
                        int32_t temp47_1 = (&data_532f6c)[eax_134 * 2]
                        (&data_532f6c)[eax_134 * 2] -= 1
                        
                        if (add_overflow(temp47_1, 0xffffffff))
                            sub_403010()
                            noreturn
            
            if (*(arg1 - 1) == 3 && *(arg1 - 0x16) == 0)
                arg1[-8] = 1
                eax_139.b = *(*data_530304 + 0xdfa)
                break
            
            if (*(arg1 - 1) == 2)
                if (*(arg1 - 0x16) != 0 && *(arg1 - 0x17) == 0)
                    continue
                
                if (*(*data_530304 + 0xdfa) != 0)
                    arg1[-8] = 1
                    
                    if (*(*data_530304 + 0xdfa) != 0)
                        arg1[-8] = 2
                    
                    if (*(*data_530304 + 0xdfb) != 0)
                        arg1[-8] = 3
                    
                    int32_t eax_39
                    eax_39.b = entry_ebx
                    bool o_17 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_17)
                        sub_403010()
                        noreturn
                    
                    bool o_18 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_18)
                        sub_403010()
                        noreturn
                    
                    bool o_19 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_19)
                        sub_403010()
                        noreturn
                    
                    *(arg1 - 0x15) = sub_4d00b8(arg2 * 0x174e0 +
                        &data_532f70 + eax_39 * 0x353c + arg3 * 0x50 - 0x174e0)
                    int32_t eax_44
                    eax_44.b = entry_ebx
                    bool o_20 = unimplemented  {imul eax, eax, 0xd4f}
                    
                    if (o_20)
                        sub_403010()
                        noreturn
                    
                    bool o_21 = unimplemented  {imul edx, esi, 0x2e9c}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    bool o_22 = unimplemented  {imul edx, edi, 0xa}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    arg1[-6].b = sub_4cff1c(arg2 * 0x174e0 +
                        &data_532f70 + eax_44 * 0x353c + arg3 * 0x50 - 0x174e0)
        
        if (eax_139.b != 0)
            arg1[-8] = 2
        
        if (*(*data_530304 + 0xdfb) != 0)
            arg1[-8] = 3
        
        data_530304
        
        if (eax_139.b != 0 && sub_4d0148(arg3, arg2, entry_ebx == 4) s> 0x19)
            *(arg1 - 0x15) = 1
}
