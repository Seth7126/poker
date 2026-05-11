// ============================================================
// 函数名称: sub_45adcc
// 虚拟地址: 0x45adcc
// WARP GUID: 4c1f3e70-667d-529d-ae1f-f3ee3c47bf95
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45addc
// ============================================================

void* __convention("regparm")sub_45adcc(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x1be)
    void* result = *(arg1 + 0x1be)
    *(result + 0x1c) = 1
    return result
}
