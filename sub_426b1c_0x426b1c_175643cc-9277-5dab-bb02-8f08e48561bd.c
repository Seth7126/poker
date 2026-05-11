// ============================================================
// 函数名称: sub_426b1c
// 虚拟地址: 0x426b1c
// WARP GUID: 175643cc-9277-5dab-bb02-8f08e48561bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_426b1c()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_531744
    data_531744 += 1
    
    if (temp1 == 0xffffffff)
        sub_4030d0(data_531748)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
