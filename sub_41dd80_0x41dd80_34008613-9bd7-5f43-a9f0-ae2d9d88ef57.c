// ============================================================
// 函数名称: sub_41dd80
// 虚拟地址: 0x41dd80
// WARP GUID: 34008613-9bd7-5f43-a9f0-ae2d9d88ef57
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: StretchBlt, SelectObject, RealizePalette, SetBrushOrgEx, DeleteDC, GetDeviceCaps, CreateCompatibleDC, SetStretchBltMode, GetBrushOrgEx, SelectPalette
// [内部子函数调用]: sub_41e04c, sub_41e100, sub_41e3e0, sub_41a0dc, sub_419c14, sub_41e440, sub_419f38, sub_419b40
// [被调用的父级函数]: 无
// ============================================================

HPALETTE __convention("regparm")sub_41dd80(HPALETTE arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: BOOL bForceBkgd_2
    BOOL bForceBkgd_2
    BOOL bForceBkgd_1 = bForceBkgd_2
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t* var_8 = arg2
    void* esi_1 = arg1
    arg2.b = 0xf
    sub_419c14(var_8, arg2.b)
    sub_41e440(arg1)
    int32_t var_c = 0
    char var_d = 0
    HPALETTE hPal = *(esi_1 + 0x10)
    HDC var_38
    
    if (hPal != 0)
        BOOL bForceBkgd = 0xffffffff
        var_38 = var_8[1]
        HPALETTE var_c_1 = SelectPalette(var_38, hPal, bForceBkgd)
        RealizePalette(var_8[1])
        var_d = 1
    
    int32_t eax_9 = GetDeviceCaps(var_8[1], 0xc)
    int32_t index = 0xe
    var_38 = var_8[1]
    int32_t edx_1 = eax_9 * GetDeviceCaps(var_38, index)
    int32_t eax_13
    
    if (edx_1 s> 8 || edx_1 s>= zx.d(*(esi_1 + 0x2a)) * zx.d(*(esi_1 + 0x28)))
        eax_13 = 0
    else
        eax_13.b = 1
    
    POINT lppt_1
    
    if (eax_13.b == 0)
        if (sub_41e100(arg1) == 0)
            SetStretchBltMode(sub_419b40(var_8), COLORONCOLOR)
    else
        GetBrushOrgEx(var_8[1], &lppt_1)
        SetStretchBltMode(var_8[1], HALFTONE)
        POINT* lppt = &lppt_1
        int32_t y = lppt_1.y
        var_38 = lppt_1.x
        SetBrushOrgEx(var_8[1], var_38, y, lppt)
    
    int32_t* var_30_7 = &bForceBkgd_1
    int32_t (* var_34_7)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    var_38 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &var_38
    
    if ((*(arg1->unused + 0x28))(var_38, var_34_7, var_30_7) != 0)
        sub_41e3e0(arg1)
    
    sub_419c14(sub_41e04c(arg1), 0xf)
    
    if ((*(arg1->unused + 0x28))(var_8) == 0)
        enum ROP_CODE eax_51 = var_8[8]
        int32_t hSrc = *(esi_1 + 0x20)
        lppt_1.y = *(esi_1 + 0x1c)
        lppt_1.x = 0
        int32_t xSrc = 0
        HDC hdcSrc = *(sub_41e04c(arg1) + 4)
        StretchBlt(var_8[1], *arg3, arg3[1], arg3[2] - *arg3, arg3[3] - arg3[1], hdcSrc, xSrc, 
            lppt_1.x, lppt_1.y, hSrc, eax_51)
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = sub_41dfc4
        
        if (var_d == 0)
            return nullptr
        
        bForceBkgd_1 = 0xffffffff
        return SelectPalette(*(eax_51 + 4), eax_51, bForceBkgd_1)
    
    int32_t var_20 = 0
    int32_t var_1c = 0
    int32_t* var_c_2 = &bForceBkgd_1
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    lppt_1.y = fsbase->NtTib.ExceptionList
    var_14
    fsbase->NtTib.ExceptionList = &var_14
    lppt_1.x = 0
    HDC hdc = CreateCompatibleDC(lppt_1.x)
    sub_419f38(hdc)
    lppt_1.x = *(esi_1 + 0xc)
    HGDIOBJ var_20_1 = SelectObject(hdc, lppt_1.x)
    lppt_1.x = arg3[2] - *arg3
    int32_t eax_38 = arg3[3] - arg3[1]
    HDC eax_41 = *(sub_41e04c(arg1) + 4)
    int32_t var_24_1 = 0
    int32_t var_28_1 = 0
    int32_t eax_42 = *(esi_1 + 0x1c)
    int32_t eax_43 = *(esi_1 + 0x20)
    HDC var_34_8 = eax_38
    var_38 = nullptr
    void* ebp = sub_41a0dc(var_8[1], *arg3, arg3[1], 0, var_38, var_34_8, eax_43, eax_42, var_28_1, 
        var_24_1, eax_41, eax_38, lppt_1.x)
    HGDIOBJ result = nullptr
    fsbase->NtTib.ExceptionList = 0
    int32_t var_34_9 = 0x41df97
    
    if (*(ebp - 0x1c) != 0)
        var_38 = *(ebp - 0x1c)
        result = SelectObject(*(ebp - 0x18), var_38)
    
    if (*(ebp - 0x18) == 0)
        return result
    
    var_38 = *(ebp - 0x18)
    return DeleteDC(var_38)
}
