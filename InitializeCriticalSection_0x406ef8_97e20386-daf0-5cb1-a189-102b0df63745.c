// ============================================================
// 函数名称: InitializeCriticalSection
// 虚拟地址: 0x406ef8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41799a, sub_40c8fc, sub_41fac9, sub_493fc0, sub_41078c, sub_41faf8, sub_416d6c, sub_417ccc, sub_41feac, sub_41920c
// ============================================================

void __stdcallInitializeCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    // 第一条实际指令: return InitializeCriticalSection(lpCriticalSection) __tailcall
    return InitializeCriticalSection(lpCriticalSection) __tailcall
}
