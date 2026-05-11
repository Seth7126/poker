// ============================================================
// 函数名称: sub_45442c
// 虚拟地址: 0x45442c
// WARP GUID: 5c569eeb-d45d-53c4-a2b7-14e3b9b83fdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, CreateHalftonePalette, ReleaseDC, GetDC
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

HPALETTE __convention("regparm")sub_45442c(void* arg1)
{
    // 第一条实际指令: HPALETTE esi = nullptr
    HPALETTE esi = nullptr
    int32_t* eax = *(arg1 + 0x24)
    
    if (eax != 0)
        return (*(*eax + 0x24))()
    
    HPALETTE eax_2 = *(arg1 + 0x30)
    
    if (eax_2 != 0)
        return eax_2
    
    if (*(arg1 + 0x36) == 0)
        HDC eax_3 = GetDC(nullptr)
        
        if (GetDeviceCaps(eax_3, 0xc) * GetDeviceCaps(eax_3, 0xe) s<= 8)
            esi = CreateHalftonePalette(eax_3)
            *(arg1 + 0x30) = esi
        
        ReleaseDC(nullptr, eax_3)
    
    return esi
}
