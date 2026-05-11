// ============================================================
// 函数名称: sub_49f368
// 虚拟地址: 0x49f368
// WARP GUID: 5c9e5fcb-0961-53e3-af57-95847fcbd196
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408bb8, sub_40422c, sub_4030a0, sub_49ee10, sub_49df54
// [被调用的父级函数]: sub_49f268
// ============================================================

int32_t __convention("regparm")sub_49f368(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    sub_40422c(arg2)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    int32_t var_c = sub_4030a0(0, edx)
    int32_t* arg_8 = &var_4
    int32_t (* arg_4)(void* arg1, void* arg2) = j_sub_4037f0
    __return_addr = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &__return_addr
    var_4 = *(arg1 + 0x38)
    void* var_10
    int32_t* var_8_1 = &var_10
    int32_t ecx
    void* ebp_1
    ecx, ebp_1 = sub_49ee10(var_8_1, "\r\n ", 0x49f440, var_8_1, var_4)
    
    while (*(ebp_1 - 0xc) != 0)
        char var_c_1 = 1
        var_10 = ebp_1 - 0x14
        ecx.b = 1
        sub_49df54(ecx, 0x49f474, ebp_1 - 0xc, var_10, var_c_1)
        sub_408bb8(*(ebp_1 - 0x14), ebp_1 - 0x10)
        *(ebp_1 - 0x10)
        (*(**(ebp_1 - 8) + 0x34))()
    
    fsbase->NtTib.ExceptionList = var_8_1
    __return_addr = sub_49f40d
    return 0
}
