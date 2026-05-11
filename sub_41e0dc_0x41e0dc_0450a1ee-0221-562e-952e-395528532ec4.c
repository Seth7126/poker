// ============================================================
// 函数名称: sub_41e0dc
// 虚拟地址: 0x41e0dc
// WARP GUID: 0450a1ee-0221-562e-952e-395528532ec4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41e0dc(void* arg1)
{
    // 第一条实际指令: int32_t eax_2
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(*(arg1 + 0x20) + 0x20))
    return (eax_2 ^ edx) - edx
}
