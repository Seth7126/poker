// ============================================================
// 函数名称: SetEvent
// 虚拟地址: 0x406f60
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_493f6c, sub_40cc6b, sub_447e60
// ============================================================

BOOL __stdcallSetEvent(HANDLE hEvent)
{
    // 第一条实际指令: return SetEvent(hEvent) __tailcall
    return SetEvent(hEvent) __tailcall
}
