// ============================================================
// 函数名称: sub_4ade94
// 虚拟地址: 0x4ade94
// WARP GUID: 25f87c7f-bf49-542a-96c0-64f789a69343
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4ade94()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_5325f8
    data_5325f8 += 1
    
    if (temp1 == 0xffffffff)
        sub_404780(&data_52fd98, sub_4010c0, 0xc)
        sub_404780(&data_52fd7c, sub_4010c0, 7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
