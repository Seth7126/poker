// ============================================================
// 函数名称: sub_41d870
// 虚拟地址: 0x41d870
// WARP GUID: e1c39cc0-1575-52f0-ba10-8ae01a6e434d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePalette, GetPaletteEntries, GetObjectA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41ec48, sub_453ff8, sub_41f454, sub_41ed0c, sub_41dc74, sub_41e300
// ============================================================

HPALETTE __convention("regparm")sub_41d870(HGDIOBJ arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        uint32_t var_410 = 0
        
        if (GetObjectA(arg1, 4, &var_410) != 0 && var_410 != 0)
            LOGPALETTE plpal
            plpal.palVersion = 0x300
            int32_t eax
            eax.w = var_410.w
            plpal.palNumEntries = eax.w
            var_408
            GetPaletteEntries(arg1, 0, var_410, &var_408)
            return CreatePalette(&plpal)
    
    return nullptr
}
