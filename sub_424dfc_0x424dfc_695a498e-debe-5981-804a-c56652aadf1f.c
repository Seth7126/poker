// ============================================================
// 函数名称: sub_424dfc
// 虚拟地址: 0x424dfc
// WARP GUID: 695a498e-debe-5981-804a-c56652aadf1f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_424dfc(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x20c))
    if (arg2 != *(arg1 + 0x20c))
        *(arg1 + 0x20c) = arg2
        sub_42ee80(arg1)
}
