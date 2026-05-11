// ============================================================
// 函数名称: sub_4837ec
// 虚拟地址: 0x4837ec
// WARP GUID: ca000d29-1979-553d-9169-2f0a7b09fb6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4748fc, sub_51f90c, sub_4c9168, sub_51cc08, sub_4c8aa0, sub_4dad04, sub_477844, sub_4e649b, sub_4ed7a0, sub_4e6659, sub_50b624, sub_5223e8, sub_4779d4, sub_4c0fcc, sub_4c62e8, sub_520a94, sub_4ec448, sub_525ab8, sub_4ee360, sub_4c95c4
// ============================================================

int32_t __convention("regparm")sub_4837ec(void* arg1, int32_t arg2, bool arg3)
{
    // 第一条实际指令: bool o = unimplemented  {imul edx, edx, 0x1038}
    bool o = unimplemented  {imul edx, edx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t result = *(arg1 + 0xab0)
    *(result + arg2 * 0x81c0 + 1) = arg3 == 1
    return result
}
