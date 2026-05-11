// ============================================================
// 函数名称: sub_4c5034
// 虚拟地址: 0x4c5034
// WARP GUID: 545d73ad-108c-5623-b42d-5f80efe1e212
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2be8, sub_4cc6dc, sub_403010
// [被调用的父级函数]: sub_4c51e4, sub_4c10a0
// ============================================================

int32_tsub_4c5034()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = *(*data_5301f4 + 0x21108)
    
    if (mods.dp.d(sx.q(*(*data_5301f4 + 0x4584)), *(*data_5301f4 + 0x20078)) == 0)
        char ebx_1 = 0
        int32_t i_1 = *data_5300d0
        
        if (i_1 s> 0)
            int32_t edi_1 = 1
            int32_t i
            
            do
                if (sub_4c2be8(edi_1) != 0)
                    int32_t eax_11 = sub_4cc6dc(edi_1)
                    void* edx_5 = *data_5301f4
                    *(edx_5 + 0x21108)
                    bool o_1 = unimplemented  {imul edx, dword [edx+0x21108], 0x2}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    if (eax_11 s>= *(edx_5 + 0x21108) * 2)
                        ebx_1 = 1
                
                edi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (ebx_1 != 0)
            int32_t temp0_1 = divs.dp.d(sx.q(*(*data_5301f4 + 0x4584)), *(*data_5301f4 + 0x20078))
            
            if (temp0_1 s<= 2)
                bool o_2 = unimplemented  {imul eax, dword [ebp-0x4], 0x2}
                
                if (not(o_2))
                    return result * 2
                
                sub_403010()
                noreturn
            
            data_5301f4
            
            if (temp0_1 s> 4)
                data_5301f4
                
                if (temp0_1 s> 6)
                    data_5301f4
                    
                    if (temp0_1 s> 8)
                        data_5301f4
                        
                        if (temp0_1 s> 0xa)
                            void* eax_35 = *data_5301f4
                            *(eax_35 + 0x20074)
                            int32_t eax_36 = *(eax_35 + 0x20074) * 0x20
                            bool o_11 = unimplemented  {imul eax, dword [eax+0x20074], 0x20}
                            
                            if (o_11)
                                sub_403010()
                                noreturn
                            
                            int32_t result_4 = result
                            result += eax_36
                            
                            if (add_overflow(result_4, eax_36))
                                sub_403010()
                                noreturn
                        else
                            void* eax_32 = *data_5301f4
                            *(eax_32 + 0x20074)
                            int32_t eax_33 = *(eax_32 + 0x20074) * 0x10
                            bool o_9 = unimplemented  {imul eax, dword [eax+0x20074], 0x10}
                            
                            if (o_9)
                                sub_403010()
                                noreturn
                            
                            int32_t result_5 = result
                            result += eax_33
                            
                            if (add_overflow(result_5, eax_33))
                                sub_403010()
                                noreturn
                    else
                        void* eax_28 = *data_5301f4
                        *(eax_28 + 0x20074)
                        int32_t eax_29 = *(eax_28 + 0x20074) * 8
                        bool o_7 = unimplemented  {imul eax, dword [eax+0x20074], 0x8}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        int32_t result_3 = result
                        result += eax_29
                        
                        if (add_overflow(result_3, eax_29))
                            sub_403010()
                            noreturn
                else
                    void* eax_24 = *data_5301f4
                    *(eax_24 + 0x20074)
                    int32_t eax_25 = *(eax_24 + 0x20074) * 4
                    bool o_5 = unimplemented  {imul eax, dword [eax+0x20074], 0x4}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    int32_t result_2 = result
                    result += eax_25
                    
                    if (add_overflow(result_2, eax_25))
                        sub_403010()
                        noreturn
            else
                void* eax_20 = *data_5301f4
                *(eax_20 + 0x20074)
                int32_t eax_21 = *(eax_20 + 0x20074) * 2
                bool o_3 = unimplemented  {imul eax, dword [eax+0x20074], 0x2}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t result_1 = result
                result += eax_21
                
                if (add_overflow(result_1, eax_21))
                    sub_403010()
                    noreturn
    
    return result
}
