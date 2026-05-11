// ============================================================
// 函数名称: sub_42d420
// 虚拟地址: 0x42d420
// WARP GUID: aa9888df-a74b-58ae-91c1-2cd80ac111bf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_42d420(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x5c)
    int32_t* esi = *(arg1 + 0x5c)
    
    if (esi != 0 && (*(*esi + 0x30))().b != 0)
        return 0
    
    arg1.b = 1
    return arg1
}
