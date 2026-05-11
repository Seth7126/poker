// ============================================================
// 函数名称: DescribePixelFormat
// 虚拟地址: 0x407060
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4807f4, sub_452f08
// ============================================================

int32_t __stdcallDescribePixelFormat(HDC hdc, int32_t iPixelFormat, uint32_t nBytes, PIXELFORMATDESCRIPTOR* ppfd)
{
    // 第一条实际指令: return DescribePixelFormat(hdc, iPixelFormat, nBytes, ppfd) __tailcall
    return DescribePixelFormat(hdc, iPixelFormat, nBytes, ppfd) __tailcall
}
