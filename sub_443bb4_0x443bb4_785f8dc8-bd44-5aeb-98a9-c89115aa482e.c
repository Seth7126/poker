// ============================================================
// 函数名称: sub_443bb4
// 虚拟地址: 0x443bb4
// WARP GUID: 785f8dc8-bd44-5aeb-98a9-c89115aa482e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_443bbc, sub_442f0c
// ============================================================

void* __convention("regparm")sub_443bb4(void* arg1)
{
    // 第一条实际指令: arg1.b = *(arg1 + 0x4e)
    arg1.b = *(arg1 + 0x4e)
    arg1.b ^= 1
    return arg1
}
