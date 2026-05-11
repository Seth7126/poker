// ============================================================
// 函数名称: VirtualQuery
// 虚拟地址: 0x406f98
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40b90c, sub_40b250, sub_40fe28
// ============================================================

uint32_t __stdcallVirtualQuery(void* lpAddress, MEMORY_BASIC_INFORMATION* lpBuffer, uint32_t dwLength)
{
    // 第一条实际指令: return VirtualQuery(lpAddress, lpBuffer, dwLength) __tailcall
    return VirtualQuery(lpAddress, lpBuffer, dwLength) __tailcall
}
