// ============================================================
// 函数名称: sub_463d40
// 虚拟地址: 0x463d40
// WARP GUID: 20eadc4b-eec2-5bd4-a2e4-1d226f9b3eca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_463b5c, sub_46026c
// [被调用的父级函数]: sub_4642f8
// ============================================================

int32_t __fastcallsub_463d40(void* arg1, void* arg2, void* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    sub_46026c(arg4, 0, arg1, *(arg3 + 0x18), *(arg3 + 0xe1), 0)
    return sub_463b5c(*(arg3 + 0x18), *(arg3 + 0xe1), arg4, *(arg2 + 0x1c) << 3)
}
