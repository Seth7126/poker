// ============================================================
// 函数名称: sub_43d234
// 虚拟地址: 0x43d234
// WARP GUID: 454d2a23-865b-57e8-9f8c-9acef4895e8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d744
// [被调用的父级函数]: sub_43d2b0, sub_43e014
// ============================================================

void* __convention("regparm")sub_43d234(int32_t* arg1)
{
    // 第一条实际指令: void* eax = data_530a80
    void* eax = data_530a80
    
    if (*(eax + 9) == 0)
        return eax
    
    int32_t* eax_1
    eax_1.b = arg1[9].b
    int32_t var_c
    var_c:3.b = eax_1.b
    int32_t* edx
    edx.b = *(arg1 + 0x35)
    var_c:2.b = edx.b
    int32_t __saved_ebp
    int32_t* var_10 = &__saved_ebp
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (eax_1.b != 0)
        sub_43d744(arg1, 0)
    else
        sub_43d744(arg1, 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_10_1 = 0x43d2ab
    struct _EXCEPTION_REGISTRATION_RECORD* edx_1
    edx_1.b = var_c:3.b
    sub_43d744(arg1, edx_1.b)
    *(arg1 + 0x35) = var_c:2.b
    return arg1
}
