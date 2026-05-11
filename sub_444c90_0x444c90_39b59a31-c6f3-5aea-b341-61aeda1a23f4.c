// ============================================================
// 函数名称: sub_444c90
// 虚拟地址: 0x444c90
// WARP GUID: 39b59a31-c6f3-5aea-b341-61aeda1a23f4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFocus, GetFocus
// [内部子函数调用]: sub_42c754, sub_4318d0
// [被调用的父级函数]: sub_4448d8, sub_44630c, sub_444ce0
// ============================================================

HWND __convention("regparm")sub_444c90(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = arg1[0x82]
    int32_t* edx = arg1[0x82]
    int32_t* ebx
    
    if (edx == 0 || arg1[0x8e] != 0)
        ebx = arg1
    else
        ebx = edx
    
    SetFocus(sub_4318d0(ebx))
    int32_t eax_3 = sub_4318d0(ebx)
    HWND result = GetFocus()
    
    if (eax_3 != result)
        return result
    
    return sub_42c754(ebx, 0)
}
