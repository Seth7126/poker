// ============================================================
// 函数名称: sub_41589c
// 虚拟地址: 0x41589c
// WARP GUID: 9b659af0-cfdf-575f-af74-378ea2e96e10
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DestroyWindow
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_416cb4, sub_4158b8
// ============================================================

voidsub_41589c()
{
    // 第一条实际指令: if (data_53164c != 0)
    if (data_53164c != 0)
        DestroyWindow(data_53164c)
        data_53164c = 0
}
