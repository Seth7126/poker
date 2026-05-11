// ============================================================
// 函数名称: sub_4257bc
// 虚拟地址: 0x4257bc
// WARP GUID: 65db62c2-f292-5d98-a08a-0ffb224f1691
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_40423c, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_4257bc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: LPARAM lParam = sub_40423c(arg2)
    LPARAM lParam = sub_40423c(arg2)
    return SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0x1a2, 0xffffffff, lParam)
}
