// ============================================================
// 函数名称: sub_4da6ec
// 虚拟地址: 0x4da6ec
// WARP GUID: b460acfa-6f30-5e0d-94e8-87b3a71ed049
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f1860, sub_4f0c64, sub_51ad40, sub_403010
// [被调用的父级函数]: sub_4dad04
// ============================================================

int32_tsub_4da6ec()
{
    // 第一条实际指令: if (data_77e245 != 1)
    if (data_77e245 != 1)
        *data_5305b8 = 0
        *data_52feb4 = 0
        int32_t i_5 = data_62608c
        
        if (i_5 s> 0)
            uint32_t edi_3 = 1
            void* ebx_3 = &data_61d770
            int32_t i
            
            do
                if (*ebx_3 != 0 && *(ebx_3 + 1) == 1)
                    sub_4f1860(1, 1, ebx_3, edi_3)
                
                edi_3 += 1
                ebx_3 += 0xd4
                i = i_5
                i_5 -= 1
            while (i != 1)
    else
        if (*data_5305cc != *data_5300a0)
            int32_t eax_3 = *data_5300a0
            
            if ((eax_3 == 0xb || eax_3 == 0xd) && *data_5300a0 != 0 && (
                    *data_5300a0 == *(data_780c58 + 0x10270)
                    || *data_5300a0 == *(data_780c58 + 0x10274)))
                void* edx_3 = data_530508
                *edx_3
                bool o_1 = unimplemented  {imul edx, dword [edx], 0x35}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                void* eax_11 = data_5300a0
                *eax_11
                int32_t eax_12 = *eax_11 * 0x2345
                bool o_2 = unimplemented  {imul eax, dword [eax], 0x2345}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                if ((&data_61d714)[(eax_12 << 2) + *edx_3 * 0xd4 - 0x8d8c] == 0)
                    int32_t var_1c_1 = *((eax_12 << 2) + &data_61d378)
                    *data_5300a0
                    sub_51ad40(data_780c5c, 0xf)
                
                void* eax_15 = data_5300a0
                *eax_15
                int32_t eax_16 = *eax_15 * 0x2345
                bool o_3 = unimplemented  {imul eax, dword [eax], 0x2345}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                *((eax_16 << 2) + &data_61d378)
                bool o_4 = unimplemented  {imul edx, dword [eax*4+0x61d378], 0x35}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                sub_4f1860(*data_5300a0, 0, 
                    &(&data_61d714)[(eax_16 << 2) + *((eax_16 << 2) + &data_61d378) * 0xd4 - 0x8d8c], 0)
            
            int32_t eax_20 = *data_5305cc
            
            if ((eax_20 == 0xb || eax_20 == 0xd) && *data_5305cc != 0 && (
                    *data_5305cc == *(data_780c58 + 0x10270)
                    || *data_5305cc == *(data_780c58 + 0x10274)))
                void* eax_28 = data_5305cc
                *eax_28
                int32_t eax_29 = *eax_28 * 0x2345
                bool o_5 = unimplemented  {imul eax, dword [eax], 0x2345}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                if (*((eax_29 << 2) + &data_61d378) s> 0)
                    void* edx_6 = data_5305cc
                    *edx_6
                    int32_t edx_7 = *edx_6 * 0x2345
                    bool o_6 = unimplemented  {imul edx, dword [edx], 0x2345}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    *((edx_7 << 2) + &data_61d378)
                    bool o_7 = unimplemented  {imul edx, dword [edx*4+0x61d378], 0x35}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_8
                    edx_8.b = 1
                    sub_4f1860(*data_5305cc, edx_8.b, 
                        &(&data_61d714)[(eax_29 << 2) + *((edx_7 << 2) + &data_61d378) * 0xd4
                            - 0x8d8c], 
                        0)
            
            if (*(data_780c58 + 0x4580) != 0)
                int32_t var_c_1
                
                if (*data_530508 != 0)
                    void* eax_34 = data_530508
                    *eax_34
                    bool o_8 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    var_c_1 = *(*eax_34 * 0xd4 + &data_67e66c)
                else
                    var_c_1 = 0
                
                int32_t var_8
                
                if (*data_5309d8 != 0)
                    void* eax_38 = data_5309d8
                    *eax_38
                    bool o_9 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    var_8 = *(*eax_38 * 0xd4 + &data_67e66c)
                else
                    var_8 = 0
                
                if ((*data_5300a0 == 0xc || *data_5300a0 == 0) && *data_530508 != *data_5309d8
                        && var_c_1 != var_8)
                    if (var_8 != 0)
                        bool o_10 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                        
                        if (o_10)
                            sub_403010()
                            noreturn
                        
                        int32_t i_3 = sx.d(*(data_780c68 + var_8 * 0x104))
                        
                        if (i_3 s> 0)
                            int32_t edi_1 = 1
                            int32_t i_1
                            
                            do
                                bool o_11 = unimplemented  {imul eax, dword [ebp-0x4], 0x41}
                                
                                if (o_11)
                                    sub_403010()
                                    noreturn
                                
                                int32_t ebx_1 =
                                    sx.d(*(data_780c68 + var_8 * 0x104 + (edi_1 << 2) - 0x102))
                                int32_t eax_49 = ebx_1 * 0x35
                                bool o_12 = unimplemented  {imul eax, ebx, 0x35}
                                
                                if (o_12)
                                    sub_403010()
                                    noreturn
                                
                                if (*((eax_49 << 2) + &data_67e678) != 0)
                                    int32_t edx_11
                                    edx_11.b = 1
                                    sub_4f1860(0xc, edx_11.b, (eax_49 << 2) + &data_67e678, ebx_1)
                                
                                edi_1 += 1
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                    
                    if (var_c_1 != 0)
                        bool o_13 = unimplemented  {imul eax, dword [ebp-0x8], 0x41}
                        
                        if (o_13)
                            sub_403010()
                            noreturn
                        
                        int32_t i_4 = sx.d(*(data_780c68 + var_c_1 * 0x104))
                        
                        if (i_4 s> 0)
                            int32_t edi_2 = 1
                            int32_t i_2
                            
                            do
                                bool o_14 = unimplemented  {imul eax, dword [ebp-0x8], 0x41}
                                
                                if (o_14)
                                    sub_403010()
                                    noreturn
                                
                                int32_t ebx_2 =
                                    sx.d(*(data_780c68 + var_c_1 * 0x104 + (edi_2 << 2) - 0x102))
                                bool o_15 = unimplemented  {imul eax, ebx, 0x35}
                                
                                if (o_15)
                                    sub_403010()
                                    noreturn
                                
                                sub_4f1860(0xc, 0, ebx_2 * 0xd4 + &data_67e678, ebx_2)
                                
                                if (edi_2 == 1)
                                    int32_t var_1c_4 = ebx_2
                                    sub_51ad40(data_780c5c, 0xd)
                                
                                edi_2 += 1
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
            else if (*data_530508 != 0 && *data_5309d8 == 0)
                void* eax_59 = data_530508
                *eax_59
                bool o_16 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_16)
                    sub_403010()
                    noreturn
                
                if (*(*eax_59 * 0xd4 + &data_67e678) == 0)
                    int32_t var_1c_5 = *data_530508
                    sub_51ad40(data_780c5c, 0xd)
                
                void* eax_66 = data_530508
                *eax_66
                bool o_17 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                sub_4f1860(0xc, 0, *eax_66 * 0xd4 + &data_67e678, *data_530508)
            else if (*data_530508 == 0 && *data_5309d8 != 0)
                void* eax_73 = data_5309d8
                *eax_73
                bool o_18 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_18)
                    sub_403010()
                    noreturn
                
                void* edx_1
                edx_1.b = 1
                sub_4f1860(0xc, edx_1.b, *eax_73 * 0xd4 + &data_67e678, *data_5309d8)
            else if (*data_530508 != 0 && *data_5309d8 != 0 && *data_530508 != *data_5309d8)
                void* eax_80 = data_530508
                *eax_80
                bool o_19 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_19)
                    sub_403010()
                    noreturn
                
                if (*(*eax_80 * 0xd4 + &data_67e678) == 0)
                    int32_t var_1c_8 = *data_530508
                    sub_51ad40(data_780c5c, 0xd)
                
                void* eax_87 = data_5309d8
                *eax_87
                bool o_20 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_20)
                    sub_403010()
                    noreturn
                
                void* edx_14
                edx_14.b = 1
                sub_4f1860(0xc, edx_14.b, *eax_87 * 0xd4 + &data_67e678, *data_5309d8)
                void* eax_92 = data_530508
                *eax_92
                bool o_21 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_21)
                    sub_403010()
                    noreturn
                
                sub_4f1860(0xc, 0, *eax_92 * 0xd4 + &data_67e678, *data_530508)
        
        if (*(data_780c58 + 0x10278) == 0)
            if (*data_5305b8 != *data_52feb4 && *data_52feb4 != 0)
                void* eax_101 = data_52feb4
                *eax_101
                bool o_22 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_22)
                    sub_403010()
                    noreturn
                
                void* edx_15
                edx_15.b = 1
                sub_4f1860(1, edx_15.b, *eax_101 * 0xd4 + &data_61d69c, *data_52feb4)
            
            if (*data_5305b8 != *data_52feb4 && *data_5305b8 != 0)
                void* eax_107 = data_5305b8
                *eax_107
                *eax_107
                bool o_23 = unimplemented  {imul eax, dword [eax], 0x35}
                
                if (o_23)
                    sub_403010()
                    noreturn
                
                if (sub_4f0c64() != 0)
                    void* eax_113 = data_5305b8
                    *eax_113
                    bool o_24 = unimplemented  {imul eax, dword [eax], 0x35}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    sub_4f1860(1, 0, *eax_113 * 0xd4 + &data_61d69c, *data_5305b8)
                    int32_t var_1c_13 = *data_5305b8
                    sub_51ad40(data_780c5c, 0xf)
    
    int32_t result = *data_5305b8
    *data_52feb4 = result
    return result
}
