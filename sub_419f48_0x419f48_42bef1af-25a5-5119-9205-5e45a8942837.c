// ============================================================
// 函数名称: sub_419f48
// 虚拟地址: 0x419f48
// WARP GUID: 42bef1af-25a5-5119-9205-5e45a8942837
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: StretchBlt, SelectObject, DeleteDC, GetObjectA, ReleaseDC, CreateCompatibleDC, CreateBitmap, CreateCompatibleBitmap, GetDC
// [内部子函数调用]: sub_419e90
// [被调用的父级函数]: sub_41a720, sub_41a7f9
// ============================================================

int32_t __convention("regparm")sub_419f48(HGDIOBJ arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_3c = ebx
    int32_t esi
    int32_t var_40 = esi
    int32_t edi
    int32_t var_44 = edi
    int32_t var_10 = *arg2
    int32_t var_c = arg2[1]
    HDC eax = CreateCompatibleDC(nullptr)
    HDC eax_1 = CreateCompatibleDC(nullptr)
    int32_t* var_48_2 = &var_4
    int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void var_38
    void* pv = &var_38
    int32_t c = 0x18
    HGDIOBJ ExceptionList = arg1
    GetObjectA(ExceptionList, c, pv)
    HBITMAP h
    
    if (arg3 == 0)
        HDC eax_6 = GetDC(nullptr)
        
        if (eax_6 == 0)
            sub_419e90()
            noreturn
        
        int32_t* var_54_1 = &var_4
        int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        h = CreateCompatibleBitmap(eax_6, var_10, var_c)
        
        if (h == 0)
            sub_419e90()
            noreturn
        
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_54_2 = 0x41a00c
        ExceptionList = nullptr
        return ReleaseDC(ExceptionList, eax_6)
    
    int32_t lpBits = 0
    uint32_t nBitCount = 1
    ExceptionList = 1
    h = CreateBitmap(var_10, var_c, ExceptionList, nBitCount, lpBits)
    
    if (h != 0)
        HGDIOBJ h_1 = SelectObject(eax, arg1)
        HGDIOBJ h_2 = SelectObject(eax_1, h)
        enum ROP_CODE rop = SRCCOPY
        HGDIOBJ ExceptionList_2
        ExceptionList = ExceptionList_2
        int32_t hSrc
        StretchBlt(eax_1, 0, 0, var_10, var_c, eax, 0, 0, ExceptionList, hSrc, rop)
        
        if (h_1 != 0)
            SelectObject(eax, h_1)
        
        if (h_2 != 0)
            SelectObject(eax_1, h_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_48_3)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41a09d
    DeleteDC(eax)
    return DeleteDC(eax_1)
}
