// ============================================================
// 函数名称: sub_41e5a0
// 虚拟地址: 0x41e5a0
// WARP GUID: f89aa87c-8045-5783-a573-f4a39cc55449
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LeaveCriticalSection, EnterCriticalSection
// [内部子函数调用]: sub_4030a0, sub_41d044, sub_41d040, sub_403260
// [被调用的父级函数]: sub_41ec48, sub_41ef18, sub_41db84, sub_41eb67, sub_41ea20, sub_41ed0c, sub_41ebd8, sub_41dc74, sub_41e300
// ============================================================

int32_t __convention("regparm")sub_41e5a0(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t arg2, int32_t arg3, int32_t* arg4, char arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t (* lpCriticalSection_1)()
    int32_t (* lpCriticalSection_1)()
    int32_t (* lpCriticalSection)() = lpCriticalSection_1
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t ebx_1 = arg2
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    arg2.b = 1
    void* eax_1 = sub_4030a0(arg3, arg2)
    __return_addr = &lpCriticalSection
    lpCriticalSection = j_sub_40353c
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(eax_1 + 8) = ebx_1
    *(eax_1 + 0x10) = arg3
    __builtin_memcpy(eax_1 + 0x18, arg6, 0x54)
    void* edx
    edx.b = arg5
    *(eax_1 + 0x70) = edx.b
    
    if (*(eax_1 + 0x2c) != 0)
        *(eax_1 + 0x14) = *(eax_1 + 8)
    
    sub_403260(arg4, &data_40f380)
    *(eax_1 + 0x6c) = arg4
    fsbase->NtTib.ExceptionList = ExceptionList
    EnterCriticalSection(&data_531670)
    __return_addr = &lpCriticalSection
    lpCriticalSection = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41d044(ExceptionList->__offset(0x20).d)
    ExceptionList->__offset(0x20).d = eax_1
    sub_41d040(eax_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    lpCriticalSection = &data_531670
    return LeaveCriticalSection(lpCriticalSection)
}
