// ============================================================
// 函数名称: sub_517ba0
// 虚拟地址: 0x517ba0
// WARP GUID: 93252c78-472c-50c0-beb6-5b958b64abc4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_5176c4, sub_4ee958
// ============================================================

void __convention("regparm")sub_517ba0(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x298) = 0
    *(arg1 + 0x298) = 0
    int32_t i_1 = 0xa
    void* edx = arg1
    int32_t i
    
    do
        *edx = 0
        *(edx + 1) = 0
        edx += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
