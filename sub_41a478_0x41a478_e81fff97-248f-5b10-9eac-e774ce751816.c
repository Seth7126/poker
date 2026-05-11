// ============================================================
// 函数名称: sub_41a478
// 虚拟地址: 0x41a478
// WARP GUID: e81fff97-248f-5b10-9eac-e774ce751816
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, GetSystemPaletteEntries, ReleaseDC, GetDC
// [内部子函数调用]: sub_402980
// [被调用的父级函数]: sub_41f9ac
// ============================================================

int32_tsub_41a478()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_410 = ebx
    int16_t var_40c = 0x300
    int16_t var_40a = 0x10
    PALETTEENTRY palEntries[0x7]
    int32_t eax
    sub_402980(eax, &palEntries, 0x40)
    HDC eax_1 = GetDC(nullptr)
    int32_t* var_414_1 = &var_4
    int32_t (* var_418)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = GetDeviceCaps(eax_1, 0x68)
    
    if (eax_3 s>= 0x10)
        GetSystemPaletteEntries(eax_1, 0, 8, &palEntries)
        PALETTEENTRY palEntries_1
        
        if (palEntries_1 != 0xc0c0c0)
            GetSystemPaletteEntries(eax_1, eax_3 - 8, 8, &(&var_4)[zx.d(var_40a) - 0x109])
        else
            GetSystemPaletteEntries(eax_1, eax_3 - 8, 1, &palEntries_1)
            GetSystemPaletteEntries(eax_1, eax_3 - 7, 7, &(&var_4)[zx.d(var_40a) - 0x108])
            PALETTEENTRY palEntries_2[0xf8]
            GetSystemPaletteEntries(eax_1, 7, 1, &palEntries_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    HPALETTE (* var_414_2)(int32_t* arg1 @ ebp) = sub_41a57c
    ExceptionList = nullptr
    return ReleaseDC(ExceptionList, eax_1)
}
