// ============================================================
// 函数名称: sub_442884
// 虚拟地址: 0x442884
// WARP GUID: f429b737-de07-5cd6-b74e-424a2d04288e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4431dc
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_442884(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (*(arg1 + 0x2ba) != 0)
        int32_t __saved_ebp
        int32_t* var_18_1 = &__saved_ebp
        int32_t (* var_1c_1)() = j_sub_40353c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        arg1[0xaf]
        arg1[0xae](ExceptionList, var_1c_1, var_18_1)
        fsbase->NtTib.ExceptionList = ExceptionList
    
    if ((arg1[0xb3].b & 2) == 0)
        return arg1
    
    struct _EXCEPTION_REGISTRATION_RECORD* edx
    edx.b = 1
    return sub_4431dc(arg1, edx.b)
}
