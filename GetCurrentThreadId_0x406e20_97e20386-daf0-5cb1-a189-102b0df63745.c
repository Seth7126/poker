// ============================================================
// 函数名称: GetCurrentThreadId
// 虚拟地址: 0x406e20
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49e5ec, sub_49e5e0, sub_415cb4, sub_435eac, sub_429364, sub_44ce04, sub_440aa8, sub_440b24, sub_447664, sub_40ca50, sub_447dec, sub_447d4c, sub_40cbc8, sub_447e60, sub_440958, sub_40c9e0
// ============================================================

uint32_t __stdcallGetCurrentThreadId()
{
    // 第一条实际指令: return GetCurrentThreadId() __tailcall
    return GetCurrentThreadId() __tailcall
}
