// ============================================================
// 函数名称: sub_423918
// 虚拟地址: 0x423918
// WARP GUID: d6374f8f-9741-5499-9423-5cf2411674e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OffsetRect, DrawTextA
// [内部子函数调用]: sub_404078, sub_423a65, sub_404080, sub_419a60, sub_4188ec, sub_40423c, sub_419b40, sub_42d69c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_423918(int32_t* arg1, RECT* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t esi = arg3
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x88))(ExceptionList, var_1c, var_18)
    
    if ((esi & 0x400) != 0)
        if (var_8 == 0)
            sub_404080(&var_8, sub_423a7f+5)
        else if (arg1[0x4c].b != 0 && *var_8 == 0x26 && var_8[1] == 0)
            sub_404080(&var_8, sub_423a7f+5)
    
    if (arg1[0x4c].b == 0)
        esi |= 0x800
    
    enum DRAW_TEXT_FORMAT format = sub_42d69c(arg1, esi)
    arg1[0x16]
    sub_419a60(arg1[0x48])
    
    if ((*(*arg1 + 0x4c))() != 0)
        int32_t cchText_2 = sub_404078(var_8)
        uint8_t* lpchText_2 = sub_40423c(var_8)
        DrawTextA(sub_419b40(arg1[0x48]), lpchText_2, cchText_2, arg2, format)
    else
        OffsetRect(arg2, 1, 1)
        sub_4188ec(*(arg1[0x48] + 0xc), 0x80000014)
        int32_t cchText = sub_404078(var_8)
        uint8_t* lpchText = sub_40423c(var_8)
        DrawTextA(sub_419b40(arg1[0x48]), lpchText, cchText, arg2, format)
        OffsetRect(arg2, 0xffffffff, 0xffffffff)
        sub_4188ec(*(arg1[0x48] + 0xc), 0x80000010)
        int32_t cchText_1 = sub_404078(var_8)
        uint8_t* lpchText_1 = sub_40423c(var_8)
        DrawTextA(sub_419b40(arg1[0x48]), lpchText_1, cchText_1, arg2, format)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_423a75
    return sub_423a65(&var_4) __tailcall
}
