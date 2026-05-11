// ============================================================
// 函数名称: sub_4a40f4
// 虚拟地址: 0x4a40f4
// WARP GUID: a2e3118d-402f-50f5-9399-37c313a4663b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a4084, sub_403df8, sub_40422c
// [被调用的父级函数]: sub_4a41b0
// ============================================================

int32_t* __convention("regparm")sub_4a40f4(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* ecx
    void* var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t edx = sub_40422c(arg1)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_2
    void* ebp_1
    eax_2, ebp_1 = sub_4a4084(arg1, edx, ecx)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4a4139
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
