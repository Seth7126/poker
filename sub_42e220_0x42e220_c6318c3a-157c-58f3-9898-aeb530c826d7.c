// ============================================================
// 函数名称: sub_42e220
// 虚拟地址: 0x42e220
// WARP GUID: c6318c3a-157c-58f3-9898-aeb530c826d7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4030d0, sub_42e1cc, sub_4030a0, sub_42e078
// [被调用的父级函数]: sub_441bec
// ============================================================

int32_t* __convention("regparm")sub_42e220(int32_t* arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg3
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg3
    int32_t var_10 = arg2
    
    if (arg1[0x51].b != 0 && arg1[0x5f].b != 0 && arg1[0x52] != 0)
        (*(*arg1[0x52] + 0x2c))()
    
    int32_t __saved_ebp
    
    if (sub_42e1cc(&__saved_ebp) == 0)
        if (arg1[0x5a].b == 0)
            return arg1
        
        int32_t ebx
        ebx.w = 0xffef
        return sub_4032ac(arg1)
    
    int32_t ecx_2
    int32_t edx_2
    edx_2, ecx_2 = (*(*arg1 + 0x84))()
    edx_2.b = 1
    int32_t eax_8
    void* edx_3
    eax_8, edx_3 = sub_4030a0(ecx_2, edx_2)
    int32_t var_c = eax_8
    __return_addr = &__saved_ebp
    int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_c_1 = &__saved_ebp
    int32_t* eax_9
    void* edx_4
    eax_9, edx_4 = sub_42e078(1, edx_3)
    int32_t* var_c_2 = &__saved_ebp
    eax_9.b = 2
    int32_t* eax_10
    void* edx_5
    eax_10, edx_5 = sub_42e078(eax_9, edx_4)
    int32_t* var_c_3 = &__saved_ebp
    eax_10.b = 3
    int32_t* eax_11
    void* edx_6
    eax_11, edx_6 = sub_42e078(eax_10, edx_5)
    int32_t* var_c_4 = &__saved_ebp
    eax_11.b = 4
    int32_t* eax_12
    void* edx_7
    eax_12, edx_7 = sub_42e078(eax_11, edx_6)
    int32_t* var_c_5 = &__saved_ebp
    eax_12.b = 5
    sub_42e078(0, sub_42e078(eax_12, edx_7))
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = &data_42e2ed
    return sub_4030d0(&__saved_ebp)
}
