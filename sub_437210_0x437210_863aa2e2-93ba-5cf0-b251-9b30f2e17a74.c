// ============================================================
// 函数名称: sub_437210
// 虚拟地址: 0x437210
// WARP GUID: 863aa2e2-93ba-5cf0-b251-9b30f2e17a74
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_437168
// ============================================================

int32_t*sub_437210(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* result = *(arg1[-1] + 0x48)
    int32_t* result = *(arg1[-1] + 0x48)
    
    if (result != 0)
        sub_4030d0(result)
        result = arg1[-1]
        result[0x12] = 0
    
    *arg1
    return result
}
