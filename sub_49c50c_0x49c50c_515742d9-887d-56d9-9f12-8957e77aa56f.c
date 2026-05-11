// ============================================================
// 函数名称: sub_49c50c
// 虚拟地址: 0x49c50c
// WARP GUID: 515742d9-887d-56d9-9f12-8957e77aa56f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40422c, sub_40b4ec, sub_49b454, sub_405ae8, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_49c50c(int32_t arg1, void* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t var_14 = 0
    sub_40422c(arg2)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_5
    void* ebp_1
    eax_5, ebp_1 = sub_49b454(arg1, arg2, arg3, nullptr, nullptr, arg3 + 3, arg3 + 2, arg3 + 1)
    
    if (eax_5 != 0)
        fsbase->NtTib.ExceptionList = arg2
        __return_addr = sub_49c5ac
        sub_403df8(ebp_1 - 0x10)
        sub_403df8(ebp_1 - 4)
        return ebp_1 - 4
    
    *(ebp_1 - 0xc) = *(ebp_1 - 4)
    *(ebp_1 - 8) = 0xb
    void* var_c = ebp_1 - 0xc
    int32_t var_10 = 0
    sub_405ae8(data_530004, ebp_1 - 0x10)
    int32_t edx_2
    edx_2.b = 1
    sub_40b4ec(sub_49aac0+0x2d0, edx_2, *(ebp_1 - 0x10), var_10)
    sub_403828()
    noreturn
}
