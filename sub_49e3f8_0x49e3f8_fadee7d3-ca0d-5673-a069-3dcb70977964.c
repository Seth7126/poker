// ============================================================
// 函数名称: sub_49e3f8
// 虚拟地址: 0x49e3f8
// WARP GUID: fadee7d3-ca0d-5673-a069-3dcb70977964
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_40422c, sub_404078, sub_409c9c, sub_403e1c, sub_403df8, sub_404280, sub_408e80
// [被调用的父级函数]: sub_49e52c
// ============================================================

void* __convention("regparm")sub_49e3f8(char* arg1, long double arg2 @ st0)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    char* var_20 = nullptr
    char* var_1c = nullptr
    char* var_18 = nullptr
    char* var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t var_14 = 0
    int32_t var_10 = 0
    char** var_3c = &var_8
    sub_408b34(var_8, &var_18)
    sub_404280(5, 1, var_18, var_3c)
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_1
    
    if (sub_404078(var_8) s> 0)
        char* eax_5
        eax_5.b = *var_8
        char temp0_1 = eax_5.b
        eax_5.b -= 0x2b
        char temp1_1
        
        if (temp0_1 != 0x2b)
            temp1_1 = eax_5.b
            eax_5.b -= 2
        
        if (temp0_1 == 0x2b || temp1_1 == 2)
            int32_t* var_3c_1 = &var_4
            int32_t (* var_40_1)() = j_sub_40353c
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_404280(2, 4, var_8, &var_1c)
            int16_t eax_8 = sub_408e80(var_1c)
            sub_404280(2, 2, var_8, &var_20)
            ebp_1 = sub_409c9c(sub_408e80(var_20), eax_8, 0, 0)
            *(ebp_1 - 0x10) = fconvert.d(arg2)
            
            if (*ebp_1[-1] == 0x2d)
                *(ebp_1 - 0x10) = fconvert.d(fneg(fconvert.t(*(ebp_1 - 0x10))))
            
            esp = &var_8
            fsbase->NtTib.ExceptionList = var_14
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_49e51f
    sub_403e1c(&ebp_1[-7], 3)
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
