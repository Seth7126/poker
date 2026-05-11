// ============================================================
// 函数名称: sub_42ec9c
// 虚拟地址: 0x42ec9c
// WARP GUID: 5799c1f5-3b87-5457-a169-3a0c69e960f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b6fc, sub_4095ac, sub_42b6ec, sub_42a358, sub_4095cc, sub_4095c0
// [被调用的父级函数]: sub_424508, sub_4b29b4, sub_425f10
// ============================================================

int32_t __convention("regparm")sub_42ec9c(int32_t* arg1)
{
    // 第一条实际指令: sub_42b6ec()
    sub_42b6ec()
    arg1[0x15] = sub_4095cc(sub_42ecf0)
    sub_42a358()
    return (*(*arg1 + 0x9c))()
}
