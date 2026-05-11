// ============================================================
// 函数名称: sub_430bc0
// 虚拟地址: 0x430bc0
// WARP GUID: 4b31a2eb-6ee5-539d-95d6-613b57a540b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RemovePropA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_445374
// ============================================================

HANDLE __convention("regparm")sub_430bc0(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    RemovePropA(arg1[0x53], zx.d(data_53175e))
    return RemovePropA(arg1[0x53], zx.d(data_53175c))
}
