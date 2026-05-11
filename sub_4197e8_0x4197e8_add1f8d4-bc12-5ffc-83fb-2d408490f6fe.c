// ============================================================
// 函数名称: sub_4197e8
// 虚拟地址: 0x4197e8
// WARP GUID: add1f8d4-bc12-5ffc-83fb-2d408490f6fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: Polyline
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_44b69c
// ============================================================

int32_t __convention("regparm")sub_4197e8(int32_t* arg1, POINT* arg2, int32_t arg3)
{
    // 第一条实际指令: (*(*arg1 + 0x10))()
    (*(*arg1 + 0x10))()
    sub_419c14(arg1, 0xd)
    Polyline(arg1[1], arg2, arg3 + 1)
    return (*(*arg1 + 0xc))()
}
