// ============================================================
// 函数名称: SysAllocStringLen
// 虚拟地址: 0x401388
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_404668, sub_40460c, sub_4045cc, sub_404c50, sub_4050b4
// ============================================================

BSTR __stdcallSysAllocStringLen(wchar16* strIn, uint32_t ui)
{
    // 第一条实际指令: return SysAllocStringLen(strIn, ui) __tailcall
    return SysAllocStringLen(strIn, ui) __tailcall
}
