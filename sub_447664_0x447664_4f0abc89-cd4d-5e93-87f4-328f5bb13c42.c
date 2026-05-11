// ============================================================
// 函数名称: sub_447664
// 虚拟地址: 0x447664
// WARP GUID: 4f0abc89-cd4d-5e93-87f4-328f5bb13c42
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetCursor, SendMessageA, GetCursorPos, WindowFromPoint, GetCurrentThreadId, GetWindowThreadProcessId
// [内部子函数调用]: sub_407814, sub_44763c, sub_407788
// [被调用的父级函数]: sub_4463a4, sub_4b498a, sub_44657a
// ============================================================

void __convention("regparm")sub_447664(LRESULT arg1, int16_t arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x38))
    if (arg2 == *(arg1 + 0x38))
        *(arg1 + 0x3c) += 1
        return 
    
    *(arg1 + 0x38) = arg2
    
    if (arg2 != 0)
        SetCursor(sub_44763c(arg1, sx.d(arg2)))
        *(arg1 + 0x3c) += 1
        return 
    
    int32_t var_18
    GetCursorPos(&var_18)
    int32_t var_14
    int32_t var_1c_2 = var_14
    HWND eax = WindowFromPoint(var_18)
    
    if (eax == 0)
        SetCursor(sub_44763c(arg1, sx.d(arg2)))
        *(arg1 + 0x3c) += 1
    else if (GetWindowThreadProcessId(eax, nullptr) != GetCurrentThreadId())
        SetCursor(sub_44763c(arg1, sx.d(arg2)))
        *(arg1 + 0x3c) += 1
    else
        SendMessageA(eax, 0x20, eax, sub_407788(SendMessageA(eax, 0x84, 0, sub_407814(&var_18)), 0x200))
}
