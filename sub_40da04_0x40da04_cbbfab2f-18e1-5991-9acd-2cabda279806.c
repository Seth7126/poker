// ============================================================
// 函数名称: sub_40da04
// 虚拟地址: 0x40da04
// WARP GUID: cbbfab2f-18e1-5991-9acd-2cabda279806
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c310, sub_403e4c, sub_403b7c, sub_40c8a0, sub_403b60, sub_40bcec, sub_40bbb4
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_40da04()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_5315fc
    data_5315fc -= 1
    
    if (temp1 u< 1)
        sub_403b60(0x40cd2c)
        sub_403b7c(0x40ce18)
        
        if (data_5314d1 != 0)
            sub_403e4c(&data_52e138, "0x")
        
        sub_40bbb4()
        sub_40c310()
        sub_40bcec()
        sub_40c8a0()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
