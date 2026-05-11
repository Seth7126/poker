// ============================================================
// 函数名称: sub_464cc4
// 虚拟地址: 0x464cc4
// WARP GUID: c0286036-08e0-57bc-a8c9-bb31fe32ef47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464c08
// [被调用的父级函数]: sub_464f18, sub_464dec, sub_464d1c, sub_465154
// ============================================================

int32_t __convention("regparm")sub_464cc4(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (*(arg1 + 0xc) == 0)
    if (*(arg1 + 0xc) == 0)
        int32_t edx = *(arg1 + (arg2 << 2) + 0x4c)
        return sub_464c08(arg1, *(edx + (arg3 << 2)), sx.d(*(edx + arg3 + 0x400)))
    
    int32_t result = *(arg1 + (arg2 << 2) + 0x5c)
    *(result + (arg3 << 2)) += 1
    return result
}
