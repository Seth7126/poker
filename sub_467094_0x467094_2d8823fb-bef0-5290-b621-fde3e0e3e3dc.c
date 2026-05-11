// ============================================================
// 函数名称: sub_467094
// 虚拟地址: 0x467094
// WARP GUID: 2d8823fb-bef0-5290-b621-fde3e0e3e3dc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4670a8, sub_4672f4
// ============================================================

int32_t __convention("regparm")sub_467094(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t result = *(arg1 + 4)
    int32_t result = *(arg1 + 4)
    
    if (result != 0 && arg2 != 0)
        return result
    
    return *(arg1 + 8)
}
