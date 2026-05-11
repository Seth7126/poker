// ============================================================
// 函数名称: sub_4584bc
// 虚拟地址: 0x4584bc
// WARP GUID: da8c6326-4eee-53d4-8a00-5a99fa014c49
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_458970
// ============================================================

int32_t __convention("regparm")sub_4584bc(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x1b6)
    void* edx = *(arg1 + 0x1b6)
    *(edx + 0x24) = 0
    int32_t result = *(arg1 + 0x70)
    *(edx + 0x2c) = result
    return result
}
