// ============================================================
// 函数名称: sub_467014
// 虚拟地址: 0x467014
// WARP GUID: 49986e1f-a9e9-5b7a-b594-fcdc07f740b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegCloseKey, RegFlushKey
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_467044, sub_466fe8, sub_467070
// ============================================================

void* __convention("regparm")sub_467014(void* arg1)
{
    // 第一条实际指令: void* hKey = *(arg1 + 4)
    void* hKey = *(arg1 + 4)
    
    if (hKey != 0)
        if (*(arg1 + 0xc) == 0)
            RegFlushKey(hKey)
        else
            RegCloseKey(hKey)
        
        *(arg1 + 4) = 0
        hKey = arg1 + 0x10
        sub_403df8(hKey)
    
    return hKey
}
