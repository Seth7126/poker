// ============================================================
// 函数名称: sub_453ff8
// 虚拟地址: 0x453ff8
// WARP GUID: 041d1627-983e-5ccc-aeb4-822af4a1e84a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_4032ac, sub_41ec48, sub_41e1b4, sub_453ec8, sub_454c28, sub_456250, sub_41d870, sub_41efec, sub_453f70, sub_45638c, sub_41e130, sub_40b214, sub_41dae0, sub_453830, sub_4563ec, sub_40faac, sub_4560cc, sub_454d3c
// [被调用的父级函数]: sub_4546e8, sub_453e0a, sub_453e4c, sub_4536e0
// ============================================================

int32_t* __convention("regparm")sub_453ff8(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = arg1[9]
    int32_t eax_1 = arg1[9]
    
    if (eax_1 != 0)
        return eax_1
    
    if (eax_1 == 0)
        int32_t edx
        edx.b = 1
        arg1[9] = sub_41dae0(sub_41799a+0xe2, edx)
    
    int32_t var_c_1 = arg1[9]
    char var_11 = 1
    void var_280
    sub_453830(arg1, &var_280)
    int32_t __saved_ebp
    int32_t* var_2a0 = &__saved_ebp
    int32_t (* var_2a4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_2
    int32_t* var_2ac = &__saved_ebp
    int32_t (* var_2b0)() = j_sub_403668
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_41ec48(arg1[9], nullptr)
    int32_t var_1b0
    
    if (*(arg1 + 0x36) == 1 || var_1b0 == 1)
        sub_41efec(arg1[9], 3)
    else
        sub_41efec(arg1[9], 6)
    
    int32_t var_2b8 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
    void var_290
    sub_40faac(0, 0, 0, &var_290, 0)
    int32_t ebx
    ebx.w = 0xfffd
    sub_4032ac(arg1, arg1, 0, 0, &var_290, ExceptionList, var_2b8)
    ExceptionList_1 = &__saved_ebp
    int32_t (* var_2b8_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    HPALETTE ho = arg1[0xc]
    void var_1d8
    
    if (ho != 0)
        if (*(arg1 + 0x36) != 1)
            DeleteObject(ho)
            arg1[0xc] = 0
        else
            sub_453f70(&var_1d8, ho)
            sub_41d870(arg1[0xc])
            (*(*arg1[9] + 0x38))()
            var_11 = 0
    
    sub_4560cc(&var_1d8)
    int32_t ebx_1 = arg1[9]
    sub_41ec48(ebx_1, nullptr)
    (*(*ebx_1 + 0x40))()
    (*(*ebx_1 + 0x34))()
    int32_t var_10 = sub_41e1b4(ebx_1, 0)
    int32_t eax_31 = sub_41e1b4(ebx_1, 1) - var_10
    int32_t esi
    int32_t var_15c
    
    if (eax_31 s<= 0 || (eax_31.b & 3) != 0)
        esi = 1
    else
        esi = var_15c
    char var_1e0
    int32_t var_19c
    int32_t var_168
    int32_t var_154
    int32_t var_150
    
    if (var_19c != 0)
        int32_t var_14c
        
        while (sub_454c28(&var_1d8) != 2)
            sub_45638c(&var_1d8, var_14c)
            void* var_1d0
            
            if (*(var_1d0 + 0xc) == 0 && var_154 != 0 && sub_41e130(arg1[9]) == 3 && var_11 != 0)
                sub_453ec8(&var_1d8)
                (*(*arg1[9] + 0x38))()
                *(arg1 + 0x1a) = 1
            
            var_10 = sub_41e1b4(arg1[9], 0)
            
            while (var_150 u< var_168)
                sub_456250(&var_1d8, &var_10, esi)
                var_10 = var_10
            
            sub_4563ec(&var_1d8)
        
        int32_t var_1e4
        int32_t var_194_1 = var_1e4
        int32_t var_1dc
        int32_t var_184_1 = var_1dc
        
        if (var_1e0 != 0)
            int32_t var_180_1 = 0xffffffff
            var_154 = 0
        
        sub_45638c(&var_1d8, var_14c)
        var_10 = sub_41e1b4(arg1[9], 0)
    
    if ((var_19c == 0 || var_1e0 != 0) && var_154 != 0 && var_11 != 0)
        sub_453ec8(&var_1d8)
        (*(*arg1[9] + 0x38))()
        *(arg1 + 0x1a) = 1
        var_10 = sub_41e1b4(arg1[9], 0)
    
    while (var_150 u< var_168)
        sub_456250(&var_1d8, &var_10, esi)
        var_10 = var_10
    
    if (var_19c != 0)
        sub_4563ec(&var_1d8)
    
    sub_454d3c(&var_1d8)
    fsbase->NtTib.ExceptionList = ExceptionList
    ExceptionList_1 = sub_4543b4
    int32_t ebx_3
    
    if (sub_40b214() != 0)
        ebx_3 = 0
    else
        ebx_3 = 0x64
    
    int32_t var_2b8_2 = ebx_3
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3
    ExceptionList_3.b = arg1->__offset(0x1a).b
    ExceptionList = ExceptionList_3
    sub_40faac(0, 0, 0, &var_290, 0)
    ebx_3.w = 0xfffd
    sub_4032ac(arg1, arg1, 2, 0, &var_290, ExceptionList, var_2b8_2)
    
    if (*(arg1 + 0x1a) == 0)
        return arg1
    
    return (*(*arg1 + 0x10))(var_2b0, var_2ac)
}
