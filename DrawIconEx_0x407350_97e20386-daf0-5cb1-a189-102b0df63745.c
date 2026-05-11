// ============================================================
// 函数名称: DrawIconEx
// 虚拟地址: 0x407350
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41f620
// ============================================================

BOOL __stdcallDrawIconEx(HDC hdc, int32_t xLeft, int32_t yTop, HICON hIcon, int32_t cxWidth, int32_t cyWidth, uint32_t istepIfAniCur, HBRUSH hbrFlickerFreeDraw, enum DI_FLAGS diFlags)
{
    // 第一条实际指令: return DrawIconEx(hdc, xLeft, yTop, hIcon, cxWidth, cyWidth, istepIfAniCur, hbrFlickerFreeDraw, diFlags) __tailcall
    return DrawIconEx(hdc, xLeft, yTop, hIcon, cxWidth, cyWidth, istepIfAniCur, hbrFlickerFreeDraw, 
        diFlags) __tailcall
}
