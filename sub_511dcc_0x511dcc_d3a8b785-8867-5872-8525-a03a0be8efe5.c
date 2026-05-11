// ============================================================
// 函数名称: sub_511dcc
// 虚拟地址: 0x511dcc
// WARP GUID: d3a8b785-8867-5872-8525-a03a0be8efe5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4e6659, sub_50b624, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_511dcc(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = *(arg1 + 0x1c8)
    result.b ^= 1
    
    if (result.b != 0)
        *(arg1 + 0x1c8) = 1
        *(arg1 + 0x1cc) = arg2
        *(arg1 + 0x1d4) = GetTickCount()
        *(arg1 + 0x1d8) = arg3
    
    return result
}
