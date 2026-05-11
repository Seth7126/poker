// ============================================================
// 函数名称: LocalAlloc
// 虚拟地址: 0x4013f4
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_401434, sub_401ac0
// ============================================================

HLOCAL __stdcallLocalAlloc(enum LOCAL_ALLOC_FLAGS uFlags, uint32_t uBytes)
{
    // 第一条实际指令: return LocalAlloc(uFlags, uBytes) __tailcall
    return LocalAlloc(uFlags, uBytes) __tailcall
}
