// ============================================================
// 函数名称: sub_419b40
// 虚拟地址: 0x419b40
// WARP GUID: d4221d0c-79eb-5a3a-8a3a-3dda1d52768e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419c14
// [被调用的父级函数]: sub_423918, sub_4da10c, sub_432e84, sub_44c48c, sub_4375ac, sub_4198a1, sub_41dd80, sub_4198a4, sub_4377d0, sub_43a0a4, sub_4262a8, sub_43ab7c, sub_43a2fc, sub_44c05c, sub_4344b4, sub_44c778, sub_432b9c, sub_4b6830, sub_41c160, sub_491e20
// ============================================================

int32_t __convention("regparm")sub_419b40(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 + 0x10))()
    (*(*arg1 + 0x10))()
    sub_419c14(arg1, 0xf)
    return arg1[1]
}
