// ============================================================
// 函数名称: sub_453830
// 虚拟地址: 0x453830
// WARP GUID: e17d4ec1-7afe-5a9d-a356-18963f7536bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d00, sub_456060, sub_4548b8, sub_454d08, sub_454bbc, sub_4128b4
// [被调用的父级函数]: sub_453ff8, sub_453a38
// ============================================================

int32_t __convention("regparm")sub_453830(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_402d00(arg2, 0x26c, 0)
    __builtin_memcpy(arg2, &data_52eb80, 0x74)
    *(arg2 + 0xa8) = arg2
    sub_4548b8(arg2 + 0xa8, 0x3d, 0x1c2)
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(arg2 + 0x74) = sub_453718
    *(arg2 + 0x88) = arg1
    *(arg2 + 0xb0) = arg2 + 0x74
    sub_4128b4(*(*(arg1 + 0x20) + 8))
    sub_456060(arg2 + 0xa8, *(*(arg1 + 0x20) + 8))
    sub_454bbc(arg2 + 0xa8, 0xffffffff)
    *(arg2 + 0xd4) = 1
    *(arg2 + 0xd8) = 1 << *(arg1 + 0x3b)
    int32_t eax_16
    eax_16.b = *(arg1 + 0x34)
    char temp0 = eax_16.b
    eax_16.b = neg.b(eax_16.b)
    *(arg2 + 0xf4) = sbb.d(eax_16, eax_16, temp0 != 0)
    
    if (*(arg1 + 0x35) != 0)
        *(arg2 + 0xd0) = 1
    
    if (*(arg1 + 0x36) == 1 || *(arg2 + 0xd0) == 1)
        *(arg2 + 0xf8) = 0xffffffff
        *(arg2 + 0x104) = 0xec
    
    if (*(arg1 + 0x3a) == 1)
        *(arg2 + 0xec) = 1
        *(arg2 + 0x100) = 0
        *(arg2 + 0xfc) = 1
    
    *(arg2 + 0x9c) = *(arg2 + 0xec)
    int32_t eax_28 = *(arg2 + 0x100)
    int32_t eax_29 = neg.d(eax_28)
    *(arg2 + 0xa0) = (neg.d(sbb.d(eax_29, eax_29, eax_28 != 0))).b
    *(arg2 + 0xa4) = *(arg2 + 0xfc)
    
    if (*(arg1 + 0x38) != 0 && sub_454d08(arg2 + 0xa8) != 0)
        *(arg2 + 0x110) = *(arg2 + 0x100)
        *(arg2 + 0xec) = 1
        *(arg2 + 0x100) = 0
        *(arg2 + 0xfc) = 1
        *(arg2 + 0xe4) = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
