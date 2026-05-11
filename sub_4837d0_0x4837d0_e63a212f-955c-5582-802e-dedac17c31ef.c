// ============================================================
// 函数名称: sub_4837d0
// 虚拟地址: 0x4837d0
// WARP GUID: e63a212f-955c-5582-802e-dedac17c31ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4c93fc, sub_4dd1e0, sub_4d69e8, sub_4dd1d7, sub_5223e8, sub_50a598, sub_4ec448, sub_527230, sub_50e368, sub_4dad04, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4837d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: bool o = unimplemented  {imul edx, edx, 0x1038}
    bool o = unimplemented  {imul edx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t result = *(arg1 + 0xab0)
    *(result + arg2 * 0x81c0 + 1) = 0
    return result
}
