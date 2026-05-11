// ============================================================
// 函数名称: sub_447cf8
// 虚拟地址: 0x447cf8
// WARP GUID: 96d17267-bb6e-5bda-b9c0-077f68470d2f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_449e50
// [被调用的父级函数]: sub_449cec
// ============================================================

voidsub_447cf8()
{
    // 第一条实际指令: if (data_5317d8 == 0)
    if (data_5317d8 == 0)
        return 
    
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_449e50(data_5317d8)
    fsbase->NtTib.ExceptionList = ExceptionList
}
