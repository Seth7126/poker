// ============================================================
// 函数名称: sub_4372f4
// 虚拟地址: 0x4372f4
// WARP GUID: d5db90eb-91a9-57a9-bd3e-6c69d0fb4705
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_Destroy
// [内部子函数调用]: sub_437290, sub_437154, sub_4032ac
// [被调用的父级函数]: sub_43813c, sub_437264, sub_437988, sub_437030
// ============================================================

int32_t __convention("regparm")sub_4372f4(int32_t* arg1)
{
    // 第一条实际指令: if (sub_437154(arg1) != 0 && *(arg1 + 0x36) == 0)
    if (sub_437154(arg1) != 0 && *(arg1 + 0x36) == 0)
        ImageList_Destroy(sub_437290(arg1))
    
    arg1[0xc] = 0
    int32_t* ebx
    ebx.w = 0xfff0
    return sub_4032ac(arg1)
}
