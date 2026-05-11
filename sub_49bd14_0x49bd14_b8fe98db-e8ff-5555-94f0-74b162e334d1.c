// ============================================================
// 函数名称: sub_49bd14
// 虚拟地址: 0x49bd14
// WARP GUID: b8fe98db-e8ff-5555-94f0-74b162e334d1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_4043ac, sub_403fb0, sub_404078
// [被调用的父级函数]: 无
// ============================================================

int32_t* __fastcallsub_49bd14(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4043ac(arg2, 0xfa)
    sub_4043ac(arg2, 0xfa)
    int32_t eax_2 = sub_404078(*arg2)
    sub_403fb0((*data_5309c0)(sub_40423c(*arg2), eax_2), sub_40423c(*arg2))
    return arg2
}
