// ============================================================
// 函数名称: sub_41a628
// 虚拟地址: 0x41a628
// WARP GUID: f2a335b5-68de-5579-a650-cdf6e6213144
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePalette, SelectObject, GetDIBColorTable, DeleteDC, CreateCompatibleDC
// [内部子函数调用]: sub_41a420, sub_41a590, sub_402980
// [被调用的父级函数]: sub_41e6c8, sub_41e440, sub_41ea20
// ============================================================

HPALETTE __convention("regparm")sub_41a628(HGDIOBJ arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: LOGPALETTE plpal
    LOGPALETTE plpal
    plpal.palVersion = 0x300
    var_40c
    
    if (arg1 == 0)
        plpal.palNumEntries = arg3.w
        sub_402980(arg2, &var_40c, arg3 << 2)
    else
        HDC hdc = CreateCompatibleDC(nullptr)
        HGDIOBJ h = SelectObject(hdc, arg1)
        plpal.palNumEntries = GetDIBColorTable(hdc, 0, 0x100, &var_40c)
        SelectObject(hdc, h)
        DeleteDC(hdc)
    
    if (plpal.palNumEntries == 0)
        return nullptr
    
    if (plpal.palNumEntries != 0x10)
        sub_41a420(&var_40c, zx.d(plpal.palNumEntries))
    else if (sub_41a590(&plpal) == 0)
        sub_41a420(&var_40c, zx.d(plpal.palNumEntries))
    
    return CreatePalette(&plpal)
}
