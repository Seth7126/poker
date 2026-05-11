// ============================================================
// 函数名称: GetCursorPos
// 虚拟地址: 0x407408
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449944, sub_4359b4, sub_449e50, sub_43550c, sub_447664, sub_42fd68, sub_447d4c, sub_449d44, sub_430f0c, sub_42bdf4, sub_426248, sub_429cf8, sub_429b88
// ============================================================

BOOL __stdcallGetCursorPos(POINT* lpPoint)
{
    // 第一条实际指令: return GetCursorPos(lpPoint) __tailcall
    return GetCursorPos(lpPoint) __tailcall
}
