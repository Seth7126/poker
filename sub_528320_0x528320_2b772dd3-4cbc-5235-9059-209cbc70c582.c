// ============================================================
// 函数名称: sub_528320
// 虚拟地址: 0x528320
// WARP GUID: 2b772dd3-4cbc-5235-9059-209cbc70c582
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c96bc, sub_4c1090, sub_4c0924, sub_527aa4, sub_4cfe9c, sub_529818, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4ed7a0, sub_4d69e8, sub_5223e8, sub_50a598, sub_4e649b
// ============================================================

void* const __convention("regparm")sub_528320(void* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: if (sub_4c1090() != 0)
    if (sub_4c1090() != 0)
        sub_529818(*data_5302c4, 1)
    
    if (sub_4c0924() == 0)
        *(arg1 + 0x456c) = *data_5300d0
        *(arg1 + 4) = arg2
        *(arg1 + 0x54c) = 0
        
        for (int32_t i = 2; i != 9; i += 1)
            bool o_1 = unimplemented  {imul edx, eax, 0xa9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(arg1 + i * 0x2a4 + 0x2a8) = 1
    
    *data_5301f4
    sub_527aa4()
    
    if (arg2 == 7)
        sub_4c96bc(arg3 == 0, arg1, arg3)
    
    if (arg3 == 0)
        *(arg1 + 0x4584) = 0
        int32_t i_3 = *data_5300d0
        
        if (i_3 s> 0)
            int32_t eax_9 = 1
            int32_t i_1
            
            do
                *(arg1 + (eax_9 << 2) + 0xffa4) = 0
                
                if (*(*data_5301f4 + 4) == 7)
                    *(arg1 + (eax_9 << 2) + 0xffa4) = 0x96
                
                eax_9 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    *(arg1 + 0x10144) = 0
    *(arg1 + 0x1014c) = 0
    *(arg1 + 0x10164) = 0
    *(arg1 + 0x10250) = 0
    sub_4cfe9c(*data_53067c)
    
    for (int32_t i_2 = 1; i_2 != 0xb; i_2 += 1)
        *(arg1 + i_2 + 0x10165) = 0
    
    *(arg1 + 0xffec) = 0
    void* const result = *data_530454
    
    if (*(result + 0x1e3) != 0)
        result = nullptr
        *(arg1 + 0xfff0) = 0
        *(arg1 + 0xffec) = 5
    
    return result
}
