// ============================================================
// 函数名称: sub_41d214
// 虚拟地址: 0x41d214
// WARP GUID: e5bf5be4-75bf-529e-b1f2-c2644ddc11ed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject, DeleteDC, GetDeviceCaps, BitBlt, CreateBitmap, GetDC, GetDIBits, CreateDIBSection, PatBlt, GetObjectA, FillRect, CreateCompatibleDC, SetDIBColorTable, SelectPalette, SetBkColor, CreateCompatibleBitmap, GetDIBColorTable, RealizePalette, SetTextColor
// [内部子函数调用]: sub_402980, sub_419e18, sub_41cdd0, sub_4038c8, sub_4190f0, sub_41a6cc, sub_40faac, sub_419f38, sub_402754, sub_41842c, sub_41d1c8, sub_40276c, sub_4190b4, sub_419e90
// [被调用的父级函数]: sub_41ef18, sub_41e26c, sub_41f454, sub_41ed0c, sub_41d8d4, sub_41dc74
// ============================================================

HPALETTE __stdcallsub_41d214(int32_t arg1 @ eax, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ecx
    int32_t var_10 = ecx
    int32_t edx
    int32_t var_c = edx
    int32_t var_14 = 0
    
    if (*(arg2 + 0x18) == 0)
    label_41d254:
        
        if (*(arg2 + 0x18) != 0)
        label_41d277:
            ebp_1 = sub_41cdd0(arg1)
            ebp_1[-0x1c] = 0
            HGDIOBJ ExceptionList_4
            
            if (ebp_1[-1] != 0)
                int32_t c = 0x54
                ExceptionList_4 = ebp_1[-1]
                
                if (GetObjectA(ExceptionList_4, c, &ebp_1[-0x22]) s< 0x18)
                    sub_419e18()
                    noreturn
            
            HDC eax_10 = GetDC(nullptr)
            sub_419f38(eax_10)
            ebp_1[-6] = eax_10
            HDC eax_12 = CreateCompatibleDC(ebp_1[-6])
            sub_419f38(eax_12)
            ebp_1[-7] = eax_12
            int32_t* var_ac_4 = ebp_1
            int32_t (* var_b0_1)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            ExceptionList_4 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_4
            HBITMAP ExceptionList_1
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
            uint32_t ExceptionList_3
            
            if (*(ebp_1[3] + 0x18) u< 0x28)
                void* eax_14
                eax_14.w = *(ebp_1[3] + 0x10)
                eax_14.w |= *(ebp_1[3] + 0x12)
                
                if (eax_14.w != 1)
                    int32_t cy = *(ebp_1[3] + 8)
                    int32_t cx = *(ebp_1[3] + 4)
                    ExceptionList_3 = ebp_1[-6]
                    HBITMAP eax_23 = CreateCompatibleBitmap(ExceptionList_3, cx, cy)
                    sub_419f38(eax_23)
                    ebp_1[-4] = eax_23
                else
                    int32_t lpBits = 0
                    uint32_t nBitCount = 1
                    ExceptionList_3 = 1
                    HBITMAP eax_19 = CreateBitmap(*(ebp_1[3] + 4), *(ebp_1[3] + 8), ExceptionList_3, 
                        nBitCount, lpBits)
                    sub_419f38(eax_19)
                    ebp_1[-4] = eax_19
                
                sub_419f38(ebp_1[-4])
                HGDIOBJ eax_88 = SelectObject(ebp_1[-7], ebp_1[-4])
                sub_419f38(eax_88)
                ebp_1[-5] = eax_88
                int32_t* var_b8_5 = ebp_1
                int32_t (* var_bc_4)() = j_sub_40353c
                ExceptionList_3 = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList_3
                int32_t* var_c4_7 = ebp_1
                int32_t (* var_c8_8)(void* arg1, void* arg2) = j_sub_4037f0
                ExceptionList_2 = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList_2
                ebp_1[-0xd] = 0
                HPALETTE hPal_1 = nullptr
                
                if (ebp_1[-3] != 0)
                    BOOL bForceBkgd_1 = 0
                    HPALETTE hPal = ebp_1[-3]
                    ExceptionList_1 = ebp_1[-7]
                    ebp_1[-0xd] = SelectPalette(ExceptionList_1, hPal, bForceBkgd_1)
                    RealizePalette(ebp_1[-7])
                
                int32_t* var_d0_5 = ebp_1
                int32_t (* var_d4_3)(void* arg1, void* arg2) = j_sub_4037f0
                ExceptionList_1 = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList_1
                void* ExceptionList
                
                if (ebp_1[2] == 0)
                    enum ROP_CODE rop = WHITENESS
                    int32_t h = *(ebp_1[3] + 8)
                    ExceptionList = *(ebp_1[3] + 4)
                    PatBlt(ebp_1[-7], 0, 0, ExceptionList, h, rop)
                else
                    HBRUSH hbr
                    hbr, ebp_1 = sub_4190f0(*(ebp_1[2] + 0x14))
                    int32_t eax_95 = *(ebp_1[3] + 8)
                    ExceptionList = &ebp_1[-0x26]
                    sub_40faac(*(ebp_1[3] + 4), 0, 0, ExceptionList, eax_95)
                    ExceptionList = ebp_1[-7]
                    FillRect(ExceptionList, &ebp_1[-0x26], hbr)
                    COLORREF color = sub_41842c(*(*(ebp_1[2] + 0xc) + 0x18))
                    SetTextColor(ebp_1[-7], color)
                    COLORREF color_1 = sub_41842c(sub_4190b4(*(ebp_1[2] + 0x14)))
                    SetBkColor(ebp_1[-7], color_1)
                    
                    if (*(ebp_1[3] + 0x26) == 1 && *(ebp_1[3] + 0x14) != 0)
                        ebp_1[-0xc] = sub_41842c(*(*(ebp_1[2] + 0xc) + 0x18))
                        ebp_1[-0xb] = sub_41842c(sub_4190b4(*(ebp_1[2] + 0x14)))
                        RGBQUAD* prgbq = &ebp_1[-0xc]
                        uint32_t cEntries = 2
                        ExceptionList = nullptr
                        SetDIBColorTable(ebp_1[-7], ExceptionList, cEntries, prgbq)
                
                if (ebp_1[-1] == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList_1
                    int32_t (* var_d0_6)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, HGDIOBJ arg4, 
                        int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_41d7e1
                    
                    if (ebp_1[-3] == 0)
                        return nullptr
                    
                    BOOL bForceBkgd = 0xffffffff
                    ExceptionList_1 = ebp_1[-0xd]
                    return SelectPalette(ebp_1[-7], ExceptionList_1, bForceBkgd)
                
                HDC eax_124 = CreateCompatibleDC(ebp_1[-6])
                sub_419f38(eax_124)
                ebp_1[-8] = eax_124
                int32_t* var_dc_7 = ebp_1
                int32_t (* var_e0_5)(void* arg1, void* arg2) = j_sub_4037f0
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                HGDIOBJ h_1 = SelectObject(ebp_1[-8], ebp_1[-1])
                sub_419f38(h_1)
                
                if (ebp_1[-2] != 0)
                    hPal_1 = SelectPalette(ebp_1[-8], ebp_1[-2], 0)
                    RealizePalette(ebp_1[-8])
                
                if (ebp_1[2] != 0)
                    COLORREF color_2 = sub_41842c(*(*(ebp_1[2] + 0xc) + 0x18))
                    SetTextColor(ebp_1[-8], color_2)
                    COLORREF color_3 = sub_41842c(sub_4190b4(*(ebp_1[2] + 0x14)))
                    SetBkColor(ebp_1[-8], color_3)
                
                BitBlt(ebp_1[-7], 0, 0, *(ebp_1[3] + 4), *(ebp_1[3] + 8), ebp_1[-8], 0, 0, SRCCOPY)
                
                if (ebp_1[-2] != 0)
                    SelectPalette(ebp_1[-8], hPal_1, 0xffffffff)
                
                sub_419f38(SelectObject(ebp_1[-8], h_1))
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t var_dc_8 = 0x41d7b7
                return DeleteDC(ebp_1[-8])
            
            ebp_1[-9] = sub_402754(0x42c)
            int32_t* var_b8_2 = ebp_1
            int32_t (* var_bc_2)(void* arg1, void* arg2) = j_sub_4037f0
            ExceptionList_3 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_3
            *(ebp_1[3] + 0x18) = 0x28
            *(ebp_1[3] + 0x24) = 1
            
            if (*(ebp_1[3] + 0x26) == 0)
                *(ebp_1[3] + 0x26) = GetDeviceCaps(ebp_1[-6], 0xc) * GetDeviceCaps(ebp_1[-6], 0xe)
            
            __builtin_memcpy(ebp_1[-9], ebp_1[3] + 0x18, 0x28)
            *(ebp_1[3] + 4) = *(ebp_1[3] + 0x1c)
            *(ebp_1[3] + 8) = *(ebp_1[3] + 0x20)
            
            if (*(ebp_1[3] + 0x26) u> 8)
                void* eax_61
                eax_61.w = *(ebp_1[3] + 0x26)
                
                if (eax_61.w != 0x10)
                    ebp_1[3]
                
                if ((eax_61.w == 0x10 || eax_61.w == 0x20) && (*(ebp_1[3] + 0x28) & 3) != 0)
                    sub_41d1c8(ebp_1[3])
                    sub_402980(ebp_1[3] + 0x40, ebp_1[-9] + 0x28, 0xc)
            else if (*(ebp_1[3] + 0x26) == 1 && ebp_1[-0x1d] == 0)
                *(ebp_1[-9] + 0x28) = 0
                *(ebp_1[-9] + 0x2c) = 0xffffff
            else if (ebp_1[-3] != 0)
                sub_41a6cc(ebp_1[-3], ebp_1[-9] + 0x28, 0xff)
            else if (ebp_1[-1] != 0)
                ebp_1[-5] = SelectObject(ebp_1[-7], ebp_1[-1])
                
                if (ebp_1[-0x1c] u<= 0 || ebp_1[-0x1d] == 0)
                    enum DIB_USAGE usage_1 = DIB_RGB_COLORS
                    BITMAPINFO* lpbmi = ebp_1[-9]
                    ExceptionList_2 = nullptr
                    int32_t eax_54
                    int32_t edx_7
                    edx_7:eax_54 = sx.q(*(ebp_1[3] + 0x20))
                    uint32_t start = 0
                    ExceptionList_1 = ebp_1[-1]
                    GetDIBits(ebp_1[-7], ExceptionList_1, start, (eax_54 ^ edx_7) - edx_7, 
                        ExceptionList_2, lpbmi, usage_1)
                else
                    RGBQUAD* prgbq_1 = ebp_1[-9] + 0x28
                    uint32_t cEntries_1 = 0x100
                    ExceptionList_2 = nullptr
                    *(ebp_1[3] + 0x38) =
                        GetDIBColorTable(ebp_1[-7], ExceptionList_2, cEntries_1, prgbq_1)
                
                SelectObject(ebp_1[-7], ebp_1[-5])
            
            uint32_t offset = 0
            HANDLE hSection = nullptr
            ExceptionList_2 = &ebp_1[-0xa]
            enum DIB_USAGE usage = DIB_RGB_COLORS
            BITMAPINFO* pbmi = ebp_1[-9]
            ExceptionList_1 = ebp_1[-6]
            HBITMAP eax_69 =
                CreateDIBSection(ExceptionList_1, pbmi, usage, ExceptionList_2, hSection, offset)
            sub_419f38(eax_69)
            ebp_1[-4] = eax_69
            
            if (ebp_1[-0xa] == 0)
                sub_419e90()
                noreturn
            
            if (ebp_1[-1] == 0 || *(ebp_1[3] + 0x1c) != ebp_1[-0x21]
                    || *(ebp_1[3] + 0x20) != ebp_1[-0x20] || *(ebp_1[3] + 0x26) u<= 8)
                fsbase->NtTib.ExceptionList = ExceptionList_3
                int32_t var_b8_3 = 0x41d56d
                return sub_40276c(ebp_1[-9])
            
            enum DIB_USAGE usage_2 = DIB_RGB_COLORS
            BITMAPINFO* lpbmi_1 = ebp_1[-9]
            ExceptionList_2 = ebp_1[-0xa]
            int32_t eax_78
            int32_t edx_10
            edx_10:eax_78 = sx.q(*(ebp_1[3] + 0x20))
            uint32_t start_1 = 0
            ExceptionList_1 = ebp_1[-1]
            GetDIBits(ebp_1[-7], ExceptionList_1, start_1, (eax_78 ^ edx_10) - edx_10, ExceptionList_2, 
                lpbmi_1, usage_2)
            sub_4038c8(ExceptionList_3, var_bc_2)
            sub_4038c8(ExceptionList_4, var_b0_1)
        else if (*(arg2 + 4) != 0 && *(arg2 + 8) != 0)
            goto label_41d277
    else if (*(arg2 + 0x1c) != 0 && *(arg2 + 0x20) != 0)
        goto label_41d254
    
    *ebp_1
    return ebp_1[-4]
}
