// ============================================================
// 函数名称: GetLocaleInfoA
// 虚拟地址: 0x406e60
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40ad08, sub_40acbc
// ============================================================

int32_t __stdcallGetLocaleInfoA(uint32_t Locale, uint32_t LCType, uint8_t* lpLCData, int32_t cchData)
{
    // 第一条实际指令: return GetLocaleInfoA(Locale, LCType, lpLCData, cchData) __tailcall
    return GetLocaleInfoA(Locale, LCType, lpLCData, cchData) __tailcall
}
