// ============================================================
// 函数名称: sub_4a7e8d
// 虚拟地址: 0x4a7e8d
// WARP GUID: 9e8dd8cf-2659-5f99-9a94-aa3eaafe2351
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_4128c0, sub_403248, sub_4038c8, sub_4a7670, sub_4a8bc0, sub_403844, sub_405500, sub_412930, sub_49d858, sub_403898, sub_4128a4, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4a7e8d(void* arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, void* const arg5)
{
    // 第一条实际指令: *(arg3 - 0x3ba743d) += arg3.b
    *(arg3 - 0x3ba743d) += arg3.b
    int32_t eax_1 = sub_4128c0(*(arg1 + 0x6c))
    *(arg4 - 0xc) = sub_49d858(*(arg4 - 0xc), eax_1)
    sub_402980(sub_4a8bc0(*(*(arg4 - 4) + 0x6c)), *(arg4 - 0x10), *(arg4 - 0xc))
    *(arg4 - 0xc)
    (*(**(*(arg4 - 4) + 0x6c) + 0x18))()
    int32_t* entry_ebx
    TEB* fsbase
    
    if ((sub_403248(entry_ebx, 0x4989a8) & *(arg4 + 8)) != 0)
        sub_403898(__return_addr)
        sub_4038c8()
        int32_t arg_c
        fsbase->NtTib.ExceptionList = arg_c
        int32_t arg_14 = 0x4a7f88
        (*(**(arg4 - 4) + 0x38))()
        
        if (sub_4128c0(*(arg4 - 8)) s> sub_4128a4(*(arg4 - 8)))
            sub_4128a4(*(arg4 - 8))
            (***(arg4 - 8))()
        
        sub_405500(arg4 - 0x10, 0x4a7c90)
        return arg4 - 0x10
    
    sub_403844()
    int32_t* arg_24
    sub_403898(arg_24)
    int32_t result = 0
    fsbase->NtTib.ExceptionList = arg_24
    arg5 = &data_4a7f2a
    
    if (*(arg4 - 0xc) s> 0)
        sub_412930(*(arg4 - 8), *(arg4 - 0x10), *(arg4 - 0xc))
        result = *(arg4 - 0xc)
        int32_t temp0_1 = *(arg4 - 0x18)
        *(arg4 - 0x18) -= result
        
        if (add_overflow(temp0_1, neg.d(result)))
            sub_403010()
            noreturn
    
    return result
}
