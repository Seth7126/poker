// ============================================================
// 函数名称: sub_42ac6c
// 虚拟地址: 0x42ac6c
// WARP GUID: 43a60b48-0ba9-5525-8885-d3b6410f27ad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42ac6c(void* arg1)
{
    // 第一条实际指令: void* result
    void* result
    result.b = *(arg1 + 0x4b)
    result.b = *(result + 0x52e748)
    result.b = result.b != *(arg1 + 0x51)
    return result
}
