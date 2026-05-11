// ============================================================
// 函数名称: sub_5255a0
// 虚拟地址: 0x5255a0
// WARP GUID: 5f6c6498-af58-5859-b252-4473d4b67da2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_527aa4, sub_4c95c4
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_5255a0(void* arg1)
{
    // 第一条实际指令: *data_5301f4
    *data_5301f4
    void* result = sub_527aa4()
    
    if (*(arg1 + 4) != 7)
        return result
    
    return sub_4c95c4()
}
