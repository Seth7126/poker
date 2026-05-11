// ============================================================
// 函数名称: sub_50dbd4
// 虚拟地址: 0x50dbd4
// WARP GUID: de3735f0-d6f3-5683-967a-c3e944b5ebf5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a960, sub_47ab08, sub_40422c, sub_4040c4, sub_404138, sub_50d2f4, sub_40401c, sub_40287c, sub_50e368, sub_404364, sub_50f288, sub_478234, sub_46910c, sub_403e1c, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_50e11c
// ============================================================

void* __convention("regparm")sub_50dbd4(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_88 = ebx
    int32_t esi
    int32_t var_8c = esi
    int32_t var_84
    __builtin_memset(&var_84, 0, 0x20)
    char* var_10 = nullptr
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_90 = &var_4
    int32_t (* var_94)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(*data_530454 + 0x10) = 0
    *data_530454
    void* esp
    void* ebp_2
    int32_t var_c
    long double x87_r0
    
    if (sub_50d2f4() == 0)
        *(arg1 + 0x1b1f7) = *(arg1 + 0x1b1f6)
        *(arg1 + 0x1b1f6) = 7
        int32_t var_80
        int32_t esi_3
        ebp_2, esi_3 = sub_46910c(*data_530304, "f_verbindenmit", &var_80)
        int32_t var_9c_4 = *(ebp_2 - 0x7c)
        int32_t var_a0_1 = *(ebp_2 - 4)
        void* const var_a4_1 = &data_50de8c
        sub_50f288(sub_404138(ebp_2 - 0x78, 3), *(ebp_2 - 0x78))
        sub_4040c4(ebp_2 - 0x80, U" ", *(ebp_2 - 4))
        var_c = *(ebp_2 - 0x80)
        sub_47ab08(*data_530304, *data_530a58, *data_5303f4, x87_r0, var_c)
        esp = &var_8
        sub_478234(*data_530304, *data_530a58, *data_53080c)
    else
        *(arg1 + 0x1b1f7) = *(arg1 + 0x1b1f6)
        *(arg1 + 0x1b1f6) = 7
        sub_47a960(*data_5308d8, *data_5307d8, *data_530304, &var_c)
        bool o_1 = unimplemented  {imul eax, dword [ebp-0x8], 0x17}
        
        if (o_1)
            sub_403010()
            noreturn
        
        char var_64[0x50]
        sub_40401c(sub_40287c(0x20, 1, arg1 + var_c * 0xb8 + 0x12101, &var_64), &var_64)
        var_c = sub_404364(U"~", var_10)
        
        if (var_c s> 3)
            int32_t ecx_3 = var_c
            
            if (add_overflow(ecx_3, 0xffffffff))
                sub_403010()
                noreturn
            
            sub_404280(ecx_3 - 1, 1, var_10, &var_10)
        
        int32_t var_6c
        void* ebp_1 = sub_46910c(*data_530304, "f_teilnehmenan", &var_6c)
        int32_t var_9c_3 = *(ebp_1 - 0x68)
        int32_t var_a0 = *(ebp_1 - 0xc)
        void* const var_a4 = &data_50de8c
        sub_404138(ebp_1 - 0x64, 3)
        sub_50e368(*data_530084, 1, *(ebp_1 - 0x64))
        int32_t esi_2
        ebp_2, esi_2 = sub_46910c(*data_530304, "f_teilnehmenan", ebp_1 - 0x70)
        var_c = *(ebp_2 - 0x70)
        var_10 = *(ebp_2 - 0xc)
        void* const var_14_1 = &data_50de8c
        sub_50f288(sub_404138(ebp_2 - 0x6c, 3), *(ebp_2 - 0x6c))
        sub_4040c4(ebp_2 - 0x74, U" ", *(ebp_2 - 4))
        sub_47ab08(*data_530304, *data_530a58, *data_5303f4, x87_r0, *(ebp_2 - 0x74))
        void arg_88
        esp = &arg_88
        sub_478234(*data_530304, *data_530a58, *data_53080c)
    *(esp + 8)
    fsbase->NtTib.ExceptionList = *esp
    *(esp + 8) = sub_50de55
    sub_403e1c(ebp_2 - 0x80, 8)
    sub_403df8(ebp_2 - 0xc)
    sub_403df8(ebp_2 - 4)
    return ebp_2 - 4
}
