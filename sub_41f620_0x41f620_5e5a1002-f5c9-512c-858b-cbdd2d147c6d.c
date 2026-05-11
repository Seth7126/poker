// ============================================================
// 函数名称: sub_41f620
// 虚拟地址: 0x41f620
// WARP GUID: 5e5a1002-f5c9-512c-858b-cbdd2d147c6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawIconEx
// [内部子函数调用]: sub_41f678, sub_419c14
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_41f620(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    arg2.b = 1
    sub_419c14(esi, arg2.b)
    HICON hIcon = sub_41f678(arg1)
    return DrawIconEx(*(esi + 4), *arg3, arg3[1], hIcon, 0, 0, 0, nullptr, DI_NORMAL)
}
