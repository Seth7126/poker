// ============================================================
// 函数名称: sub_4c3270
// 虚拟地址: 0x4c3270
// WARP GUID: 75ce9d1a-481a-58e3-88e1-f8a60bc0d51c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4c62e8
// ============================================================

int32_tsub_4c3270()
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 1
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        void* eax_2 = data_5301b0 + 0x8ccc
        int32_t i
        
        do
            if (*eax_2 != 0)
                result = 0
            
            eax_2 += 0x8d14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
