// ============================================================
// 函数名称: ShellExecuteA
// 虚拟地址: 0x44a5ac
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_50fa27, sub_471144, sub_50f7b8, sub_4e649b
// ============================================================

HINSTANCE __stdcallShellExecuteA(HWND hwnd, PSTR lpOperation, PSTR lpFile, PSTR lpParameters, PSTR lpDirectory, enum SHOW_WINDOW_CMD nShowCmd)
{
    // 第一条实际指令: return ShellExecuteA(hwnd, lpOperation, lpFile, lpParameters, lpDirectory, nShowCmd) __tailcall
    return ShellExecuteA(hwnd, lpOperation, lpFile, lpParameters, lpDirectory, nShowCmd) __tailcall
}
