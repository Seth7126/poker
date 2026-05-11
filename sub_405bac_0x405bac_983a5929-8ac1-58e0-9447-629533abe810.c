// ============================================================
// 函数名称: sub_405bac
// 虚拟地址: 0x405bac
// WARP GUID: 983a5929-8ac1-58e0-9447-629533abe810
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InterlockedDecrement
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_405bac(int32_t arg1)
{
    // 第一条实际指令: return InterlockedDecrement(arg1 + 4)
    return InterlockedDecrement(arg1 + 4)
}
