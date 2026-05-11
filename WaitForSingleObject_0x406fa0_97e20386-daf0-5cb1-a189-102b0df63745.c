// ============================================================
// 函数名称: WaitForSingleObject
// 虚拟地址: 0x406fa0
// WARP GUID: 97e20386-daf0-5cb1-a189-102b0df63745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_415cb4, sub_493f24, sub_447e60, sub_447d4c, sub_40c9e0
// ============================================================

enum WAIT_EVENT __stdcallWaitForSingleObject(HANDLE hHandle, uint32_t dwMilliseconds)
{
    // 第一条实际指令: return WaitForSingleObject(hHandle, dwMilliseconds) __tailcall
    return WaitForSingleObject(hHandle, dwMilliseconds) __tailcall
}
