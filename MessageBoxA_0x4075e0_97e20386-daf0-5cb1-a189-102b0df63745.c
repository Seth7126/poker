// ============================================================
// 函数名称: MessageBoxA
// 虚拟地址: 0x4075e0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b5788, sub_40b3d8, sub_449520
// ============================================================

enum MESSAGEBOX_RESULT __stdcallMessageBoxA(HWND hWnd, PSTR lpText, PSTR lpCaption, enum MESSAGEBOX_STYLE uType)
{
    // 第一条实际指令: return MessageBoxA(hWnd, lpText, lpCaption, uType) __tailcall
    return MessageBoxA(hWnd, lpText, lpCaption, uType) __tailcall
}
