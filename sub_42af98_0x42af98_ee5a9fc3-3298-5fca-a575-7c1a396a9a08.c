// ============================================================
// 函数名称: sub_42af98
// 虚拟地址: 0x42af98
// WARP GUID: ee5a9fc3-3298-5fca-a575-7c1a396a9a08
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_472ccc, sub_4e6659, sub_476d24, sub_4425d8, sub_4735d8, sub_46de48, sub_473684, sub_44cd2c, sub_441c2c, sub_47326c, sub_44c778, sub_478234, sub_42d14c, sub_42e3d0, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_42af98(int32_t* arg1)
{
    // 第一条实际指令: arg1[0xd]
    arg1[0xd]
    int32_t result = (*(*arg1 + 0x7c))(arg1[0xf], arg1[0xe])
    arg1[0x22].b |= 1
    return result
}
