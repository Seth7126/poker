// ============================================================
// 函数名称: sub_4418e0
// 虚拟地址: 0x4418e0
// WARP GUID: a825b00b-bf96-5a04-9e89-c368230f0309
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441dc4
// [被调用的父级函数]: sub_441018
// ============================================================

void* __convention("regparm")sub_4418e0(void* arg1, char arg2)
{
    // 第一条实际指令: *(arg1 + 0x1c) = arg2
    *(arg1 + 0x1c) = arg2
    return sub_441dc4(*(arg1 + 4))
}
