// ============================================================
// 函数名称: GetActiveWindow
// 虚拟地址: 0x4073d0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4463a4, sub_445ad4, sub_445f30, sub_440b24, sub_449520
// ============================================================

HWND __stdcallGetActiveWindow()
{
    // 第一条实际指令: return GetActiveWindow() __tailcall
    return GetActiveWindow() __tailcall
}
