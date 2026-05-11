// ============================================================
// 函数名称: sub_415370
// 虚拟地址: 0x415370
// WARP GUID: 1345307d-5d07-5b70-abab-7b33e055f966
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415310, sub_41526c, sub_415210, sub_4152e8, sub_415294, sub_403df8, sub_415224, sub_41512c
// [被调用的父级函数]: sub_41366c, sub_413a60, sub_415310, sub_41526c, sub_4136c4, sub_414630, sub_4154d8
// ============================================================

void* __convention("regparm")sub_415370(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_c = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1
    int32_t ecx
    int32_t ecx_1
    void* edx
    eax_1, ecx_1, edx = sub_415210(ecx)
    int32_t eax_2 = eax_1 & 0x7f
    
    switch (eax_2)
        case 1
            sub_41526c(&var_4)
            esp = &ExceptionList
        case 2
            int32_t* var_1c_2 = &var_4
            sub_415294(1, edx)
            esp = &ExceptionList
        case 3
            int32_t* var_1c_3 = &var_4
            sub_415294(2, edx)
            esp = &ExceptionList
        case 4
            int32_t* var_1c_4 = &var_4
            sub_415294(4, edx)
            esp = &ExceptionList
        case 5
            int32_t* var_1c_5 = &var_4
            sub_415294(0xa, edx)
            esp = &ExceptionList
        case 6, 7
            sub_41512c(var_8, &var_c, ecx_1)
        case 0xa
            sub_4152e8(eax_2, edx, ecx_1, &var_4)
            esp = &ExceptionList
        case 0xb
            ebp_1 = sub_415224(var_8)
            esp = &var_8
        case 0xc
            sub_4152e8(eax_2, edx, ecx_1, &var_4)
            esp = &ExceptionList
        case 0xe
            sub_415310(&var_4)
            esp = &ExceptionList
        case 0xf
            int32_t* var_1c_9 = &var_4
            sub_415294(4, edx)
            esp = &ExceptionList
        case 0x10
            int32_t* var_1c_10 = &var_4
            sub_415294(8, edx)
            esp = &ExceptionList
        case 0x11
            int32_t* var_1c_11 = &var_4
            sub_415294(8, edx)
            esp = &ExceptionList
        case 0x12
            sub_4152e8(eax_2, edx, ecx_1, &var_4)
            esp = &ExceptionList
        case 0x13
            int32_t* var_1c_13 = &var_4
            sub_415294(8, edx)
            esp = &ExceptionList
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4154d4
    sub_403df8(&ebp_1[-2])
    return &ebp_1[-2]
}
