// ============================================================
// 函数名称: sub_41efec
// 虚拟地址: 0x41efec
// WARP GUID: 8fec4d81-69d8-5667-b6b9-68f3d6543c38
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, CreateHalftonePalette, DeleteObject, GetDC
// [内部子函数调用]: sub_402d00, sub_419e00, sub_41e130, sub_419f38, sub_41dc74
// [被调用的父级函数]: sub_52c7c8, sub_4d9a28, sub_453ff8, sub_4da10c, sub_453acc
// ============================================================

int32_t __convention("regparm")sub_41efec(int32_t arg1, char arg2)
{
    // 第一条实际指令: HPALETTE ho_2
    HPALETTE ho_2
    HPALETTE ho = ho_2
    char result
    int32_t edx
    result, edx = sub_41e130(arg1)
    
    if (arg2 == result)
        return result
    
    if (arg2 u< 1)
        edx.b = 1
        return (*(*arg1 + 0x68))()
    
    if (arg2 == 8)
        sub_419e00(data_53022c)
        noreturn
    
    void var_61
    sub_402d00(&var_61, 0x54, 0)
    void* eax_6 = *(arg1 + 0x20)
    __builtin_memcpy(&var_61, eax_6 + 0x18, 0x18)
    char var_d = 0
    int32_t var_4d = 0
    int32_t var_49 = 0x28
    int32_t var_5d
    int32_t var_45 = var_5d
    int32_t var_59
    int32_t var_41 = var_59
    int16_t var_3d = 1
    void* edx_3
    edx_3.b = arg2
    uint16_t var_3b = zx.w(*(edx_3 + 0x52e62b))
    HPALETTE ho_1 = *(eax_6 + 0x10)
    
    if (arg2 == 2)
        ho_1 = data_531654
    else if (arg2 == 3)
        HDC eax_9 = GetDC(nullptr)
        sub_419f38(eax_9)
        ho_1 = CreateHalftonePalette(eax_9)
        var_d = 1
        ReleaseDC(nullptr, eax_9)
    else if (arg2 == 5)
        int32_t var_39_1 = 3
        int32_t var_21_1 = 0xf800
        int32_t var_1d_1 = 0x7e0
        int32_t var_19_1 = 0x1f
    
    HPALETTE* var_74_4 = &ho
    int32_t (* var_78_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41dc74(ho_1, (*(*arg1 + 0x60))(&var_61, ExceptionList, var_78_2, var_74_4), arg1, ho_1)
    *(arg1 + 0x1a) = ho_1 != 0
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_41f140
    
    if (var_d == 0)
        return 0
    
    ho = ho_1
    return DeleteObject(ho)
}
