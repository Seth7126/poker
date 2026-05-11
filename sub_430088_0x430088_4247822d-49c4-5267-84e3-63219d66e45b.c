// ============================================================
// 函数名称: sub_430088
// 虚拟地址: 0x430088
// WARP GUID: 4247822d-49c4-5267-84e3-63219d66e45b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_40fa9c
// [被调用的父级函数]: 无
// ============================================================

int32_t __thiscallsub_430088(int32_t arg1, void* arg2 @ eax, int16_t arg3)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.w = arg3
    int32_t result = sub_42c754(arg2, sub_40fa9c(arg1.w, edx.w))
    
    if (*(arg2 + 0x18a) == 0)
        return result
    
    *(arg2 + 0x18c)
    return (*(arg2 + 0x188))(arg3.d, arg1)
}
