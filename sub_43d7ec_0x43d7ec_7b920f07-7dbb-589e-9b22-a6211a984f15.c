// ============================================================
// 函数名称: sub_43d7ec
// 虚拟地址: 0x43d7ec
// WARP GUID: 7b920f07-7dbb-589e-9b22-a6211a984f15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43d7ec(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx
    void* edx
    edx.b = *((arg2 & 0x7f) + 0x52e890)
    void* result = *(arg1 + 0x28)
    *(result + 0x30) = edx.b
    return result
}
