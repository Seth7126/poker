// ============================================================
// 函数名称: sub_50f0e4
// 虚拟地址: 0x50f0e4
// WARP GUID: 0c113d0a-764d-5b2c-9661-b29c6aa4917e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_47ab08, sub_50f478, sub_404138, sub_50d79c, sub_50d7cc, sub_46910c, sub_51038c, sub_403e1c
// [被调用的父级函数]: sub_50d82b, sub_50e11c, sub_50b624, sub_50d838
// ============================================================

int32_t __convention("regparm")sub_50f0e4(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x20)
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg1 + 0x1b1fc) = GetTickCount()
    uint32_t eax
    
    if (arg2 != 0)
        eax = sub_50d79c(arg1)
    
    if (arg2 == 0 || eax.b != 0)
        eax.b = *(arg1 + 0x1b1f6)
        *(arg1 + 0x1b1f7) = eax.b
        *(arg1 + 0x1b1f6) = 8
        int32_t* esi_2
        struct _EXCEPTION_REGISTRATION_RECORD* var_8
        int32_t edi
        
        if (arg2 == 0)
            int32_t var_1c
            int32_t ecx_6
            void* ebp_3
            ecx_6, ebp_3, esi_2 = sub_46910c(*data_530304, "f_raumlesen", &var_1c)
            int32_t var_3c_3 = *(ebp_3 - 0x18)
            int32_t var_40_2 = 0
            void* var_44_2 = ebp_3 - 8
            int32_t var_48_2 = esi_2[0xe]
            void* const var_4c_2 = "?ACTION=GET_ROOMLIST"
            ebp_1 = sub_50d7cc(ecx_6, ebp_3 - 0x20)
            int32_t var_c_2 = ebp_1[-8]
            sub_404138(&ebp_1[-7], 3)
            esp = &var_8
            sub_51038c(esi_2, ebp_1[-7], 2, esi_2, edi, var_8, var_4)
        else
            int32_t var_10
            void* ebp_2
            ebp_2, esi_2 = sub_46910c(*data_530304, "f_raumakt", &var_10)
            long double x87_r0
            int32_t ecx_4 = sub_47ab08(*data_530304, *data_5307d8, *data_5302ac, x87_r0, *(ebp_2 - 0xc))
            int32_t var_3c_2 = 0
            int32_t var_40_1 = 2
            void* var_44_1 = ebp_2 - 8
            int32_t var_48_1 = esi_2[0xe]
            void* const var_4c_1 = "?ACTION=GET_ROOMLIST"
            ebp_1 = sub_50d7cc(ecx_4, ebp_2 - 0x14)
            int32_t var_c_1 = ebp_1[-5]
            sub_404138(&ebp_1[-4], 3)
            esp = &var_8
            sub_51038c(esi_2, ebp_1[-4], 2, esi_2, edi, var_8, var_4)
        sub_50f478(ebp_1[-2], &esi_2[0x2438])
        *(esi_2 + 0x1b1f6) = *(esi_2 + 0x1b1f7)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_50f236
    return sub_403e1c(&ebp_1[-8], 7)
}
