// ============================================================
// 函数名称: sub_508414
// 虚拟地址: 0x508414
// WARP GUID: e807f057-5531-5fb5-b193-1c3db0a13cc3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49611c, sub_4040c4, sub_404078, sub_404138, sub_50af4c, sub_408e1c, sub_50d52c, sub_404688, sub_404080, sub_47b5b8, sub_40401c, sub_404754, sub_403e1c, sub_46910c, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_508224
// ============================================================

void* __convention("regparm")sub_508414(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_d4 = ebx
    int32_t esi
    int32_t var_d8 = esi
    int32_t var_d0
    __builtin_memset(&var_d0, 0, 0x18)
    void var_b8
    int32_t ecx = sub_404688(&var_b8, 0x4979a8)
    int32_t* var_dc = &var_4
    int32_t (* var_e0)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *data_530454
    void var_88
    sub_50d52c(ecx, &var_88)
    int32_t ecx_1
    void* ebp_1
    int32_t esi_2
    ecx_1, ebp_1, esi_2 = sub_49611c(arg3, &var_88, 0x7c)
    
    if (*(ebp_1 - 0x80) != 7 || *(ebp_1 - 0x7d) != 7 || *(ebp_1 - 0x7c) != 1)
        *(arg1 + 9) = 1
    else
        sub_40401c(ecx_1, ebp_1 - 0x60)
        int32_t ecx_2
        void* ebp_2
        int32_t edi
        ecx_2, ebp_2 = sub_50af4c(*(ebp_1 - 0xb8), ebp_1 - 0xb4, esi_2, edi)
        sub_40401c(ecx_2, ebp_2 - 0x1f)
        sub_403df8(arg1 + 0xc)
        
        if (sub_404078(*(ebp_2 - 0x88)) s> 0x14)
            sub_404280(0x12, 1, *(ebp_2 - 0x88), ebp_2 - 0xbc)
            sub_4040c4(arg1 + 0xc, *(ebp_2 - 0xbc), ".. (")
        else
            sub_4040c4(arg1 + 0xc, *(ebp_2 - 0x88), " (")
        
        int32_t var_c_2 = *(arg1 + 0xc)
        int32_t eax_14 = *(ebp_2 - 0x94)
        
        if (add_overflow(eax_14, *(ebp_2 - 0x98)))
            sub_403010()
            noreturn
        
        sub_408e1c(eax_14 + *(ebp_2 - 0x98), ebp_2 - 0xc0)
        int32_t var_10_1 = *(ebp_2 - 0xc0)
        void* const var_14_1 = &data_5086b0
        int32_t eax_16 = *(ebp_2 - 0xa0)
        
        if (add_overflow(eax_16, 1))
            sub_403010()
            noreturn
        
        sub_408e1c(eax_16 + 1, ebp_2 - 0xc4)
        int32_t var_18_1 = *(ebp_2 - 0xc4)
        ebp_1 = sub_46910c(*data_530304, "f_spielers", ebp_2 - 0xc8)
        int32_t var_1c_1 = *(ebp_1 - 0xc8)
        sub_404138(arg1 + 0xc, 5)
        sub_404080(arg1 + 0xc, ", ")
        int32_t eax_22 = *(ebp_1 - 0xa4)
        
        if (eax_22 == 1)
            sub_404080(arg1 + 0xc, "Split Limit")
        else if (eax_22 != 2)
            sub_404080(arg1 + 0xc, "No Limit")
        else
            sub_404080(arg1 + 0xc, "Pot Limit")
        
        sub_404080(arg1 + 0xc, ", ")
        *data_530304
        void* ebx_2 = sub_47b5b8(*data_53054c, *data_530438, ebp_1 - 0xcc, *(ebp_1 - 0xb4))
        void var_8
        esp = &var_8
        sub_404080(ebx_2 + 0xc, *(ebp_1 - 0xcc))
        sub_404080(ebx_2 + 0xc, sub_508713+5)
        *(ebx_2 + 8) = 1
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_508684
    sub_403e1c(ebp_1 - 0xcc, 6)
    sub_404754(ebp_1 - 0xb4, 0x4979a8)
    return ebp_1 - 0xb4
}
