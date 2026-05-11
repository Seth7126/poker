// ============================================================
// 函数名称: GetClipboardData
// 虚拟地址: 0x4073f8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4268dc, sub_426874, sub_41cbd0, sub_4267c4
// ============================================================

HANDLE __stdcallGetClipboardData(uint32_t uFormat)
{
    // 第一条实际指令: return GetClipboardData(uFormat) __tailcall
    return GetClipboardData(uFormat) __tailcall
}
