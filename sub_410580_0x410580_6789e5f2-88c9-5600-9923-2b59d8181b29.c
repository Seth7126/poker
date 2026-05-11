// ============================================================
// 函数名称: sub_410580
// 虚拟地址: 0x410580
// WARP GUID: 6789e5f2-88c9-5600-9923-2b59d8181b29
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42f6d0, sub_4966ec, sub_414da8, sub_4132b4, sub_43640c, sub_416358, sub_431a64, sub_413f0c, sub_4106bc, sub_41085c, sub_43bc80, sub_4366f4, sub_41327c, sub_42b9cc, sub_415df8, sub_42968c, sub_42ed58, sub_4315b8, sub_429820, sub_496630, sub_42bb18, sub_410d4c, sub_431ce8, sub_40fcf8
// ============================================================

int32_t __convention("regparm")sub_410580(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i
    int32_t i
    
    for (i = 0; i s< *(arg1 + 8); i += 1)
        if (arg2 == *(*(arg1 + 4) + (i << 2)))
            break
    
    if (i != *(arg1 + 8))
        return i
    
    return 0xffffffff
}
