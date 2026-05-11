// ============================================================
// 函数名称: sub_402b1c
// 虚拟地址: 0x402b1c
// WARP GUID: 886bc5a7-53c3-5cb1-a7b2-2193fb4ef9d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b3b14, sub_4b3b54, sub_453234
// ============================================================

void __convention("regparm")sub_402b1c(int16_t arg1)
{
    // 第一条实际指令: data_52e000 = arg1
    data_52e000 = arg1
    __fnclex()
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(data_52e000)
}
