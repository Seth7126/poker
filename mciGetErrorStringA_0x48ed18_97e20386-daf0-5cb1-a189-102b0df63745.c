// ============================================================
// 函数名称: mciGetErrorStringA
// 虚拟地址: 0x48ed18
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_493b3c
// ============================================================

BOOL __stdcallmciGetErrorStringA(uint32_t mcierr, uint8_t* pszText, uint32_t cchText)
{
    // 第一条实际指令: return mciGetErrorStringA(mcierr, pszText, cchText) __tailcall
    return mciGetErrorStringA(mcierr, pszText, cchText) __tailcall
}
