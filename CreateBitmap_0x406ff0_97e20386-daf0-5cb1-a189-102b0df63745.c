// ============================================================
// 函数名称: CreateBitmap
// 虚拟地址: 0x406ff0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41d8d4, sub_41d214, sub_419f48
// ============================================================

HBITMAP __stdcallCreateBitmap(int32_t nWidth, int32_t nHeight, uint32_t nPlanes, uint32_t nBitCount, void* lpBits)
{
    // 第一条实际指令: return CreateBitmap(nWidth, nHeight, nPlanes, nBitCount, lpBits) __tailcall
    return CreateBitmap(nWidth, nHeight, nPlanes, nBitCount, lpBits) __tailcall
}
