// ============================================================
// 函数名称: sub_467044
// 虚拟地址: 0x467044
// WARP GUID: e30dbc24-f292-5c67-804e-0846479af813
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegCloseKey
// [内部子函数调用]: sub_467014
// [被调用的父级函数]: sub_4e5e3c, sub_466fa4
// ============================================================

void* __convention("regparm")sub_467044(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* hKey = *(arg1 + 8)
    void* hKey = *(arg1 + 8)
    
    if (arg2 == hKey)
        return hKey
    
    if (*(arg1 + 0x14) != 0)
        RegCloseKey(hKey)
        *(arg1 + 0x14) = 0
    
    *(arg1 + 8) = arg2
    return sub_467014(arg1)
}
