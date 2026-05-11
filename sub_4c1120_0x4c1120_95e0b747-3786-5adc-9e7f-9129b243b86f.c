// ============================================================
// 函数名称: sub_4c1120
// 虚拟地址: 0x4c1120
// WARP GUID: 95e0b747-3786-5adc-9e7f-9129b243b86f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d41ec, sub_403010
// [被调用的父级函数]: sub_4cc004, sub_4c62e8
// ============================================================

void*sub_4c1120()
{
    // 第一条实际指令: void* result = *data_5300d0
    void* result = *data_5300d0
    
    if (result s> 0)
        void* var_c_1 = result
        int32_t var_8_1 = 1
        void* ebx_2 = data_5304fc + 0x17438
        void* i
        
        do
            int32_t eax_1 = *ebx_2
            
            if (eax_1 != 1 || *(ebx_2 - 0x34b8) != 3)
                result = eax_1 - 1
                
                if (eax_1 s> 1)
                    void* edi_1 = ebx_2 - 0x34d0
                    
                    if (*(edi_1 + 0x18) == 3)
                        int32_t eax_2 = *(edi_1 + 0x34d0)
                        result = eax_2 - 2
                        
                        if (add_overflow(eax_2, 0xfffffffe))
                            sub_403010()
                            noreturn
                        
                        if (result s>= 0)
                            void* j_1 = result + 1
                            int32_t esi_1 = 0
                            void* j
                            
                            do
                                bool o_3 = unimplemented  {imul eax, esi, 0xa}
                                
                                if (o_3)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_4
                                eax_4.b = *(edi_1 + esi_1 * 0x50 + 0x68)
                                bool o_4 = unimplemented  {imul edx, esi, 0xa}
                                
                                if (o_4)
                                    sub_403010()
                                    noreturn
                                
                                *(edi_1 + esi_1 * 0x50 + 0x18) = eax_4.b
                                bool o_5 = unimplemented  {imul eax, esi, 0xa}
                                
                                if (o_5)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_5
                                eax_5.w = *(edi_1 + esi_1 * 0x50 + 0x58)
                                bool o_6 = unimplemented  {imul edx, esi, 0xa}
                                
                                if (o_6)
                                    sub_403010()
                                    noreturn
                                
                                *(edi_1 + esi_1 * 0x50 + 8) = eax_5.w
                                bool o_7 = unimplemented  {imul eax, esi, 0xa}
                                
                                if (o_7)
                                    sub_403010()
                                    noreturn
                                
                                *(edi_1 + esi_1 * 0x50 + 4) = esi_1
                                char var_38_1 = 0
                                int32_t var_3c_1 = 4
                                int32_t var_40 = 0
                                float var_28[0x6]
                                sub_4d41ec(var_8_1, esi_1, 2, &var_28, var_40.b, var_3c_1, var_38_1)
                                result = esi_1 * 0xa
                                bool o_8 = unimplemented  {imul eax, esi, 0xa}
                                
                                if (o_8)
                                    sub_403010()
                                    noreturn
                                
                                __builtin_memcpy(edi_1 + (result << 3) + 0x20, &var_28, 0x18)
                                esi_1 += 1
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                        
                        int32_t temp4_1 = *(edi_1 + 0x34d0)
                        *(edi_1 + 0x34d0) -= 1
                        
                        if (add_overflow(temp4_1, 0xffffffff))
                            sub_403010()
                            noreturn
            else
                result = ebx_2 - 0x34d0
                int32_t temp2_1 = *(result + 0x34d0)
                *(result + 0x34d0) -= 1
                
                if (add_overflow(temp2_1, 0xffffffff))
                    sub_403010()
                    noreturn
            
            var_8_1 += 1
            ebx_2 += 0x174e0
            i = var_c_1
            var_c_1 -= 1
        while (i != 1)
    
    return result
}
