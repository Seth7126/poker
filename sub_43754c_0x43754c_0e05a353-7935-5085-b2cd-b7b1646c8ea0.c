// ============================================================
// 函数名称: sub_43754c
// 虚拟地址: 0x43754c
// WARP GUID: 0e05a353-7935-5085-b2cd-b7b1646c8ea0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_SetBkColor
// [内部子函数调用]: sub_4032ac, sub_437154, sub_436fa4
// [被调用的父级函数]: sub_437988, sub_437a48, sub_437328
// ============================================================

int32_t __convention("regparm")sub_43754c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (sub_437154(arg1) == 0)
    if (sub_437154(arg1) == 0)
        arg1[0xe] = arg2
    else
        COLORREF clrBk = sub_436fa4()
        ImageList_SetBkColor(arg1[0xc], clrBk)
    
    int32_t* ebx
    ebx.w = 0xfff0
    return sub_4032ac(arg1)
}
