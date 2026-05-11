// ============================================================
// 函数名称: LeaveCriticalSection
// 虚拟地址: 0x406f00
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_410948, sub_49403c, sub_4158b8, sub_415a94, sub_41db84, sub_419794, sub_419a38, sub_40ca50, sub_415a3c, sub_41fb68, sub_417d38, sub_418480, sub_41e5a0, sub_4199dc, sub_40ca2c
// ============================================================

void __stdcallLeaveCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    // 第一条实际指令: return LeaveCriticalSection(lpCriticalSection) __tailcall
    return LeaveCriticalSection(lpCriticalSection) __tailcall
}
