// ============================================================
// 函数名称: sub_460b34
// 虚拟地址: 0x460b34
// WARP GUID: 7807d3bd-ec57-52c3-9c20-4f17d697884b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_460be4
// ============================================================

void* __fastcallsub_460b34(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: *arg3 = 1
    *arg3 = 1
    arg3[1] = arg2
    arg3[5] = arg1
    arg3[6] = arg6
    arg3[7] = arg5
    arg3[8] = arg4
    return &arg3[9]
}
