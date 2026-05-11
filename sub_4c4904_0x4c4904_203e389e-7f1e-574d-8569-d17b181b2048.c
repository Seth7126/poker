// ============================================================
// 函数名称: sub_4c4904
// 虚拟地址: 0x4c4904
// WARP GUID: 203e389e-7f1e-574d-8569-d17b181b2048
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5182a4, sub_4cd498, sub_4c4ab8, sub_4c4068, sub_403010
// [被调用的父级函数]: sub_4c329c, sub_4c4150, sub_4c48dc
// ============================================================

int32_t __convention("regparm")sub_4c4904(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = *arg1
    int32_t var_c = *arg1
    void var_8
    var_8.d = arg1[1]
    int32_t var_170 = 0xffffffff
    int32_t i_2 = *data_5300d0
    
    if (i_2 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            int32_t eax = ebx_1 * 0x41
            bool o_1 = unimplemented  {imul eax, ebx, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(*data_5301f4 + (eax << 3) + 0x20085) = 0
            *(*data_5301f4 + (eax << 3) + 0x2008c) = 0
            ebx_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *data_5300d0
    
    if (i_3 s> 0)
        int32_t ebx_2 = 1
        int32_t* var_14_1 = &var_c
        int32_t i_1
        
        do
            if (*var_14_1 != 0)
                bool o_2 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                int32_t eax_2
                eax_2.b = *(*data_5301f4 + ebx_2 * 0x208 + 0x1fea0)
                char temp2_1 = eax_2.b
                eax_2.b -= 1
                
                if (temp2_1 == 1)
                    void var_37c
                    sub_4c4ab8(ebx_2, &var_37c)
                    void var_148
                    sub_4cd498(&var_37c, 1, &var_148)
                    int32_t j = 1
                    void* var_18_1 = &var_37c
                    
                    do
                        void var_146
                        char eax_7 = sub_5182a4(&var_146, *var_18_1)
                        bool o_3 = unimplemented  {imul edx, ebx, 0x41}
                        
                        if (o_3)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + ebx_2 * 0x208 + j + 0x20093) = eax_7
                        j += 1
                        var_18_1 += 4
                    while (j != 8)
                    
                    void var_278
                    int32_t eax_9 = sub_4c4068(&var_148, &var_278)
                    
                    if (eax_9 == 1)
                        __builtin_memcpy(&var_278, &var_148, 0x130)
                        int32_t j_2 = *data_5300d0
                        
                        if (j_2 s> 0)
                            int32_t edi_2 = 1
                            int32_t j_1
                            
                            do
                                bool o_4 = unimplemented  {imul edx, edi, 0x41}
                                
                                if (o_4)
                                    sub_403010()
                                    noreturn
                                
                                *(*data_5301f4 + edi_2 * 0x208 + 0x20085) = 0
                                edi_2 += 1
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                        
                        bool o_5 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_5)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + ebx_2 * 0x208 + 0x20085) = 1
                    else if (eax_9 == 0)
                        bool o_6 = unimplemented  {imul eax, ebx, 0x41}
                        
                        if (o_6)
                            sub_403010()
                            noreturn
                        
                        *(*data_5301f4 + ebx_2 * 0x208 + 0x20085) = 1
            
            ebx_2 += 1
            var_14_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t result
    return result
}
