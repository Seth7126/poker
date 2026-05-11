// ============================================================
// 函数名称: sub_50a19c
// 虚拟地址: 0x50a19c
// WARP GUID: e816438d-769e-519f-9f5f-5ee6d78d9e1b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_50c5e0
// ============================================================

int32_tsub_50a19c()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = *(*data_530454 + 0x348)
    
    if (i_1 s> 0)
        int32_t edx_1 = 1
        int32_t i
        
        do
            bool o_1 = unimplemented  {imul ecx, edx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t ecx_1
            ecx_1.b = *(*data_530454 + edx_1 * 0x3a4 - 0x50)
            char temp0_1 = ecx_1.b
            ecx_1.b -= 3
            
            if (temp0_1 u< 3)
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
