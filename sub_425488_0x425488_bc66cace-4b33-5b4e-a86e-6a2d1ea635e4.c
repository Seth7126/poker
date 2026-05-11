// ============================================================
// 函数名称: sub_425488
// 虚拟地址: 0x425488
// WARP GUID: bc66cace-4b33-5b4e-a86e-6a2d1ea635e4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_411c84, sub_425af0, sub_425b2c
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_425488(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: LRESULT eax_1 = sub_425af0(arg1[3])
    LRESULT eax_1 = sub_425af0(arg1[3])
    int32_t ebx
    ebx.w = 0xffb6
    int32_t eax_3 = sub_4032ac(arg1[3], arg2)
    ebx.w = 0xffb5
    sub_4032ac(arg1[3], arg2, 0, arg3, eax_3)
    (*(*arg1 + 0x44))()
    sub_411c84(arg1, 0)
    ebx.w = 0xffb5
    sub_4032ac(arg1[3], arg2, eax_3)
    return sub_425b2c(arg1[3], eax_1)
}
