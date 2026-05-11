// ============================================================
// 函数名称: sub_470f48
// 虚拟地址: 0x470f48
// WARP GUID: 382b4fee-16a7-599e-8d2a-0d9cf14342e3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4077a8, sub_405b74, sub_405b40
// [被调用的父级函数]: sub_471144, sub_470e4b
// ============================================================

int32_tsub_470f48(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = &var_4
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 - 4) = 0
    *(arg1 - 8) = 0
    *(arg1 - 0xc)
    sub_4077a8()
    int32_t* eax_7 = *(arg1 - 0xc) + 0x2d0
    sub_405b40(eax_7)
    
    if ((*data_52ff08)(0, eax_7, 0, ExceptionList, var_c) == 0)
        sub_405b74(*(arg1 - 0xc) + 0x2d4, *(*(arg1 - 0xc) + 0x2d0), 0x471068)
        *(*(arg1 - 0xc) + 0x2d8) = 0x10000000
        ExceptionList = arg1 - 4
        int32_t* eax_25 = *(*(arg1 - 0xc) + 0x2d4)
        (*(*eax_25 + 0x5c))(eax_25, *(arg1 - 0xc) + 0x2d8, ExceptionList, arg1 - 8)
        
        if (*(arg1 - 4) == 0)
            *(*(arg1 - 0xc) + 0x2d8) = 0x4000
            ExceptionList = arg1 - 4
            int32_t* eax_39 = *(*(arg1 - 0xc) + 0x2d4)
            (*(*eax_39 + 0x5c))(eax_39, *(arg1 - 0xc) + 0x2d8, ExceptionList, arg1 - 8)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_471063
    return *(arg1 - 4)
}
