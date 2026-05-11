// ============================================================
// 函数名称: sub_41e6c8
// 虚拟地址: 0x41e6c8
// WARP GUID: cb881c54-6ef4-5aec-9986-964fe5172967
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateDIBitmap, SelectObject, CreateDIBSection, RealizePalette, DeleteObject, GetLastError, CreateCompatibleDC, ReleaseDC, SelectPalette, CreateCompatibleBitmap, GetDC
// [内部子函数调用]: sub_402d00, sub_419e18, sub_41a0c8, sub_41a628, sub_4030a0, sub_41a0a8, sub_412968, sub_41a370, sub_419f38, sub_402754, sub_40c7bc, sub_4128f8
// [被调用的父级函数]: sub_41ebd8
// ============================================================

int32_t __convention("regparm")sub_41e6c8(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t (* ebp)()
    int32_t (* ebp)()
    int32_t (* var_4)() = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_a4 = ebx
    int32_t esi
    int32_t var_a8 = esi
    int32_t edi
    int32_t var_ac = edi
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = arg1
    int32_t var_34 = 0
    HDC ExceptionList = nullptr
    int32_t var_3c = 0
    (*(*arg2 + 4))()
    int32_t var_24
    bool var_25 = var_24 == 0xc
    
    if (var_25 != 0)
        var_24 = 0x28
    
    void* eax_4 = sub_402754(var_24 + 0x40c)
    int32_t* arg_c = &var_4
    int32_t (* arg_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_4 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_4
    __return_addr = &var_4
    var_4 = j_sub_40353c
    ExceptionList_3 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_3
    int16_t hdc
    int32_t esi_2
    
    if (var_25 == 0)
        int32_t ecx_4
        int32_t edx_4
        edx_4, ecx_4 = (*(*arg2 + 4))()
        esi_2 = arg3 - var_24
        int32_t eax_11 = *(eax_4 + 0x10)
        
        if (eax_11 != 3 && eax_11 != 0)
            edx_4.b = 1
            int32_t* eax_13 = sub_4030a0(ecx_4, edx_4)
            (*(*eax_13 + 8))()
            (*(*eax_13 + 8))()
            int32_t ecx_9
            ecx_9, ebp_1 = sub_412968(eax_13, arg2, esi_2)
            ecx_9.w = 2
            (*(*ebp_1[-0xe] + 0xc))()
            ebp_1[-2] = ebp_1[-0xe]
    else
        (*(*arg2 + 4))()
        sub_402d00(eax_4, 0x28, 0)
        int16_t var_48
        *(eax_4 + 4) = zx.d(var_48)
        int16_t var_46
        *(eax_4 + 8) = zx.d(var_46)
        uint32_t edx_1
        edx_1.w = hdc
        *(eax_4 + 0xc) = edx_1.w
        int16_t var_42
        edx_1.w = var_42
        *(eax_4 + 0xe) = edx_1.w
        esi_2 = arg3 - 0xc
    
    int32_t* ebx_8 = ebp_1[-0xf]
    *ebx_8 = ebp_1[-8]
    ebp_1[-7] = ebp_1[-6] + ebp_1[-8]
    
    if (ebx_8[3].w != 1)
        sub_419e18()
        noreturn
    
    int32_t eax_21
    
    if (ebp_1[-8] == 0x28)
        eax_21.w = *(ebx_8 + 0xe)
        
        if ((eax_21.w == 0x10 || eax_21.w == 0x20) && ebx_8[4] == 3)
            sub_4128f8(ebp_1[-2], ebp_1[-7], 0xc)
            ebp_1[-7] += 0xc
            esi_2 -= 0xc
    
    if (ebx_8[8] == 0)
        eax_21.w = *(ebx_8 + 0xe)
        ebx_8[8] = sub_41a0a8(eax_21.w)
    
    uint32_t edi_1 = zx.d(*(ebp_1 - 0x21))
    int32_t eax_24
    eax_24.b = *(edi_1 + 0x52e628)
    sub_4128f8(ebp_1[-2], ebp_1[-7], ebx_8[8] * eax_24)
    int32_t edx_11
    edx_11.b = *(edi_1 + 0x52e628)
    int32_t esi_3 = esi_2 - ebx_8[8] * edx_11
    
    if (ebx_8[5] == 0)
        int32_t eax_29 = sub_41a0c8(ebx_8[1], zx.d(*(ebx_8 + 0xe)), 0x20)
        int32_t eax_31
        int32_t edx_13
        edx_13:eax_31 = sx.q(ebx_8[2])
        ebx_8[5] = eax_29 * ((eax_31 ^ edx_13) - edx_13)
    
    int32_t eax_34 = ebx_8[5]
    
    if (esi_3 u> eax_34)
        esi_3 = eax_34
    
    if (*(ebp_1 - 0x21) != 0)
        sub_41a370(ebp_1[-7])
    
    HDC eax_36 = GetDC(nullptr)
    sub_419f38(eax_36)
    ebp_1[-3] = eax_36
    int32_t* var_c_2 = ebp_1
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    int32_t eax_38 = *(ebp_1[-0xf] + 0x10)
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
    
    if ((eax_38 == 0 || eax_38 == 3) && data_52e3e8 == 0)
        uint32_t offset = 0
        HANDLE hSection = nullptr
        ExceptionList_1 = &ebp_1[-5]
        enum DIB_USAGE usage = DIB_RGB_COLORS
        BITMAPINFO* pbmi = ebp_1[-6]
        ExceptionList = ebp_1[-3]
        ebp_1[-0xa] = CreateDIBSection(ExceptionList, pbmi, usage, ExceptionList_1, hSection, offset)
        
        if (ebp_1[-0xa] == 0 || ebp_1[-5] == 0)
            if (GetLastError() != NO_ERROR)
                sub_40c7bc()
                noreturn
            
            sub_419e18()
            noreturn
        
        int32_t* var_18_1 = ebp_1
        int32_t (* var_1c_2)() = j_sub_40353c
        ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        sub_4128f8(ebp_1[-2], ebp_1[-5], esi_3)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        fsbase->NtTib.ExceptionList = ExceptionList_2
        int32_t var_c_3 = 0x41eae4
        HDC hDC = ebp_1[-3]
        ExceptionList_2 = nullptr
        return ReleaseDC(ExceptionList_2, hDC)
    
    ebp_1[-4] = 0
    ebp_1[-5] = sub_402754(esi_3)
    int32_t* var_18 = ebp_1
    int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4128f8(ebp_1[-2], ebp_1[-5], esi_3)
    HDC eax_43 = CreateCompatibleDC(ebp_1[-3])
    sub_419f38(eax_43)
    ebp_1[-4] = eax_43
    int32_t cy = 1
    int32_t cx = 1
    ExceptionList = ebp_1[-3]
    HBITMAP h = CreateCompatibleBitmap(ExceptionList, cx, cy)
    ebp_1[-0xb] = SelectObject(ebp_1[-4], h)
    ebp_1[-0xd] = 0
    int32_t eax_48 = *(ebp_1[-0xf] + 0x20)
    
    if (eax_48 u> 0)
        ebp_1[-0xc] = sub_41a628(nullptr, ebp_1[-7], eax_48)
        BOOL bForceBkgd_1 = 0
        HPALETTE hPal = ebp_1[-0xc]
        ExceptionList = ebp_1[-4]
        ebp_1[-0xd] = SelectPalette(ExceptionList, hPal, bForceBkgd_1)
        RealizePalette(ebp_1[-4])
    
    int32_t* var_24_4 = ebp_1
    int32_t (* var_28_2)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    BITMAPINFO* eax_53 = ebp_1[-6]
    hdc.d = ebp_1[-4]
    ebp_1[-0xa] = CreateDIBitmap(hdc, eax_53, 4, ebp_1[-5], eax_53, DIB_RGB_COLORS)
    
    if (ebp_1[-0xa] == 0)
        if (GetLastError() != NO_ERROR)
            sub_40c7bc()
            noreturn
        
        sub_419e18()
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_5)(void* arg1 @ ebp, int32_t arg2, HGDIOBJ arg3, void* arg4, int32_t arg5, 
        int32_t arg6, int32_t* arg7, void* arg8) = sub_41ea20
    
    if (ebp_1[-0xd] != 0)
        BOOL bForceBkgd = 0xffffffff
        ExceptionList = ebp_1[-0xd]
        SelectPalette(ebp_1[-4], ExceptionList, bForceBkgd)
    
    HGDIOBJ h_1 = ebp_1[-0xb]
    ExceptionList = ebp_1[-4]
    return DeleteObject(SelectObject(ExceptionList, h_1))
}
