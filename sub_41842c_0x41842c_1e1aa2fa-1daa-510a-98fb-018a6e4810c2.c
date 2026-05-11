// ============================================================
// 函数名称: sub_41842c
// 虚拟地址: 0x41842c
// WARP GUID: 1e1aa2fa-1daa-510a-98fb-018a6e4810c2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSysColor
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41e21c, sub_419af8, sub_42f6d0, sub_41e300, sub_419cb0, sub_419674, sub_436fa4, sub_4190f0, sub_418e00, sub_43a0a4, sub_41d214, sub_42f448, sub_419d0c, sub_4418ec, sub_41fda0
// ============================================================

void __convention("regparm")sub_41842c(uint32_t arg1)
{
    // 第一条实际指令: if (arg1 s< 0)
    if (arg1 s< 0)
        GetSysColor(arg1 & 0xff)
}
