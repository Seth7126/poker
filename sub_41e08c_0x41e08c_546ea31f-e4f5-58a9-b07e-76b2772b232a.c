// ============================================================
// 函数名称: sub_41e08c
// 虚拟地址: 0x41e08c
// WARP GUID: 546ea31f-e4f5-58a9-b07e-76b2772b232a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41dd34, sub_41e2f0, sub_41e2e0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41e08c(int32_t arg1)
{
    // 第一条实际指令: sub_41e2e0(arg1)
    sub_41e2e0(arg1)
    sub_41e2f0(arg1)
    sub_41dd34(arg1)
    return *(*(arg1 + 0x20) + 8)
}
