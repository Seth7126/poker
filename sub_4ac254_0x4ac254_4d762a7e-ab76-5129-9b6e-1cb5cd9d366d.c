// ============================================================
// 函数名称: sub_4ac254
// 虚拟地址: 0x4ac254
// WARP GUID: 4d762a7e-ab76-5129-9b6e-1cb5cd9d366d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4aaa64
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4ac254()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_5325e0
    data_5325e0 += 1
    
    if (temp1 == 0xffffffff)
        sub_4aaa64()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
