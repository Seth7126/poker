// ============================================================
// 函数名称: sub_4325a4
// 虚拟地址: 0x4325a4
// WARP GUID: 4f2a3120-adbf-5126-8e86-a9df625b47ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InflateRect
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_4325a4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: (*(*arg1 - 0x10))()
    (*(*arg1 - 0x10))()
    RECT* lprc = *(arg2 + 8)
    int32_t eax_2 = neg.d(arg1[0x4b])
    arg1[0x4b]
    BOOL result = InflateRect(lprc, eax_2, eax_2)
    
    if (*(arg1 + 0x125) != 0)
        result = 0
        
        if (*(arg1 + 0x123) != 0)
            result = arg1[0x4a]
        
        if (arg1[0x49].b != 0)
            result += arg1[0x4a]
        
        if ((*(arg1 + 0x122) & 1) != 0)
            lprc->left += result
        
        if ((*(arg1 + 0x122) & 2) != 0)
            lprc->top += result
        
        if ((*(arg1 + 0x122) & 4) != 0)
            lprc->right -= result
        
        if ((*(arg1 + 0x122) & 8) != 0)
            lprc->bottom -= result
    
    return result
}
