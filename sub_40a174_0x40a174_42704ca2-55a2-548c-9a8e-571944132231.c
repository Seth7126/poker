// ============================================================
// 函数名称: sub_40a174
// 虚拟地址: 0x40a174
// WARP GUID: 42704ca2-55a2-548c-9a8e-571944132231
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40a48c
// ============================================================

int32_tsub_40a174(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 - 4)
    int32_t edx = *(arg1 - 4)
    
    while (true)
        char* ecx_1
        ecx_1.b = **(arg1 - 4)
        
        if (ecx_1.b != *(arg1 - 5))
            break
        
        *(arg1 - 4) += 1
    
    int32_t result = *(arg1 - 4) - edx + 1
    *(arg1 - 0xc) = result
    return result
}
