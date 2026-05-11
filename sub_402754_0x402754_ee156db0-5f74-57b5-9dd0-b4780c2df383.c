// ============================================================
// 函数名称: sub_402754
// 虚拟地址: 0x402754
// WARP GUID: ee156db0-5f74-57b5-9dd0-b4780c2df383
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: sub_4095ac, sub_4088b8, sub_403064, sub_416990, sub_41ca88, sub_41d214, sub_411168, sub_404b7c, sub_440908, sub_40886c, sub_41c438, sub_52c7c8, sub_41e6c8, sub_417d44, sub_41302c, sub_428d48, sub_403ebc, sub_4533d4, sub_40598c, sub_4473cc, sub_405368, sub_4109a8, sub_449258, sub_41c9fc, sub_403dac, sub_41fb74, sub_412968, sub_41115f, sub_41c508
// ============================================================

void __convention("regparm")sub_402754(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0 && data_52e024() == 0)
    if (arg1 != 0 && data_52e024() == 0)
        arg1.b = 1
        noreturn sub_4027e0(arg1) __tailcall
}
