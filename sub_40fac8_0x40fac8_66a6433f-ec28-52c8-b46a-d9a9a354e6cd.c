// ============================================================
// 函数名称: sub_40fac8
// 虚拟地址: 0x40fac8
// WARP GUID: 66a6433f-ec28-52c8-b46a-d9a9a354e6cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44b8a0, sub_433b34, sub_42d1d4, sub_4336a8, sub_433ab0, sub_437e28, sub_42c2ec, sub_442218, sub_4b4f8c, sub_4347d4, sub_491e20
// ============================================================

void __fastcallsub_40fac8(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: *arg4 = arg3
    *arg4 = arg3
    arg4[1] = arg2
    arg4[2] = arg1 + arg3
    arg4[3] = arg2 + arg5
}
