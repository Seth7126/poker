// ============================================================
// 函数名称: LoadIconA
// 虚拟地址: 0x4075b0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_447f54, sub_44c778, sub_447f44, sub_41feac, sub_448d04
// ============================================================

HICON __stdcallLoadIconA(HINSTANCE hInstance, PSTR lpIconName)
{
    // 第一条实际指令: return LoadIconA(hInstance, lpIconName) __tailcall
    return LoadIconA(hInstance, lpIconName) __tailcall
}
