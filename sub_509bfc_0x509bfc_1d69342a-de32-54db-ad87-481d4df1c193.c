// ============================================================
// 函数名称: sub_509bfc
// 虚拟地址: 0x509bfc
// WARP GUID: 1d69342a-de32-54db-ad87-481d4df1c193
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a180, sub_404138, sub_47a2ac, sub_46910c, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_509bfc(char arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    var_8:3.b = arg1
    void* edi_1 = data_530304
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(*edi_1 + 0x1335) = 0
    int32_t esi_2 = *data_5303f4
    int32_t esi_3 = esi_2 - 1
    
    if (add_overflow(esi_2, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t ebx_2 = *data_53080c
    
    if (ebx_2 s>= esi_3)
        int32_t i_1 = ebx_2 - esi_3 + 1
        int32_t i
        
        do
            sub_47a180(esi_3, *data_530a58, *edi_1, 0)
            esi_3 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void** edi_2 = sub_47a2ac(*edi_1, *data_530a58, *data_5303f4, &var_c)
    void* ebp_1
    
    if (var_8:3.b != 0 || var_c != 0)
        ebp_1 = sub_46910c(*edi_2, "f_verbindunghs", &var_10)
        int32_t var_30_1 = *(ebp_1 - 0xc)
        int32_t var_34_1 = *(ebp_1 - 8)
        void* const var_38_1 = &data_509d2c
        sub_404138(ebp_1 - 8, 3)
    else
        ebp_1 = sub_46910c(*edi_2, "f_netzscan", &var_c)
    
    long double x87_r0
    sub_47ab08(*edi_2, *data_530a58, *data_5306cc, x87_r0, *(ebp_1 - 8))
    *data_52ffbc = 0
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_509d02
    return sub_403e1c(ebp_1 - 0xc, 2)
}
