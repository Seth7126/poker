// ============================================================
// 函数名称: sub_45cc50
// 虚拟地址: 0x45cc50
// WARP GUID: 963904d1-4d51-54ba-b721-e468439bb404
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45d134
// ============================================================

int32_t __convention("regparm")sub_45cc50(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x1b6)
    void* edx = *(arg1 + 0x1b6)
    *(edx + 0x5c) = *(arg1 + 0x12a)
    int32_t result = *(arg1 + 0x70)
    *(edx + 0x60) = result
    return result
}
