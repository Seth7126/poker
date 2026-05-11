// ============================================================
// 函数名称: sub_42c0ac
// 虚拟地址: 0x42c0ac
// WARP GUID: ec53afbb-4ee4-5406-b1ce-9a20166e4508
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDesktopWindow, GetDCEx, SelectObject, PatBlt, ReleaseDC
// [内部子函数调用]: sub_4190f0
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_42c0ac(char arg1, int32_t* arg2)
{
    // 第一条实际指令: HDC ebp
    HDC ebp
    HDC var_4 = ebp
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t edi
    int32_t var_30 = edi
    int32_t eax_1 = (*(*arg2 + 0x34))()
    void* const esi_4
    void var_24
    
    if (arg1 == 0)
        __builtin_memcpy(&var_24, &arg2[0x11], 0x10)
        esi_4 = arg2
    else
        __builtin_memcpy(&var_24, &arg2[0x17], 0x10)
        esi_4 = arg2
    HWND ExceptionList_1 = GetDesktopWindow()
    var_4 = nullptr
    HWND ExceptionList = ExceptionList_1
    HDC var_10 = GetDCEx(ExceptionList, var_4, DCX_CACHE | DCX_LOCKWINDOWUPDATE)
    __return_addr = &var_4
    var_4 = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HGDIOBJ h
    void* ebp_1
    h, ebp_1 = sub_4190f0(*(esi_4 + 0x40))
    *(ebp_1 - 0x10) = SelectObject(*(ebp_1 - 0xc), h)
    int32_t x = *(ebp_1 - 0x20)
    int32_t y = *(ebp_1 - 0x1c)
    PatBlt(*(ebp_1 - 0xc), x + eax_1, y, *(ebp_1 - 0x18) - x - eax_1, eax_1, PATINVERT)
    PatBlt(*(ebp_1 - 0xc), *(ebp_1 - 0x18) - eax_1, y + eax_1, eax_1, *(ebp_1 - 0x14) - y - eax_1, 
        PATINVERT)
    PatBlt(*(ebp_1 - 0xc), x, *(ebp_1 - 0x14) - eax_1, *(ebp_1 - 0x18) - *(ebp_1 - 0x20) - eax_1, 
        eax_1, PATINVERT)
    PatBlt(*(ebp_1 - 0xc), x, y, eax_1, *(ebp_1 - 0x14) - *(ebp_1 - 0x1c) - eax_1, PATINVERT)
    SelectObject(*(ebp_1 - 0xc), *(ebp_1 - 0x10))
    fsbase->NtTib.ExceptionList = ExceptionList
    var_4 = *(ebp_1 - 0xc)
    ExceptionList = *(ebp_1 - 8)
    return ReleaseDC(ExceptionList, var_4)
}
