// ============================================================
// 函数名称: sub_456ae8
// 虚拟地址: 0x456ae8
// WARP GUID: cc6cb46a-54e1-55c5-afc2-28bdf8c9c275
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_456b70
// ============================================================

void __convention("regparm")sub_456ae8(void* arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x196)
    void* ebx = *(arg1 + 0x196)
    
    if (*(arg1 + 0x50) != 0)
        (*(*(arg1 + 0x1be) + 8))()
    
    *(ebx + 0xc) += 1
}
