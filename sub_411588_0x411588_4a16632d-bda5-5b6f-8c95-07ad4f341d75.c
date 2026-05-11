// ============================================================
// 函数名称: sub_411588
// 虚拟地址: 0x411588
// WARP GUID: 4a16632d-bda5-5b6f-8c95-07ad4f341d75
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410b1c, sub_4115f8, sub_403248, sub_4116b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_411588(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    
    if (sub_403248(arg2, &data_40efb4) == 0)
        return sub_410b1c(ecx, arg2)
    
    sub_4115f8(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x40))(ExceptionList, var_14, var_10)
    (*(*arg1 + 0x3c))(arg1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_4115f2
    return sub_4116b4(arg1)
}
