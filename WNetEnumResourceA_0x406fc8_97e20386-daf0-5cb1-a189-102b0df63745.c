// ============================================================
// 函数名称: WNetEnumResourceA
// 虚拟地址: 0x406fc8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b556c
// ============================================================

enum WIN32_ERROR __stdcallWNetEnumResourceA(HANDLE hEnum, uint32_t* lpcCount, void* lpBuffer, uint32_t* lpBufferSize)
{
    // 第一条实际指令: return WNetEnumResourceA(hEnum, lpcCount, lpBuffer, lpBufferSize) __tailcall
    return WNetEnumResourceA(hEnum, lpcCount, lpBuffer, lpBufferSize) __tailcall
}
