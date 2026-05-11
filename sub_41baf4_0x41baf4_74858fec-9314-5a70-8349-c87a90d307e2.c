// ============================================================
// 函数名称: sub_41baf4
// 虚拟地址: 0x41baf4
// WARP GUID: 74858fec-9314-5a70-8349-c87a90d307e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_403018, sub_4030d0, sub_4032c4
// [被调用的父级函数]: sub_41bcac, sub_44bb04
// ============================================================

int32_t __convention("regparm")sub_41baf4(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* var_8_1 = nullptr
    
    if (arg2 != 0)
        int32_t eax_1 = sub_403018(arg2)
        arg2.b = 1
        var_8_1 = (*(eax_1 + 0xc))()
        (*(*var_8_1 + 8))()
        var_8_1[3] = arg1
        int32_t edx_1
        edx_1.w = 0xfffd
        var_8_1[2] = sub_4032c4(arg1, edx_1)
        var_8_1[5] = arg1
        int32_t edx_2
        edx_2.w = 0xfffc
        var_8_1[4] = sub_4032c4(arg1, edx_2)
    
    int32_t __saved_ebp
    int32_t* var_18_3 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4030d0(arg1[1])
    arg1[1] = var_8_1
    int32_t* ebx
    ebx.w = 0xfffd
    sub_4032ac(arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
