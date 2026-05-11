// ============================================================
// 函数名称: sub_41a0dc
// 虚拟地址: 0x41a0dc
// WARP GUID: 3d92eb31-eb73-59ed-91b4-75914e1e5ca5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: StretchBlt, SelectObject, RealizePalette, SetTextColor, DeleteObject, DeleteDC, CreateCompatibleDC, MaskBlt, SetBkColor, SelectPalette, CreateCompatibleBitmap
// [内部子函数调用]: sub_419f38, sub_4077f4
// [被调用的父级函数]: sub_41dd80, sub_41932c
// ============================================================

BOOL __convention("regparm")sub_41a0dc(HDC arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, HDC arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, HDC arg11, int32_t arg12, int32_t arg13)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_2c = ebx
    int32_t esi
    int32_t var_30 = esi
    int32_t edi
    int32_t var_34 = edi
    char var_d = 1
    HDC ExceptionList
    TEB* fsbase
    
    if (*data_530a60 == 2 && arg8 == arg13 && arg7 == arg12)
        int32_t cy = 1
        int32_t cx = 1
        ExceptionList = arg11
        HBITMAP h = CreateCompatibleBitmap(ExceptionList, cx, cy)
        sub_419f38(h)
        HGDIOBJ eax_4 = SelectObject(arg6, h)
        int32_t* var_38_1 = &var_4
        int32_t (* var_3c_1)(void* arg1, void* arg2) = j_sub_4037f0
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        MaskBlt(arg1, arg2, arg3, arg13, arg12, arg11, arg10, arg9, eax_4, arg5, arg4, 
            sub_4077f4(0xaa0029, 0xcc0020))
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (__stdcall* var_38_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41a363
        ExceptionList = arg6
        return DeleteObject(SelectObject(ExceptionList, eax_4))
    
    int32_t var_28 = 0
    HDC eax_21 = CreateCompatibleDC(nullptr)
    sub_419f38(eax_21)
    int32_t* var_38_4 = &var_4
    int32_t (* var_3c_4)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HBITMAP eax_23 = CreateCompatibleBitmap(arg11, arg8, arg7)
    sub_419f38(eax_23)
    HGDIOBJ h_1 = SelectObject(eax_21, eax_23)
    HPALETTE hPal = SelectPalette(arg11, data_531654, 0)
    SelectPalette(arg11, hPal, 0)
    HPALETTE ExceptionList_1
    
    if (hPal == 0)
        ExceptionList_1 = SelectPalette(eax_21, data_531654, 0xffffffff)
    else
        ExceptionList_1 = SelectPalette(eax_21, hPal, 0xffffffff)
    
    RealizePalette(eax_21)
    StretchBlt(eax_21, 0, 0, arg8, arg7, arg6, arg5, arg4, arg8, arg7, SRCCOPY)
    StretchBlt(eax_21, 0, 0, arg8, arg7, arg11, arg10, arg9, arg8, arg7, SRCERASE)
    COLORREF color = SetTextColor(arg1, 0)
    COLORREF color_1 = SetBkColor(arg1, 0xffffff)
    StretchBlt(arg1, arg2, arg3, arg13, arg12, arg6, arg5, arg4, arg8, arg7, SRCAND)
    StretchBlt(arg1, arg2, arg3, arg13, arg12, eax_21, 0, 0, arg8, arg7, SRCINVERT)
    SetTextColor(arg1, color)
    SetBkColor(arg1, color_1)
    
    if (h_1 != 0)
        SelectObject(eax_21, h_1)
    
    DeleteObject(eax_23)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_38_5)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41a363
    
    if (ExceptionList_1 != 0)
        BOOL bForceBkgd = 0
        ExceptionList = ExceptionList_1
        SelectPalette(eax_21, ExceptionList, bForceBkgd)
    
    return DeleteDC(eax_21)
}
