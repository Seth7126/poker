// ============================================================
// 函数名称: sub_42679c
// 虚拟地址: 0x42679c
// WARP GUID: a170c6cc-c90c-55bb-9617-4f80b9299d41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_4266b8, sub_404078
// [被调用的父级函数]: sub_4ec6d4, sub_4ec693, sub_50b624
// ============================================================

BOOL __convention("regparm")sub_42679c(BOOL arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    uint32_t eax_2 = sub_404078(arg2) + 1
    int32_t eax_4 = sub_40423c(arg2)
    arg2.w = 1
    return sub_4266b8(arg1, arg2.w, eax_4, eax_2)
}
