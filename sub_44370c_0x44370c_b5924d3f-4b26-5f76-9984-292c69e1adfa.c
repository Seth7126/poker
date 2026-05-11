// ============================================================
// 函数名称: sub_44370c
// 虚拟地址: 0x44370c
// WARP GUID: b5924d3f-4b26-5f76-9984-292c69e1adfa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_443af0, sub_443aa4
// [被调用的父级函数]: sub_44374c
// ============================================================

void*sub_44370c(void* arg1)
{
    // 第一条实际指令: int32_t ebx_1 = sub_443aa4(*(arg1 - 4)) - 1
    int32_t ebx_1 = sub_443aa4(*(arg1 - 4)) - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            if (*(sub_443af0(*(arg1 - 4), esi_1) + 0x213) == 2)
                void* result
                result.b = 1
                return result
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return nullptr
}
