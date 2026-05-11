// ============================================================
// 函数名称: sub_4d4f4c
// 虚拟地址: 0x4d4f4c
// WARP GUID: 64a1fd65-99a7-57de-82f0-2aea9ef883c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d41ec, sub_4d5b1c
// [被调用的父级函数]: sub_4d36c4, sub_4dc3b8
// ============================================================

float* __fastcallsub_4d4f4c(int32_t arg1, char arg2, char arg3 @ eax, float* arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg2
    float* eax_1
    eax_1.b = var_8:3.b
    return sub_4d41ec(arg1, sub_4d5b1c(eax_1.b), arg3, arg4, 0, arg5, arg6)
}
