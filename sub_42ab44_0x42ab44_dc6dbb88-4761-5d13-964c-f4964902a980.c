// ============================================================
// 函数名称: sub_42ab44
// 虚拟地址: 0x42ab44
// WARP GUID: dc6dbb88-4761-5d13-964c-f4964902a980
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, SelectPalette, RealizePalette
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_430c34
// ============================================================

int32_t* __convention("regparm")sub_42ab44(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    char var_13 = 0
    
    if (*(esi + 0x47) != 0)
        int32_t ebx
        ebx.w = 0xffdc
        arg1 = sub_4032ac(esi)
        
        if (arg1 != 0)
            HDC ebx_1 = (*(*esi + 0x44))(arg2)
            HDC eax_2
            eax_2.b = arg2
            eax_2.b ^= 1
            char temp0_1 = eax_2.b
            eax_2.b = neg.b(eax_2.b)
            HPALETTE hPal = SelectPalette(ebx_1, arg1, sbb.d(eax_2, eax_2, temp0_1 != 0))
            
            if (RealizePalette(ebx_1) != 0)
                (*(*esi + 0x74))()
            
            SelectPalette(ebx_1, hPal, 0xffffffff)
            HWND hWnd
            ReleaseDC(hWnd, ebx_1)
            var_13 = 1
    
    arg1.b = var_13
    return arg1
}
