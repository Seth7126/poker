// ============================================================
// 函数名称: sub_4c1d64
// 虚拟地址: 0x4c1d64
// WARP GUID: fd6e2889-86a8-5400-a39d-e56644d281c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c4ceb, sub_5223e8, sub_4c4c9c
// ============================================================

int32_tsub_4c1d64()
{
    // 第一条实际指令: if (*(*data_5301f4 + 0x111f8) != 0)
    if (*(*data_5301f4 + 0x111f8) != 0)
        return *(*data_5301f4 + 0x11208)
    
    int32_t result = 3
    int32_t edx_2 = *data_5300d0
    
    if (edx_2 s>= 2)
        int32_t i_1 = edx_2 - 1
        int32_t eax_4 = 2
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul ebx, eax, 0x29}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t result_1 = *(*data_5301f4 + eax_4 * 0xa4 + 0x25bac)
            
            if (result s> result_1)
                bool o_2 = unimplemented  {imul ecx, eax, 0x29}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                *data_5301f4
                result = result_1
            
            eax_4 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
