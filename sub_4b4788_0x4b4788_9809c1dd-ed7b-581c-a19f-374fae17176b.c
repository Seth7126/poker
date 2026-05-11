// ============================================================
// 函数名称: sub_4b4788
// 虚拟地址: 0x4b4788
// WARP GUID: 9809c1dd-ed7b-581c-a19f-374fae17176b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTextMetricsA, ReleaseDC, SelectObject, GetDC
// [内部子函数调用]: sub_418900
// [被调用的父级函数]: sub_4b5228
// ============================================================

int32_t __convention("regparm")sub_4b4788(void* arg1)
{
    // 第一条实际指令: HDC eax = GetDC(nullptr)
    HDC eax = GetDC(nullptr)
    HGDIOBJ h = SelectObject(eax, sub_418900(arg1))
    TEXTMETRICA lptm
    GetTextMetricsA(eax, &lptm)
    SelectObject(eax, h)
    ReleaseDC(nullptr, eax)
    return lptm.tmHeight
}
