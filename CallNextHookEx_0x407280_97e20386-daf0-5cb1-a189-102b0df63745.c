// ============================================================
// 函数名称: CallNextHookEx
// 虚拟地址: 0x407280
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_447da8
// ============================================================

LRESULT __stdcallCallNextHookEx(HHOOK hhk, int32_t nCode, WPARAM wParam, LPARAM lParam)
{
    // 第一条实际指令: return CallNextHookEx(hhk, nCode, wParam, lParam) __tailcall
    return CallNextHookEx(hhk, nCode, wParam, lParam) __tailcall
}
