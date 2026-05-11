// ============================================================
// 函数名称: sub_440cb8
// 虚拟地址: 0x440cb8
// WARP GUID: 47acec45-34de-532c-a232-2b6b3eb35824
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowLongA, RegisterClassA, CreateWindowExA, UnregisterClassA, GetClassInfoA
// [内部子函数调用]: sub_440bfc
// [被调用的父级函数]: sub_428e7c, sub_49562b, sub_43de70, sub_4956a4, sub_42663c
// ============================================================

HWND __stdcallsub_440cb8(int32_t arg1, int16_t arg2, int32_t arg3)
{
    // 第一条实际指令: data_52e9a8 = data_5314dc
    data_52e9a8 = data_5314dc
    WNDCLASSA wndClass
    BOOL eax_3 = GetClassInfoA(data_5314dc, data_52e9bc, &wndClass)
    int32_t eax_4 = neg.d(eax_3)
    char eax_6 = (neg.d(sbb.d(eax_4, eax_4, eax_3 != 0))).b
    
    if (eax_6 == 0 || DefWindowProcA != wndClass.lpfnWndProc)
        if (eax_6 != 0)
            UnregisterClassA(data_52e9bc, data_5314dc)
        
        RegisterClassA(0x52e998)
    
    HWND hWnd = CreateWindowExA(WS_EX_TOOLWINDOW, data_52e9bc, 0x440d68, WS_POPUP, 0, 0, 0, 0, nullptr, 
        nullptr, data_5314dc, nullptr)
    
    if (arg2 != 0)
        SetWindowLongA(hWnd, 0xfffffffc, sub_440bfc(arg1, arg3))
    
    return hWnd
}
