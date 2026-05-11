// ============================================================
// 函数名称: MsgWaitForMultipleObjects
// 虚拟地址: 0x4075e8
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_415cb4
// ============================================================

enum WAIT_EVENT __stdcallMsgWaitForMultipleObjects(uint32_t nCount, HANDLE* pHandles, BOOL fWaitAll, uint32_t dwMilliseconds, enum QUEUE_STATUS_FLAGS dwWakeMask)
{
    // 第一条实际指令: return MsgWaitForMultipleObjects(nCount, pHandles, fWaitAll, dwMilliseconds, dwWakeMask) __tailcall
    return MsgWaitForMultipleObjects(nCount, pHandles, fWaitAll, dwMilliseconds, dwWakeMask) __tailcall
}
