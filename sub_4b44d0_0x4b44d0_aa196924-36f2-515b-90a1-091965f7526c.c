// ============================================================
// 函数名称: sub_4b44d0
// 虚拟地址: 0x4b44d0
// WARP GUID: aa196924-36f2-515b-90a1-091965f7526c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409040, sub_409180, sub_404078, sub_4040c4, sub_4042c0, sub_4043ac, sub_402860, sub_403e4c, sub_409200, sub_404138, sub_402824, sub_409294, sub_404364, sub_4b5510, sub_4028f0, sub_403df8, sub_404280
// [被调用的父级函数]: sub_4b526c
// ============================================================

uint32_t __convention("regparm")sub_4b44d0(struct _EXCEPTION_REGISTRATION_RECORD* arg1, char* arg2, int32_t* arg3, char** arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    char* var_14 = nullptr
    char* var_18 = nullptr
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    var_8 = arg1
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_4028f0(0, &var_c)
    char* eax
    eax.b = *var_c
    *arg2 = eax.b
    sub_403e4c(arg3, var_8)
    void* eax_4
    
    if (**arg3 == 0x5b)
        eax_4 = sub_409180(*arg3)
    
    if (**arg3 != 0x5b || *eax_4 != 0x5d)
        sub_409200(*arg3, &var_10)
        
        if (sub_404078(var_10) != 0)
            sub_4042c0(arg3, 1, sub_404078(var_10))
        else
            sub_409200(var_c, &var_10)
        
        if (sub_404078(var_10) s< 2 || var_10[1] != 0x3a)
            *arg2 = 0
        else
            char* eax_18
            eax_18.b = *var_10
            *arg2 = eax_18.b
    else
        sub_404280(sub_404078(*arg3) - 2, 2, *arg3, arg3)
    
    int32_t* var_34_2 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4b5510(var_10) != 0)
        sub_402824(sub_402860(var_10))
    
    sub_409294(*arg3, &var_14)
    sub_403e4c(arg4, var_14)
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    
    if (sub_404078(*arg3) != sub_404078(*arg4) + 1)
        esp = &ExceptionList
        
        if (sub_404078(*arg3) s<= sub_404078(*arg4))
            sub_4028f0(0, arg3)
            sub_409200(*arg3, &var_18)
            sub_4042c0(arg3, 1, sub_404078(var_18))
            
            if (sub_404078(*arg3) == 0)
                sub_403e4c(arg3, U"\")
        else
            esp = &ExceptionList
            sub_4043ac(arg3, sub_404078(*arg3) - sub_404078(*arg4) - 1)
    else
        sub_403e4c(arg3, U"\")
    
    if (sub_404078(*arg3) s> 0)
        sub_402824(sub_402860(*arg3))
    
    if (sub_404078(*arg4) s> 0 && sub_404364(*", *arg4) s<= 0 && sub_404364(?", *arg4)
            s<= 0 && sub_409040(*arg4) == 0)
        sub_402824(sub_402860(*arg4))
        
        if (sub_404078(*arg3) != 1)
            int32_t var_40_3 = *arg3
            void* const var_44_1 = &data_4b476c
            char* var_48_1 = *arg4
            sub_404138(arg3, 3)
            esp = &var_8
        else
            sub_4040c4(arg3, U"\", *arg4)
        
        sub_403df8(arg4)
    
    if (*arg2 == 0)
        sub_4040c4(arg3, var_10, *arg3)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b4738
    uint32_t result = sub_4b5510(var_c)
    
    if (result.b != 0)
        result = sub_402860(var_c)
        sub_402824(result)
    
    return result
}
