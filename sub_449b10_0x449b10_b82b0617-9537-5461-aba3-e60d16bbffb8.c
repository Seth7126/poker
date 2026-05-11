// ============================================================
// 函数名称: sub_449b10
// 虚拟地址: 0x449b10
// WARP GUID: b82b0617-9537-5461-aba3-e60d16bbffb8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetClassLongA, InvalidateRect, SendMessageA, IsIconic
// [内部子函数调用]: sub_449ad4, sub_448d04
// [被调用的父级函数]: sub_447f44, sub_447f54
// ============================================================

int32_t __convention("regparm")sub_449b10(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    
    if (*data_53040c == 0)
        BOOL eax_6
        eax_6, ecx = IsIconic(*(arg1 + 0x24))
        
        if (eax_6 != 0)
            ecx = InvalidateRect(*(arg1 + 0x24), nullptr, 0xffffffff)
    else
        HICON lParam = sub_448d04(arg1)
        SendMessageA(*(arg1 + 0x24), 0x80, 1, lParam)
        HICON dwNewLong = sub_448d04(arg1)
        ecx = SetClassLongA(*(arg1 + 0x24), 0xfffffff2, dwNewLong)
    
    return sub_449ad4(ecx, 0xb01d)
}
