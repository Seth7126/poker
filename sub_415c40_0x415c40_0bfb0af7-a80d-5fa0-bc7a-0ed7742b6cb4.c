// ============================================================
// 函数名称: sub_415c40
// 虚拟地址: 0x415c40
// WARP GUID: 0bfb0af7-a80d-5fa0-bc7a-0ed7742b6cb4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetThreadPriority
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_496e00
// ============================================================

BOOL __convention("regparm")sub_415c40(void* arg1, int32_t arg2)
{
    // 第一条实际指令: return SetThreadPriority(*(arg1 + 4), *(((arg2 & 0x7f) << 2) + &data_52e3a0))
    return SetThreadPriority(*(arg1 + 4), *(((arg2 & 0x7f) << 2) + &data_52e3a0))
}
