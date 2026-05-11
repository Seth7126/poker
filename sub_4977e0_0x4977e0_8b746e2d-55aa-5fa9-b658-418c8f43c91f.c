// ============================================================
// 函数名称: sub_4977e0
// 虚拟地址: 0x4977e0
// WARP GUID: 8b746e2d-55aa-5fa9-b658-418c8f43c91f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_5166d8
// ============================================================

void __fastcallsub_4977e0(int32_t, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg2 u< 1)
    if (arg2 u< 1)
        arg3 = *(arg3 + 0x80)
        *(arg3 + 0xa0) = arg4
        *(arg3 + 0xa4) = arg5
    else if (arg2 == 1)
        arg3 = *(arg3 + 0x80)
        *(arg3 + 0xa8) = arg4
        *(arg3 + 0xac) = arg5
    else if (arg2 == 2)
        arg3 = *(arg3 + 0x80)
        *(arg3 + 0x90) = arg4
        *(arg3 + 0x94) = arg5
    else if (arg2 == 3)
        arg3 = *(arg3 + 0x80)
        *(arg3 + 0x98) = arg4
        *(arg3 + 0x9c) = arg5
}
