// ============================================================
// 函数名称: sub_437584
// 虚拟地址: 0x437584
// WARP GUID: c81f2532-ff2d-56a7-8e8f-4f65ba302771
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_GetBkColor
// [内部子函数调用]: sub_437290, sub_437154, sub_436fc4
// [被调用的父级函数]: sub_4375ac
// ============================================================

int32_t __convention("regparm")sub_437584(int32_t* arg1)
{
    // 第一条实际指令: if (sub_437154(arg1) == 0)
    if (sub_437154(arg1) == 0)
        return arg1[0xe]
    
    return sub_436fc4(ImageList_GetBkColor(sub_437290(arg1)))
}
