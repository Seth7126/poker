// ============================================================
// 函数名称: sub_4a2618
// 虚拟地址: 0x4a2618
// WARP GUID: 1b29f949-99cc-5eaa-ab91-45690bdad727
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e4c, sub_4a1ad0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a2618(void* arg1)
{
    // 第一条实际指令: sub_403e4c(arg1 + 0x50, "text/html, */*")
    sub_403e4c(arg1 + 0x50, "text/html, */*")
    sub_403df8(arg1 + 0x54)
    sub_403e4c(arg1 + 0x70, "Mozilla/3.0 (compatible; Indy Library)")
    *(arg1 + 0x7c) = 0
    return sub_4a1ad0(arg1)
}
