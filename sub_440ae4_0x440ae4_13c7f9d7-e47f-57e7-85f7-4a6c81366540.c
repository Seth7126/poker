// ============================================================
// 函数名称: sub_440ae4
// 虚拟地址: 0x440ae4
// WARP GUID: 13c7f9d7-e47f-57e7-85f7-4a6c81366540
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4449fc
// ============================================================

LRESULT __convention("regparm")sub_440ae4(HWND arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t ebx = data_52e980
    int32_t ebx = data_52e980
    SendMessageA(arg1, zx.d(arg2), 0, 0)
    LRESULT result
    result.b = ebx == data_52e980
    return result
}
