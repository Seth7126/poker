// ============================================================
// 函数名称: DeleteCriticalSection
// 虚拟地址: 0x406d88
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_416cb4, sub_494000, sub_4107e0, sub_4192d0, sub_41fb30, sub_417d08, sub_40c964, sub_41fdd8
// ============================================================

void __stdcallDeleteCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    // 第一条实际指令: return DeleteCriticalSection(lpCriticalSection) __tailcall
    return DeleteCriticalSection(lpCriticalSection) __tailcall
}
