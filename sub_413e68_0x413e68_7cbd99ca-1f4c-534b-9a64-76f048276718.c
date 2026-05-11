// ============================================================
// 函数名称: sub_413e68
// 虚拟地址: 0x413e68
// WARP GUID: 7cbd99ca-1f4c-534b-9a64-76f048276718
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4156c0
// [被调用的父级函数]: sub_413f0c
// ============================================================

int32_tsub_413e68(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx
    sub_4156c0(*(arg1 - 0xc), *(arg1 - 0x14), ecx)
    *(arg1 - 0x18)
    *(arg1 - 0x10) = (*(**(arg1 - 0xc) + 0x14))(ExceptionList, var_18, var_14)
    int32_t ebx
    ebx.w = 0xfff3
    int32_t eax_10 = sub_4032ac(*(arg1 - 0x10))
    *(*(arg1 - 0xc) + 0x2c) = eax_10
    
    if (eax_10 == 0)
        *(*(arg1 - 0xc) + 0x2c) = *(*(arg1 - 0xc) + 0x18)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
