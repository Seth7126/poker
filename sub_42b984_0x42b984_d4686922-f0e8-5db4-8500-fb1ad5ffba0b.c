// ============================================================
// 函数名称: sub_42b984
// 虚拟地址: 0x42b984
// WARP GUID: d4686922-f0e8-5db4-8500-fb1ad5ffba0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_428c18
// [被调用的父级函数]: sub_42cefc, sub_42b994
// ============================================================

HANDLE __convention("regparm")sub_42b984(int32_t arg1)
{
    // 第一条实际指令: HANDLE result
    HANDLE result
    result.b = arg1 == sub_428c18()
    return result
}
