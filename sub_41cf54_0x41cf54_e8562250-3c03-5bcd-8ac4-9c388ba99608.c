// ============================================================
// 函数名称: sub_41cf54
// 虚拟地址: 0x41cf54
// WARP GUID: e8562250-3c03-5bcd-8ac4-9c388ba99608
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateCompatibleDC, SelectPalette, SelectObject, RealizePalette
// [内部子函数调用]: sub_41cdd0, sub_419794, sub_419a38, sub_41e2f0, sub_419bc0, sub_41e440, sub_41085c
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_41cf54(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    
    if (*(arg1 + 0x58) == 0)
        return arg1
    
    sub_419794(arg1)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41e2f0(*(arg1 + 0x58))
    void* ebp_1 = sub_41cdd0(*(*(*(arg1 + 0x58) + 0x20) + 8))
    sub_41e440(*(*(ebp_1 - 4) + 0x58))
    HDC hdc = CreateCompatibleDC(nullptr)
    HGDIOBJ h = *(*(*(*(ebp_1 - 4) + 0x58) + 0x20) + 8)
    
    if (h == 0)
        *(*(ebp_1 - 4) + 0x5c) = 0
    else
        *(*(ebp_1 - 4) + 0x5c) = SelectObject(hdc, h)
    
    HPALETTE hPal = *(*(*(*(ebp_1 - 4) + 0x58) + 0x20) + 0x10)
    
    if (hPal == 0)
        *(*(ebp_1 - 4) + 0x60) = 0
    else
        *(*(ebp_1 - 4) + 0x60) = SelectPalette(hdc, hPal, 0xffffffff)
        RealizePalette(hdc)
    
    sub_419bc0(*(ebp_1 - 4), hdc)
    void* ebp_2 = sub_41085c(data_52e624, *(ebp_1 - 4))
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_41d03a
    return sub_419a38(*(ebp_2 - 4))
}
