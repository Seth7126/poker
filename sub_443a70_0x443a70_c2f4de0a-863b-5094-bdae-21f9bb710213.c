// ============================================================
// 函数名称: sub_443a70
// 虚拟地址: 0x443a70
// WARP GUID: c2f4de0a-863b-5094-bdae-21f9bb710213
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_428990
// [被调用的父级函数]: sub_444d44, sub_443300, sub_444fdc
// ============================================================

HANDLE __convention("regparm")sub_443a70(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x217) == 2 && *(arg1 + 0x23c) != 0)
    if (*(arg1 + 0x217) == 2 && *(arg1 + 0x23c) != 0)
        return sub_428990(SendMessageA(*(arg1 + 0x23c), 0x229, 0, 0))
    
    return nullptr
}
