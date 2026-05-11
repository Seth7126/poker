// ============================================================
// 函数名称: sub_41e0b0
// 虚拟地址: 0x41e0b0
// WARP GUID: 4f6b82ed-1a28-5deb-af9c-5ceeb6ae2db7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4372a0, sub_41ed0c, sub_41e130
// ============================================================

void* const __convention("regparm")sub_41e0b0(void* arg1)
{
    // 第一条实际指令: void* const result = *(arg1 + 0x20)
    void* const result = *(arg1 + 0x20)
    int32_t edx = *(result + 8)
    
    if (edx == 0 || edx == *(result + 0x14))
        if (*(result + 0x14) != 0)
            return 0
        
        if (*(result + 0x30) != 0)
            return nullptr
        
        result.b = 1
    else
        result.b = 1
    
    return result
}
