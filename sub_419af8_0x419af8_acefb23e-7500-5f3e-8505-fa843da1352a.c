// ============================================================
// 函数名称: sub_419af8
// 虚拟地址: 0x419af8
// WARP GUID: acefb23e-7500-5f3e-8505-fa843da1352a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetPixel
// [内部子函数调用]: sub_419c14, sub_41842c
// [被调用的父级函数]: sub_41fc28
// ============================================================

int32_t __fastcallsub_419af8(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, uint32_t arg4)
{
    // 第一条实际指令: (*(*arg3 + 0x10))()
    (*(*arg3 + 0x10))()
    sub_419c14(arg3, 5)
    COLORREF color = sub_41842c(arg4)
    SetPixel(arg3[1], arg2, arg1, color)
    return (*(*arg3 + 0xc))()
}
