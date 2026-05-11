// ============================================================
// 函数名称: sub_449ad4
// 虚拟地址: 0x449ad4
// WARP GUID: 07129fa8-b8c2-5cc7-b804-499b4024de66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_447210, sub_447224
// [被调用的父级函数]: sub_449b10, sub_447610
// ============================================================

int32_t __fastcallsub_449ad4(int32_t arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t result = sub_447224(data_5317dc)
    int32_t result = sub_447224(data_5317dc)
    
    if (result - 1 s>= 0)
        int32_t ebx_2 = result
        int32_t esi_1 = 0
        int32_t i
        
        do
            result = sub_42c754(sub_447210(data_5317dc, esi_1), 0)
            esi_1 += 1
            i = ebx_2
            ebx_2 -= 1
        while (i != 1)
    
    return result
}
