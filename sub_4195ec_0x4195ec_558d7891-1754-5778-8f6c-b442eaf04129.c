// ============================================================
// 函数名称: sub_4195ec
// 虚拟地址: 0x4195ec
// WARP GUID: 558d7891-1754-5778-8f6c-b442eaf04129
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: StretchBlt
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_437e28
// ============================================================

int32_t __fastcallsub_4195ec(int32_t arg1, int32_t* arg2, int32_t* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    (*(*arg3 + 0x10))()
    sub_419c14(arg3, 0xb)
    sub_419c14(arg1, 9)
    int32_t xDest = *arg2
    StretchBlt(arg3[1], xDest, arg2[1], arg2[2] - xDest, arg2[3] - arg2[1], *(arg1 + 4), *arg4, 
        arg4[1], arg4[2] - *arg4, arg4[3] - arg4[1], arg3[8])
    return (*(*arg3 + 0xc))()
}
