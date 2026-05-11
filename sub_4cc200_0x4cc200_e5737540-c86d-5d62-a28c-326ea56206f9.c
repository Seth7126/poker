// ============================================================
// 函数名称: sub_4cc200
// 虚拟地址: 0x4cc200
// WARP GUID: e5737540-c86d-5d62-a28c-326ea56206f9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5ba0, sub_403010
// [被调用的父级函数]: sub_4fc834, sub_4ce8e2, sub_4cc6a0, sub_4cdec4, sub_4ce5b4, sub_4cddb4, sub_4ce88a, sub_40e8c2, sub_4ce832
// ============================================================

int32_t __convention("regparm")sub_4cc200(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 != 5)
        int32_t eax_10
        eax_10.b = arg2
        bool o_10 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_10)
            sub_403010()
            noreturn
        
        bool o_11 = unimplemented  {imul edx, dword [ebp-0x4], 0x2e9c}
        
        if (o_11)
            sub_403010()
            noreturn
        
        int32_t i_5 = *(arg1 * 0x174e0 + &data_532f70 + eax_10 * 0x353c - 0x14010)
        
        if (add_overflow(i_5, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_5 - 1 s>= 0)
            int32_t i_3 = i_5
            void* eax_12 = &data_532f70
            int32_t i
            
            do
                bool o_13 = unimplemented  {imul edx, dword [ebp-0x4], 0x2e9c}
                
                if (o_13)
                    sub_403010()
                    noreturn
                
                int32_t ecx_1
                ecx_1.b = arg2
                bool o_14 = unimplemented  {imul ecx, ecx, 0xd4f}
                
                if (o_14)
                    sub_403010()
                    noreturn
                
                if (*(eax_12 + arg1 * 0x174e0 + ecx_1 * 0x353c - 0x174c8) == 1)
                    int32_t result_1 = result
                    result += 1
                    
                    if (add_overflow(result_1, 1))
                        sub_403010()
                        noreturn
                
                eax_12 += 0x50
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        int32_t i_6 = *(data_61c0d0 + 0x1660)
        
        if (add_overflow(i_6, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_6 - 1 s>= 0)
            int32_t i_4 = i_6
            int32_t ebx_3 = 0
            int32_t i_1
            
            do
                int32_t edi_2 = ebx_3 * 5
                bool o_17 = unimplemented  {imul edi, ebx, 0x5}
                
                if (o_17)
                    sub_403010()
                    noreturn
                
                if (sx.d(*(data_61c0d0 + (edi_2 << 1) + 0x844)) == arg1
                        && *(data_61c0d0 + (edi_2 << 1) + 0x84d) != 0)
                    int32_t eax_16
                    eax_16.b = arg2
                    
                    if (sub_4d5ba0(eax_16.b) == sx.d(*(data_61c0d0 + (edi_2 << 1) + 0x848)))
                        int32_t result_3 = result
                        result -= 1
                        
                        if (add_overflow(result_3, 0xffffffff))
                            sub_403010()
                            noreturn
                
                ebx_3 += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    else
        for (char i_2 = 0; i_2 != 5; i_2 += 1)
            int32_t eax
            eax.b = i_2
            bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
            
            if (o_1)
                sub_403010()
                noreturn
            
            bool o_2 = unimplemented  {imul edx, dword [ebp-0x4], 0x2e9c}
            
            if (o_2)
                sub_403010()
                noreturn
            
            int32_t j_4 = *(arg1 * 0x174e0 + &data_532f70 + eax * 0x353c - 0x14010)
            
            if (add_overflow(j_4, 0xffffffff))
                sub_403010()
                noreturn
            
            if (j_4 - 1 s>= 0)
                int32_t j_2 = j_4
                void* ebx_1 = &data_532f70
                int32_t j
                
                do
                    bool o_4 = unimplemented  {imul eax, dword [ebp-0x4], 0x2e9c}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    int32_t edx_2
                    edx_2.b = i_2
                    bool o_5 = unimplemented  {imul edx, edx, 0xd4f}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    if (*(ebx_1 + arg1 * 0x174e0 + edx_2 * 0x353c - 0x174c8) == 1)
                        void* eax_3
                        eax_3.b = i_2
                        int32_t eax_4 = sub_4d5ba0(eax_3.b)
                        int32_t result_2 = result
                        result += eax_4
                        
                        if (add_overflow(result_2, eax_4))
                            sub_403010()
                            noreturn
                    
                    ebx_1 += 0x50
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            int32_t j_5 = *(data_61c0d0 + 0x1660)
            
            if (add_overflow(j_5, 0xffffffff))
                sub_403010()
                noreturn
            
            if (j_5 - 1 s>= 0)
                int32_t j_3 = j_5
                int32_t ebx_2 = 0
                int32_t j_1
                
                do
                    int32_t edi_1 = ebx_2 * 5
                    bool o_8 = unimplemented  {imul edi, ebx, 0x5}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    if (sx.d(*(data_61c0d0 + (edi_1 << 1) + 0x844)) == arg1
                            && *(data_61c0d0 + (edi_1 << 1) + 0x84d) != 0)
                        int32_t eax_8
                        eax_8.b = i_2
                        
                        if (sub_4d5ba0(eax_8.b) == sx.d(*(data_61c0d0 + (edi_1 << 1) + 0x848)))
                            int32_t result_4 = result
                            result -= 1
                            
                            if (add_overflow(result_4, 0xffffffff))
                                sub_403010()
                                noreturn
                    
                    ebx_2 += 1
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
    
    return result
}
