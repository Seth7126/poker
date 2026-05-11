// ============================================================
// 函数名称: sub_512d78
// 虚拟地址: 0x512d78
// WARP GUID: f3bcc036-359a-5d04-8088-0c8e3db7b943
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50d2f4, sub_403010
// [被调用的父级函数]: sub_5168a7, sub_5091bc
// ============================================================

int32_t __convention("regparm")sub_512d78(void* arg1)
{
    // 第一条实际指令: if (sub_50d2f4() == 0)
    if (sub_50d2f4() == 0)
        int32_t i_1 = *(arg1 + 0x348)
        
        if (i_1 s> 0)
            int32_t eax_3 = 1
            int32_t i
            
            do
                bool o_3 = unimplemented  {imul esi, eax, 0xe9}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                if (*(arg1 + eax_3 * 0x3a4 - 0x50) == 2)
                    return eax_3
                
                eax_3 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        return 0
    
    int32_t eax_2 = 1
    
    while (true)
        if (eax_2 s< 8)
            bool o_2 = unimplemented  {imul edx, eax, 0xe9}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (*(*data_530454 + eax_2 * 0x3a4 - 0x50) != 1)
                int32_t temp1_1 = eax_2
                eax_2 += 1
                
                if (add_overflow(temp1_1, 1))
                    break
                
                continue
        
        return eax_2
    
    sub_403010()
    noreturn
}
