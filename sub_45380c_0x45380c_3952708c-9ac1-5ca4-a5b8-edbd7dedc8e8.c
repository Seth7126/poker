// ============================================================
// 函数名称: sub_45380c
// 虚拟地址: 0x45380c
// WARP GUID: 3952708c-9ac1-5ca4-a5b8-edbd7dedc8e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4602f4
// [被调用的父级函数]: sub_4543b4, sub_453a38, sub_453dde, sub_4543d2, sub_453e0a
// ============================================================

void __convention("regparm")sub_45380c(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0xa8) != 0)
    if (*(arg1 + 0xa8) != 0)
        sub_4602f4(arg1 + 0xa8)
        *(arg1 + 0xa8) = 0
}
