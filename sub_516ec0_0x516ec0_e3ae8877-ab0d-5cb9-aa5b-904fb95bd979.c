// ============================================================
// 函数名称: sub_516ec0
// 虚拟地址: 0x516ec0
// WARP GUID: e3ae8877-ab0d-5cb9-aa5b-904fb95bd979
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_52c66c, sub_503538, sub_527364, sub_4c92f0, sub_4d7a11, sub_4d7a1c, sub_4d6590, sub_4e649b
// ============================================================

void __convention("regparm")sub_516ec0(void* arg1)
{
    // 第一条实际指令: int32_t i_2 = sx.d(*(arg1 + 0x8c48))
    int32_t i_2 = sx.d(*(arg1 + 0x8c48))
    *(arg1 + 0x8978) = i_2
    int32_t i_1 = i_2
    
    if (i_1 s<= 0)
        return 
    
    void* edx = arg1 + 0x89b0
    int32_t i
    
    do
        *arg1 = *edx
        arg1 += 0xd4
        edx += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
