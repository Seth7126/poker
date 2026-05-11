// ============================================================
// 函数名称: sub_497748
// 虚拟地址: 0x497748
// WARP GUID: 43dac011-2528-5ed6-a91f-d5b5db4a1422
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __stdcallsub_497748(void* arg1 @ eax, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = *(arg1 + 0x80)
    void* result = *(arg1 + 0x80)
    *(result + 0x88) = arg2
    *(result + 0x8c) = arg3
    return result
}
