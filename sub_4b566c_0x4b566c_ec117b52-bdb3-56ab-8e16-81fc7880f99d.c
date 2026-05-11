// ============================================================
// 函数名称: sub_4b566c
// 虚拟地址: 0x4b566c
// WARP GUID: ec117b52-bdb3-56ab-8e16-81fc7880f99d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowDC, GetDesktopWindow
// [内部子函数调用]: sub_4b556c
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t* __convention("regparm")sub_4b566c(int32_t* arg1)
{
    // 第一条实际指令: data_532ee0 = GetDesktopWindow()
    data_532ee0 = GetDesktopWindow()
    data_532ee4 = GetWindowDC(data_532ee0)
    data_532edc = *arg1
    int32_t esi
    int32_t* result = sub_4b556c(data_532ee0, data_532ee4, 0, esi)
    *arg1 = data_532edc
    return result
}
