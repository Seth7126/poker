// ============================================================
// 函数名称: sub_528734
// 虚拟地址: 0x528734
// WARP GUID: f136800c-9173-5822-9d7e-798927e3ab9c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c51e4, sub_529818
// ============================================================

int32_t __convention("regparm")sub_528734(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t edx = *(arg1 + 0xbefc)
    
    if (edx s>= 0)
        int32_t i_1 = edx + 1
        int32_t ecx_1 = 0
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul esi, ecx, 0x112}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(arg1 + ecx_1 * 0x890 + 0x13b4) != 0)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
            
            ecx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
