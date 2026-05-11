// ============================================================
// 函数名称: sub_497710
// 虚拟地址: 0x497710
// WARP GUID: f08ccc24-53d6-51d4-aa5e-7ac1d34f4afa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_497710(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x80)
    void* result = *(arg1 + 0x80)
    *arg2 = *(result + 0x88)
    arg2[1] = *(result + 0x8c)
    return result
}
