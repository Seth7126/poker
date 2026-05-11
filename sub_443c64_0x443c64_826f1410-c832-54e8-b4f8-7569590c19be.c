// ============================================================
// 函数名称: sub_443c64
// 虚拟地址: 0x443c64
// WARP GUID: 826f1410-c832-54e8-b4f8-7569590c19be
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetMenu, DrawMenuBar, SendMessageA
// [内部子函数调用]: sub_43a014, sub_4318d0
// [被调用的父级函数]: sub_443d2c, sub_443d04, sub_444034
// ============================================================

void __convention("regparm")sub_443c64(int32_t* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x217) != 2 || arg1[0x8f] == 0)
    if (*(arg1 + 0x217) != 2 || arg1[0x8f] == 0)
        return 
    
    WPARAM wParam = 0
    int32_t* eax = arg1[0x8c]
    
    if (eax != 0)
        wParam = (*(*eax + 0x34))()
    
    LPARAM lParam = 0
    void* eax_2 = arg1[0x90]
    
    if (eax_2 != 0)
        lParam = sub_43a014(eax_2)
    
    int32_t ebx
    ebx.b = wParam != GetMenu(sub_4318d0(arg1))
    SendMessageA(arg1[0x8f], 0x230, wParam, lParam)
    
    if (ebx.b != 0)
        DrawMenuBar(sub_4318d0(arg1))
}
