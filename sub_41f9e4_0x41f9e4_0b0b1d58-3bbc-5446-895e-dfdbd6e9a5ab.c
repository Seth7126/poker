// ============================================================
// 函数名称: sub_41f9e4
// 虚拟地址: 0x41f9e4
// WARP GUID: 0b0b1d58-3bbc-5446-895e-dfdbd6e9a5ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTextMetricsA, ReleaseDC, SelectObject, GetDC
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41fa28
// ============================================================

int32_tsub_41f9e4()
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = 1
    HDC eax = GetDC(nullptr)
    
    if (eax != 0)
        TEXTMETRICA lptm
        
        if (SelectObject(eax, data_531668) != 0 && GetTextMetricsA(eax, &lptm) != 0)
            result.b = lptm.tmCharSet
        
        ReleaseDC(nullptr, eax)
    
    return result
}
