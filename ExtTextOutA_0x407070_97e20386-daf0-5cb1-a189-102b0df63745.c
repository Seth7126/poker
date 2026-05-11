// ============================================================
// 函数名称: ExtTextOutA
// 虚拟地址: 0x407070
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4198d0
// ============================================================

BOOL __stdcallExtTextOutA(HDC hdc, int32_t x, int32_t y, enum ETO_OPTIONS options, RECT* lprect, uint8_t* lpString, uint32_t c, int32_t* lpDx)
{
    // 第一条实际指令: return ExtTextOutA(hdc, x, y, options, lprect, lpString, c, lpDx) __tailcall
    return ExtTextOutA(hdc, x, y, options, lprect, lpString, c, lpDx) __tailcall
}
