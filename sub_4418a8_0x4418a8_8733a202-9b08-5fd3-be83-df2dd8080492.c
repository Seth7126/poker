// ============================================================
// 函数名称: sub_4418a8
// 虚拟地址: 0x4418a8
// WARP GUID: 8733a202-9b08-5fd3-be83-df2dd8080492
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441dc4
// [被调用的父级函数]: sub_4418c0, sub_441174
// ============================================================

void* __convention("regparm")sub_4418a8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: *(arg1 + 0x10) = arg2
    *(arg1 + 0x10) = arg2
    
    if (arg2 s< 0)
        *(arg1 + 0x10) = 0
    
    return sub_441dc4(*(arg1 + 4))
}
