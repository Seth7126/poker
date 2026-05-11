// ============================================================
// 函数名称: sub_4095ac
// 虚拟地址: 0x4095ac
// WARP GUID: 53b55290-4429-57e6-bfb5-5da9e09e2963
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402754
// [被调用的父级函数]: sub_424200, sub_42ec9c, sub_42429c, sub_4095cc
// ============================================================

void* __convention("regparm")sub_4095ac(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax_1 = sub_402754(arg1 + 4)
    int32_t* eax_1 = sub_402754(arg1 + 4)
    *eax_1 = arg1 + 4
    return &eax_1[1]
}
