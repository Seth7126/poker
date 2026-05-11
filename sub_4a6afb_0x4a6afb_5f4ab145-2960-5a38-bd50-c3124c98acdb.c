// ============================================================
// 函数名称: sub_4a6afb
// 虚拟地址: 0x4a6afb
// WARP GUID: 5f4ab145-2960-5a38-bd50-c3124c98acdb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

voidsub_4a6afb(void* arg1 @ ebp) __noreturn
{
    // 第一条实际指令: sub_405ae8(data_530064, arg1 - 0x14c)
    sub_405ae8(data_530064, arg1 - 0x14c)
    int32_t edx
    edx.b = 1
    sub_40b4b0(0x498f7c, edx, *(arg1 - 0x14c))
    sub_403828()
    noreturn
}
