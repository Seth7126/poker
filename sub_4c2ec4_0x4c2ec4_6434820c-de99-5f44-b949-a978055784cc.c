// ============================================================
// 函数名称: sub_4c2ec4
// 虚拟地址: 0x4c2ec4
// WARP GUID: 6434820c-de99-5f44-b949-a978055784cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2d7c, sub_403010
// [被调用的父级函数]: sub_529818
// ============================================================

int32_tsub_4c2ec4()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            if (sub_4c2d7c(ebx_1) != 0)
                bool o_1 = unimplemented  {imul eax, ebx, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + ebx_1 * 0x208 + 0x20086) == 0)
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
