// ============================================================
// 函数名称: sub_509af8
// 虚拟地址: 0x509af8
// WARP GUID: c6bc6c37-7d12-5930-bd86-8339460b0f2c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47ab08, sub_47a180, sub_40422c, sub_50d9e0, sub_50d988, sub_46910c, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_513ae4, sub_4e649b
// ============================================================

void* __convention("regparm")sub_509af8(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(*data_530304 + 0x1335) = 1
    int32_t esi_2 = *data_5303f4
    int32_t esi_3 = esi_2 - 1
    
    if (add_overflow(esi_2, 0xffffffff))
        sub_403010()
        noreturn
    
    int32_t edi_2 = *data_53080c
    
    if (edi_2 s>= esi_3)
        int32_t i_1 = edi_2 - esi_3 + 1
        int32_t i
        
        do
            sub_47a180(esi_3, *data_530a58, *data_530304, 1)
            esp = &ExceptionList
            esi_3 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (sub_50d9e0(*data_530084) == 0)
        if (var_8 == 0)
            ebp_1 = sub_46910c(*data_530304, "f_feldleer", &var_8)
        
        long double x87_r0
        sub_47ab08(*data_530304, *data_530a58, *data_5306cc, x87_r0, ebp_1[-1])
        esp = &var_8
    else
        sub_50d988(*data_530084)
    
    *data_52ffbc = 1
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_509bde
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
