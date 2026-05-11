// ============================================================
// 函数名称: sub_402ad0
// 虚拟地址: 0x402ad0
// WARP GUID: 4f80f3c0-ada2-56e5-a585-1feb6d13eb88
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetSystemTime
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_502898
// ============================================================

int32_tsub_402ad0()
{
    // 第一条实际指令: SYSTEMTIME systemTime
    SYSTEMTIME systemTime
    GetSystemTime(&systemTime)
    int32_t eax_1
    eax_1.w = systemTime.wHour * 0x3c + systemTime.wMinute
    int32_t edx
    edx.w = systemTime.wSecond
    int32_t eax_4 = (eax_1 * 0x3c + edx) * 0x3e8
    edx.w = systemTime.wMilliseconds
    int32_t result = eax_4 + edx
    data_531044 = result
    return result
}
