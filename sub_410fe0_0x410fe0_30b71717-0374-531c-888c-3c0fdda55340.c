// ============================================================
// 函数名称: sub_410fe0
// 虚拟地址: 0x410fe0
// WARP GUID: 30b71717-0374-531c-888c-3c0fdda55340
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41060c, sub_4030d0
// [被调用的父级函数]: sub_4adc84, sub_410ee4, sub_410f34, sub_413b8c
// ============================================================

void* __convention("regparm")sub_410fe0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* result = arg1[2]
    
    if (*(result + 8) s<= 0)
        return result
    
    (*(*arg1 + 0x14))()
    int32_t __saved_ebp
    int32_t* __saved_ebp_1 = &__saved_ebp
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    fsbase->NtTib.ExceptionList = &__saved_ebx
    
    while (*0x8dc35d61 s> 0)
        sub_4030d0(sub_41060c(0x8dc35d59))
    
    fsbase->NtTib.ExceptionList = __saved_ebx_1
    return (*0xff27b201)(&data_411041)
}
