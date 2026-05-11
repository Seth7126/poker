// ============================================================
// 函数名称: sub_40276c
// 虚拟地址: 0x40276c
// WARP GUID: adb32e8f-5e9f-51c1-a8c3-a555427deaad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: sub_40c880, sub_416990, sub_41ca88, sub_403e4c, sub_4095f8, sub_41ea20, sub_41d214, sub_411168, sub_403e1c, sub_4059ac, sub_41c438, sub_403e90, sub_52c7c8, sub_413074, sub_4533e4, sub_41eb67, sub_405500, sub_41aebc, sub_404b90, sub_40888c, sub_4492b4, sub_41fd7a, sub_447370, sub_403078, sub_449ef8, sub_403d74, sub_428da4, sub_41ac33, sub_403df8, sub_4109a8, sub_41aa68, sub_41c9fc, sub_41c508, sub_4950e0, sub_412968, sub_41115f, sub_440a0c
// ============================================================

void __convention("regparm")sub_40276c(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0 && data_52e028() != 0)
    if (arg1 != 0 && data_52e028() != 0)
        arg1.b = 2
        noreturn sub_4027e0(arg1) __tailcall
}
