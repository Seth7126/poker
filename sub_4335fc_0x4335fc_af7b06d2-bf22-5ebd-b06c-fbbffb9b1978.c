// ============================================================
// 函数名称: sub_4335fc
// 虚拟地址: 0x4335fc
// WARP GUID: af7b06d2-bf22-5ebd-b06c-fbbffb9b1978
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42c2ec
// [被调用的父级函数]: sub_4342ac
// ============================================================

void* __convention("regparm")sub_4335fc(void* arg1)
{
    // 第一条实际指令: uint32_t var_c = 0
    uint32_t var_c = 0
    void* eax = *(arg1 + 0x1c)
    int32_t ebx
    ebx.w = 0xffbd
    int32_t edx
    sub_4032ac(*(eax + 0x14), edx, &var_c)
    bool var_5 = var_c != 0
    
    if (var_5 == 0)
        int32_t eax_3
        eax_3.b = var_5
        return eax_3
    
    *(eax + 0x38) = arg1
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp = sub_42c2ec(0, *(eax + 0x14), var_c, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_1c_1 = 0x433674
    void* eax_7 = *(ebp - 0xc)
    *(eax_7 + 0x38) = 0
    return eax_7
}
