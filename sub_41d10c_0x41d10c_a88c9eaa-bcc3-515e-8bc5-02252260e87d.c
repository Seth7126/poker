// ============================================================
// 函数名称: sub_41d10c
// 虚拟地址: 0x41d10c
// WARP GUID: a88c9eaa-bcc3-515e-8bc5-02252260e87d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject, DeleteDC, ReleaseDC, CreateCompatibleDC, SetDIBColorTable, GetDC
// [内部子函数调用]: sub_41a6cc
// [被调用的父级函数]: sub_41efb4, sub_41ef18
// ============================================================

void __convention("regparm")sub_41d10c(uint32_t arg1, HGDIOBJ arg2, void* arg3)
{
    // 第一条实际指令: HGDIOBJ h_1 = arg1
    HGDIOBJ h_1 = arg1
    
    if (h_1 == 0 || *(arg3 + 0x26) u> 8)
        return 
    
    void prgbq
    arg1 = sub_41a6cc(arg2, &prgbq, 0xff)
    
    if (arg1 == 0)
        return 
    
    HDC eax_1 = GetDC(nullptr)
    HDC hdc = CreateCompatibleDC(eax_1)
    HGDIOBJ h = SelectObject(hdc, h_1)
    int32_t __saved_ebp
    int32_t* var_420_3 = &__saved_ebp
    int32_t (* var_424_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    SetDIBColorTable(hdc, 0, arg1, &prgbq)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_420_4 = 0x41d1c2
    ExceptionList = hdc
    SelectObject(ExceptionList, h)
    DeleteDC(hdc)
    ExceptionList = nullptr
    ReleaseDC(ExceptionList, eax_1)
}
