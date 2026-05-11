// ============================================================
// 函数名称: sub_425c9c
// 虚拟地址: 0x425c9c
// WARP GUID: 799c4de8-a47f-5f54-8a97-cec434bc6e98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_425f10, sub_425cb8, sub_425ce4, sub_4260a0
// ============================================================

LRESULT __convention("regparm")sub_425c9c(int32_t* arg1)
{
    // 第一条实际指令: return SendMessageA(sub_4318d0(arg1), 0x18e, 0, 0)
    return SendMessageA(sub_4318d0(arg1), 0x18e, 0, 0)
}
