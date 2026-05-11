// ============================================================
// 函数名称: sub_41ceb4
// 虚拟地址: 0x41ceb4
// WARP GUID: 99d5664d-57f5-5805-b990-648c43c3819a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectPalette, SelectObject, DeleteDC
// [内部子函数调用]: sub_419a38, sub_419794, sub_419bc0, sub_4108f8
// [被调用的父级函数]: sub_41cd24, sub_41cdd0, sub_41ce88, sub_41e2e0
// ============================================================

int32_t __convention("regparm")sub_41ceb4(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    
    if (*(arg1 + 4) == 0)
        return arg1
    
    sub_419794(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HGDIOBJ h = *(arg1 + 0x5c)
    
    if (h != 0)
        SelectObject(*(arg1 + 4), h)
    
    HPALETTE hPal = *(arg1 + 0x60)
    
    if (hPal != 0)
        SelectPalette(*(arg1 + 4), hPal, 0xffffffff)
    
    HDC hdc = *(arg1 + 4)
    sub_419bc0(arg1, 0)
    DeleteDC(hdc)
    void* ebp_1 = sub_4108f8(data_52e624)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_41cf4f
    return sub_419a38(*(ebp_1 - 4))
}
