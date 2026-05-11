// ============================================================
// 函数名称: sub_4b08d0
// 虚拟地址: 0x4b08d0
// WARP GUID: 6d8ffe3a-a379-56eb-b466-08ade76d7889
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415df8, sub_4030d0
// [被调用的父级函数]: sub_4b06c8
// ============================================================

void* __convention("regparm")sub_4b08d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0xe0)
    int32_t* eax = *(arg1 + 0xe0)
    
    if (eax != 0 && *(arg1 + 0xe4) != 0)
        sub_4030d0(eax)
    
    *(arg1 + 0xe0) = arg2
    *(arg1 + 0xe4) = 0
    void* result = *(arg1 + 0xe0)
    
    if (result == 0)
        return result
    
    return sub_415df8(result, arg1)
}
