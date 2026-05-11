// ============================================================
// 函数名称: sub_41dd64
// 虚拟地址: 0x41dd64
// WARP GUID: dc848fef-5627-54af-83f6-dcd6571bd2e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41e26c, sub_41e2e0
// [被调用的父级函数]: sub_41fc28
// ============================================================

int32_t __convention("regparm")sub_41dd64(int32_t arg1)
{
    // 第一条实际指令: sub_41e2e0(arg1)
    sub_41e2e0(arg1)
    sub_41e26c(arg1)
    return (***(arg1 + 0x20))()
}
