// ============================================================
// 函数名称: sub_516e74
// 虚拟地址: 0x516e74
// WARP GUID: 49576a85-404b-5383-858e-ec79e0d9675a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_52c66c, sub_4ed638, sub_527454, sub_4ee958, sub_503538, sub_4ed4d4, sub_527364, sub_4c9488, sub_4c4ab8, sub_4d7a1c, sub_4e649b
// ============================================================

void __convention("regparm")sub_516e74(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x8c48) = (*(arg1 + 0x8978)).w
    *(arg1 + 0x8c48) = (*(arg1 + 0x8978)).w
    *(arg1 + 0x8d10) = *(arg1 + 0x897c)
    int32_t i_1 = *(arg1 + 0x8978)
    
    if (i_1 s<= 0)
        return 
    
    int32_t esi_1 = 1
    void* edx_2 = arg1
    arg1 += 0x89b0
    int32_t i
    
    do
        *arg1 = *edx_2
        *(arg1 + 2) = esi_1.w
        esi_1 += 1
        arg1 += 4
        edx_2 += 0xd4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
