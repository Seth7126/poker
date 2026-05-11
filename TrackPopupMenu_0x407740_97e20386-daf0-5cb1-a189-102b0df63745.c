// ============================================================
// 函数名称: TrackPopupMenu
// 虚拟地址: 0x407740
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43e014
// ============================================================

BOOL __stdcallTrackPopupMenu(HMENU hMenu, enum TRACK_POPUP_MENU_FLAGS uFlags, int32_t x, int32_t y, int32_t nReserved, HWND hWnd, RECT* prcRect)
{
    // 第一条实际指令: return TrackPopupMenu(hMenu, uFlags, x, y, nReserved, hWnd, prcRect) __tailcall
    return TrackPopupMenu(hMenu, uFlags, x, y, nReserved, hWnd, prcRect) __tailcall
}
