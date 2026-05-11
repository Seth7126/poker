// ============================================================
// 函数名称: sub_51aaa0
// 虚拟地址: 0x51aaa0
// WARP GUID: 59af16fa-1f8a-50f3-838d-9d4b4877e3ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51aa58, sub_51ab0c
// [被调用的父级函数]: sub_51a454, sub_51a748, sub_51a838
// ============================================================

int32_t __convention("regparm")sub_51aaa0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char ebx = arg2.b
    char ebx = arg2.b
    void* esi = *data_530304 + 0xce8
    int32_t edx_1 = sub_51ab0c(2, sub_51aa58(*(esi + 0xe0), arg2), arg1, ebx)
    int32_t edx_3 = sub_51ab0c(3, sub_51aa58(*(esi + 0xe8), edx_1), arg1, ebx)
    return sub_51ab0c(1, sub_51aa58(*(esi + 0xf0), edx_3), arg1, ebx)
}
