// ============================================================
// 函数名称: sub_402b58
// 虚拟地址: 0x402b58
// WARP GUID: fe8e7a7c-fff6-5deb-b181-1e56dce51d33
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_453718, sub_49ffc4, sub_4ad544, sub_453460
// ============================================================

int32_tsub_402b58(int16_t arg1 @ x87control, long double arg2 @ st0)
{
    // 第一条实际指令: int16_t x87status
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(data_52e030)
    int16_t x87control_1
    int16_t x87status_2
    x87control_1, x87status_2 = __fldcw_memmem16(temp0)
    return int.q(arg2).d
}
