// ============================================================
// 函数名称: sub_448fbc
// 虚拟地址: 0x448fbc
// WARP GUID: e491b1dc-fdae-55e0-842a-4285e72c8a86
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsDialogMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449184
// ============================================================

int32_t __convention("regparm")sub_448fbc(void* arg1, MSG* arg2)
{
    // 第一条实际指令: HWND hDlg = *(arg1 + 0xa0)
    HWND hDlg = *(arg1 + 0xa0)
    
    if (hDlg == 0)
        return 0
    
    BOOL eax_1 = IsDialogMessageA(hDlg, arg2)
    int32_t eax_2 = neg.d(eax_1)
    return neg.d(sbb.d(eax_2, eax_2, eax_1 != 0))
}
