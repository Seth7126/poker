// ============================================================
// 函数名称: sub_449944
// 虚拟地址: 0x449944
// WARP GUID: 346db598-f4c2-5e12-9c03-95f7734a2800
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos
// [内部子函数调用]: sub_42c754, sub_42a1dc, sub_428c18
// [被调用的父级函数]: sub_4499c8
// ============================================================

HANDLE __convention("regparm")sub_449944(void* arg1)
{
    // 第一条实际指令: int32_t point
    int32_t point
    GetCursorPos(&point)
    int32_t edx
    edx.b = 1
    HANDLE result = sub_42a1dc(&point)
    
    if (result != 0 && (*(result + 0x20) & 0x10) != 0)
        result = nullptr
    
    HANDLE eax_2 = sub_428c18()
    
    if (result != *(arg1 + 0x3c))
        if (*(arg1 + 0x3c) != 0 && eax_2 == 0)
            sub_42c754(*(arg1 + 0x3c), 0)
        else if (eax_2 != 0 && eax_2 == *(arg1 + 0x3c))
            sub_42c754(*(arg1 + 0x3c), 0)
        
        *(arg1 + 0x3c) = result
        
        if (*(arg1 + 0x3c) != 0 && eax_2 == 0)
            sub_42c754(*(arg1 + 0x3c), 0)
        else if (eax_2 != 0 && eax_2 == *(arg1 + 0x3c))
            sub_42c754(*(arg1 + 0x3c), 0)
    
    return result
}
