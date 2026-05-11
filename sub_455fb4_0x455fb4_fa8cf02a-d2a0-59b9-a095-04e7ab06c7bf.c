// ============================================================
// 函数名称: sub_455fb4
// 虚拟地址: 0x455fb4
// WARP GUID: fa8cf02a-d2a0-59b9-a095-04e7ab06c7bf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_456060
// ============================================================

void* __convention("regparm")sub_455fb4(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x14)
    void* result = *(arg1 + 0x14)
    *(result + 0x24) = 1
    return result
}
