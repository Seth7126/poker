// ============================================================
// 函数名称: sub_4cbe24
// 虚拟地址: 0x4cbe24
// WARP GUID: 41fb5d73-2228-57a8-94ea-92f699f6ccd5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5ba0, sub_4d5b1c, sub_4d5b64, sub_403010
// [被调用的父级函数]: sub_4c62e8
// ============================================================

void*sub_4cbe24()
{
    // 第一条实际指令: char var_5 = 1
    char var_5 = 1
    char i_3 = 6
    void* result = &data_608020
    int16_t var_1c[0x8]
    int16_t (* edx)[0x8] = &var_1c
    char i
    
    do
        *edx = (*result).w
        edx = &(*edx)[1]
        result += 0x353c
        i = i_3
        i_3 -= 1
    while (i != 1)
    int32_t i_4 = *data_5300d0
    
    if (i_4 s> 0)
        int32_t esi_1 = 1
        int32_t i_1
        
        do
            result = esi_1 * 0x41
            bool o_1 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + (result << 3) + 0x1fea0) == 1
                    && *(*data_5301f4 + (result << 3) + 0x20085) != 0)
                *(*data_5301f4 + (result << 3) + 0x2008c)
            
            esi_1 += 1
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    int32_t i_5 = *data_5300d0
    
    if (i_5 s> 0)
        int32_t esi_2 = 1
        int32_t i_2
        
        do
            result = esi_2 * 0x41
            bool o_2 = unimplemented  {imul eax, esi, 0x41}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + (result << 3) + 0x1fea0) == 1
                    && *(*data_5301f4 + (result << 3) + 0x20085) != 0)
                void* var_c_1 = *(*data_5301f4 + (result << 3) + 0x2008c)
                int16_t ebx_1
                ebx_1.b = 4
                
                do
                    if (sub_4d5ba0(ebx_1.b) s> var_c_1)
                    label_4cbf36:
                        
                        if (ebx_1.b != 0)
                            int32_t eax_5 = sub_4d5b1c(ebx_1.b)
                            
                            if (add_overflow(eax_5, 0xffffffff))
                                sub_403010()
                                noreturn
                            
                            ebx_1 = sub_4d5b64(eax_5 - 1).w
                        else
                            ebx_1.b = 5
                    else
                        result.b = ebx_1.b
                        
                        if (var_1c[result] s<= 0)
                            goto label_4cbf36
                        
                        int32_t eax_2
                        eax_2.b = ebx_1.b
                        int16_t temp4_1 = var_1c[eax_2]
                        var_1c[eax_2] -= 1
                        
                        if (add_overflow(temp4_1, 0xffff))
                            sub_403010()
                            noreturn
                        
                        result = sub_4d5ba0(ebx_1.b)
                        void* temp5_1 = var_c_1
                        var_c_1 -= result
                        
                        if (add_overflow(temp5_1, neg.d(result)))
                            sub_403010()
                            noreturn
                while (ebx_1.b != 5)
                
                if (var_c_1 != 0)
                    var_5 = 0
            
            esi_2 += 1
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    result.b = var_5
    return result
}
