// ============================================================
// 函数名称: sub_518320
// 虚拟地址: 0x518320
// WARP GUID: 8ba956cd-f41a-5be6-8503-a9eb50a2ba0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_518320()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_7aab08
    data_7aab08 += 1
    
    if (temp1 == 0xffffffff)
        sub_404780(0x7a7f68, sub_4010c0, 6)
        sub_404780(0x7a7ea0, sub_4010c0, 0x14)
        sub_404780(0x7a7e28, sub_4010c0, 0x1e)
        sub_404780(0x7a7db0, sub_4010c0, 0x1e)
        sub_403df8(0x7a7dac)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
