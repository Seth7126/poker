// ============================================================
// 函数名称: sub_41f7e0
// 虚拟地址: 0x41f7e0
// WARP GUID: e0ce7ca1-185e-55bd-b8a5-b7fed943ae7e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419e24, sub_4128c0, sub_4030a0, sub_41f898, sub_4128f8, sub_4128a4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41f7e0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    arg2.b = 1
    int32_t ecx
    int32_t* eax_1 = sub_4030a0(ecx, arg2)
    int32_t __saved_ebp
    int32_t* var_20 = &__saved_ebp
    int32_t (* var_24)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4128c0(esi)
    sub_4128a4(esi)
    (**eax_1)(ExceptionList, var_24, var_20)
    int32_t eax_8 = sub_4128c0(eax_1)
    sub_4128f8(esi, eax_1[1], eax_8)
    void var_e
    sub_4128f8(eax_1, &var_e, 6)
    int16_t var_c
    
    if (var_c u>= 2)
        sub_419e24()
        noreturn
    
    sub_41f898(arg1, 0, eax_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return (*(*arg1 + 0x10))()
}
