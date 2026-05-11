// ============================================================
// 函数名称: sub_40e484
// 虚拟地址: 0x40e484
// WARP GUID: d973a21c-57c9-5dc6-8d71-e6c81df87a60
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t* __fastcallsub_40e484(int32_t arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: char temp1 = *(arg2 + 0xb)
    char temp1 = *(arg2 + 0xb)
    int32_t ecx = *(arg2 + 8)
    
    if (temp1 u> 0xfe)
        int32_t* result = arg3 + (ecx & 0xffffff)
        *result = arg4
        result[1] = arg5
        return result
    
    *(arg2 + 0x10)
    
    if (temp1 u< 0xfe)
        return ecx(arg4, arg5)
    
    return (*(sx.d(ecx.w) + *arg3))(arg4, arg5)
}
