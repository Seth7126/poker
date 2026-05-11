// ============================================================
// 函数名称: sub_435d2c
// 虚拟地址: 0x435d2c
// WARP GUID: b867db12-eb7a-575b-a632-281a603d1d48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435d48, sub_42ffa4
// ============================================================

int32_t __convention("regparm")sub_435d2c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_531794 == 0)
    if (data_531794 == 0)
        return 0
    
    char temp0 = arg2.b
    arg2.b = neg.b(arg2.b)
    return data_531794(arg1, sbb.d(arg2, arg2, temp0 != 0))
}
