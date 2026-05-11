// ============================================================
// 函数名称: sub_41a720
// 虚拟地址: 0x41a720
// WARP GUID: 9032b7ba-f853-5a38-b8dd-ee5edab9fdd9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject, CreateDIBitmap, GetDC
// [内部子函数调用]: sub_419f48, sub_41a0c8, sub_419e3c, sub_41a0a8, sub_419f38
// [被调用的父级函数]: sub_41aa68
// ============================================================

BOOL __convention("regparm")sub_41a720(BITMAPINFOHEADER* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t ecx
    int32_t var_c = ecx
    arg1->biHeight u>>= 1
    arg1->biSizeImage = sub_41a0c8(arg1->biWidth, zx.d(arg1->biBitCount), 0x20) * arg1->biHeight
    BITMAPINFOHEADER* eax_5
    eax_5.w = arg1->biBitCount
    int32_t eax_6 = sub_41a0a8(eax_5.w)
    HDC hdc = GetDC(nullptr)
    
    if (hdc == 0)
        sub_419e3c()
        noreturn
    
    int32_t* var_28_1 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    BITMAPINFO* pbmi = arg1
    enum DIB_USAGE iUsage = DIB_RGB_COLORS
    void* ExceptionList = &(&pbmi->bmiColors)[eax_6]
    HBITMAP eax_13 = CreateDIBitmap(hdc, arg1, 4, ExceptionList, pbmi, iUsage)
    sub_419f38(eax_13)
    int32_t* var_34 = &var_4
    int32_t (* var_38_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_15
    void* ebp_1
    eax_15, ebp_1 = sub_419f48(eax_13, arg3, 0)
    *arg2 = eax_15
    fsbase->NtTib.ExceptionList = ExceptionList
    BOOL (* var_34_1)(void* arg1 @ ebp) = sub_41a7f9
    return DeleteObject(*(ebp_1 - 0xc))
}
