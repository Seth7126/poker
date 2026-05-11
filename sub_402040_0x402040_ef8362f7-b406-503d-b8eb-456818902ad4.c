// ============================================================
// 函数名称: sub_402040
// 虚拟地址: 0x402040
// WARP GUID: ef8362f7-b406-503d-b8eb-456818902ad4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401f88, sub_401910
// [被调用的父级函数]: sub_4024c0
// ============================================================

int32_t __convention("regparm")sub_402040(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    sub_401910(arg1, arg2 + 4, &var_10)
    
    if (var_10 != 0 && sub_401f88(&var_10) != 0)
        return 1
    
    return 0
}
