// ============================================================
// 函数名称: sub_41e3e0
// 虚拟地址: 0x41e3e0
// WARP GUID: 83feabeb-41f8-5d75-b473-b02516008267
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_41cdd0, sub_41e2f0, sub_41d8d4, sub_41e21c, sub_41e2e0
// [被调用的父级函数]: sub_41e0ec, sub_41dd80
// ============================================================

void __convention("regparm")sub_41e3e0(BOOL arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (*(ebx + 0x2a) != 0 && *(ebx + 0x29) != 0)
        return 
    
    void* esi_1 = ebx[8]
    int32_t eax = *(esi_1 + 0xc)
    
    if (eax != 0)
        sub_41cdd0(eax)
        DeleteObject(*(esi_1 + 0xc))
        *(esi_1 + 0xc) = 0
    
    sub_41e2e0(ebx)
    sub_41e2f0(ebx)
    COLORREF eax_5 = sub_41e21c(ebx)
    *(esi_1 + 0xc) = sub_41d8d4(*(esi_1 + 8), *(esi_1 + 0x10), eax_5)
    *(ebx + 0x2a) = 1
    *(ebx + 0x29) = 1
}
