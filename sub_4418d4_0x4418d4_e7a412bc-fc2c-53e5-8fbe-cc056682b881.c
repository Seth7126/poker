// ============================================================
// 函数名称: sub_4418d4
// 虚拟地址: 0x4418d4
// WARP GUID: e7a412bc-fc2c-53e5-8fbe-cc056682b881
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4418d4(void* arg1)
{
    // 第一条实际指令: void* result
    void* result
    result.b = *(*(arg1 + 4) + 0x1f8)
    result.b ^= 1
    return result
}
