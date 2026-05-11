// ============================================================
// 函数名称: GetLastError
// 虚拟地址: 0x4012f0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_406010, sub_40634c, sub_405c44, sub_402854, sub_4061e0, sub_405c73, sub_405ee8, sub_405cb8, sub_405ca0
// ============================================================

enum WIN32_ERROR __stdcallGetLastError()
{
    // 第一条实际指令: return GetLastError() __tailcall
    return GetLastError() __tailcall
}
