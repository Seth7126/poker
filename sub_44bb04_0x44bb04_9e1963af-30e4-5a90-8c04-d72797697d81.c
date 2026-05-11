// ============================================================
// 函数名称: sub_44bb04
// 虚拟地址: 0x44bb04
// WARP GUID: 9e1963af-30e4-5a90-8c04-d72797697d81
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4030d0, sub_403248, sub_41e04c, sub_41baf4, sub_41dae0, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: sub_4da10c
// ============================================================

int32_t* __convention("regparm")sub_44bb04(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    char* var_10 = nullptr
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    if (*(*(arg1 + 0x128) + 4) == 0)
        int32_t* eax_2 = sub_41dae0(sub_41799a+0xe2, 1)
        int32_t* var_24 = &var_4
        int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(arg1 + 0x38)
        (*(*eax_2 + 0x40))(ExceptionList, var_28, var_24)
        *(arg1 + 0x3c)
        (*(*eax_2 + 0x34))(arg1)
        sub_41baf4(*(arg1 + 0x128), eax_2)
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = &data_44bb97
        return sub_4030d0(eax_2)
    
    int32_t* ebx_1 = *(*(arg1 + 0x128) + 4)
    
    if (sub_403248(ebx_1, 0x417a7c) == 0)
        sub_405ae8(data_530130, &var_10)
        int32_t edx_5
        edx_5.b = 1
        sub_40b4b0(sub_40eacb+0x7d, edx_5, var_10)
        sub_403828()
        noreturn
    
    sub_41e04c(ebx_1)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_18_1)(int32_t* arg1 @ ebp) = sub_44bbfd
    int32_t* result = &var_10
    sub_403df8(result)
    return result
}
