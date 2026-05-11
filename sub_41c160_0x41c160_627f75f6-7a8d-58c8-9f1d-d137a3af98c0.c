// ============================================================
// 函数名称: sub_41c160
// 虚拟地址: 0x41c160
// WARP GUID: 627f75f6-7a8d-58c8-9f1d-d137a3af98c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PlayEnhMetaFile, SelectPalette, RealizePalette
// [内部子函数调用]: sub_419b40
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_41c160(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1[8] == 0)
    if (arg1[8] == 0)
        return 
    
    HPALETTE hPal = (*(*arg1 + 0x24))(arg3)
    HPALETTE hPal_1 = nullptr
    HDC hdc
    
    if (hPal != 0)
        BOOL bForceBkgd = 0xffffffff
        hdc = sub_419b40(arg2)
        hPal_1 = SelectPalette(hdc, hPal, bForceBkgd)
        RealizePalette(sub_419b40(arg2))
    
    RECT var_20
    __builtin_memcpy(&var_20, arg3, 0x10)
    var_20.right -= 1
    var_20.bottom -= 1
    RECT* lprect = &var_20
    HENHMETAFILE hmf = *(arg1[8] + 8)
    hdc = sub_419b40(arg2)
    PlayEnhMetaFile(hdc, hmf, lprect)
    
    if (hPal == 0)
        return 
    
    BOOL bForceBkgd_1 = 0xffffffff
    hdc = sub_419b40(arg2)
    SelectPalette(hdc, hPal_1, bForceBkgd_1)
}
