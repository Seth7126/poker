// ============================================================
// 函数名称: sub_445500
// 虚拟地址: 0x445500
// WARP GUID: 4c1b5c40-60a5-5a8f-88eb-dbb21f2f7d0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_444ce0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_445500(struct _EXCEPTION_REGISTRATION_RECORD* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1->__offset(0x217).b != 2 || (arg1->__offset(0x20).b & 0x10) != 0)
    if (arg1->__offset(0x217).b != 2 || (arg1->__offset(0x20).b & 0x10) != 0)
        arg2.b = *(arg2 + 4) != 0
        sub_444ce0(arg1, arg2.b)
}
