// ============================================================
// 函数名称: GetDateFormatA
// 虚拟地址: 0x406e28
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40a384, sub_40a218
// ============================================================

int32_t __stdcallGetDateFormatA(uint32_t Locale, uint32_t dwFlags, SYSTEMTIME* lpDate, PSTR lpFormat, uint8_t* lpDateStr, int32_t cchDate)
{
    // 第一条实际指令: return GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate) __tailcall
    return GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate) __tailcall
}
