// ============================================================
// 函数名称: sub_404248
// 虚拟地址: 0x404248
// WARP GUID: c12cd53f-8eee-57c3-8abd-2a2380a9b9ba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ebc, sub_402980
// [被调用的父级函数]: sub_41512c, sub_4042c0, sub_49e33c, sub_412dbc, sub_4fb834, sub_49fdd0, sub_4a4140, sub_49ffc4, sub_46fd7c, sub_46ef88, sub_48c290, sub_40c0c4, sub_412dfc, sub_4af608, sub_414330, sub_4a4084, sub_47be18, sub_49cac4, sub_50e9c0
// ============================================================

void* __convention("regparm")sub_404248(int32_t* arg1)
{
    // 第一条实际指令: void* result = *arg1
    void* result = *arg1
    
    if (result == 0 || *(result - 8) == 1)
        return result
    
    char* eax_1 = sub_403ebc(*(result - 4))
    void* eax_2 = *arg1
    *arg1 = eax_1
    
    if (*(eax_2 - 8) s>= 1)
        *(eax_2 - 8) -= 1
    
    sub_402980(eax_2, eax_1, *(eax_2 - 4))
    return *arg1
}
