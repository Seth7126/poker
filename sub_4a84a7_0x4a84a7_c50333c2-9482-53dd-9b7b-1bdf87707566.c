// ============================================================
// 函数名称: sub_4a84a7
// 虚拟地址: 0x4a84a7
// WARP GUID: c50333c2-9482-53dd-9b7b-1bdf87707566
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4128c0, sub_4128b4, sub_4a80d4, sub_4030a0, sub_4a8418, sub_405ae8, sub_49d858, sub_40b4b0, sub_4128a4, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a84a7(char* arg1, int32_t* arg2, char arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: *arg2 += 1
    *arg2 += 1
    *arg1 += arg1.b
    *0x5500000a += arg3
    void* const* ebp = &__return_addr
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t var_14 = 0
    char* var_4 = arg1
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg3 != 0)
        sub_4128b4(arg2)
    
    int32_t var_10
    
    if (arg4 != 0)
        int32_t eax_4 = sub_4128a4(arg2)
        
        if (add_overflow(arg4, eax_4))
            sub_403010()
            noreturn
        
        var_10 = arg4 + eax_4
    else
        var_10 = sub_4128c0(arg2)
    
    int32_t eax_6
    int32_t ecx
    int32_t edx_1
    eax_6, ecx, edx_1 = sub_4128a4(arg2)
    
    if (add_overflow(var_10, neg.d(eax_6)))
        sub_403010()
        noreturn
    
    edx_1.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
    int32_t ecx_1
    int32_t edx_2
    ExceptionList_2, ecx_1, edx_2 = sub_4030a0(ecx, edx_1)
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList_2
    void* const* var_4_1 = &__return_addr
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    if (arg5 != 0)
        ecx_1.b = 1
        sub_4a8418(var_4_1, var_10 - eax_6, ecx_1)
    
    edx_2.b = 1
    (*(*var_4_1 + 0x30))()
    void* const* var_4_2 = &__return_addr
    int32_t (* var_8_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    var_4_2[0x28]
    ExceptionList_1->Next->Next(ExceptionList_1, var_8_1, var_4_2)
    
    while (true)
        int32_t eax_13 = sub_4128a4(arg2)
        int32_t edx_5 = ebp[-4]
        
        if (add_overflow(edx_5, neg.d(eax_13)))
            sub_403010()
            noreturn
        
        if (sub_49d858(edx_5 - eax_13, sub_4128c0(ebp[-3])) == 0)
            fsbase->NtTib.ExceptionList = ExceptionList_1
            struct _EXCEPTION_REGISTRATION_RECORD* edx_12
            edx_12.b = 1
            return (*(*ebp[-1] + 0x38))(sub_4a8607)
        
        *(ebp[-3] + 4)
        struct _EXCEPTION_REGISTRATION_RECORD* eax_20 = (*(*arg2 + 4))()
        
        if (eax_20 == 0)
            break
        
        ebp = sub_4a80d4(ebp[-1], *(ebp[-3] + 4), eax_20, 0)
    
    sub_405ae8(data_53012c, &ebp[-5])
    int32_t edx_10
    edx_10.b = 1
    sub_40b4b0(sub_4a6faf+0x1c5, edx_10, ebp[-5])
    sub_403828()
    noreturn
}
