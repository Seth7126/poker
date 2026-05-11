// ============================================================
// 函数名称: sub_49e7c0
// 虚拟地址: 0x49e7c0
// WARP GUID: 329c4590-e5a6-533d-81e1-3c57b6cb05aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404280, sub_404078
// [被调用的父级函数]: sub_4ace9c
// ============================================================

char** __convention("regparm")sub_49e7c0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1 = data_52fba0(arg2)
    int32_t eax_1 = data_52fba0(arg2)
    return sub_404280(sub_404078(arg1), eax_1, arg1)
}
