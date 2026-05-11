// ============================================================
// 函数名称: sub_4c2c48
// 虚拟地址: 0x4c2c48
// WARP GUID: 959f4753-12e5-55af-b9ad-84621cafe75c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2be8, sub_403010
// [被调用的父级函数]: sub_4b9e84, sub_4babf8
// ============================================================

int32_tsub_4c2c48()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2be8(ebx_1) != 0)
                bool o_1 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + ebx_1 * 0x208 + 0x20084) != 0)
                    int32_t result_1 = result
                    result += 1
                    
                    if (add_overflow(result_1, 1))
                        sub_403010()
                        noreturn
            
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
