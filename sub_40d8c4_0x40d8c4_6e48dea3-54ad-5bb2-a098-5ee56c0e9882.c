// ============================================================
// 函数名称: sub_40d8c4
// 虚拟地址: 0x40d8c4
// WARP GUID: 6e48dea3-54ad-5bb2-a098-5ee56c0e9882
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c880, sub_40bc80, sub_40cc98, sub_404780, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_40d8c4()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_5315fc
    data_5315fc += 1
    
    if (temp1 == 0xffffffff)
        sub_40cc98(0x531608)
        sub_40c880()
        sub_40bc80()
        sub_404780(&data_52e248, sub_40b714, 0x16)
        sub_404780(&data_52e210, sub_40b694, 7)
        sub_403df8(&data_52e138)
        sub_404780(0x5315c0, sub_4010c0, 7)
        sub_404780(&data_531598, sub_4010c0, 7)
        sub_404780(&data_53157c, sub_4010c0, 7)
        sub_404780(&data_53154c, sub_4010c0, 0xc)
        sub_404780(&data_53151c, sub_4010c0, 0xc)
        sub_403df8(&data_531518)
        sub_403df8(&data_531514)
        sub_403df8(&data_531510)
        sub_403df8(&data_53150c)
        sub_403df8(&data_531504)
        sub_403df8(&data_531500)
        sub_403df8(&data_5314f4)
        sub_403df8(0x52e0e4)
        sub_403df8(0x52e0d0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
