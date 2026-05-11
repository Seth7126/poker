// ============================================================
// 函数名称: sub_52d8ac
// 虚拟地址: 0x52d8ac
// WARP GUID: e2f4401a-3b15-58a0-8a3d-e560b3c8d625
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, ChangeDisplaySettingsA, ShowCursor
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_472ccc, sub_473684, sub_52d7c8, sub_47326c, sub_473570
// ============================================================

void __convention("regparm")sub_52d8ac(int32_t arg1)
{
    // 第一条实际指令: if (*(arg1 + 4) == 0)
    if (*(arg1 + 4) == 0)
        return 
    
    ChangeDisplaySettingsA(nullptr, 0)
    int32_t ecx_1 = *(arg1 + 0xc4)
    int32_t Y = *(arg1 + 0xbc)
    
    if (add_overflow(ecx_1, neg.d(Y)))
        sub_403010()
        noreturn
    
    int32_t ecx_3 = *(arg1 + 0xc0)
    int32_t X = *(arg1 + 0xb8)
    
    if (add_overflow(ecx_3, neg.d(X)))
        sub_403010()
        noreturn
    
    SetWindowPos(*(arg1 + 0xc8), 0xffffffff, X, Y, ecx_3 - X, ecx_1 - Y, SWP_SHOWWINDOW)
    ShowCursor(0xffffffff)
    *(arg1 + 4) = 0
}
