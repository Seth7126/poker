// ============================================================
// 函数名称: sub_402d20
// 虚拟地址: 0x402d20
// WARP GUID: b457762b-ce2c-53a9-9804-45a98e92f22a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_510f54, sub_52a998, sub_502990, sub_4f2e8c, sub_4ec978, sub_4c60d8, sub_4bdf18, sub_519df0, sub_4babf8, sub_519644, sub_4d36c4, sub_529170, sub_5293a8, sub_5072b8, sub_4c4150, sub_4c96bc, sub_4dc3b8, sub_51a454, sub_4b77e0, sub_518f60, sub_503538, sub_4b8c38
// ============================================================

int32_t __convention("regparm")sub_402d20(int32_t arg1)
{
    // 第一条实际指令: int32_t edx = data_531044 * 0x8088405 + 1
    int32_t edx = data_531044 * 0x8088405 + 1
    data_531044 = edx
    int32_t eax
    int32_t result
    result:eax = mulu.dp.d(arg1, edx)
    return result
}
