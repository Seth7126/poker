// ============================================================
// 函数名称: sub_49eb18
// 虚拟地址: 0x49eb18
// WARP GUID: 56e0ddc0-2444-579a-8328-e26a626e0dd6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405500, sub_403df8, sub_40cc98, sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_49eb18()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_5324dc
    data_5324dc += 1
    
    if (temp1 == 0xffffffff)
        sub_40cc98(0x5324e0)
        sub_404780(&data_52fbc0, sub_4010c0, 0xc)
        sub_404780(&data_52fba4, sub_4010c0, 7)
        sub_403df8(0x5324e4)
        sub_405500(&data_5324d8, sub_49d2b9+0x11f)
        sub_405500(&data_5324d4, sub_49d2b9+0x10b)
        sub_404780(&data_52fb70, sub_4010c0, 0xc)
        sub_404780(&data_52fb54, sub_4010c0, 7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
