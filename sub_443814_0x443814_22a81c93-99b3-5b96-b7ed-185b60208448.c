// ============================================================
// 函数名称: sub_443814
// 虚拟地址: 0x443814
// WARP GUID: 22a81c93-99b3-5b96-b7ed-185b60208448
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: sub_441bec
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_443814(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: sub_441bec(arg1, arg2, arg3)
    sub_441bec(arg1, arg2, arg3)
    BOOL hWnd = arg1[0x8f]
    
    if (hWnd == 0)
        return hWnd
    
    int32_t Y = arg3[1]
    int32_t X = *arg3
    return SetWindowPos(hWnd, 1, X, Y, arg3[2] - X, arg3[3] - Y, 0x14)
}
