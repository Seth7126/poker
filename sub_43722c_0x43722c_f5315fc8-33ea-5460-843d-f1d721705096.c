// ============================================================
// 函数名称: sub_43722c
// 虚拟地址: 0x43722c
// WARP GUID: f5315fc8-33ea-5460-843d-f1d721705096
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_GetIconSize
// [内部子函数调用]: sub_437168
// [被调用的父级函数]: sub_437264, sub_437988, sub_437a48
// ============================================================

int32_t __convention("regparm")sub_43722c(void* arg1, HIMAGELIST arg2)
{
    // 第一条实际指令: int32_t cx = *(arg1 + 0x28)
    int32_t cx = *(arg1 + 0x28)
    int32_t cy = *(arg1 + 0x24)
    ImageList_GetIconSize(arg2, &cx, &cy)
    *(arg1 + 0x28) = cx
    *(arg1 + 0x24) = cy
    return sub_437168(arg1)
}
