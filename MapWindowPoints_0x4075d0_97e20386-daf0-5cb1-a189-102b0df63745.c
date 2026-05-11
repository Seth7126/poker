// ============================================================
// 函数名称: MapWindowPoints
// 虚拟地址: 0x4075d0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4303b8, sub_42c2ec, sub_4347d4, sub_432634
// ============================================================

int32_t __stdcallMapWindowPoints(HWND hWndFrom, HWND hWndTo, POINT* lpPoints, uint32_t cPoints)
{
    // 第一条实际指令: return MapWindowPoints(hWndFrom, hWndTo, lpPoints, cPoints) __tailcall
    return MapWindowPoints(hWndFrom, hWndTo, lpPoints, cPoints) __tailcall
}
