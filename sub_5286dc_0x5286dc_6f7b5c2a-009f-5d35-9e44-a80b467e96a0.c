// ============================================================
// 函数名称: sub_5286dc
// 虚拟地址: 0x5286dc
// WARP GUID: 6f7b5c2a-009f-5d35-9e44-a80b467e96a0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_5285a8, sub_403010
// [被调用的父级函数]: sub_528e43, sub_528b98, sub_528538, sub_528e4c
// ============================================================

int32_t __convention("regparm")sub_5286dc(void* arg1)
{
    // 第一条实际指令: void* ebp = sub_5285a8(arg1, 0)
    void* ebp = sub_5285a8(arg1, 0)
    *(ebp - 4) = 0
    int32_t edx = *(arg1 + 0xbefc)
    
    if (edx s>= 0)
        int32_t i_1 = edx + 1
        int32_t eax_1 = 0
        int32_t i
        
        do
            int32_t ecx_1 = eax_1 * 0x112
            bool o_1 = unimplemented  {imul ecx, eax, 0x112}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + (ecx_1 << 3) + 0x13b4) != 0)
                int32_t ecx_2 = *(arg1 + (ecx_1 << 3) + 0x13b0)
                int32_t temp1_1 = *(ebp - 4)
                *(ebp - 4) += ecx_2
                
                if (add_overflow(temp1_1, ecx_2))
                    sub_403010()
                    noreturn
            
            eax_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return *(ebp - 4)
}
