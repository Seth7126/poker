// ============================================================
// 函数名称: SetViewportOrgEx
// 虚拟地址: 0x407208
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42ba70
// ============================================================

BOOL __stdcallSetViewportOrgEx(HDC hdc, int32_t x, int32_t y, POINT* lppt)
{
    // 第一条实际指令: return SetViewportOrgEx(hdc, x, y, lppt) __tailcall
    return SetViewportOrgEx(hdc, x, y, lppt) __tailcall
}
