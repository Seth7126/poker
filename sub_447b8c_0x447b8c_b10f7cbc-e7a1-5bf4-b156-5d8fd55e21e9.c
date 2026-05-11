// ============================================================
// 函数名称: sub_447b8c
// 虚拟地址: 0x447b8c
// WARP GUID: b10f7cbc-e7a1-5bf4-b156-5d8fd55e21e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_447b34, sub_4479e8, sub_4030d0
// [被调用的父级函数]: sub_447c14
// ============================================================

int32_t __fastcallsub_447b8c(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    int32_t edx
    int32_t var_10 = edx
    int32_t eax
    int32_t var_14 = eax
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    char result
    int32_t edx_1
    result, edx_1 = sub_447b34(var_18)
    
    if (result == 0)
        return result
    
    edx_1.b = 1
    int32_t eax_2
    void* edx_2
    eax_2, edx_2 = sub_4030a0(var_18, edx_1)
    int32_t var_c = eax_2
    __return_addr = &__saved_ebp
    int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_c_1 = &__saved_ebp
    int32_t* var_c_2 = &__saved_ebp
    int32_t* var_c_3 = &__saved_ebp
    int32_t* var_c_4 = &__saved_ebp
    sub_4479e8(5, sub_4479e8(4, sub_4479e8(3, sub_4479e8(2, sub_4479e8(1, edx_2)))))
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = &data_447c0d
    return sub_4030d0(&__saved_ebp)
}
