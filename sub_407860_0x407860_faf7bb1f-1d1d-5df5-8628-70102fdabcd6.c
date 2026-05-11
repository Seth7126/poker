// ============================================================
// 函数名称: sub_407860
// 虚拟地址: 0x407860
// WARP GUID: faf7bb1f-1d1d-5df5-8628-70102fdabcd6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegisterWindowMessageA, FindWindowA, SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_435a10
// ============================================================

HWND __fastcallsub_407860(uint32_t* arg1, uint32_t* arg2, uint32_t* arg3 @ eax, LRESULT* arg4, LRESULT* arg5)
{
    // 第一条实际指令: uint32_t* var_8 = arg1
    uint32_t* var_8 = arg1
    HWND hWnd = FindWindowA(sub_4078fa+0x16, sub_4078fa+2)
    *arg3 = RegisterWindowMessageA(sub_4078fa+0x1e)
    *arg2 = RegisterWindowMessageA(sub_4078fa+0x2e)
    *arg1 = RegisterWindowMessageA(sub_4078fa+0x46)
    
    if (*arg2 == 0 || hWnd == 0)
        *arg5 = 0
    else
        *arg5 = SendMessageA(hWnd, *arg2, 0, 0)
    
    if (*arg1 == 0 || hWnd == 0)
        *arg4 = 3
    else
        *arg4 = SendMessageA(hWnd, *arg1, 0, 0)
    
    return hWnd
}
