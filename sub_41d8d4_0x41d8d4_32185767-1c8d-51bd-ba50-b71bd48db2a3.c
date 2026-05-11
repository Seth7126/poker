// ============================================================
// 函数名称: sub_41d8d4
// 虚拟地址: 0x41d8d4
// WARP GUID: 32185767-1c8d-51bd-ba50-b71bd48db2a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject, RealizePalette, DeleteObject, PatBlt, GetObjectA, DeleteDC, CreateCompatibleDC, BitBlt, ReleaseDC, SetBkColor, CreateBitmap, SelectPalette, GetDC
// [内部子函数调用]: sub_419f38, sub_41cdd0, sub_41d214
// [被调用的父级函数]: sub_41e3e0, sub_41e300
// ============================================================

BOOL __convention("regparm")sub_41d8d4(HGDIOBJ arg1, HPALETTE arg2, COLORREF arg3)
{
    // 第一条实际指令: HGDIOBJ ExceptionList_2 = arg1
    HGDIOBJ ExceptionList_2 = arg1
    int32_t var_8 = 0
    
    if (ExceptionList_2 != 0)
        void var_74
        void* pv = &var_74
        int32_t c = 0x54
        HGDIOBJ ExceptionList_1 = ExceptionList_2
        
        if (GetObjectA(ExceptionList_1, c, pv) != 0)
            void* ebp = sub_41cdd0(ExceptionList_2)
            *(ebp - 8) = 0
            *(ebp - 0x10) = 0
            void* var_84_1 = ebp
            int32_t (* var_88_1)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            ExceptionList_1 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_1
            HDC eax_2 = GetDC(nullptr)
            sub_419f38(eax_2)
            *(ebp - 8) = eax_2
            HDC eax_4 = CreateCompatibleDC(*(ebp - 8))
            sub_419f38(eax_4)
            *(ebp - 0x10) = eax_4
            int32_t lpBits = 0
            uint32_t nBitCount = 1
            uint32_t ExceptionList = 1
            *(ebp - 4) = CreateBitmap(*(ebp - 0x6c), *(ebp - 0x68), ExceptionList, nBitCount, lpBits)
            
            if (*(ebp - 4) != 0)
                *(ebp - 0x1c) = SelectObject(*(ebp - 0x10), *(ebp - 4))
                
                if (arg3 != 0x1fffffff)
                    HDC eax_14 = CreateCompatibleDC(*(ebp - 8))
                    sub_419f38(eax_14)
                    *(ebp - 0xc) = eax_14
                    void* var_90_4 = ebp
                    int32_t (* var_94_2)(void* arg1, void* arg2) = j_sub_4037f0
                    ExceptionList = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = &ExceptionList
                    
                    if (*(ebp - 0x5c) == 0)
                        *(ebp - 0x11) = 0
                    else
                        *(ebp - 0x11) = 1
                        *(ebp - 0x58) = 0
                        void* var_9c_1 = ebp - 0x70
                        ExceptionList_2 = sub_41d214(ExceptionList_2, nullptr)
                    
                    *(ebp - 0x18) = SelectObject(*(ebp - 0xc), ExceptionList_2)
                    
                    if (arg2 != 0)
                        SelectPalette(*(ebp - 0xc), arg2, 0)
                        RealizePalette(*(ebp - 0xc))
                        SelectPalette(*(ebp - 0x10), arg2, 0)
                        RealizePalette(*(ebp - 0x10))
                    
                    COLORREF color = SetBkColor(*(ebp - 0xc), arg3)
                    BitBlt(*(ebp - 0x10), 0, 0, *(ebp - 0x6c), *(ebp - 0x68), *(ebp - 0xc), 0, 0, 
                        SRCCOPY)
                    SetBkColor(*(ebp - 0xc), color)
                    
                    if (*(ebp - 0x18) != 0)
                        SelectObject(*(ebp - 0xc), *(ebp - 0x18))
                    
                    if (*(ebp - 0x11) != 0)
                        DeleteObject(ExceptionList_2)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    int32_t var_90_5 = 0x41da8e
                    return DeleteDC(*(ebp - 0xc))
                
                enum ROP_CODE rop = BLACKNESS
                int32_t h = *(ebp - 0x68)
                ExceptionList = *(ebp - 0x6c)
                PatBlt(*(ebp - 0x10), 0, 0, ExceptionList, h, rop)
                
                if (*(ebp - 0x1c) != 0)
                    SelectObject(*(ebp - 0x10), *(ebp - 0x1c))
            
            BOOL eax_37 = 0
            fsbase->NtTib.ExceptionList = ExceptionList_1
            int32_t var_84_2 = 0x41dad6
            
            if (*(ebp - 0x10) != 0)
                eax_37 = DeleteDC(*(ebp - 0x10))
            
            if (*(ebp - 8) == 0)
                return eax_37
            
            HDC hDC = *(ebp - 8)
            ExceptionList_1 = nullptr
            return ReleaseDC(ExceptionList_1, hDC)
    
    return var_8
}
