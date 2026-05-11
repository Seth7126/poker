// ============================================================
// 函数名称: sub_448d20
// 虚拟地址: 0x448d20
// WARP GUID: d1162de6-dc28-5f1b-a821-fa7ac710b6c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, DefWindowProcA, SetActiveWindow, IsIconic
// [内部子函数调用]: sub_447f14, sub_4484e4, sub_4318d0
// [被调用的父级函数]: sub_4493c8, sub_448668
// ============================================================

BOOL __convention("regparm")sub_448d20(void* arg1)
{
    // 第一条实际指令: BOOL result = IsIconic(*(arg1 + 0x24))
    BOOL result = IsIconic(*(arg1 + 0x24))
    
    if (result == 0)
        sub_4484e4()
        SetActiveWindow(*(arg1 + 0x24))
        
        if (*(arg1 + 0x38) == 0 || (*(arg1 + 0x4b) == 0 && *(*(arg1 + 0x38) + 0x47) == 0))
            result = sub_447f14(*(arg1 + 0x24), SW_MINIMIZE)
        else
            void* esi_1 = *(arg1 + 0x38)
            int32_t cx = *(esi_1 + 0x38)
            int32_t Y = *(esi_1 + 0x34)
            int32_t X = *(esi_1 + 0x30)
            HWND hWndInsertAfter = sub_4318d0(*(arg1 + 0x38))
            SetWindowPos(*(arg1 + 0x24), hWndInsertAfter, X, Y, cx, 0, SWP_SHOWWINDOW)
            result = DefWindowProcA(*(arg1 + 0x24), 0x112, 0xf020, 0)
        
        if (*(arg1 + 0xf2) != 0)
            *(arg1 + 0xf4)
            return (*(arg1 + 0xf0))()
    
    return result
}
