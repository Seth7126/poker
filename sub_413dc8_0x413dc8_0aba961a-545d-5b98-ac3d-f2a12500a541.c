// ============================================================
// 函数名称: sub_413dc8
// 虚拟地址: 0x413dc8
// WARP GUID: 0aba961a-545d-5b98-ac3d-f2a12500a541
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_413f0c
// ============================================================

int32_tsub_413dc8(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx
    ebx.w = 0xfff9
    sub_4032ac(*(arg1 - 0x10), *(*(arg1 - 0xc) + 0x2c))
    *(arg1 - 0x10)
    (*(**(arg1 - 0xc) + 0x1c))(ExceptionList, var_18, var_14)
    
    if (data_53161c != 0)
        *(arg1 - 0x18)
        
        if (data_53161c() == *(arg1 - 0x10))
            void* eax_12 = *(arg1 - 0x10)
            *(eax_12 + 0x20) |= 0x200
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
