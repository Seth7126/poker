// ============================================================
// 函数名称: sub_514738
// 虚拟地址: 0x514738
// WARP GUID: 6d010135-0a90-58fe-90b4-331abc04dbb7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_514784
// ============================================================

int32_tsub_514738(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = *(*(arg1 - 4) + 0x348)
    
    if (i_1 s> 0)
        int32_t edx_1 = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul ebx, edx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*(arg1 - 4) + edx_1 * 0x3a4 - 0x50) == 3)
                int32_t result_1 = result
                result += 1
                
                if (add_overflow(result_1, 1))
                    sub_403010()
                    noreturn
            
            edx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
