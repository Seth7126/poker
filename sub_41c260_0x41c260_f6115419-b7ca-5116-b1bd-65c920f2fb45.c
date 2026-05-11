// ============================================================
// 函数名称: sub_41c260
// 虚拟地址: 0x41c260
// WARP GUID: f6115419-b7ca-5116-b1bd-65c920f2fb45
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePalette, GetEnhMetaFilePaletteEntries
// [内部子函数调用]: sub_417c44
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41c260(void* arg1)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x20)
    void* eax = *(arg1 + 0x20)
    
    if (eax != 0 && *(eax + 8) != 0)
        if (*(eax + 0x14) != 0)
            return *(*(arg1 + 0x20) + 0x14)
        
        uint32_t nNumEntries = GetEnhMetaFilePaletteEntries(*(eax + 8), 0, nullptr)
        
        if (nNumEntries != 0)
            if (nNumEntries s> 0x100)
                nNumEntries &= 0xff
            
            sub_417c44(*(*(arg1 + 0x20) + 0x14))
            LOGPALETTE plpal
            plpal.palVersion = 0x300
            plpal.palNumEntries = nNumEntries.w
            var_40c
            GetEnhMetaFilePaletteEntries(*(*(arg1 + 0x20) + 8), nNumEntries, &var_40c)
            *(*(arg1 + 0x20) + 0x14) = CreatePalette(&plpal)
            return *(*(arg1 + 0x20) + 0x14)
    
    return 0
}
