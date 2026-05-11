// ============================================================
// 函数名称: sub_430f0c
// 虚拟地址: 0x430f0c
// WARP GUID: f9c92af2-495f-5a3a-9a0e-c2280997db43
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos, GetCapture
// [内部子函数调用]: sub_42c754, sub_42a1dc, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

HWND __convention("regparm")sub_430f0c(int32_t* arg1)
{
    // 第一条实际指令: HWND result = GetCapture()
    HWND result = GetCapture()
    
    if (result == 0)
        int32_t point
        GetCursorPos(&point)
        result = sub_42a1dc(&point)
        
        if (arg1 == result)
            sub_4318d0(arg1)
            return sub_42c754(arg1, 1)
    
    return result
}
