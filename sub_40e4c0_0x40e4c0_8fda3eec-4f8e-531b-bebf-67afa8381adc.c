// ============================================================
// 函数名称: sub_40e4c0
// 虚拟地址: 0x40e4c0
// WARP GUID: 8fda3eec-4f8e-531b-bebf-67afa8381adc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_40e4c0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_531614
    data_531614 += 1
    
    if (temp1 == 0xffffffff)
        sub_403df8(&data_52e314)
        sub_404780(&data_52e30c, sub_4010c0, 2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
