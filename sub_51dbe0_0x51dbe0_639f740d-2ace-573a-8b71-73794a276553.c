// ============================================================
// 函数名称: sub_51dbe0
// 虚拟地址: 0x51dbe0
// WARP GUID: 639f740d-2ace-573a-8b71-73794a276553
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f0c64, sub_47a180, sub_47a1c0, sub_4766f8, sub_403010
// [被调用的父级函数]: sub_4ed7a0, sub_51e1c0
// ============================================================

int32_t*sub_51dbe0()
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_10 = ebx
    int32_t* result
    void* var_8
    
    if (*(*data_5301f4 + 4) != 7)
        int32_t i = 0x15
        void* esi_4 = data_530208 + 0x54
        
        do
            char ebx_1 = 0
            
            if (*(*data_5301f4 + 0x10020) == 1 && *(*data_5301f4 + 0x1026c) != 0)
                if (i == 0x15 && (*(*data_5301f4 + 0x10270) == 0xb || *(*data_5301f4 + 0x10274) == 0xb)
                        && *(data_5301b0 + 0x60c40) s> 0)
                    ebx_1 = 1
                
                if (i - 0x17 u< 4
                        && (*(*data_5301f4 + 0x10270) == 0xc || *(*data_5301f4 + 0x10274) == 0xc)
                        && *(data_5301b0 + 0x69954) s> 0)
                    ebx_1 = 1
            
            sub_47a1c0(*esi_4, *data_530a74, *data_530304, ebx_1)
            i += 1
            esi_4 += 4
        while (i != 0x1b)
        
        int32_t i_1 = 1
        void* var_c_1 = data_5301b0
        void* esi_6 = data_530208 + 4
        
        do
            char temp2_1
            
            if (*(*data_5301f4 + 0x10020) == 1 && *(*data_5301f4 + 0x1026d) != 0)
                void* eax_31
                eax_31.b = *(*data_5301f4 + 4)
                eax_31.b -= 3
                temp2_1 = eax_31.b
                eax_31.b -= 2
            
            if (*(*data_5301f4 + 0x10020) != 1 || *(*data_5301f4 + 0x1026d) == 0 || temp2_1 u< 2)
                sub_47a1c0(*esi_6, *data_530a74, *data_530304, 1)
                sub_47a180(*esi_6, *data_530a74, *data_530304, 0)
            else if (i_1 s> *(data_5301b0 + 0x8978))
                sub_47a1c0(*esi_6, *data_530a74, *data_530304, 0)
            else
                char eax_34 = sub_4f0c64()
                sub_47a1c0(*esi_6, *data_530a74, *data_530304, eax_34)
                sub_47a180(*esi_6, *data_530a74, *data_530304, 1)
                
                if (eax_34 != 0 && *(*data_530304 + 0xcf6) != 0)
                    *data_5305b8 = i_1
                    *(*data_530304 + 0x9b0) = 1
                    *(*data_530304 + 0x9b8) = *data_530a74
                    *data_5301d0 = 0
            
            i_1 += 1
            esi_6 += 4
            var_c_1 += 0xd4
        while (i_1 != 0x15)
        
        result = *data_530304
        
        if (result[0x26c].b != 0)
            result = *data_5301f4
            
            if (result[0x4008] == 1)
                result.b = (*data_5301f4)[1].b
                result.b -= 3
                char temp3_1 = result.b
                result.b -= 2
                
                if (temp3_1 u>= 2)
                    char edx_19 = 0
                    
                    if (*(*data_5301f4 + 0x1026d) == 0)
                        result = *data_5301f4
                    
                    if (*(*data_5301f4 + 0x1026d) != 0 || result[0x409b].b != 0)
                        int32_t i_5 = 0x18
                        result = data_530208 + 4
                        int32_t i_2
                        
                        do
                            void* ebx_3 = data_530a74
                            *ebx_3
                            bool o_2 = unimplemented  {imul ebx, dword [ebx], 0x1038}
                            
                            if (o_2)
                                sub_403010()
                                noreturn
                            
                            *result
                            int32_t ecx_8 = *result * 0x23
                            bool o_3 = unimplemented  {imul ecx, dword [eax], 0x23}
                            
                            if (o_3)
                                sub_403010()
                                noreturn
                            
                            if (*(*(*data_530304 + 0xab0) + *ebx_3 * 0x81c0 + (ecx_8 << 3) - 0xf2) != 0)
                                void* ebx_7 = data_530a74
                                *ebx_7
                                bool o_4 = unimplemented  {imul ebx, dword [ebx], 0x1038}
                                
                                if (o_4)
                                    sub_403010()
                                    noreturn
                                
                                if (*(*(*data_530304 + 0xab0) + *ebx_7 * 0x81c0 + (ecx_8 << 3) - 0xf1)
                                        != 0)
                                    result = sub_4766f8(*data_530304, *data_530a74, *result)
                                    edx_19 = 1
                                    break
                            
                            result = &result[1]
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                    
                    if (edx_19 == 0)
                        result = *data_5301f4
                        
                        if (*(result + 0x1026f) != 0)
                            int32_t edi_3 = *data_530a94
                            int32_t eax_64 = *data_530260
                            result = eax_64 - edi_3
                            
                            if (eax_64 s>= edi_3)
                                var_8 = result + 1
                                void* i_3
                                
                                do
                                    void* edx_22 = data_530658
                                    *edx_22
                                    bool o_5 = unimplemented  {imul edx, dword [edx], 0x1038}
                                    
                                    if (o_5)
                                        sub_403010()
                                        noreturn
                                    
                                    result = edi_3 * 0x23
                                    bool o_6 = unimplemented  {imul eax, edi, 0x23}
                                    
                                    if (o_6)
                                        sub_403010()
                                        noreturn
                                    
                                    if (*(*(*data_530304 + 0xab0) + *edx_22 * 0x81c0 + (result << 3)
                                            - 0xf2) != 0)
                                        void* edx_25 = data_530658
                                        *edx_25
                                        bool o_7 = unimplemented  {imul edx, dword [edx], 0x1038}
                                        
                                        if (o_7)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(*(*data_530304 + 0xab0) + *edx_25 * 0x81c0 + (result << 3)
                                                - 0xf1) != 0)
                                            return sub_4766f8(*data_530304, *data_530658, edi_3)
                                    
                                    edi_3 += 1
                                    i_3 = var_8
                                    var_8 -= 1
                                while (i_3 != 1)
    else
        result = *data_5300d0
        
        if (result s> 0)
            var_8 = result
            int32_t edi_1 = 1
            void* esi_2 = data_530208 + 4
            void* i_4
            
            do
                bool o_1 = unimplemented  {imul eax, edi, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + edi_1 * 0x208 + 0x1fea2) != 7)
                    ebx.b = 1
                else
                    ebx = 0
                
                result = sub_47a1c0(*esi_2, *data_530a74, *data_530304, ebx.b)
                edi_1 += 1
                esi_2 += 4
                i_4 = var_8
                var_8 -= 1
            while (i_4 != 1)
    return result
}
