// ============================================================
// 函数名称: sub_41ca88
// 虚拟地址: 0x41ca88
// WARP GUID: 85272ad4-45c0-55b0-b91c-7e3508bf144a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWinMetaFileBits, MulDiv, GetDC
// [内部子函数调用]: sub_402d00, sub_41ac80, sub_412930, sub_402754, sub_40276c, sub_419e90
// [被调用的父级函数]: sub_41c978, sub_41c707
// ============================================================

void __convention("regparm")sub_41ca88(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x20) == 0)
    if (*(arg1 + 0x20) == 0)
        return 
    
    int32_t var_26
    sub_402d00(&var_26, 0x16, 0)
    void* ebx_1 = *(arg1 + 0x20)
    var_26 = 0x9ac6cdd7
    int16_t eax_1 = *(ebx_1 + 0x18)
    int16_t var_18
    
    var_18 = eax_1 != 0 ? eax_1 : 0x60
    
    int32_t nDenominator = 0x9ec
    int32_t ExceptionList_1 = *(ebx_1 + 0xc)
    int16_t var_1c = MulDiv(ExceptionList_1, zx.d(var_18), nDenominator)
    int32_t nDenominator_1 = 0x9ec
    ExceptionList_1 = *(ebx_1 + 0x10)
    int16_t var_1a = MulDiv(ExceptionList_1, zx.d(var_18), nDenominator_1)
    int16_t var_12 = sub_41ac80(&var_26)
    HDC hdcRef = GetDC(nullptr)
    int32_t __saved_ebp
    int32_t* var_34_1 = &__saved_ebp
    int32_t (* var_38_2)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t iMapMode = 8
    uint8_t* ExceptionList = nullptr
    uint32_t cbData16 = GetWinMetaFileBits(*(ebx_1 + 8), 0, ExceptionList, iMapMode, hdcRef)
    uint8_t* pData16 = sub_402754(cbData16)
    int32_t* var_40_1 = &__saved_ebp
    int32_t (* var_44)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (GetWinMetaFileBits(*(ebx_1 + 8), cbData16, pData16, 8, hdcRef) u< cbData16)
        sub_419e90()
        noreturn
    
    sub_412930(arg2, &var_26, 0x16)
    sub_412930(arg2, pData16, cbData16)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_40_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) = sub_41cbaa
    sub_40276c(pData16)
}
