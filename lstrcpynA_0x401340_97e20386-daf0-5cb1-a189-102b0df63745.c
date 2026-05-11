// ============================================================
// 函数名称: lstrcpynA
// 虚拟地址: 0x401340
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4055d8
// ============================================================

PSTR __stdcalllstrcpynA(uint8_t* lpString1, PSTR lpString2, int32_t iMaxLength)
{
    // 第一条实际指令: return lstrcpynA(lpString1, lpString2, iMaxLength) __tailcall
    return lstrcpynA(lpString1, lpString2, iMaxLength) __tailcall
}
