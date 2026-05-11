// ============================================================
// 函数名称: sub_449e84
// 虚拟地址: 0x449e84
// WARP GUID: ab8c1f0b-d19e-58be-ba4b-27c6b88f142f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow, IsWindowVisible
// [内部子函数调用]: sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_449e50, sub_449ec0
// ============================================================

void __convention("regparm")sub_449e84(BOOL arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x74)
    void* esi = *(arg1 + 0x74)
    
    if (esi != 0 && sub_431bcc(esi).b != 0 && IsWindowVisible(sub_4318d0(*(arg1 + 0x74))) != 0)
        ShowWindow(sub_4318d0(*(arg1 + 0x74)), SW_HIDE)
}
