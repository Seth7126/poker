// ============================================================
// 函数名称: sub_419820
// 虚拟地址: 0x419820
// WARP GUID: 2a7f494e-9902-5c73-87a4-1e74f1dc95c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: Rectangle
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_44b940, sub_49211c, sub_491e20
// ============================================================

int32_t __fastcallsub_419820(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: (*(*arg3 + 0x10))()
    (*(*arg3 + 0x10))()
    sub_419c14(arg3, 0xd)
    Rectangle(arg3[1], arg2, arg1, arg5, arg4)
    return (*(*arg3 + 0xc))()
}
