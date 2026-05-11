// ============================================================
// 函数名称: sub_4a0694
// 虚拟地址: 0x4a0694
// WARP GUID: 175643cc-9277-5dab-bb02-8f08e48561bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4a0694()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_532578
    data_532578 += 1
    
    if (temp1 == 0xffffffff)
        sub_403df8(&data_52fbf0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
