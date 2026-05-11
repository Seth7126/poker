// ============================================================
// 函数名称: sub_434670
// 虚拟地址: 0x434670
// WARP GUID: 3c5c372f-e8e5-5b1f-9f56-4dd393bd60c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42a50c, sub_42e7fc, sub_419794, sub_42b180, sub_42e838, sub_419bc0, sub_41920c
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_434670(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t ebx_1 = arg2
    arg2.b = 1
    int32_t* eax = sub_41920c(sub_426fb7+0x21, arg2)
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    sub_42a50c(eax, arg1[5])
    sub_419794(eax)
    int32_t* var_3c = &var_4
    int32_t (* var_40)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_419bc0(eax, ebx_1)
    int32_t* var_48 = &var_4
    int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_6 = sub_42e838(arg1[5]) - 1
    
    if (eax_6 s>= 0)
        int32_t i_1 = eax_6 + 1
        int32_t var_c_1 = 0
        int32_t i
        
        do
            void* eax_9 = sub_42e7fc(arg1[5], var_c_1)
            
            if (*(eax_9 + 0x47) != 0 && *(eax_9 + 0x90) == arg1[5])
                int32_t var_20
                sub_42b180(eax_9, &var_20)
                (**arg1)()
                var_20 -= (var_20 - *(eax_9 + 0x30)) * 2
                int32_t var_1c = var_1c - (var_1c - *(eax_9 + 0x34)) * 2
                int32_t var_18 = var_18 - (*(eax_9 + 0x38) - (var_18 - var_20)) * 2
                int32_t var_14 = var_14 - (*(eax_9 + 0x3c) - (var_14 - var_1c)) * 2
                (*(*arg1 + 0x10))(&var_20)
            
            var_c_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_48_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, 
        int32_t arg6, int32_t arg7) = sub_434793
    return sub_419bc0(eax, 0)
}
