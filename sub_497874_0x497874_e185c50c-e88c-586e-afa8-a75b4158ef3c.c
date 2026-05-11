// ============================================================
// 函数名称: sub_497874
// 虚拟地址: 0x497874
// WARP GUID: e185c50c-e88c-586e-afa8-a75b4158ef3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_5166d8
// ============================================================

void* __stdcallsub_497874(void* arg1 @ eax, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = *(arg1 + 0x80)
    void* result = *(arg1 + 0x80)
    *(result + 0xb0) = arg2
    *(result + 0xb4) = arg3
    return result
}
