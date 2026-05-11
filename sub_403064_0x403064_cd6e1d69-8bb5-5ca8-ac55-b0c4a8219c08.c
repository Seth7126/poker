// ============================================================
// 函数名称: sub_403064
// 虚拟地址: 0x403064
// WARP GUID: cd6e1d69-8bb5-5ca8-ac55-b0c4a8219c08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030dc, sub_402754
// [被调用的父级函数]: sub_405bc8
// ============================================================

int32_t __convention("regparm")sub_403064(void* arg1)
{
    // 第一条实际指令: return sub_4030dc(arg1, sub_402754(*(arg1 - 0x28))) __tailcall
    return sub_4030dc(arg1, sub_402754(*(arg1 - 0x28))) __tailcall
}
