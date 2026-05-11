// ============================================================
// 函数名称: sub_41ade8
// 虚拟地址: 0x41ade8
// WARP GUID: 28e057f1-c8be-52f3-9431-ae8cb6769614
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDIBits, RealizePalette, DeleteDC, CreateCompatibleDC, SelectPalette
// [内部子函数调用]: sub_41ac98
// [被调用的父级函数]: sub_41ae98, sub_41aebc
// ============================================================

BOOL __convention("regparm")sub_41ade8(HBITMAP arg1, HPALETTE arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    sub_41ac98(arg1, arg3, arg4)
    HPALETTE ExceptionList_1 = nullptr
    HDC hdc = CreateCompatibleDC(nullptr)
    int32_t* var_20_1 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 != 0)
        ExceptionList_1 = SelectPalette(hdc, arg2, 0)
        RealizePalette(hdc)
    
    bool var_5 = GetDIBits(hdc, arg1, 0, arg3[2], arg5, arg3, DIB_RGB_COLORS) != 0
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_20_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41ae8c
    
    if (ExceptionList_1 != 0)
        BOOL bForceBkgd = 0
        ExceptionList = ExceptionList_1
        SelectPalette(hdc, ExceptionList, bForceBkgd)
    
    return DeleteDC(hdc)
}
