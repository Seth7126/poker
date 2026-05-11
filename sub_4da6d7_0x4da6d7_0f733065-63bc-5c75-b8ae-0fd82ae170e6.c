// ============================================================
// 函数名称: sub_4da6d7
// 虚拟地址: 0x4da6d7
// WARP GUID: 0f733065-63bc-5c75-b8ae-0fd82ae170e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f1860, sub_4f0c64, sub_51ad40, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4da6d7(int32_t* arg1, int32_t* arg2, void* arg3 @ ebp, int32_t arg4 @ esi)
{
    // 第一条实际指令: *arg1 -= 1
    *arg1 -= 1
    *arg1 += arg1.b
    int32_t entry_ebx
    *(entry_ebx + (arg3 << 1) + 0x62) += entry_ebx.b
    
    if (add_overflow(*(entry_ebx + (arg3 << 1) + 0x62), entry_ebx.b))
        goto label_4da711
    
    int32_t var_4_1 = 0x70
    *(entry_ebx + arg4) += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b = *0xec8b5540
    int32_t var_10_1 = entry_ebx
    int32_t var_14_1 = arg4
    int32_t edi
    int32_t var_18 = edi
    int32_t* esp = &var_18
    
    if (data_77e245 != 1)
        *data_5305b8 = 0
        *data_52feb4 = 0
        int32_t i_5 = data_62608c
        
        if (i_5 s> 0)
            uint32_t edi_3 = 1
            void* ebx_2 = &data_61d770
            int32_t i
            
            do
                if (*ebx_2 != 0 && *(ebx_2 + 1) == 1)
                    sub_4f1860(1, 1, ebx_2, edi_3)
                    esp = &var_18
                
                edi_3 += 1
                ebx_2 += 0xd4
                i = i_5
                i_5 -= 1
            while (i != 1)
    else
        arg1 = *data_5305cc
        arg2 = data_5300a0
    label_4da711:
        
        if (arg1 != *arg2)
            int32_t eax_2 = *data_5300a0
            
            if ((eax_2 == 0xb || eax_2 == 0xd) && *data_5300a0 != 0 &&
                    (*data_5300a0 == *(data_780c58 + 0x10270) || *data_5300a0 == data_780c58[0x409d]))
                void* edx_1 = data_530508
                *edx_1
                bool o_1 = unimplemented  {imul edx, dword [edx], 0x35}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                void* eax_10 = data_5300a0
                *eax_10
                int32_t eax_11 = *eax_10 * 0x2345
                bool o_2 = unimplemented  {imul eax, dword [eax], 0x2345}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                if ((&data_61d714)[(eax_11 << 2) + *edx_1 * 0xd4 - 0x8d8c] == 0)
                    *(esp - 4) = *((eax_11 << 2) + &data_61d378)
                    *data_5300a0
                    sub_51ad40(data_780c5c, 0xf)
                
                *(esp - 4) = 0
                void* eax_14 = data_5300a0
                *eax_14
                int32_t eax_15 = *eax_14 * 0x2345
                bool o_3 = unimplemented  {imul eax, dword [eax], 0x2345}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                *((eax_15 << 2) + &data_61d378)
                bool o_4 = unimplemented  {imul edx, dword [eax*4+0x61d378], 0x35}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                sub_4f1860(*data_5300a0, 0, 
                    &(&data_61d714)[(eax_15 << 2) + *((eax_15 << 2) + &data_61d378) * 0xd4 - 0x8d8c])
            
            int32_t eax_19 = *data_5305cc
            
            if ((eax_19 == 0xb || eax_19 == 0xd) && *data_5305cc != 0
                    && (*data_5305cc == data_780c58[0x409c] || *data_5305cc == data_780c58[0x409d]))
                void* eax_27 = data_5305cc
                *eax_27
                int32_t eax_28 = *eax_27 * 0x2345
                bool o_5 = unimplemented  {imul eax, dword [eax], 0x2345}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                if (*((eax_28 << 2) + &data_61d378) s> 0)
                    *(esp - 4) = 0
                    void* edx_5 = data_5305cc
                    *edx_5
                    int32_t edx_6 = *edx_5 * 0x2345
                    bool o_6 = unimplemented  {imul edx, dword [edx], 0x2345}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    *((edx_6 << 2) + &data_61d378)
                    bool o_7 = unimplemented  {imul edx, dword [edx*4+0x61d378], 0x35}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_7
                    edx_7.b = 1
                    sub_4f1860(*data_5305cc, edx_7, 
                        &(&data_61d714)[(eax_28 << 2) + *((edx_6 << 2) + &data_61d378) * 0xd4 - 0x8d8c])
            
            if (*(data_780c58 + 0x4580) != 0)
                if (*data_530508 != 0)
                    void* eax_33 = data_530508
                    *eax_33
                    bool o_8 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    *(arg3 - 8) = *(*eax_33 * 0xd4 + &data_67e66c)
                else
                    *(arg3 - 8) = 0
                
                if (*data_5309d8 != 0)
                    void* eax_37 = data_5309d8
                    *eax_37
                    bool o_9 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    *(arg3 - 4) = *(*eax_37 * 0xd4 + &data_67e66c)
                else
                    *(arg3 - 4) = 0
                
                if ((*data_5300a0 == 0xc || *data_5300a0 == 0) && *data_530508 != *data_5309d8
                        && *(arg3 - 8) != *(arg3 - 4))
                    if (*(arg3 - 4) != 0)
                        *(arg3 - 4)
                        bool o_10 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        int32_t i_3 = sx.d(*(data_780c68 + *(arg3 - 4) * 0x104))
                        
                        if (i_3 s> 0)
                            int32_t edi_1 = 1
                            int32_t i_1
                            
                            do
                                *(arg3 - 4)
                                bool o_11 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                                
                                if (o_11)
                                    sub_403010()
                                    noreturn
                                
                                int32_t ebx =
                                    sx.d(*(data_780c68 + *(arg3 - 4) * 0x104 + (edi_1 << 2) - 0x102))
                                int32_t eax_48 = ebx * 0x35
                                bool o_12 = unimplemented  {imul eax, ebx, 0x35}
                                
                                if (o_12)
                                    sub_403010()
                                    noreturn
                                
                                if (*((eax_48 << 2) + &data_67e678) != 0)
                                    *(esp - 4) = ebx
                                    int32_t edx_10
                                    edx_10.b = 1
                                    sub_4f1860(0xc, edx_10, (eax_48 << 2) + &data_67e678)
                                
                                edi_1 += 1
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                    
                    if (*(arg3 - 8) != 0)
                        *(arg3 - 8)
                        bool o_13 = unimplemented  {imul eax, dword [ebp-0x8], 0x41}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        int32_t i_4 = sx.d(*(data_780c68 + *(arg3 - 8) * 0x104))
                        
                        if (i_4 s> 0)
                            int32_t edi_2 = 1
                            int32_t i_2
                            
                            do
                                *(arg3 - 8)
                                bool o_14 = unimplemented  {imul eax, dword [ebp-0x8], 0x41}
                                
                                if (o_14)
                                    sub_403010()
                                    noreturn
                                
                                int32_t ebx_1 =
                                    sx.d(*(data_780c68 + *(arg3 - 8) * 0x104 + (edi_2 << 2) - 0x102))
                                *(esp - 4) = ebx_1
                                bool o_15 = unimplemented  {imul eax, ebx, 0x35}
                                
                                if (o_15)
                                    sub_403010()
                                    noreturn
                                
                                sub_4f1860(0xc, 0, ebx_1 * 0xd4 + &data_67e678)
                                
                                if (edi_2 == 1)
                                    *(esp - 4) = ebx_1
                                    sub_51ad40(data_780c5c, 0xd)
                                
                                edi_2 += 1
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
            else if (*data_530508 != 0 && *data_5309d8 == 0)
                void* eax_58 = data_530508
                *eax_58
                bool o_16 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                if (*(*eax_58 * 0xd4 + &data_67e678) == 0)
                    *(esp - 4) = *data_530508
                    sub_51ad40(data_780c5c, 0xd)
                
                *(esp - 4) = *data_530508
                void* eax_65 = data_530508
                *eax_65
                bool o_17 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                sub_4f1860(0xc, 0, *eax_65 * 0xd4 + &data_67e678)
            else if (*data_530508 == 0 && *data_5309d8 != 0)
                *(esp - 4) = *data_5309d8
                void* eax_72 = data_5309d8
                *eax_72
                bool o_18 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                arg2.b = 1
                sub_4f1860(0xc, arg2, *eax_72 * 0xd4 + &data_67e678)
            else if (*data_530508 != 0 && *data_5309d8 != 0 && *data_530508 != *data_5309d8)
                void* eax_79 = data_530508
                *eax_79
                bool o_19 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_19)
                    sub_403010()
                    noreturn
                
                if (*(*eax_79 * 0xd4 + &data_67e678) == 0)
                    *(esp - 4) = *data_530508
                    sub_51ad40(data_780c5c, 0xd)
                
                *(esp - 4) = *data_5309d8
                void* eax_86 = data_5309d8
                *eax_86
                bool o_20 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_20)
                    sub_403010()
                    noreturn
                
                void* edx_15
                edx_15.b = 1
                sub_4f1860(0xc, edx_15, *eax_86 * 0xd4 + &data_67e678)
                *(esp - 4) = *data_530508
                void* eax_91 = data_530508
                *eax_91
                bool o_21 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_21)
                    sub_403010()
                    noreturn
                
                sub_4f1860(0xc, 0, *eax_91 * 0xd4 + &data_67e678)
        
        if (*(data_780c58 + 0x10278) == 0)
            if (*data_5305b8 != *data_52feb4 && *data_52feb4 != 0)
                *(esp - 4) = *data_52feb4
                void* eax_100 = data_52feb4
                *eax_100
                bool o_22 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                void* edx_17
                edx_17.b = 1
                sub_4f1860(1, edx_17, *eax_100 * 0xd4 + &data_61d69c)
            
            if (*data_5305b8 != *data_52feb4 && *data_5305b8 != 0)
                void* eax_106 = data_5305b8
                *eax_106
                *eax_106
                bool o_23 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                if (sub_4f0c64() != 0)
                    *(esp - 4) = *data_5305b8
                    void* eax_112 = data_5305b8
                    *eax_112
                    bool o_24 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    sub_4f1860(1, 0, *eax_112 * 0xd4 + &data_61d69c)
                    *(esp - 4) = *data_5305b8
                    sub_51ad40(data_780c5c, 0xf)
    
    int32_t result = *data_5305b8
    *data_52feb4 = result
    *esp
    esp[1]
    esp[2]
    esp[4]
    esp[5]
    return result
}
