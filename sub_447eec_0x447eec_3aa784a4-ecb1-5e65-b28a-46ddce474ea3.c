// ============================================================
// 函数名称: sub_447eec
// 虚拟地址: 0x447eec
// WARP GUID: 3aa784a4-ecb1-5e65-b28a-46ddce474ea3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SystemParametersInfoA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_447f14
// ============================================================

BOOL __convention("regparm")sub_447eec(int32_t arg1)
{
    // 第一条实际指令: int32_t pvParam = 8
    int32_t pvParam = 8
    char temp0 = arg1.b
    arg1.b = neg.b(arg1.b)
    int32_t var_4 = sbb.d(arg1, arg1, temp0 != 0)
    return SystemParametersInfoA(SPI_SETANIMATION, 8, &pvParam, 0)
}
