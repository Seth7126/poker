// ============================================================
// 函数名称: DrawEdge
// 虚拟地址: 0x407330
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_432634, sub_432b1c, sub_43a0a4, sub_43ab7c, sub_43a2fc
// ============================================================

BOOL __stdcallDrawEdge(HDC hdc, RECT* qrc, enum DRAWEDGE_FLAGS edge, enum DRAW_EDGE_FLAGS grfFlags)
{
    // 第一条实际指令: return DrawEdge(hdc, qrc, edge, grfFlags) __tailcall
    return DrawEdge(hdc, qrc, edge, grfFlags) __tailcall
}
