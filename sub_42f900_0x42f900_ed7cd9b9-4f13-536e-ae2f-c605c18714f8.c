// ============================================================
// 函数名称: sub_42f900
// 虚拟地址: 0x42f900
// WARP GUID: ed7cd9b9-4f13-536e-ae2f-c605c18714f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: BeginPaint, SelectObject, DeleteObject, DeleteDC, ReleaseDC, CreateCompatibleDC, BitBlt, EndPaint, CreateCompatibleBitmap, GetDC
// [内部子函数调用]: sub_42f900, sub_42c754, sub_42f578, sub_42e838, sub_4318d0
// [被调用的父级函数]: sub_42f900, sub_426204, sub_445088, sub_43327c
// ============================================================

BOOL __convention("regparm")sub_42f900(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: HDC ebp
    HDC ebp
    HDC var_4 = ebp
    int32_t* ebp_1 = &var_4
    
    if (arg1[0x7a].b == 0 || *(arg2 + 4) != 0)
        int32_t eax_1
        
        if ((*(arg1 + 0x45) & 1) == 0)
            eax_1 = sub_42e838(arg1)
        
        void* result
        
        if ((*(arg1 + 0x45) & 1) != 0 || eax_1 != 0)
            result, ebp_1 = sub_42f578(arg1, arg2)
        else
            result = (*(*arg1 - 0x10))()
        
        *ebp_1
        return result
    
    HDC eax_4 = GetDC(nullptr)
    (*(*arg1 + 0x40))()
    int32_t var_54
    PAINTSTRUCT var_50
    var_50.rgbReserved[0x10] = var_54.b
    var_50.rgbReserved[0x11] = var_54:1.b
    var_50.rgbReserved[0x12] = var_54:2.b
    var_50.rgbReserved[0x13] = var_54:3.b
    (*(*arg1 + 0x40))(var_50.rgbReserved[0x10].d)
    int32_t var_68
    var_50.rgbReserved[0xc] = var_68.b
    var_50.rgbReserved[0xd] = var_68:1.b
    var_50.rgbReserved[0xe] = var_68:2.b
    var_50.rgbReserved[0xf] = var_68:3.b
    var_50.rgbReserved[8] = eax_4.b
    var_50.rgbReserved[9] = eax_4:1.b
    var_50.rgbReserved[0xa] = eax_4:2.b
    var_50.rgbReserved[0xb] = eax_4:3.b
    HBITMAP eax_9 = CreateCompatibleBitmap(var_50.rgbReserved[8].d, var_50.rgbReserved[0xc].d)
    var_50.rgbReserved[0x10] = eax_4.b
    var_50.rgbReserved[0x11] = eax_4:1.b
    var_50.rgbReserved[0x12] = eax_4:2.b
    var_50.rgbReserved[0x13] = eax_4:3.b
    var_50.rgbReserved[0xc] = 0
    var_50.rgbReserved[0xd] = 0
    var_50.rgbReserved[0xe] = 0
    var_50.rgbReserved[0xf] = 0
    ReleaseDC(var_50.rgbReserved[0xc].d, var_50.rgbReserved[0x10].d)
    var_50.rgbReserved[0x10] = 0
    var_50.rgbReserved[0x11] = 0
    var_50.rgbReserved[0x12] = 0
    var_50.rgbReserved[0x13] = 0
    HDC hdc = CreateCompatibleDC(var_50.rgbReserved[0x10].d)
    var_50.rgbReserved[0x10] = eax_9.b
    var_50.rgbReserved[0x11] = eax_9:1.b
    var_50.rgbReserved[0x12] = eax_9:2.b
    var_50.rgbReserved[0x13] = eax_9:3.b
    var_50.rgbReserved[0xc] = hdc.b
    var_50.rgbReserved[0xd] = hdc:1.b
    var_50.rgbReserved[0xe] = hdc:2.b
    var_50.rgbReserved[0xf] = hdc:3.b
    HGDIOBJ var_10 = SelectObject(var_50.rgbReserved[0xc].d, var_50.rgbReserved[0x10].d)
    var_50.rgbReserved[0x10].d = &var_4
    var_50.rgbReserved[0xc] = 0x52
    var_50.rgbReserved[0xd] = 0xfa
    var_50.rgbReserved[0xe] = 0x42
    var_50.rgbReserved[0xf] = 0
    TEB* fsbase
    var_50.rgbReserved[8] = fsbase->NtTib.ExceptionList.b
    var_50.rgbReserved[9] = fsbase->NtTib.ExceptionList:1.b
    var_50.rgbReserved[0xa] = fsbase->NtTib.ExceptionList:2.b
    var_50.rgbReserved[0xb] = fsbase->NtTib.ExceptionList:3.b
    var_28
    fsbase->NtTib.ExceptionList = &var_28
    var_50.rgbReserved[4].d = &var_50
    int32_t eax_14 = sub_4318d0(arg1)
    var_50.rgbReserved[0] = eax_14.b
    var_50.rgbReserved[1] = eax_14:1.b
    var_50.rgbReserved[2] = eax_14:2.b
    var_50.rgbReserved[3] = eax_14:3.b
    HDC eax_15 = BeginPaint(var_50.rgbReserved[0].d, var_50.rgbReserved[4].d)
    var_50.rgbReserved[4] = hdc.b
    var_50.rgbReserved[5] = hdc:1.b
    var_50.rgbReserved[6] = hdc:2.b
    var_50.rgbReserved[7] = hdc:3.b
    sub_42c754(arg1, var_50.rgbReserved[4].d)
    *(arg2 + 4) = hdc
    sub_42f900(var_50.rgbReserved[8].d, var_50.rgbReserved[0xc].d, var_50.rgbReserved[0x10].d)
    *(arg2 + 4) = 0
    var_50.rgbReserved[0x10] = 0x20
    var_50.rgbReserved[0x11] = 0
    var_50.rgbReserved[0x12] = 0xcc
    var_50.rgbReserved[0x13] = 0
    var_50.rgbReserved[0xc] = 0
    var_50.rgbReserved[0xd] = 0
    var_50.rgbReserved[0xe] = 0
    var_50.rgbReserved[0xf] = 0
    var_50.rgbReserved[8] = 0
    var_50.rgbReserved[9] = 0
    var_50.rgbReserved[0xa] = 0
    var_50.rgbReserved[0xb] = 0
    var_50.rgbReserved[4] = hdc.b
    var_50.rgbReserved[5] = hdc:1.b
    var_50.rgbReserved[6] = hdc:2.b
    var_50.rgbReserved[7] = hdc:3.b
    (*(*arg1 + 0x40))(var_50.rgbReserved[4].d, var_50.rgbReserved[8].d, var_50.rgbReserved[0xc].d, 
        var_50.rgbReserved[0x10].d)
    var_50.rgbReserved[0x10] = var_54.b
    var_50.rgbReserved[0x11] = var_54:1.b
    var_50.rgbReserved[0x12] = var_54:2.b
    var_50.rgbReserved[0x13] = var_54:3.b
    (*(*arg1 + 0x40))(var_50.rgbReserved[0x10].d)
    var_50.rgbReserved[0x10] = var_68.b
    var_50.rgbReserved[0x11] = var_68:1.b
    var_50.rgbReserved[0x12] = var_68:2.b
    var_50.rgbReserved[0x13] = var_68:3.b
    var_50.rgbReserved[0xc] = 0
    var_50.rgbReserved[0xd] = 0
    var_50.rgbReserved[0xe] = 0
    var_50.rgbReserved[0xf] = 0
    var_50.rgbReserved[8] = 0
    var_50.rgbReserved[9] = 0
    var_50.rgbReserved[0xa] = 0
    var_50.rgbReserved[0xb] = 0
    var_50.rgbReserved[4] = eax_15.b
    var_50.rgbReserved[5] = eax_15:1.b
    var_50.rgbReserved[6] = eax_15:2.b
    var_50.rgbReserved[7] = eax_15:3.b
    BitBlt(var_50.rgbReserved[4].d, var_50.rgbReserved[8].d, var_50.rgbReserved[0xc].d, 
        var_50.rgbReserved[0x10].d)
    HDC lpPaint = &var_50
    HWND hWnd = sub_4318d0(arg1)
    EndPaint(hWnd, lpPaint)
    fsbase->NtTib.ExceptionList = hdc
    __return_addr = &data_42fa59
    var_4 = hWnd
    SelectObject(hdc, var_4)
    var_4 = hdc
    DeleteDC(var_4)
    var_4 = lpPaint
    return DeleteObject(var_4)
}
