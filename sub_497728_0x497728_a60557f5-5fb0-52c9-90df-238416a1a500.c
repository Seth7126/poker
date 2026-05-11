// ============================================================
// 函数名称: sub_497728
// 虚拟地址: 0x497728
// WARP GUID: a60557f5-5fb0-52c9-90df-238416a1a500
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __stdcallsub_497728(void* arg1 @ eax, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = *(arg1 + 0x80)
    void* result = *(arg1 + 0x80)
    *(result + 0x80) = arg2
    *(result + 0x84) = arg3
    return result
}
