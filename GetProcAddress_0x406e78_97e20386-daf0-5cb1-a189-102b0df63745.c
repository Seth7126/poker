// ============================================================
// 函数名称: GetProcAddress
// 虚拟地址: 0x406e78
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435ac4, sub_4a4140, sub_49a7e8, sub_4202fc, sub_448668, sub_4b6cbc, sub_4b5c20, sub_4a4084, sub_466cb4, sub_420174, sub_48f538, sub_420d48, sub_40c8a0, sub_44da3c, sub_49a8c8
// ============================================================

int32_t __stdcallGetProcAddress(HMODULE hModule, PSTR lpProcName)
{
    // 第一条实际指令: return GetProcAddress(hModule, lpProcName) __tailcall
    return GetProcAddress(hModule, lpProcName) __tailcall
}
