// ============================================================
// 函数名称: GetModuleFileNameA
// 虚拟地址: 0x406e68
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40b90c, sub_447f44, sub_447f54, sub_40b250
// ============================================================

uint32_t __stdcallGetModuleFileNameA(HMODULE hModule, uint8_t* lpFilename, uint32_t nSize)
{
    // 第一条实际指令: return GetModuleFileNameA(hModule, lpFilename, nSize) __tailcall
    return GetModuleFileNameA(hModule, lpFilename, nSize) __tailcall
}
