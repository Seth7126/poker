// ============================================================
// 函数名称: sub_43d7cc
// 虚拟地址: 0x43d7cc
// WARP GUID: bc24dac4-368d-536f-b6bf-452e5092de26
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43d7cc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx
    void* edx
    edx.b = *((arg2 & 0x7f) + 0x52e890)
    void* result = *(arg1 + 0x28)
    *(result + 0x2f) = edx.b
    return result
}
