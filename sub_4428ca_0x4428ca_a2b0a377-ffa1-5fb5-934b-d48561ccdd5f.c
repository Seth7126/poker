// ============================================================
// 函数名称: sub_4428ca
// 虚拟地址: 0x4428ca
// WARP GUID: a2b0a377-ffa1-5fb5-934b-d48561ccdd5f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_449490, sub_403898, sub_4431dc
// [被调用的父级函数]: 无
// ============================================================

void* __stdcallsub_4428ca(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: *(arg1 - 4)
    *(arg1 - 4)
    sub_449490(data_5317d8)
    sub_403898(__return_addr)
    void* result = *(arg1 - 4)
    
    if ((*(result + 0x2cc) & 2) == 0)
        return result
    
    return sub_4431dc(*(arg1 - 4), 1)
}
