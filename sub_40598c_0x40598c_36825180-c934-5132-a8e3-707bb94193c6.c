// ============================================================
// 函数名称: sub_40598c
// 虚拟地址: 0x40598c
// WARP GUID: 36825180-c934-5132-a8e3-707bb94193c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402754
// [被调用的父级函数]: sub_40597c
// ============================================================

int32_t* __convention("regparm")sub_40598c(int32_t arg1)
{
    // 第一条实际指令: int32_t* result = sub_402754(8)
    int32_t* result = sub_402754(8)
    *result = data_52e020
    result[1] = arg1
    data_52e020 = result
    return result
}
