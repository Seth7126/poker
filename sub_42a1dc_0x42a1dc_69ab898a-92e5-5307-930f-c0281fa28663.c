// ============================================================
// 函数名称: sub_42a1dc
// 虚拟地址: 0x42a1dc
// WARP GUID: 69ab898a-92e5-5307-930f-c0281fa28663
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42a1a8, sub_42b31c, sub_42f140
// [被调用的父级函数]: sub_449944, sub_429820, sub_449d44, sub_430f0c, sub_44a0a0
// ============================================================

HANDLE __convention("regparm")sub_42a1dc(int32_t* arg1)
{
    // 第一条实际指令: HANDLE result = nullptr
    HANDLE result = nullptr
    HANDLE result_1 = sub_42a1a8(arg1)
    
    if (result_1 != 0)
        result = result_1
        int32_t var_18
        sub_42b31c(result_1, arg1, &var_18)
        sub_42f140(result_1, 0)
    
    return result
}
