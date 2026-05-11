// ============================================================
// 函数名称: sub_433134
// 虚拟地址: 0x433134
// WARP GUID: df2d2658-16b0-516b-a0e2-0649a301243d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_DragMove
// [内部子函数调用]: sub_437154, sub_432ee0
// [被调用的父级函数]: sub_4298b4
// ============================================================

int32_t __convention("regparm")sub_433134(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (sub_437154(arg1) == 0)
    if (sub_437154(arg1) == 0)
        return 0
    
    int32_t x
    sub_432ee0(arg3, arg2, *(arg1 + 0x64), &x)
    int32_t y
    BOOL eax_5 = ImageList_DragMove(x, y)
    int32_t eax_6 = neg.d(eax_5)
    return neg.d(sbb.d(eax_6, eax_6, eax_5 != 0))
}
