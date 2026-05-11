// ============================================================
// 函数名称: PeekMessageA
// 虚拟地址: 0x407608
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_415cb4, sub_449184, sub_43550c
// ============================================================

BOOL __stdcallPeekMessageA(MSG* lpMsg, HWND hWnd, uint32_t wMsgFilterMin, uint32_t wMsgFilterMax, enum PEEK_MESSAGE_REMOVE_TYPE wRemoveMsg)
{
    // 第一条实际指令: return PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg) __tailcall
    return PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg) __tailcall
}
