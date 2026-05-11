// ============================================================
// 函数名称: sub_4a0e13
// 虚拟地址: 0x4a0e13
// WARP GUID: 287f8696-3850-54c6-aa5a-a3457537f102
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a0cb0, sub_40c688, sub_49f520, sub_404078, sub_403e1c, sub_4a0bb0, sub_404280, sub_49df54, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a0e13(char* arg1, void* arg2, int32_t* arg3 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    char temp1 = *(arg2 + 0x61)
    *(arg2 + 0x61) += arg1.b
    
    if (temp1 + arg1.b u>= temp1)
        undefined
    
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*arg1, &__return_addr)
    *arg1 = temp0
    *arg1 += arg1.b
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    int32_t ebx
    int32_t var_24 = ebx
    int32_t* var_28 = arg3
    int32_t edi
    int32_t var_2c = edi
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.b = 1
    int32_t var_8
    int32_t ecx_1
    void* ebp_1
    ecx_1, ebp_1 = sub_4a0bb0(arg1, "Basic", &var_8)
    ecx_1.b = 1
    sub_49df54(ecx_1, 0x4a0f70, ebp_1 - 4, ebp_1 - 8, 1)
    
    while (sub_404078(*(ebp_1 - 4)) s> 0)
        void* edi_1 = *(arg1 + 0xc)
        int32_t eax_3
        eax_3.b = 0
        int32_t var_3c_1 = eax_3
        int32_t ecx_2
        ecx_2.b = 1
        sub_49df54(ecx_2, 0x4a0f80, ebp_1 - 4, ebp_1 - 0x10, 1)
        int32_t* edi_2
        ebp_1, edi_2 = sub_40c688(*(ebp_1 - 0x10), 0x4a0f8c, *(edi_1 + 0x30), ebp_1.b - 0xc)
        *(ebp_1 - 0xc)
        (*(*edi_2 + 0x34))()
    
    sub_49f520(*(arg1 + 0xc), sub_4a0f93+5)
    int32_t eax_13 = sub_404078(*(ebp_1 - 0x14))
    
    if (add_overflow(eax_13, 0xfffffffe))
        sub_403010()
        noreturn
    
    sub_49f520(*(arg1 + 0xc), sub_4a0f93+5)
    sub_404280(eax_13 - 2, 2, *(ebp_1 - 0x18), &arg1[0x14])
    int32_t eax_17 = *(arg1 + 8)
    
    if (eax_17 u< 1)
        sub_4a0cb0(arg1)
        
        if (sub_404078(*(ebp_1 - 0x1c)) s> 0)
            ebx.b = 1
        
        int32_t temp4_1 = *(arg1 + 4)
        *(arg1 + 4) += 1
        
        if (add_overflow(temp4_1, 1))
            sub_403010()
            noreturn
    else if (eax_17 == 1)
        ebx.b = 2
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_30_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4a0f4d
    return sub_403e1c(ebp_1 - 0x1c, 7)
}
