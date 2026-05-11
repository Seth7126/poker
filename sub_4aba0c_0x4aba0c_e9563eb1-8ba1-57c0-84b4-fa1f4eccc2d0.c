// ============================================================
// 函数名称: sub_4aba0c
// 虚拟地址: 0x4aba0c
// WARP GUID: e9563eb1-8ba1-57c0-84b4-fa1f4eccc2d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_4095f8, sub_4095cc
// [被调用的父级函数]: sub_4ab4f8
// ============================================================

void* const __convention("regparm")sub_4aba0c(void* arg1)
{
    // 第一条实际指令: void* eax_2 = sub_4095cc(sub_40423c(*(arg1 + 0xc)))
    void* eax_2 = sub_4095cc(sub_40423c(*(arg1 + 0xc)))
    void* const result
    
    if ((*data_5303fc)(*(arg1 + 0x24), eax_2, 1) s> 0)
        result.b = 1
    else
        result = nullptr
    
    sub_4095f8(eax_2)
    return result
}
