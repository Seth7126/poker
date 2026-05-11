// ============================================================
// 函数名称: CompareStringA
// 虚拟地址: 0x406d68
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_408a68, sub_408ad8, sub_408b14, sub_40c150, sub_408aa0
// ============================================================

enum COMPARESTRING_RESULT __stdcallCompareStringA(uint32_t Locale, uint32_t dwCmpFlags, char* lpString1, int32_t cchCount1, char* lpString2, int32_t cchCount2)
{
    // 第一条实际指令: return CompareStringA(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2) __tailcall
    return CompareStringA(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2) __tailcall
}
