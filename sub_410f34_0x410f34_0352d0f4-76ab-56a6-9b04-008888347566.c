// ============================================================
// 函数名称: sub_410f34
// 虚拟地址: 0x410f34
// WARP GUID: 0352d0f4-76ab-56a6-9b04-008888347566
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410f28, sub_410fe0, sub_403248, sub_410b1c, sub_411084, sub_41108c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_410f34(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (sub_403248(arg2, &data_40ee08) == 0)
        return sub_410b1c(ecx, arg2)
    
    (*(*arg1 + 0x14))()
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    fsbase->NtTib.ExceptionList = &__saved_ebx
    void* ebp = sub_410fe0(j_sub_4037f0)
    int32_t ebx_1 = sub_411084(arg2) - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t edi_1 = 0
        int32_t i
        
        do
            int32_t __saved_esi_1 = sub_41108c(arg2, edi_1)
            int32_t __saved_ebp
            (*(*sub_410f28(*(ebp - 4)) + 8))(__saved_ebx_1, j_sub_4037f0, &__saved_ebp)
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = __saved_ebx_1
    return (*(**(ebp - 4) + 0x18))(&data_410fc3)
}
