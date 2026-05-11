// ============================================================
// 函数名称: sub_42afdc
// 虚拟地址: 0x42afdc
// WARP GUID: 6b4bb3ed-64f9-5082-857c-c6ff311b3b44
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_472ccc, sub_476d24, sub_4425d8, sub_432ca4, sub_44bddc, sub_47013c, sub_4da10c, sub_4b47c8, sub_4b2718, sub_4258dc, sub_42508c, sub_47326c, sub_44c2b0, sub_4b2693, sub_473878, sub_4e649b, sub_424b94, sub_4e6659, sub_423e50, sub_46de48, sub_4b2780, sub_44231c, sub_473570, sub_44b7c0, sub_423898, sub_4da034, sub_473684, sub_491d6c
// ============================================================

int32_t __convention("regparm")sub_42afdc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: arg1[0xd]
    arg1[0xd]
    arg1[0xc]
    int32_t result = (*(*arg1 + 0x7c))(arg1[0xf], arg2)
    arg1[0x22].b |= 4
    return result
}
