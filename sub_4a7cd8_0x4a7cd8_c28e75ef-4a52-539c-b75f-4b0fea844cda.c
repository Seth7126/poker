// ============================================================
// 函数名称: sub_4a7cd8
// 虚拟地址: 0x4a7cd8
// WARP GUID: c28e75ef-4a52-539c-b75f-4b0fea844cda
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a8ad8, sub_4128c0, sub_4a796c, sub_4054f4, sub_4128b4, sub_4a7670, sub_4a7ca4, sub_405500, sub_412968, sub_412930, sub_49d858, sub_4128a4, sub_403010
// [被调用的父级函数]: sub_4afaf8
// ============================================================

void* __convention("regparm")sub_4a7cd8(int32_t* arg1, int32_t* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    int32_t var_14 = 0
    int32_t ebx_1 = arg3
    int32_t* var_c = arg2
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_3
    
    if (ebx_1 s< 0 && arg4 == 0)
        arg2.b = 1
        ebx_1 = sub_4a796c(arg3, arg2.b)
    
    if (ebx_1 s> 0xffffffff)
        if (add_overflow(sub_4128a4(var_c), ebx_1))
            sub_403010()
            noreturn
        
        sub_4a7ca4(var_c)
    
    int32_t var_1c
    
    if (arg4 == 0)
        var_1c = ebx_1
        (*(*arg1 + 0x30))()
    else
        var_1c = 0x7fffffff
        (*(*arg1 + 0x30))()
    
    int32_t* var_38 = &var_4
    int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    
    if (sub_4128c0(arg1[0x1b]) s> 0)
        int32_t eax_13 = sub_49d858(sub_4128c0(arg1[0x1b]), var_1c)
        
        if (eax_13 s> 0)
            sub_4128b4(arg1[0x1b])
            ebp_1 = sub_412968(var_c, arg1[0x1b], eax_13)
            ebp_1[-3]
            (*(**(ebp_1[-1] + 0x6c) + 0x18))()
            int32_t eax_20 = ebp_1[-3]
            int32_t temp1_1 = ebp_1[-6]
            ebp_1[-6] -= eax_20
            
            if (add_overflow(temp1_1, neg.d(eax_20)))
                sub_403010()
                noreturn
        else if (var_1c s< 0)
            sub_4128b4(arg1[0x1b])
            ebp_1 = sub_412968(var_c, arg1[0x1b], 0)
            sub_4a8ad8(*(ebp_1[-1] + 0x6c))
    
    ebp_1[-5] = sub_49d858(ebp_1[-6], *(ebp_1[-1] + 0x98))
    int32_t var_44 = ebp_1[-5]
    sub_4054f4()
    
    if (ebp_1[-6] s<= 0)
        fsbase->NtTib.ExceptionList = ExceptionList_2
        (*(*ebp_1[-1] + 0x38))(0x4a7f88)
        
        if (sub_4128c0(ebp_1[-2]) s> sub_4128a4(ebp_1[-2]))
            sub_4128a4(ebp_1[-2])
            (**ebp_1[-2])()
        
        sub_405500(&ebp_1[-4], 0x4a7c90)
        return &ebp_1[-4]
    
    ebp_1[-3] = sub_49d858(ebp_1[-6], ebp_1[-5])
    int32_t* var_44_1 = ebp_1
    int32_t (* var_48)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_50 = ebp_1
    int32_t (* var_54)() = j_sub_403668
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4a7670(ebp_1[-1], ebp_1[-4], ebp_1[-3])
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t result = 0
    fsbase->NtTib.ExceptionList = ExceptionList_1
    void* const var_44_2 = &data_4a7f2a
    
    if (ebp_1[-3] s> 0)
        sub_412930(ebp_1[-2], ebp_1[-4], ebp_1[-3])
        result = ebp_1[-3]
        int32_t temp2_1 = ebp_1[-6]
        ebp_1[-6] -= result
        
        if (add_overflow(temp2_1, neg.d(result)))
            sub_403010()
            noreturn
    
    return result
}
