// ============================================================
// 函数名称: sub_425bf8
// 虚拟地址: 0x425bf8
// WARP GUID: fab2f448-d1d6-505c-99bc-668e407e305d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: sub_4b5228
// ============================================================

void __convention("regparm")sub_425bf8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != *(arg1 + 0x200) && arg2 s> 0)
    if (arg2 != *(arg1 + 0x200) && arg2 s> 0)
        *(arg1 + 0x200) = arg2
        sub_42ee80(arg1)
}
