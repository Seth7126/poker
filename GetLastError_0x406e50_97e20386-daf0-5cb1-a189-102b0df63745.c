// ============================================================
// 函数名称: GetLastError
// 虚拟地址: 0x406e50
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_409050, sub_448668, sub_4090b4, sub_493f24, sub_409104, sub_41e6c8, sub_40c7bc, sub_49a8c8, sub_419e90
// ============================================================

enum WIN32_ERROR __stdcallGetLastError()
{
    // 第一条实际指令: return GetLastError() __tailcall
    return GetLastError() __tailcall
}
