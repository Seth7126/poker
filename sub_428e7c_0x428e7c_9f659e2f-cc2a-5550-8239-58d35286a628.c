// ============================================================
// 函数名称: sub_428e7c
// 虚拟地址: 0x428e7c
// WARP GUID: 9f659e2f-cc2a-5550-8239-58d35286a628
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetCapture
// [内部子函数调用]: sub_440cb8
// [被调用的父级函数]: sub_429b88
// ============================================================

HWND __convention("regparm")sub_428e7c(int16_t arg1)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    HWND hWnd = sub_440cb8(sub_428ed8, arg1, entry_ebx)
    SetCapture(hWnd)
    return hWnd
}
