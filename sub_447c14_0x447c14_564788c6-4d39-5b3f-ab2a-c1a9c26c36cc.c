// ============================================================
// 函数名称: sub_447c14
// 虚拟地址: 0x447c14
// WARP GUID: 564788c6-4d39-5b3f-ab2a-c1a9c26c36cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SystemParametersInfoA
// [内部子函数调用]: sub_4477b0, sub_4477a8, sub_447b8c
// [被调用的父级函数]: sub_4477d0, sub_44671c
// ============================================================

void* __convention("regparm")sub_447c14(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x80) != 0)
    if (*(arg1 + 0x80) != 0)
        *(arg1 + 0x82) |= 0x10
        return arg1
    
    sub_4477a8(arg1)
    int32_t __saved_ebp
    int32_t* var_20 = &__saved_ebp
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD pvParam[0x2]
    SystemParametersInfoA(SPI_GETWORKAREA, 0, &pvParam, 0)
    void* ebp = sub_447b8c(&pvParam)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_20_1 = 0x447c94
    void* eax_4 = *(ebp - 4)
    *(eax_4 + 0x82) &= 0xffef
    return sub_4477b0(*(ebp - 4))
}
