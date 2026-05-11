// ============================================================
// 函数名称: sub_496a48
// 虚拟地址: 0x496a48
// WARP GUID: 97685baf-a3de-5c6f-ac8a-9b8e2d67d655
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_496e00
// [被调用的父级函数]: 无
// ============================================================

int32_t* __fastcallsub_496a48(int32_t arg1, BOOL arg2)
{
    // 第一条实际指令: BOOL var_4 = arg2
    BOOL var_4 = arg2
    arg2.b = 1
    return sub_496e00(0, arg2, sub_49452c+0xf4, var_4)
}
