// ============================================================
// 函数名称: sub_440884
// 虚拟地址: 0x440884
// WARP GUID: a5e50759-0955-52d5-a1fd-7713cbaf7a18
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, SetWindowPos, GetWindowLongA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44374c
// ============================================================

void __convention("regparm")sub_440884(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t hWnd = arg1
    int32_t hWnd = arg1
    
    if (hWnd == 0)
        return 
    
    arg1 = GetWindowLongA(hWnd, 0xffffffec)
    
    if (arg2 == 0)
        if ((arg1:1.b & 2) != 0)
            SetWindowLongA(hWnd, 0xffffffec, arg1 & 0xfffffdff)
            SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x37)
    else if ((arg1:1.b & 2) == 0)
        SetWindowLongA(hWnd, 0xffffffec, arg1 | 0x200)
        SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x37)
}
