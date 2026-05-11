// ============================================================
// 函数名称: sub_418e00
// 虚拟地址: 0x418e00
// WARP GUID: 3e0b926b-e45b-5d39-ac14-edb24e387e83
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreatePenIndirect
// [内部子函数调用]: sub_417d38, sub_417d2c, sub_41842c
// [被调用的父级函数]: sub_419cdc
// ============================================================

int32_t __convention("regparm")sub_418e00(void* arg1)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x10)
    void* eax = *(arg1 + 0x10)
    
    if (*(eax + 8) != 0)
        return *(eax + 8)
    
    sub_417d2c(data_5316a4)
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(eax + 8) == 0)
        LOGPEN plpen
        plpen.lopnStyle = zx.d(*((zx.d(*(eax + 0x1c)) << 1) + &data_52e5dc))
        plpen.lopnWidth.x = *(eax + 0x18)
        plpen.lopnColor = sub_41842c(*(eax + 0x14))
        *(eax + 8) = CreatePenIndirect(&plpen)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_1c_1 = 0x418e8d
    return sub_417d38(data_5316a4)
}
