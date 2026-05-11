// ============================================================
// 函数名称: sub_404688
// 虚拟地址: 0x404688
// WARP GUID: baf6a6d8-6b39-5df0-aecd-7345fe3dbe1d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404748
// [被调用的父级函数]: sub_4b498a, sub_502b8c, sub_4b5e24, sub_4c5eb0, sub_4ee818, sub_4046b4, sub_51d270, sub_44a0a0, sub_508414
// ============================================================

int32_t __convention("regparm")sub_404688(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = *(arg2 + 1)
    void* esi = arg2 + ecx + 0xa
    int32_t i_1 = *(arg2 + ecx + 6)
    int32_t result
    int32_t i
    
    do
        *(esi + 4)
        **esi
        result = sub_404748()
        esi += 8
        i = i_1
        i_1 -= 1
    while (i s> 1)
    return result
}
