// ============================================================
// 函数名称: sub_4545b0
// 虚拟地址: 0x4545b0
// WARP GUID: 7c379d7d-97d5-5700-87e3-ccf2e66d83d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4548b8, sub_456060, sub_454d08, sub_45455c, sub_4128b4, sub_4030a0, sub_454bbc, sub_454980, sub_4128f8
// [被调用的父级函数]: sub_45451c, sub_454588
// ============================================================

int32_t __convention("regparm")sub_4545b0(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_248 = ebx
    int32_t esi
    int32_t var_24c = esi
    int32_t edi
    int32_t var_250 = edi
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    sub_45455c(ExceptionList)
    int32_t ecx = sub_4030d0(ExceptionList->__offset(0x24).d)
    ExceptionList->__offset(0x24).d = 0
    void* ebx_1 = ExceptionList->__offset(0x20).d
    int32_t* eax_6 = sub_4030a0(ecx, 1)
    *(ebx_1 + 8) = eax_6
    (**eax_6)()
    sub_4128f8(arg3, *(*(ebx_1 + 8) + 4), arg2)
    
    if (arg2 s<= 0)
        ExceptionList->__offset(0x1a).b = 1
        return ExceptionList->Next->__offset(0x10).d()
    
    void var_80
    __builtin_memcpy(&var_80, &data_52eb80, 0x74)
    void* var_242 = &var_80
    sub_4548b8(&var_242, 0x3d, 0x1c2)
    int32_t __saved_ebp
    __return_addr = &__saved_ebp
    int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4128b4(*(ebx_1 + 8))
    sub_456060(&var_242, *(ebx_1 + 8))
    sub_454bbc(&var_242, 0xffffffff)
    int32_t var_22a
    *(ebx_1 + 0x10) = var_22a
    int32_t var_226
    *(ebx_1 + 0xc) = var_226
    int32_t var_21e
    int32_t eax_15
    eax_15.b = var_21e == 1
    *(ebx_1 + 0x14) = eax_15.b
    int32_t eax_17 = sub_454d08(&var_242)
    int32_t eax_18 = neg.d(eax_17)
    ExceptionList->__offset(0x39).b = (neg.d(sbb.d(eax_18, eax_18, eax_17 != 0))).b
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = &data_4546cd
    sub_454980()
    return 0
}
