// ============================================================
// 函数名称: sub_419720
// 虚拟地址: 0x419720
// WARP GUID: aa95fe8e-1654-5d74-aacf-8e731dc0b163
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FillRect
// [内部子函数调用]: sub_4190f0, sub_419c14
// [被调用的父级函数]: sub_41fc28, sub_4263dc, sub_4b4f8c, sub_4375ac, sub_437168, sub_423a7f, sub_4377d0, sub_4262a8, sub_43ab7c, sub_43a2fc, sub_44c05c
// ============================================================

int32_t __convention("regparm")sub_419720(int32_t* arg1, RECT* arg2)
{
    // 第一条实际指令: (*(*arg1 + 0x10))()
    (*(*arg1 + 0x10))()
    sub_419c14(arg1, 9)
    HBRUSH hbr = sub_4190f0(arg1[5])
    FillRect(arg1[1], arg2, hbr)
    return (*(*arg1 + 0xc))()
}
