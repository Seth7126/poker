// ============================================================
// 函数名称: sub_4b0efc
// 虚拟地址: 0x4b0efc
// WARP GUID: cab40fd9-aef8-536c-ad6a-b272803bb039
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ac6e8, sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b0efc(void* arg1, char* arg2)
{
    // 第一条实际指令: sub_4ac6e8(arg1, arg2)
    sub_4ac6e8(arg1, arg2)
    return sub_403e4c(*(arg1 + 0x104) + 0x18, arg2)
}
