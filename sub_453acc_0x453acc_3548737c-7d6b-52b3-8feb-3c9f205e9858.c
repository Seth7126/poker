// ============================================================
// 函数名称: sub_453acc
// 虚拟地址: 0x453acc
// WARP GUID: 3548737c-7d6b-52b3-8feb-3c9f205e9858
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_41e1b4, sub_402d00, sub_41efec, sub_460418, sub_4038c8, sub_4128b4, sub_4030a0, sub_460554, sub_460be4, sub_460e34, sub_46077c, sub_460dc8, sub_4610b0, sub_45455c, sub_41dae0, sub_40faac, sub_460fa0, sub_40b214, sub_460618
// [被调用的父级函数]: sub_4544ec
// ============================================================

int32_t __convention("regparm")sub_453acc(void* arg1)
{
    // 第一条实际指令: void var_280
    void var_280
    sub_402d00(&var_280, 0x26c, 0)
    __builtin_memcpy(&var_280, &data_52eb80, 0x74)
    void* var_1d8 = &var_280
    int32_t ecx = sub_460fa0(&var_1d8, 0x3d, 0x165)
    int32_t __saved_ebp
    int32_t* var_2a0 = &__saved_ebp
    int32_t (* var_2a4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_2ac = &__saved_ebp
    int32_t (* var_2b0)() = j_sub_403668
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* (__convention("regparm")* var_20c)(void* arg1) = sub_453718
    void* var_1f8 = arg1
    void* (__convention("regparm")** var_1d0)(void* arg1) = &var_20c
    int32_t edx
    
    if (*(*(arg1 + 0x20) + 8) != 0)
        ecx, edx = sub_45455c(arg1)
    
    edx.b = 1
    int32_t* eax_7 = sub_4030a0(ecx, edx)
    *(*(arg1 + 0x20) + 8) = eax_7
    sub_4128b4(eax_7)
    sub_460418(&var_1d8, *(*(arg1 + 0x20) + 8))
    int32_t* ebx_1 = *(arg1 + 0x24)
    
    if (ebx_1 != 0 && (*(*ebx_1 + 0x2c))() != 0 && (*(**(arg1 + 0x24) + 0x20))() != 0)
        int32_t var_1c0 = (*(**(arg1 + 0x24) + 0x2c))()
        *(*(arg1 + 0x20) + 0x10) = (*(**(arg1 + 0x24) + 0x2c))()
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = (*(**(arg1 + 0x24) + 0x20))()
        *(*(arg1 + 0x20) + 0xc) = (*(**(arg1 + 0x24) + 0x20))()
        int32_t var_1b8 = 3
        int32_t var_1b4 = 2
        void* edx_13
        edx_13.b = 1
        int32_t* eax_32 = sub_41dae0(sub_41799a+0xe2, edx_13)
        int32_t* __saved_ebp_1 = &__saved_ebp
        int32_t (* var_8_1)(void* arg1, void* arg2) = j_sub_4037f0
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_2
        *(var_8_1 + 0x24)
        (*(*eax_32 + 8))(ExceptionList_2, var_8_1, __saved_ebp_1)
        sub_41efec(eax_32, 6)
        sub_460618(&var_1d8)
        int32_t edx_16
        edx_16.b = *(var_8_1 + 0x37)
        int32_t ecx_3
        int32_t edx_17
        ecx_3, edx_17 = sub_460554(&var_1d8, edx_16, 0xffffffff)
        
        if (*(var_8_1 + 0x35) != 0)
            *(*(var_8_1 + 0x20) + 0x14) = 1
            ecx_3, edx_17 = sub_46077c(&var_1d8, 1)
        
        if (*(var_8_1 + 0x39) != 0)
            sub_460be4(&var_1d8, edx_17, ecx_3)
        
        void* var_10 = sub_41e1b4(eax_32, 0)
        void* esi_1 = sub_41e1b4(eax_32, 1) - var_10
        
        if (esi_1 s<= 0 || (esi_1 & 3) != 0)
            ExceptionList_2 = 1
        else
            ExceptionList_2 = ExceptionList_3
        
        int32_t __saved_ebp_2 = 0
        int32_t* var_8_2 = nullptr
        ExceptionList_2 = nullptr
        void var_290
        var_10 = &var_290
        sub_40faac(0, 0, 0, var_10, ExceptionList_2)
        ExceptionList_2 = &var_290
        var_10 = nullptr
        ebx_1.w = 0xfffd
        sub_4032ac(var_8_2, var_8_2, 0, var_10, ExceptionList_2, var_8_2, __saved_ebp_2)
        int32_t* __saved_ebp_3 = &__saved_ebp
        int32_t (* var_8_3)(void* arg1, void* arg2) = j_sub_4037f0
        ExceptionList_2 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_2
        sub_460dc8(&var_1d8, 0xffffffff)
        int32_t var_103
        
        while (var_103 u< ExceptionList_3)
            sub_460e34(&var_1d8, &var_10, ExceptionList_2)
            var_10 = var_10
        
        sub_4610b0(&var_1d8)
        fsbase->NtTib.ExceptionList = ExceptionList_2
        int32_t (* __saved_ebp_4)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
            int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_453dde
        int32_t* esi_2
        
        if (sub_40b214() != 0)
            esi_2 = nullptr
        else
            esi_2 = 0x64
        
        ExceptionList_2 = nullptr
        var_10 = nullptr
        sub_40faac(0, 0, 0, &var_290, var_10)
        var_10 = &var_290
        ebx_1.w = 0xfffd
        return sub_4032ac(esi_2, esi_2, 2, 0, var_10, ExceptionList_2, esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return sub_4038c8(ExceptionList_1, var_2a4)
}
