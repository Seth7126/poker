// ============================================================
// 函数名称: sub_4a5c6c
// 虚拟地址: 0x4a5c6c
// WARP GUID: f5e21817-574e-518b-9162-b41a66d968b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_4a5d10, sub_4a5c8c, sub_4a5c03
// ============================================================

void* __convention("regparm")sub_4a5c6c(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0xc) = 0
    *(arg1 + 0xc) = 0
    (*(**(arg1 + 0x10) + 0x40))()
    sub_403df8(arg1 + 0x14)
    return arg1 + 0x14
}
