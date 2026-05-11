// ============================================================
// 函数名称: sub_42c584
// 虚拟地址: 0x42c584
// WARP GUID: 96185078-934a-5217-89dd-a6f301f1b17d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_431ea8
// ============================================================

void* __convention("regparm")sub_42c584(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8.b = 1
    
    if (*(arg1 + 0xaa) != 0)
        *(arg1 + 0xac)
        (*(arg1 + 0xa8))(&var_8, arg3)
    
    arg1.b = var_8.b
    return arg1
}
