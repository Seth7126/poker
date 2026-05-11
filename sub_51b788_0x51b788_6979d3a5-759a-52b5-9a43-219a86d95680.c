// ============================================================
// 函数名称: sub_51b788
// 虚拟地址: 0x51b788
// WARP GUID: 6979d3a5-759a-52b5-9a43-219a86d95680
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_51bf84
// ============================================================

int32_t __convention("regparm")sub_51b788(void* arg1)
{
    // 第一条实际指令: int16_t edx = *(arg1 + 0x45f0)
    int16_t edx = *(arg1 + 0x45f0)
    
    if (edx s>= 7)
        int32_t edx_1 = sx.d(edx)
        int32_t result = sx.d(*(arg1 + 0x490a))
        
        if (add_overflow(edx_1, result))
            sub_403010()
            noreturn
        
        if (edx_1 + result s>= 7)
            result.b = 1
            return result
    
    return 0
}
