// ============================================================
// 函数名称: EnterCriticalSection
// 虚拟地址: 0x406d98
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_417d2c, sub_418470, sub_4158b8, sub_41fb5c, sub_41db84, sub_415a94, sub_494030, sub_419794, sub_419a38, sub_41fac9, sub_40ca50, sub_4108e4, sub_415a3c, sub_41e5a0, sub_4199dc, sub_40c9e0
// ============================================================

void __stdcallEnterCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    // 第一条实际指令: return EnterCriticalSection(lpCriticalSection) __tailcall
    return EnterCriticalSection(lpCriticalSection) __tailcall
}
