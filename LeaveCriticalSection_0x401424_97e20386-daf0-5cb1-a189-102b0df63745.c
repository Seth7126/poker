// ============================================================
// 函数名称: LeaveCriticalSection
// 虚拟地址: 0x401424
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_402194, sub_401ac0, sub_401b84, sub_40231c, sub_402690
// ============================================================

void __stdcallLeaveCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    // 第一条实际指令: return LeaveCriticalSection(lpCriticalSection) __tailcall
    return LeaveCriticalSection(lpCriticalSection) __tailcall
}
