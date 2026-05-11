// ============================================================
// 函数名称: sub_496f2c
// 虚拟地址: 0x496f2c
// WARP GUID: 72c18dcc-0e0f-5e5b-8895-263d92bc41da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_4970c0
// ============================================================

int32_t __convention("regparm")sub_496f2c(void* arg1)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x30)
    void* edx = *(arg1 + 0x30)
    int32_t ebx
    ebx.b = 7
    int32_t ecx_1 = ebx
    ebx.w = 0xffff
    return sub_4032ac(*(edx + 0x58), edx, ecx_1)
}
