// ============================================================
// 函数名称: GetDIBits
// 虚拟地址: 0x4070b0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41d214, sub_41ade8
// ============================================================

int32_t __stdcallGetDIBits(HDC hdc, HBITMAP hbm, uint32_t start, uint32_t cLines, void* lpvBits, BITMAPINFO* lpbmi, enum DIB_USAGE usage)
{
    // 第一条实际指令: return GetDIBits(hdc, hbm, start, cLines, lpvBits, lpbmi, usage) __tailcall
    return GetDIBits(hdc, hbm, start, cLines, lpvBits, lpbmi, usage) __tailcall
}
