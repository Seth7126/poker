// ============================================================
// 函数名称: sub_423ca0
// 虚拟地址: 0x423ca0
// WARP GUID: 8dcd6c6a-8744-5b96-8ca4-1c6c1d7ec52a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_423cd4, sub_423a7f
// ============================================================

void* __convention("regparm")sub_423ca0(void* arg1)
{
    // 第一条实际指令: arg1.b = (*(arg1 + 0x40) & 0x40) != 0
    arg1.b = (*(arg1 + 0x40) & 0x40) != 0
    arg1.b ^= 1
    return arg1
}
