// ============================================================
// 函数名称: sub_42ee80
// 虚拟地址: 0x42ee80
// WARP GUID: 8fc1b7a0-daaa-52b1-bfe4-d8e698f9dd66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_425c10, sub_425bf8, sub_44bee4, sub_423f2c, sub_4423e8, sub_4b2d64, sub_4b2c8c, sub_425c88, sub_4423cc, sub_443970, sub_425c74, sub_430cf4, sub_424e34, sub_423f50, sub_424dfc, sub_44c23c, sub_4264c4, sub_443f38, sub_423fa8, sub_4b2a6c, sub_425b78, sub_425b8c, sub_44399c, sub_4246a4, sub_4b2ca0, sub_4439d4, sub_423f64, sub_424e20
// ============================================================

void __convention("regparm")sub_42ee80(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x14c) != 0)
    if (*(arg1 + 0x14c) != 0)
        sub_42c754(arg1, 0)
}
