// ============================================================
// 函数名称: sub_41bba4
// 虚拟地址: 0x41bba4
// WARP GUID: 1bef99f7-3128-50ff-8468-d094bb27c907
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_41b8f8, sub_419e00, sub_4030d0, sub_4032c4
// [被调用的父级函数]: sub_4267c4
// ============================================================

int32_t __fastcallsub_41bba4(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_41b8f8(data_52e61c, arg2.w)
    
    if (eax_1 == 0)
        sub_419e00(data_53069c)
        noreturn
    
    edx_1.b = 1
    int32_t* eax_4
    int32_t edx_2
    eax_4, edx_2 = (*(eax_1 + 0xc))()
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    eax_4[5] = arg3
    edx_2.w = 0xfffc
    eax_4[4] = sub_4032c4(arg3, edx_2)
    (*(*eax_4 + 0x58))(arg4)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_4030d0(arg3[1])
    arg3[1] = eax_4
    eax_4[3] = arg3
    int32_t edx_6
    edx_6.w = 0xfffd
    eax_4[2] = sub_4032c4(arg3, edx_6)
    int32_t* ebx
    ebx.w = 0xfffd
    return sub_4032ac(arg3, arg3)
}
