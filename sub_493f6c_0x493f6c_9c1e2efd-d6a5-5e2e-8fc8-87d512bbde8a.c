// ============================================================
// 函数名称: sub_493f6c
// 虚拟地址: 0x493f6c
// WARP GUID: 9c1e2efd-d6a5-5e2e-8fc8-87d512bbde8a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetEvent
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_496eb0, sub_49692d
// ============================================================

BOOL __convention("regparm")sub_493f6c(void* arg1)
{
    // 第一条实际指令: return SetEvent(*(arg1 + 4))
    return SetEvent(*(arg1 + 4))
}
