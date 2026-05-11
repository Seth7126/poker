// ============================================================
// 函数名称: sub_40a074
// 虚拟地址: 0x40a074
// WARP GUID: fa7b0809-6614-5054-b84d-a3dc77538cbc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLocalTime
// [内部子函数调用]: sub_409e74, sub_409c9c
// [被调用的父级函数]: sub_4ae620, sub_4ad707, sub_4a1b34, sub_4ad714, sub_4ad544
// ============================================================

long doublesub_40a074(long double arg1 @ st0, long double arg2 @ st1)
{
    // 第一条实际指令: SYSTEMTIME systemTime
    SYSTEMTIME systemTime
    GetLocalTime(&systemTime)
    sub_409e74(systemTime.wYear, systemTime.wMonth, systemTime.wDay)
    double var_8 = fconvert.d(arg1)
    char** eax_1
    eax_1.w = systemTime.wMilliseconds
    int16_t var_24_1 = eax_1.w
    eax_1.w = systemTime.wHour
    sub_409c9c(eax_1, systemTime.wMinute, systemTime.wSecond, var_24_1)
    return fconvert.t(fconvert.d(arg2 + fconvert.t(var_8)))
}
