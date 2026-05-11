// ============================================================
// 函数名称: sub_42c650
// 虚拟地址: 0x42c650
// WARP GUID: 4bb88c04-adc2-54e5-aaee-72e878b154d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_432309
// ============================================================

void __thiscallsub_42c650(int32_t arg1, void* arg2 @ eax, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (*(arg2 + 0xb2) != 0)
    if (*(arg2 + 0xb2) != 0)
        *(arg2 + 0xb4)
        (*(arg2 + 0xb0))(arg3, arg4, arg1)
}
