// ============================================================
// 函数名称: sub_409d14
// 虚拟地址: 0x409d14
// WARP GUID: 538af0dc-bdf7-5684-ab49-c64409429bb3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409bec, sub_4087d8
// [被调用的父级函数]: sub_40a1d8, sub_49e33c
// ============================================================

int32_t __fastcallsub_409d14(int16_t* arg1, uint16_t* arg2, int16_t* arg3 @ eax, uint16_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_24 = arg6
    int32_t var_24 = arg6
    uint32_t var_10
    sub_409bec(&var_10, arg5)
    uint16_t var_8
    int16_t var_6
    sub_4087d8(&var_6, 0xea60, var_10, &var_8)
    sub_4087d8(arg3, 0x3c, zx.d(var_6), arg2)
    return sub_4087d8(arg1, 0x3e8, zx.d(var_8), arg4)
}
