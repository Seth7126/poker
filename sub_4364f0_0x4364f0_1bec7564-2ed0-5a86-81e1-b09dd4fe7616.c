// ============================================================
// 函数名称: sub_4364f0
// 虚拟地址: 0x4364f0
// WARP GUID: 1bec7564-2ed0-5a86-81e1-b09dd4fe7616
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4367ac, sub_4367cc
// [被调用的父级函数]: sub_436518, sub_436448
// ============================================================

void* __convention("regparm")sub_4364f0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x4c)
    void* result = *(arg1 + 0x4c)
    
    if (arg2 != result)
        if (result != 0)
            result = sub_4367cc(result, arg1)
        
        if (arg2 != 0)
            return sub_4367ac(arg2, arg1)
    
    return result
}
