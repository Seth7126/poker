// ============================================================
// 函数名称: EnumThreadWindows
// 虚拟地址: 0x4073a0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_440aa8, sub_440958, sub_440b24, sub_429364
// ============================================================

BOOL __stdcallEnumThreadWindows(uint32_t dwThreadId, WNDENUMPROC lpfn, LPARAM lParam)
{
    // 第一条实际指令: return EnumThreadWindows(dwThreadId, lpfn, lParam) __tailcall
    return EnumThreadWindows(dwThreadId, lpfn, lParam) __tailcall
}
