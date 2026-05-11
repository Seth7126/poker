// ============================================================
// 函数名称: sub_4436c0
// 虚拟地址: 0x4436c0
// WARP GUID: 0193fa72-6db3-55d5-8862-c62d82097db5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CallWindowProcA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44374c
// ============================================================

LRESULTsub_4436c0(void* arg1)
{
    // 第一条实际指令: LRESULT result = CallWindowProcA(*(*(arg1 - 4) + 0x25c), *(*(arg1 - 4) + 0x23c), **(arg1 - 8), *(*(arg1 - 8) + 4), *(*(arg1 - 8) + 8))
    LRESULT result = CallWindowProcA(*(*(arg1 - 4) + 0x25c), *(*(arg1 - 4) + 0x23c), **(arg1 - 8), 
        *(*(arg1 - 8) + 4), *(*(arg1 - 8) + 8))
    *(*(arg1 - 8) + 0xc) = result
    return result
}
