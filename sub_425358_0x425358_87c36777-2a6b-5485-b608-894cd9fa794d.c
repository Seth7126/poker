// ============================================================
// 函数名称: sub_425358
// 虚拟地址: 0x425358
// WARP GUID: 87c36777-2a6b-5485-b608-894cd9fa794d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_425358(void* arg1)
{
    // 第一条实际指令: return SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0x18b, 0, 0)
    return SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0x18b, 0, 0)
}
