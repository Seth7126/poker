// ============================================================
// 函数名称: sub_440b24
// 虚拟地址: 0x440b24
// WARP GUID: c103f866-a538-5c47-b375-d850dc065193
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCurrentThreadId, EnumThreadWindows, GetActiveWindow
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44a0a0
// ============================================================

BOOLsub_440b24()
{
    // 第一条实际指令: HWND lParam = GetActiveWindow()
    HWND lParam = GetActiveWindow()
    char var_4 = 0
    EnumThreadWindows(GetCurrentThreadId(), sub_440b04, &lParam)
    BOOL result
    result.b = var_4
    return result
}
