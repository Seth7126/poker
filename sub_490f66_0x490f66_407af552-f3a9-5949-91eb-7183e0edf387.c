// ============================================================
// 函数名称: sub_490f66
// 虚拟地址: 0x490f66
// WARP GUID: 407af552-f3a9-5949-91eb-7183e0edf387
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40b4b0, sub_4040c4
// [被调用的父级函数]: 无
// ============================================================

voidsub_490f66(void* arg1 @ ebp) __noreturn
{
    // 第一条实际指令: sub_4040c4(arg1 - 0x30, "File not Found: ", *(arg1 + 0x10))
    sub_4040c4(arg1 - 0x30, "File not Found: ", *(arg1 + 0x10))
    int32_t edx
    edx.b = 1
    sub_40b4b0(sub_48fdb0+0x48, edx, *(arg1 - 0x30))
    sub_403828()
    noreturn
}
