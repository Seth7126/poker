// ============================================================
// 函数名称: sub_41fb68
// 虚拟地址: 0x41fb68
// WARP GUID: e6a7a022-ac93-504a-a0c9-b1cfab279d8c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41fb74, sub_41fd7a, sub_41fac9, sub_41fd28
// ============================================================

int32_t __convention("regparm")sub_41fb68(void* arg1)
{
    // 第一条实际指令: return LeaveCriticalSection(arg1 + 8)
    return LeaveCriticalSection(arg1 + 8)
}
