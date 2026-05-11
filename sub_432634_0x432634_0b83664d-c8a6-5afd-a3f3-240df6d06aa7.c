// ============================================================
// 函数名称: sub_432634
// 虚拟地址: 0x432634
// WARP GUID: 0b83664d-c8a6-5afd-a3f3-240df6d06aa7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IntersectClipRect, GetWindowRect, ExcludeClipRect, GetWindowLongA, GetWindowDC, GetClientRect, OffsetRect, InflateRect, FillRect, MapWindowPoints, DrawEdge, ReleaseDC
// [内部子函数调用]: sub_4190f0, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_432634(int32_t* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x125) == 0 && arg1[0x4b] u<= 0)
    if (*(arg1 + 0x125) == 0 && arg1[0x4b] u<= 0)
        return (*(*arg1 - 0x10))()
    
    HWND hWnd = sub_4318d0(arg1)
    HDC hdc = GetWindowDC(hWnd)
    int32_t __saved_ebp
    hWnd = &__saved_ebp
    int32_t (* var_54)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    RECT var_20
    GetClientRect(sub_4318d0(arg1), &var_20)
    int32_t var_30
    GetWindowRect(sub_4318d0(arg1), &var_30)
    MapWindowPoints(nullptr, sub_4318d0(arg1), &var_30, 2)
    int32_t top
    OffsetRect(&var_20, neg.d(var_30), neg.d(top))
    ExcludeClipRect(hdc, var_20.left, var_20.top, var_20.right, var_20.bottom)
    void var_40
    __builtin_memcpy(&var_40, &var_30, 0x10)
    int32_t eax_20 = arg1[0x4b]
    InflateRect(&var_20, eax_20, eax_20)
    __builtin_memcpy(&var_30, &var_20, 0x10)
    int32_t right
    int32_t bottom
    
    if (*(arg1 + 0x125) != 0)
        int32_t ebx_1 = 0
        
        if (*(arg1 + 0x123) != 0)
            ebx_1 = arg1[0x4a]
        
        if (arg1[0x49].b != 0)
            ebx_1 += arg1[0x4a]
        
        int32_t eax_28 = GetWindowLongA(sub_4318d0(arg1), 0xfffffff0)
        
        if ((*(arg1 + 0x122) & 1) != 0)
            var_30 -= ebx_1
        
        if ((*(arg1 + 0x122) & 2) != 0)
            top -= ebx_1
        
        if ((*(arg1 + 0x122) & 4) != 0)
            right += ebx_1
        
        if ((eax_28 & 0x200000) != 0)
            right += (*data_5302cc)(0x14)
        
        if ((*(arg1 + 0x122) & 8) != 0)
            bottom += ebx_1
        
        if ((eax_28 & 0x100000) != 0)
            bottom += (*data_5302cc)(0x15)
        
        DrawEdge(hdc, &var_30, 
            *((zx.d(*(arg1 + 0x123)) << 2) + &data_52e80c)
                | *((zx.d(arg1[0x49].b) << 2) + &data_52e81c), 
            zx.d(*(arg1 + 0x122)) | *((zx.d(*(arg1 + 0x125)) << 2) + &data_52e82c)
            | *((zx.d(arg1[0x4e].b) << 2) + &data_52e83c) | 0x2000)
    
    IntersectClipRect(hdc, var_30, top, right, bottom)
    __builtin_memcpy(&var_30, &var_40, 0x10)
    OffsetRect(&var_30, neg.d(var_30), neg.d(top))
    HBRUSH hbr
    void* ebp
    hbr, ebp = sub_4190f0(arg1[0x4c])
    FillRect(*(ebp - 0xc), ebp - 0x2c, hbr)
    fsbase->NtTib.ExceptionList = ExceptionList
    hWnd = 0x4328aa
    HDC hDC = *(ebp - 0xc)
    ExceptionList = sub_4318d0(*(ebp - 4))
    return ReleaseDC(ExceptionList, hDC)
}
