// ============================================================
// 函数名称: CreateWindowExA
// 虚拟地址: 0x4072e0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_440cb8, sub_4445ed, sub_40782c, sub_424cac, sub_42ec58
// ============================================================

HWND __stdcallCreateWindowExA(enum WINDOW_EX_STYLE dwExStyle, PSTR lpClassName, PSTR lpWindowName, enum WINDOW_STYLE dwStyle, int32_t X, int32_t Y, int32_t nWidth, int32_t nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, void* lpParam)
{
    // 第一条实际指令: return CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam) __tailcall
    return CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, 
        hWndParent, hMenu, hInstance, lpParam) __tailcall
}
