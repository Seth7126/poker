// ============================================================
// 函数名称: CreateDIBitmap
// 虚拟地址: 0x407018
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a720, sub_41e6c8, sub_41a7f9
// ============================================================

HBITMAP __stdcallCreateDIBitmap(HDC hdc, BITMAPINFOHEADER* pbmih, uint32_t flInit, void* pjBits, BITMAPINFO* pbmi, enum DIB_USAGE iUsage)
{
    // 第一条实际指令: return CreateDIBitmap(hdc, pbmih, flInit, pjBits, pbmi, iUsage) __tailcall
    return CreateDIBitmap(hdc, pbmih, flInit, pjBits, pbmi, iUsage) __tailcall
}
