// ============================================================
// 函数名称: RegOpenKeyExA
// 虚拟地址: 0x401360
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_402f38, sub_405780
// ============================================================

enum WIN32_ERROR __stdcallRegOpenKeyExA(HKEY hKey, PSTR lpSubKey, uint32_t ulOptions, enum REG_SAM_FLAGS samDesired, HKEY* phkResult)
{
    // 第一条实际指令: return RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult) __tailcall
    return RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult) __tailcall
}
