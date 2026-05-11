// ============================================================
// 函数名称: sub_41a590
// 虚拟地址: 0x41a590
// WARP GUID: a21a9d37-0d35-5aef-8f14-3bb24c9ee7f7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, ReleaseDC, GetDC, GetPaletteEntries
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41a628
// ============================================================

int32_t __convention("regparm")sub_41a590(void* arg1)
{
    // 第一条实际指令: if (data_531654 == 0)
    if (data_531654 == 0)
        arg1.b = 0
        return arg1
    
    HDC eax = GetDC(nullptr)
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (GetDeviceCaps(eax, 0x68) s>= 0x10)
        GetPaletteEntries(data_531654, 0, 8, arg1 + 4)
        GetPaletteEntries(data_531654, 8, 8, arg1 + (zx.d(*(arg1 + 2)) << 2) - 0x1c)
        char var_5_1 = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_14_2 = 0x41a61d
    ExceptionList = nullptr
    return ReleaseDC(ExceptionList, eax)
}
