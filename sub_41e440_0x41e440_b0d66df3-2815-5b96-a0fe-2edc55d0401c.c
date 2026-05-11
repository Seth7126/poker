// ============================================================
// 函数名称: sub_41e440
// 虚拟地址: 0x41e440
// WARP GUID: b0d66df3-2815-5b96-a0fe-2edc55d0401c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, CreateHalftonePalette, ReleaseDC, GetDC
// [内部子函数调用]: sub_419f38, sub_41cdd0, sub_41a628
// [被调用的父级函数]: sub_41e26c, sub_41dd80, sub_41ed0c, sub_41e11c, sub_41cf54
// ============================================================

void __convention("regparm")sub_41e440(HPALETTE arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    HPALETTE edi = arg1
    void* ebp = edi
    
    if (edi->__offset(0x28).b != 0 || *(ebp + 0x10) != 0 || *(ebp + 0x14) == 0)
        return 
    
    int32_t eax = *(ebp + 0x14)
    
    if (eax == *(ebp + 8))
        ebp = sub_41cdd0(eax)
    
    arg1 = sub_41a628(*(ebp + 0x14), 0, 1 << (*(ebp + 0x3e)).b)
    *(ebp + 0x10) = arg1
    
    if (arg1 != 0)
        return 
    
    HDC eax_3 = GetDC(nullptr)
    sub_419f38(eax_3)
    
    if (*(ebp + 0x71) == 0)
        ebx = GetDeviceCaps(eax_3, 0xc) * GetDeviceCaps(eax_3, 0xe)
    
    if (*(ebp + 0x71) != 0 || ebx s< zx.d(*(ebp + 0x2a)) * zx.d(*(ebp + 0x28)))
        ebx.b = 1
    else
        ebx = 0
    
    *(ebp + 0x71) = ebx.b
    
    if (ebx.b != 0)
        *(ebp + 0x10) = CreateHalftonePalette(eax_3)
    
    ReleaseDC(nullptr, eax_3)
    
    if (*(ebp + 0x10) == 0)
        edi->__offset(0x28).b = 1
}
